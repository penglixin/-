// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Enemy/BTTask_Attack.h"
#include "Public/Enemy/EnemyAIController.h"
#include "Public/Enemy/AICharacter.h"
#include "Public/Enemy/AIAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"


//重写执行任务方法
EBTNodeResult::Type UBTTask_Attack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AEnemyAIController* EnemyController = Cast<AEnemyAIController>(OwnerComp.GetAIOwner());
	AAICharacter* Monster = Cast<AAICharacter>(EnemyController->GetPawn());
	UAIAnimInstance* AnimInstance = Cast<UAIAnimInstance>(Monster->GetMesh()->GetAnimInstance());
	if (!AnimInstance->bIsPlaying && !AnimInstance->Anim_isDead)
	{
		EnemyController->SetFocus(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
		uint8 i = FMath::RandRange(0, Monster->AI_Montages.Num()-1);
		AnimInstance->Montage_Play(Monster->AI_Montages[i], 1.f);
	}
	return EBTNodeResult::Succeeded;
}
