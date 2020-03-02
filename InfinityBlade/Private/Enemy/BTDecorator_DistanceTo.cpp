// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Enemy/BTDecorator_DistanceTo.h"
#include "Public/Enemy/EnemyAIController.h"
#include "Public/Enemy/AICharacter.h"


bool UBTDecorator_DistanceTo::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	AEnemyAIController* EnemyController = Cast<AEnemyAIController>(OwnerComp.GetAIOwner());
	AAICharacter* Monster = Cast<AAICharacter>(EnemyController->GetPawn());
	//»ñÈ¡ºÚ°å
	UBlackboardComponent* BlackBoard = EnemyController->BlackboardComponent;
	FVector TargetLocation = BlackBoard->GetValueAsVector(TEXT("TargetLocation"));
	float Dis = FVector::Distance(TargetLocation, EnemyController->GetPawn()->GetActorLocation());
	if (Dis <= this->Distance && !Monster->bIsDead)
	{
		return true;
	}
	return false;
}

