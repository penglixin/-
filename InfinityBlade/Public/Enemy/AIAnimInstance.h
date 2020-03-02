// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AIAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class INFINITYBLADE_API UAIAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		float Speed;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		bool  Anim_isDead;
	bool bIsPlaying;
	bool bIsAttack;

	class AAICharacter* Monster;
public:
	UFUNCTION(BlueprintCallable)
		void UpdateSpeed();

	//定义动画通知
	UFUNCTION()
		void AnimNotify_AIPlayStart(UAnimNotify* Notify);
	UFUNCTION()
		void AnimNotify_AIPlayEnd(UAnimNotify* Notify);
	UFUNCTION()
		void AnimNotify_AIAttackStart(UAnimNotify* Notify);
	UFUNCTION()
		void AnimNotify_AIAttackEnd(UAnimNotify* Notify);

};
