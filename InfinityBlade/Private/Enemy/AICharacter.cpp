// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Enemy/AICharacter.h"
#include "Components/WidgetComponent.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "UObject/ConstructorHelpers.h"
#include "Public/Enemy/AIAnimInstance.h"
#include "TimerManager.h"


// Sets default values
AAICharacter::AAICharacter()
{
	AIHPBar = CreateDefaultSubobject<UWidgetComponent>(TEXT("AIHPBar"));
	AIHPBar->SetupAttachment(RootComponent);

	static ConstructorHelpers::FClassFinder<AXWeapon>Aiweapon(TEXT("Blueprint'/Game/Blueprint/Enemy/BP_AIXWeapon.BP_AIXWeapon_C'"));
	if(Aiweapon.Succeeded())
	{
		AIWeaponClass = Aiweapon.Class;
	}
	static ConstructorHelpers::FObjectFinder<UAnimMontage>Gethit(TEXT("AnimMontage'/Game/Blueprint/Enemy/AI_Animation/AI_Hit_Head_Front_Montage.AI_Hit_Head_Front_Montage'"));
	if(Gethit.Succeeded())
	{
		GetHitMontage = Gethit.Object;
	}
}

// Called when the game starts or when spawned
void AAICharacter::BeginPlay()
{
	Super::BeginPlay();
	bIsDead = false;

	HPBar = Cast<UProgressBar>(AIHPBar->GetUserWidgetObject()->GetWidgetFromName(TEXT("ProgressBar_AIHP")));
	CurrentHp = TotalHp;

	HPBar->SetPercent(CurrentHp / TotalHp);
	AIAnimInstance = Cast<UAIAnimInstance>(GetMesh()->GetAnimInstance());
}

float AAICharacter::TakeDamage(float Damage, FDamageEvent const & DamageEvent, AController * EventInstigator, AActor * DamageCauser)
{
	if (CurrentHp <= 0)
		return 0.f;
	CurrentHp -= Damage;
	if(CurrentHp<=0)
	{ 
		bIsDead = true;
		HPBar->SetPercent(0.0f);
		this->GetWorldTimerManager().SetTimer(DetachHandle, this, &AAICharacter::DetachController, 1.f, false, 3.f);
		return 0.0f;
	}
	if(CurrentHp>0)
	{
		AIAnimInstance->Montage_Play(GetHitMontage, 1.f);
	}
	HPBar->SetPercent(CurrentHp / TotalHp);
	return 0.0f;
}

void AAICharacter::DetachController()
{
	HPBar->SetVisibility(ESlateVisibility::Hidden);
	DetachFromControllerPendingDestroy();
}
