// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/ExploredEffect.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "TimerManager.h"

// Sets default values
AExploredEffect::AExploredEffect()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
	RootComponent = SceneComp;

	ExploredMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ExploredMesh"));
	ExploredMesh->SetupAttachment(SceneComp);
}

// Called when the game starts or when spawned
void AExploredEffect::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(timerHandle, this, &AExploredEffect::DestroyEffect, 1.0f, false);
}

void AExploredEffect::DestroyEffect()
{
	Destroy();
}

// Called every frame
void AExploredEffect::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AExploredEffect::SetExploredLength(FVector OriginPos, FVector EndPos)
{
	SetActorLocation(FMath::Lerp(OriginPos, EndPos, 0.5));
	float length = FVector::Distance(OriginPos, EndPos) / 100;
	FVector Scale = GetActorScale3D();
	Scale.X = length;
	SetActorScale3D(Scale);
}

