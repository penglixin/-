// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Enemy/BTService_Tick.h"
#include "Public/Enemy/EnemyAIController.h"
#include "Public/Enemy/AICharacter.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"



void UBTService_Tick::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	//获得怪物Controller
	AEnemyAIController* EnemyController = Cast<AEnemyAIController>(OwnerComp.GetAIOwner());
	
	//获取黑板
	UBlackboardComponent* BlackBoard = EnemyController->BlackboardComponent;
	//设置SelfLocation
	BlackBoard->SetValueAsVector(TEXT("SelfLocation"),EnemyController->GetPawn()->GetActorLocation());
	//设置SelfDirection
	AAICharacter* Monster = Cast<AAICharacter>(EnemyController->GetPawn());
	FRotator Rotation = Monster->GetMesh()->GetComponentRotation();
	BlackBoard->SetValueAsVector(TEXT("SelfDirection"), Rotation.Vector());
	//设置TargetLocation
	FVector TargetLocation = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)->GetActorLocation();
	BlackBoard->SetValueAsVector(TEXT("TargetLocation"), TargetLocation);

}
