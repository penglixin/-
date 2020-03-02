// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Character/PlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Public/Weapons/XWeapon.h"
#include "UObject/ConstructorHelpers.h"
#include "Curves/CurveFloat.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Public/Skill/IceStone.h"
#include "Public/Skill/XBlade.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "Public/Character/XPlayerController.h"
#include "Public/Character/XPlayerState.h"


// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 450.0f;
	//SpringArm->SetRelativeRotation(FRotator(-40.0f, 0.0f, 0.0f));
	SpringArm->SetWorldRotation(FRotator(-35.0f, 0.0f, 0.0f));
	SpringArm->bUsePawnControlRotation = true;

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camrea"));
	CameraComp->SetupAttachment(SpringArm);
	CameraComp->bUsePawnControlRotation = false;


	static ConstructorHelpers::FClassFinder<AXWeapon>weapon(TEXT("Blueprint'/Game/Blueprint/Weapons/BP_XWeapon.BP_XWeapon_C'"));
	if (weapon.Succeeded())
	{
		WeaponClass = weapon.Class;
	}
	static ConstructorHelpers::FObjectFinder<UCurveFloat>curve(TEXT("/Game/Blueprint/RotationCavas.RotationCavas"));
	if(curve.Succeeded())
	{
		myTimeLimeCurve = curve.Object;
	}
	static ConstructorHelpers::FClassFinder<AIceStone>skillOne(TEXT("Blueprint'/Game/Blueprint/Skill/BP_IceStone.BP_IceStone_C'"));
	if (skillOne.Succeeded())
	{
		SkillOneClass = skillOne.Class;
	}
	static ConstructorHelpers::FClassFinder<AXBlade>skillFour(TEXT("Blueprint'/Game/Blueprint/Skill/BP_XBlade.BP_XBlade_C'"));
	if (skillFour.Succeeded())
	{
		SkillFoueClass = skillFour.Class;
	}
	static ConstructorHelpers::FObjectFinder<UAnimMontage>M_Attack(TEXT("AnimMontage'/Game/Animation/Montage/Montage_Attack.Montage_Attack'"));
	if (M_Attack.Succeeded())
	{
		AttackMontage = M_Attack.Object;
	}
	static ConstructorHelpers::FObjectFinder<UAnimMontage>M_SkillOne(TEXT("AnimMontage'/Game/Animation/Montage/Montage_SkillOne.Montage_SkillOne'"));
	if (M_SkillOne.Succeeded())
	{
		SkillOneMontage = M_SkillOne.Object;
	}
	static ConstructorHelpers::FObjectFinder<UAnimMontage>M_SkillTwo(TEXT("AnimMontage'/Game/Animation/Montage/Montage_SkillTwo.Montage_SkillTwo'"));
	if (M_SkillTwo.Succeeded())
	{
		SkillTwoMontage = M_SkillTwo.Object;
	}
	static ConstructorHelpers::FObjectFinder<UAnimMontage>M_SkillThree(TEXT("AnimMontage'/Game/Animation/Montage/Montage_SkillThree.Montage_SkillThree'"));
	if (M_SkillThree.Succeeded())
	{
		SkillThreeMontage = M_SkillThree.Object;
	}
	static ConstructorHelpers::FObjectFinder<UAnimMontage>M_SkillFour(TEXT("AnimMontage'/Game/Animation/Montage/Montage_SkillFour.Montage_SkillFour'"));
	if (M_SkillFour.Succeeded())
	{
		SkillFourMontage = M_SkillFour.Object;
	}
	TotalHP = 100.0f;
	TotalMP = 100.0f;
	NormalAttack = 8.0f;

	Dis_Value = 0.5f;
	High_Value = 0.5f;

	Coin = 1000000.f;
	Startlocation = GetActorLocation();
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	//产生出生特效  
	particle = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), SpawnParticle, GetActorLocation());
	this->GetWorldTimerManager().SetTimer(TimerHandle, this, &APlayerCharacter::DestroyEmitter, 1.0f, false, 3.f);

	FOnTimelineFloatStatic callBack;
	callBack.BindUFunction(this, TEXT("UpdateRotation"));
	RotationTimelime.AddInterpFloat(myTimeLimeCurve, callBack);

}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RotationTimelime.TickTimeline(DeltaTime);
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APlayerCharacter::TranslateRotation(FRotator Rotation)
{
	TargetRotation = Rotation;
}

void APlayerCharacter::UpdateRotation(float value)
{
	TargetRotation.Pitch = GetCapsuleComponent()->GetComponentRotation().Pitch;
	TargetRotation.Roll = GetCapsuleComponent()->GetComponentRotation().Roll;
	FRotator CurrentRotation = FMath::Lerp(GetCapsuleComponent()->GetComponentRotation(), TargetRotation, value);
	GetCapsuleComponent()->SetRelativeRotation(CurrentRotation);
}

void APlayerCharacter::DestroyEmitter()
{
	particle->DestroyComponent();
}

float APlayerCharacter::TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	AXPlayerController* Controller = Cast<AXPlayerController>(GetController());
	if(Controller->playerstate->GetCurrentHP()>0)
	{
		Controller->playerstate->SetCurrentHP(Controller->playerstate->GetCurrentHP() - Damage);
		Controller->UpdateUI();
	}
	return 0.0f;
}
