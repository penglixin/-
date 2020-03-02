// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "XPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class INFINITYBLADE_API AXPlayerState : public APlayerState
{
	GENERATED_BODY()

private:

	float CurrentHP;   //Ѫ��
	float CurrentMP;   //ħ��ֵ
	float AttackDamage;   //�˺�ֵ

public:

	FORCEINLINE void SetCurrentHP(float HP) { this->CurrentHP = HP; }
	FORCEINLINE float GetCurrentHP() { return this->CurrentHP; }
	
	FORCEINLINE void SetCurrentMP(float MP) { this->CurrentMP = MP; }
	FORCEINLINE float GetCurrentMP() { return this->CurrentMP; }

	FORCEINLINE void SetAttackDamage(float Damage) { this->AttackDamage = Damage; }
	FORCEINLINE float GetAttackDamage() { return this->AttackDamage; }
};
