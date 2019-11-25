// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Bomb.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "Public/ExploredEffect.h"
#include "Public/BreakableBlock.h"
#include "Public/BomberCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"



// Sets default values
ABomb::ABomb()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	RootComponent = BoxCollision;

	BombMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BombMesh"));
	BombMesh->SetupAttachment(RootComponent);

	ParticleSys = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSys"));
	ParticleSys->SetupAttachment(RootComponent);

	static ConstructorHelpers::FClassFinder<AExploredEffect>effect(TEXT("/Game/Blueprint/BP_ExploredEffect"));
	ExploedEffect = effect.Class;

	static ConstructorHelpers::FObjectFinder<USoundCue>sound(TEXT("/Game/Sound/Explosion_Cue"));
	ExploreSound = sound.Object;
}

// Called when the game starts or when spawned
void ABomb::BeginPlay()
{
	Super::BeginPlay();
	BomberCharacter = Cast<ABomberCharacter>(GetOwner());  //������ɸ�ը��������
	BoxCollision->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	BoxCollision->OnComponentEndOverlap.AddDynamic(this, &ABomb::OnOverlapEnd);//���¼�
	if (!BomberCharacter->GetHasRemote()) {
		GetWorldTimerManager().SetTimer(timerHandle, this, &ABomb::Explode, ExplodeCD, false);
	}
	else
	{
		GetWorldTimerManager().SetTimer(timerHandle, this, &ABomb::Explode, 4.0f, false);
	}
	//GetWorldTimerManager().SetTimer(timerHandle, this, &ABomb::Explode, 1.0f, true,10.0f); �ڿ�ʼ10s�����Exploed�����������Ժ�ÿ��1s����һ��
	
}


//��ը����������ײ������ʱ���Զ����ô˷���
void ABomb::OnOverlapEnd(UPrimitiveComponent * OverlapComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 Index)
{
	if (OtherActor == GetOwner()) {
		BoxCollision->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Block);
	}
}

void ABomb::Explode()
{
	UGameplayStatics::PlaySoundAtLocation(this, ExploreSound, GetActorLocation());
	SpawnEffect(FVector::ForwardVector);
	SpawnEffect(FVector::RightVector);
	if (BomberCharacter) {
		BomberCharacter->PlacedBombNum.Remove(this);
	}
	Destroy();
}

FVector ABomb::LineTraceDirection(FVector Direction)
{
	TArray<FHitResult> Hits;
	FVector OriginPos = GetActorLocation();
	FVector EndPos = OriginPos + Direction * 100 * ExploredRange + Direction * 50;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	GetWorld()->LineTraceMultiByChannel(Hits, OriginPos, EndPos, ECollisionChannel::ECC_GameTraceChannel1, Params);
	if (Hits.Num() > 0) {  //�ȼ�⵽�Ĵ�����������󣬺���Ĵ����������ǰ��
		EndPos = Hits.Last().ImpactPoint;
		for (auto& hit : Hits) {
			ABreakableBlock* Breakable = Cast<ABreakableBlock>(hit.GetActor());  //ը�ٿ������ϰ���
			if (Breakable) {
				Breakable->OnDestroy();
			}
			ABomberCharacter* player = Cast<ABomberCharacter>(hit.GetActor());    //ը������
			if (player != nullptr) {
				player->OnDeath();
			}
		}
	}
	return EndPos;
}

void ABomb::SpawnEffect(FVector Direction)
{
	if (Direction == FVector::ForwardVector) {
		FVector SpawnPos = FVector(GetActorLocation());
		AExploredEffect* Effect = GetWorld()->SpawnActor<AExploredEffect>(ExploedEffect, SpawnPos, FRotator::ZeroRotator);
		Effect->SetExploredLength(LineTraceDirection(Direction), LineTraceDirection(-Direction));
	}
	else
	{
		FVector SpawnPos = FVector(GetActorLocation());
		AExploredEffect* Effect = GetWorld()->SpawnActor<AExploredEffect>(ExploedEffect, SpawnPos, FRotator(0, 90, 0));
		Effect->SetExploredLength(LineTraceDirection(Direction), LineTraceDirection(-Direction));
	}
}

// Called every frame
void ABomb::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

