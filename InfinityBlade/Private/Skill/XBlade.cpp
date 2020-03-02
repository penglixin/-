// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Skill/XBlade.h"
#include "Kismet/GameplayStatics.h"



// Sets default values
AXBlade::AXBlade()
{
	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
	CapsuleComp->SetupAttachment(RootComponent);
	CapsuleComp->SetCapsuleHalfHeight(108.f);
	CapsuleComp->SetCapsuleRadius(18.f);

	ParticleSystemComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComp"));
	ParticleSystemComp->SetupAttachment(CapsuleComp);
	ParticleSystemComp->SetWorldLocation(FVector(0.f,0.f,-85.f));
	ParticleSystemComp->SetWorldRotation(FRotator(90.f,0.f,0.f));
	InitialLifeSpan = 15.f;
}

// Called when the game starts or when spawned
void AXBlade::BeginPlay()
{
	Super::BeginPlay();
	
}



