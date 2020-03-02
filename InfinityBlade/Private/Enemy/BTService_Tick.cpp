// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Enemy/BTService_Tick.h"
#include "Public/Enemy/EnemyAIController.h"
#include "Public/Enemy/AICharacter.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"



void UBTService_Tick::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	//��ù���Controller
	AEnemyAIController* EnemyController = Cast<AEnemyAIController>(OwnerComp.GetAIOwner());
	
	//��ȡ�ڰ�
	UBlackboardComponent* BlackBoard = EnemyController->BlackboardComponent;
	//����SelfLocation
	BlackBoard->SetValueAsVector(TEXT("SelfLocation"),EnemyController->GetPawn()->GetActorLocation());
	//����SelfDirection
	AAICharacter* Monster = Cast<AAICharacter>(EnemyController->GetPawn());
	FRotator Rotation = Monster->GetMesh()->GetComponentRotation();
	BlackBoard->SetValueAsVector(TEXT("SelfDirection"), Rotation.Vector());
	//����TargetLocation
	FVector TargetLocation = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)->GetActorLocation();
	BlackBoard->SetValueAsVector(TEXT("TargetLocation"), TargetLocation);

}
