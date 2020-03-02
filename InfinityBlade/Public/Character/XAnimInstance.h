// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "XAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class INFINITYBLADE_API UXAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	

public:

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
		float Speed;
	UPROPERTY()
		class AXPlayerState* XPlayerState;
	UPROPERTY()
		class APlayerCharacter* cha;
	UPROPERTY()
		class AXPlayerController* XPlayerController;

	bool bIsAttacking;
	bool bIsPlaying;
	bool bIsEnableSecondAttack;
	bool bIsEnableThirdAttack;
	bool bIsEnableFourthAttack;
	bool bIsEnableFifthAttack;

	bool bIsXBalde;

	FTimerHandle TimerHaldle;

public:
	UFUNCTION(BlueprintCallable)
		void UpdateSpeed();

	//���嶯��֪ͨ
	UFUNCTION()
		void AnimNotify_PlayStart(UAnimNotify* Notify);
	UFUNCTION()
		void AnimNotify_PlayEnd(UAnimNotify* Notify);

	//����֪ͨ
	UFUNCTION()
		void AnimNotify_AttackStart(UAnimNotify* Notify);
	UFUNCTION()
		void AnimNotify_AttackEnd(UAnimNotify* Notify);

	//ȡ������״̬
	UFUNCTION()
		void AnimNotify_ResetAttack(UAnimNotify* Notify);

	//��������֪ͨ
	UFUNCTION()
		void AnimNotify_SecondAttackEnter(UAnimNotify* Notify);
	UFUNCTION()
		void AnimNotify_ThirdAttackEnter(UAnimNotify* Notify);
	UFUNCTION()
		void AnimNotify_FourthAttackEnter(UAnimNotify* Notify);
	UFUNCTION()
		void AnimNotify_FifthAttackEnter(UAnimNotify* Notify);

	//������ͨ����
	void ResetNormalAttack();
	//��ͨ�����ӳ�
	void AddNormalAttack();
	//����UI
	void UpdateHPMPUI();

	//���ܶ���֪ͨ
	UFUNCTION()
		void AnimNotify_SpawnIceStone(UAnimNotify* Notify);
	UFUNCTION()
		void AnimNotify_SkillTwo(UAnimNotify* Notify);
	UFUNCTION()
		void AnimNotify_SkillThree(UAnimNotify* Notify);
	UFUNCTION()
		void AnimNotify_SkillFour(UAnimNotify* Notify);

	UFUNCTION()
		void XBladeOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	void DestroyXBlade();
};
