// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Character/XAnimInstance.h"
#include "Public/Character/XPlayerController.h"
#include "Public/Character/XPlayerState.h"
#include "Public/Character/PlayerCharacter.h"
#include "Public/Skill/IceStone.h"
#include "Public/Skill/XBlade.h"
#include "Public/Widget/MainUserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Public/TimerManager.h"


void UXAnimInstance::UpdateSpeed()
{
	if (TryGetPawnOwner()!=nullptr)
	{
		Speed = TryGetPawnOwner()->GetVelocity().Size();
	}
}

void UXAnimInstance::AnimNotify_PlayStart(UAnimNotify * Notify)
{
	bIsPlaying = true;
}

void UXAnimInstance::AnimNotify_PlayEnd(UAnimNotify * Notify)
{
	bIsPlaying = false;
}

void UXAnimInstance::AnimNotify_AttackStart(UAnimNotify* Notify)
{
	bIsAttacking = true;
}

void UXAnimInstance::AnimNotify_AttackEnd(UAnimNotify* Notify)
{
	bIsAttacking = false;
}

void UXAnimInstance::AnimNotify_ResetAttack(UAnimNotify* Notify)
{
	ResetNormalAttack();

	bIsEnableSecondAttack = false;
	bIsEnableThirdAttack = false;
	bIsEnableFourthAttack = false;
	bIsEnableFifthAttack = false;
}

void UXAnimInstance::AnimNotify_SecondAttackEnter(UAnimNotify* Notify)
{
	bIsEnableSecondAttack = true;
}

void UXAnimInstance::AnimNotify_ThirdAttackEnter(UAnimNotify* Notify)
{
	AddNormalAttack();
	bIsEnableThirdAttack = true;
}

void UXAnimInstance::AnimNotify_FourthAttackEnter(UAnimNotify* Notify)
{
	AddNormalAttack();
	bIsEnableFourthAttack = true;
}

void UXAnimInstance::AnimNotify_FifthAttackEnter(UAnimNotify* Notify)
{
	AddNormalAttack();
	bIsEnableFifthAttack = true;
}

void UXAnimInstance::ResetNormalAttack()
{
	cha = Cast<APlayerCharacter>(TryGetPawnOwner());
	XPlayerController = Cast<AXPlayerController>(TryGetPawnOwner()->GetController());
	XPlayerState = XPlayerController->playerstate;
	if(!bIsXBalde)
		XPlayerState->SetAttackDamage(cha->NormalAttack);
}

void UXAnimInstance::AddNormalAttack()
{
	if(!bIsXBalde)
	{
		XPlayerState->SetAttackDamage(XPlayerState->GetAttackDamage() + 8.f);
	}
}

void UXAnimInstance::UpdateHPMPUI()
{
	XPlayerController->UpdateUI();
}

void UXAnimInstance::AnimNotify_SpawnIceStone(UAnimNotify* Notify)
{
	ResetNormalAttack();
	//设置技能释放位置及旋转
	FVector Location = cha->GetMesh()->GetSocketLocation(FName("IceStone"));
	FRotator Rotation = cha->GetMesh()->GetSocketRotation(FName("IceStone"));
	AIceStone* iceStone = GetWorld()->SpawnActor<AIceStone>(cha->SkillOneClass, Location, Rotation);
	if(iceStone)
		iceStone->Shoot(Rotation.Vector());
	XPlayerState->SetCurrentMP(XPlayerState->GetCurrentMP() - cha->MP_SkillOne);
	UpdateHPMPUI();
}

void UXAnimInstance::AnimNotify_SkillTwo(UAnimNotify* Notify)
{
	ResetNormalAttack();
	XPlayerState->SetCurrentMP(XPlayerState->GetCurrentMP() - cha->MP_SkillTwo);
	if(XPlayerState->GetCurrentHP()<=(cha->TotalHP-cha->IncreaseHP))
	{
		XPlayerState->SetCurrentHP(XPlayerState->GetCurrentHP() + cha->IncreaseHP);
	}
	else
	{
		XPlayerState->SetCurrentHP(cha->TotalHP);
	}
	UpdateHPMPUI();
}

void UXAnimInstance::AnimNotify_SkillThree(UAnimNotify* Notify)
{
	ResetNormalAttack();
	XPlayerState->SetCurrentMP(XPlayerState->GetCurrentMP() - cha->MP_SkillThree);
	UpdateHPMPUI();
	//产生伤害
	TArray<AActor*> IgnoreActors;
	IgnoreActors.Add(TryGetPawnOwner());
	//产生范围伤害。并且伤害值逐渐递减
	//UGameplayStatics::ApplyRadialDamageWithFalloff(GetWorld(), 50.f, 20.f, cha->GetActorLocation(), 500.f, 200.f, 0.1f, nullptr, IgnoreActors, cha, XPlayerController, ECollisionChannel::ECC_Visibility);
	UGameplayStatics::ApplyRadialDamage(GetWorld(), 50.f, cha->GetActorLocation(), 500.f, nullptr, IgnoreActors, cha, XPlayerController, true, ECollisionChannel::ECC_Visibility);
}

void UXAnimInstance::AnimNotify_SkillFour(UAnimNotify* Notify)
{
	ResetNormalAttack();
	bIsXBalde = true;
	XPlayerState->SetCurrentMP(XPlayerState->GetCurrentMP() - cha->MP_SkillFour);
	AXBlade* XBlade = GetWorld()->SpawnActor<AXBlade>(cha->SkillFoueClass);
	//绑定武器
	FAttachmentTransformRules AttachRule(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, true);
	XBlade->AttachToComponent(cha->GetMesh(), AttachRule, TEXT("XBlade"));
	XPlayerState->SetAttackDamage(cha->XBladeAttack);
	XBlade->CapsuleComp->OnComponentBeginOverlap.AddDynamic(this,&UXAnimInstance::XBladeOverlap);
	UpdateHPMPUI();
	cha->GetWorldTimerManager().SetTimer(TimerHaldle, this, &UXAnimInstance::DestroyXBlade, 1.f, false, 15.f);
}

void UXAnimInstance::XBladeOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if(bIsAttacking)
		UGameplayStatics::ApplyDamage(OtherActor, XPlayerState->GetAttackDamage(), XPlayerController, cha, nullptr);
}

void UXAnimInstance::DestroyXBlade()
{
	XPlayerState->SetAttackDamage(cha->NormalAttack);
	bIsXBalde = false;
	cha->GetWorldTimerManager().ClearTimer(TimerHaldle);
}