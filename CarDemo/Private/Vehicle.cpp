// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Vehicle.h"
#include "Camera/CameraComponent.h"
#include "WheeledVehicleMovementComponent.h"
#include "WheeledVehicleMovementComponent4W.h"
#include "GameFramework/SpringArmComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/SkeletalMesh.h"
#include "Public/FrontVehicleWheel.h"
#include "Public/RearVehicleWheel.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundCue.h"
#include "Public/Vehicle.h"
#include "VehicleGameMode.h"
#include "Kismet/GameplayStatics.h"

AVehicle::AVehicle() {
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> CarMesh(TEXT("/Game/Car/mclaren/mclaren"));
	GetMesh()->SetSkeletalMesh(CarMesh.Object);

	static ConstructorHelpers::FClassFinder<UAnimBlueprintGeneratedClass> CarAnim(TEXT("/Game/Car/mclaren/mclarenAnim"));
	GetMesh()->SetAnimInstanceClass(CarAnim.Class);


	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));  //创建弹簧臂
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->SetRelativeRotation(FRotator(-15.0f, 0.0f, 0.0f));
	SpringArm->SocketOffset = FVector(0.0f, 0.0f, 30.0f);
	SpringArm->TargetOffset = FVector(0.0f, 0.0f, 60.0f);
	SpringArm->TargetArmLength = 900.0f;
	SpringArm->bEnableCameraRotationLag = true;
	SpringArm->CameraRotationLagSpeed = 5.0f;

	OutCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("OutCamera"));  //创建 外部相机
	OutCamera->SetupAttachment(SpringArm);   //把创建的OutCamera相机绑定到弹簧臂上

	//给IncameraBasePos赋值
	InCameraBasePos = FVector(0.0f, -30.0f, 20.0f);

	InCameraBase = CreateDefaultSubobject<USceneComponent>(TEXT("InCameraBase"));
	InCameraBase->SetupAttachment(GetMesh());   //把IncameraBase绑定在Mesh下
	InCameraBase->SetRelativeLocation(InCameraBasePos);	//指定IncameraBase的位置
	InCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("InCamera"));  //创建内相机
	InCamera->SetupAttachment(InCameraBase);   //把内摄像机绑定到InCameraBase上
	//用代码给四个轮子赋值
	Vehicle4W = CastChecked<UWheeledVehicleMovementComponent4W>(GetVehicleMovement());
	check(Vehicle4W->WheelSetups.Num() == 4);

	Vehicle4W->WheelSetups[0].WheelClass = UFrontVehicleWheel::StaticClass();
	Vehicle4W->WheelSetups[0].BoneName = FName("right_front_bone");

	Vehicle4W->WheelSetups[1].WheelClass = UFrontVehicleWheel::StaticClass();
	Vehicle4W->WheelSetups[1].BoneName = FName("left_front_bone");

	Vehicle4W->WheelSetups[2].WheelClass = URearVehicleWheel::StaticClass();
	Vehicle4W->WheelSetups[2].BoneName = FName("right_rear_bone");

	Vehicle4W->WheelSetups[3].WheelClass = URearVehicleWheel::StaticClass();
	Vehicle4W->WheelSetups[3].BoneName = FName("left_rear_bone");

	bInCarCameraActive = false;
	IsStopCar = false;

	AudioComp = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComp"));  //用来播放引擎声音
	AudioComp->SetupAttachment(RootComponent);

	SkidAudioComp = CreateDefaultSubobject<UAudioComponent>(TEXT("SkidAudioComp"));  //用来播放引擎声音
	SkidAudioComp->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<USoundCue> ESounds(TEXT("/Game/Sound/CanEngine_F_midhigh-register_mono_Cue"));
	EngineSound = ESounds.Object;

	static ConstructorHelpers::FObjectFinder<USoundCue> SSounds(TEXT("/Game/Sound/Car_skid1_Cue"));
	SkidSound =SSounds.Object;

	VehicleGameMode =Cast<AVehicleGameMode>(UGameplayStatics::GetGameMode(this));  
}

void AVehicle::BeginPlay()
{
	Super::BeginPlay();
	if (EngineSound->IsValidLowLevelFast()) {     //判断EngineSound是否合法
		EngineSound->PitchMultiplier = 0.1f;
		AudioComp->SetSound(EngineSound);  //指定声音源为 EngineSound
		
	}
	if (SkidSound->IsValidLowLevelFast()) {     //判断SkidSound是否合法
		SkidAudioComp->SetSound(SkidSound);
	}
}

void AVehicle::Tick(float value)
{
	OnSkid();
}

void AVehicle::PlayEngineSound()
{
	EngineSound->PitchMultiplier = 0.1f+ (GetVehicleMovement()->GetForwardSpeed()*0.036f / 160.0f);
	if (!AudioComp->IsPlaying()) {
		AudioComp->Play();
	}
}

void AVehicle::PlaySkidSound()
{
	if (!SkidAudioComp->IsPlaying()) {
		SkidAudioComp->Play();
	}
}

void AVehicle::OnSkid()
{
	if ((GetVehicleMovement()->GetForwardSpeed()*0.036f > 40 &&FMath::Abs(FrontSteerAngle)>0.6f) ||(GetVehicleMovement()->GetForwardSpeed()*0.036f > 20 && Vehicle4W->Wheels[0]->GetSteerAngle()>10 && IsStopCar))
	{
		//TODO
		UE_LOG(LogTemp, Warning, TEXT("is on Skid!"));
		PlaySkidSound();
	}
	else
	{
		SkidAudioComp->Stop();
	}
}


void AVehicle::SetupPlayerInputComponent(UInputComponent * PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AVehicle::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AVehicle::MoveRight);
	PlayerInputComponent->BindAction("StopCar", IE_Pressed, this, &AVehicle::OnHandbrakePressed);
	PlayerInputComponent->BindAction("StopCar", IE_Released, this, &AVehicle::OnHandbreakReleased);
	PlayerInputComponent->BindAction("ChangeView", IE_Pressed, this, &AVehicle::ChangeCamera);
}

void AVehicle::MoveForward(float Value)
{
	if (VehicleGameMode->CurrentState == CarStates::Playing)
	{
		GetVehicleMovementComponent()->SetThrottleInput(Value);
		PlayEngineSound();
	}
}

void AVehicle::MoveRight(float Value)
{
	if (VehicleGameMode->CurrentState == CarStates::Playing)
	{
		FrontSteerAngle = Value;
		GetVehicleMovementComponent()->SetSteeringInput(Value);
	}
}

void AVehicle::OnHandbrakePressed()
{
	GetVehicleMovementComponent()->SetHandbrakeInput(true);
	IsStopCar = true;
}
void AVehicle::OnHandbreakReleased()
{
	GetVehicleMovementComponent()->SetHandbrakeInput(false);
	IsStopCar = false;
}

void AVehicle::ChangeCamera() {
	if (bInCarCameraActive)
	{
		OutCamera->Activate();
		InCamera->Deactivate();
		bInCarCameraActive = false;
	}
	else
	{
		OutCamera->Deactivate();
		InCamera->Activate();
		bInCarCameraActive = true;
	}
}


