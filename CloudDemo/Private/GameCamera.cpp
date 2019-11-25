// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/GameCamera.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Public/CloudControl.h"
#include "Components/BoxComponent.h"
#include "Public/Cloud.h"


// Sets default values
AGameCamera::AGameCamera()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
	CameraComp->SetupAttachment(RootComponent);

	DestoryArea=CreateDefaultSubobject<UBoxComponent>(TEXT("DestoryArea"));
	DestoryArea->SetupAttachment(RootComponent);
	isFallowPlayer = true;
}

// Called when the game starts or when spawned
void AGameCamera::BeginPlay()
{
	Super::BeginPlay();

	CloudCtrl =Cast<ACloudControl>(UGameplayStatics::GetPlayerPawn(this,0));

	PC = UGameplayStatics::GetPlayerController(this, 0);    
	PC->SetViewTargetWithBlend(this, 0);
}

void AGameCamera::CameraMove()
{
	if (isFallowPlayer) {
		FVector CamPos = FVector(GetActorLocation().X, GetActorLocation().Y, CloudCtrl->GetActorLocation().Z);
		SetActorLocation(CamPos);
	}
}

// Called every frame
void AGameCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	CameraMove();
	CheckIfFalling();
}

void AGameCamera::NotifyActorBeginOverlap(AActor * OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	Cloud = Cast<ACloud>(OtherActor);  //把OtherActor转换成CloudControl，如果能转换，则OtherActor是主角
	if (Cloud) {
		Cloud->Destroy();
	}
}

void AGameCamera::CheckIfFalling()
{
	if (CloudCtrl->GetVelocity().Z<0) {
		UpdateTimer();
	}
	else {
		ResetTimer();
	}
}

void AGameCamera::FallingGround()
{
	isFallowPlayer = false;
	FVector CamPos = GetActorLocation();
	SetActorLocation(FVector(CamPos.X, CamPos.Y, 0));
	FVector playerPos = CloudCtrl->GetActorLocation();
	CloudCtrl->SetActorLocation(FVector(playerPos.X, playerPos.Y,110.0f));
	CloudCtrl->DisableInput(PC);    //停止对玩家的控制
}