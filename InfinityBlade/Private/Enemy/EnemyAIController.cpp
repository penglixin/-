// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Enemy/EnemyAIController.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Public/Character/PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"


AEnemyAIController::AEnemyAIController()
{
	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComponent"));

	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
}

//��д���ƹ���ʱ�ķ���
void AEnemyAIController::Possess(APawn * InPawn)
{
	Super::Possess(InPawn);

	Monster = Cast<AAICharacter>(InPawn);
	AIAniminstance = Cast<UAIAnimInstance>(Monster->GetMesh()->GetAnimInstance());
	//������
	AIweapon = GetWorld()->SpawnActor<AXWeapon>(Monster->AIWeaponClass);
	FAttachmentTransformRules AttachRule(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, true);
	AIweapon->AttachToComponent(Monster->GetMesh(), AttachRule, TEXT("hand_rSocket"));
	AIweapon->WeaponCapsule->OnComponentBeginOverlap.AddDynamic(this, &AEnemyAIController::WeaponBeginOverlap);
	if(Monster->BehaviorTree)
	{
		//��ʼ���ڰ�,ʹ��Monster�е���Ϊ���ĺڰ���Դ
		BlackboardComponent->InitializeBlackboard(*(Monster->BehaviorTree->BlackboardAsset));
		//������Ϊ��
		BehaviorTreeComponent->StartTree(*(Monster->BehaviorTree));
	}
}

void AEnemyAIController::WeaponBeginOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (AIAniminstance->bIsAttack)
	{
		if (Cast<APlayerCharacter>(OtherActor))
		{
			UGameplayStatics::ApplyDamage(OtherActor, Monster->HitDamage, this, Monster, nullptr);
		}
	}
}
