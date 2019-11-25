// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/BreakableBlock.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include "Engine/World.h"
#include "Public/BomberGameMode.h"
#include "Public/Powerup.h"
#include "ConstructorHelpers.h"


// Sets default values
ABreakableBlock::ABreakableBlock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BreakableMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BreakableMesh"));
	RootComponent = BreakableMesh;

	static ConstructorHelpers::FClassFinder<APowerup>Pu(TEXT("/Game/Blueprint/BP_Powerup"));
	Power = Pu.Class;
}

// Called when the game starts or when spawned
void ABreakableBlock::BeginPlay()
{
	Super::BeginPlay();
	
	BomberGameMode = Cast<ABomberGameMode>(GetWorld()->GetAuthGameMode());     //获取当前游戏模式
}

// Called every frame
void ABreakableBlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABreakableBlock::OnDestroy()
{
	UGameplayStatics::SpawnEmitterAtLocation(this, Explosion, GetActorLocation(), GetActorRotation());

	if (FMath::RandRange(0.0f, 1.0f)<=BomberGameMode->GetDropChance()) {
		GetWorld()->SpawnActor<APowerup>(Power,GetActorLocation(),GetActorRotation());
	}
	Destroy();
}

