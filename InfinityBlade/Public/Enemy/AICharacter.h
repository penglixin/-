// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Public/Weapons/XWeapon.h"
#include "Animation/AnimMontage.h"
#include "AICharacter.generated.h"

UCLASS()
class INFINITYBLADE_API AAICharacter : public ACharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
		class UWidgetComponent* AIHPBar;
	UPROPERTY()
		class UProgressBar* HPBar;
	UPROPERTY()
		class UTextBlock* TotalText;
	UPROPERTY()
		class UTextBlock* CurrentText;
	UPROPERTY()
		float CurrentHp;
	UPROPERTY(EditAnyWhere, Category = "TotalHp")
		float TotalHp;
	UPROPERTY(EditAnyWhere, Category = "Damage")
		float HitDamage;
	
	bool bIsDead;

	UPROPERTY(EditAnywhere, Category = "AI")
		UBehaviorTree* BehaviorTree;

	UPROPERTY(EditAnywhere, Category = "WeaponClass")
		TSubclassOf<class AXWeapon> AIWeaponClass;

	UPROPERTY(EditAnywhere, Category = "Montage")
		TArray<UAnimMontage* > AI_Montages;

	UPROPERTY(EditAnywhere, Category = "Montage")
		UAnimMontage* GetHitMontage;

	class UAIAnimInstance* AIAnimInstance;

	FTimerHandle DetachHandle;

public:
	// Sets default values for this character's properties
	AAICharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	//重写受到伤害方法
	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

	void DetachController();
};
