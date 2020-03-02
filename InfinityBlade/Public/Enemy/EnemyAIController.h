// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Public/Enemy/AICharacter.h"
#include "Public/Enemy/AIAnimInstance.h"
#include "EnemyAIController.generated.h"

/**
 * 
 */
UCLASS()
class INFINITYBLADE_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()
	
public:

	UPROPERTY()
		UBehaviorTreeComponent* BehaviorTreeComponent;
	UPROPERTY()
		UBlackboardComponent* BlackboardComponent;
	class AXWeapon* AIweapon;

	UPROPERTY()
		AAICharacter* Monster;
	UPROPERTY()
		UAIAnimInstance* AIAniminstance;
public:

	AEnemyAIController();

protected:

	virtual void Possess(APawn* InPawn) override;

public:
	UFUNCTION()
		void WeaponBeginOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
};
