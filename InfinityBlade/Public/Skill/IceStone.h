// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Particles/ParticleSystemComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Sound/SoundBase.h"
#include "IceStone.generated.h"

UCLASS()
class INFINITYBLADE_API AIceStone : public AActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(VisibleAnywhere)
		UParticleSystemComponent* ParticleSystemComp;
	UPROPERTY(VisibleAnywhere)
		UCapsuleComponent* CapsuleComp;
	//子弹移动组件
	UPROPERTY(VisibleAnywhere)
		UProjectileMovementComponent* ProjectileComp;
	UPROPERTY(EditAnywhere,Category = "ExploreParticle")
		UParticleSystem* ExploreParticle;
	UPROPERTY(EditAnywhere, Category = "ExploreSound")
		USoundBase* ExploreSound;

public:	
	// Sets default values for this actor's properties
	AIceStone();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	void Shoot(FVector Direction);

	UFUNCTION()
		void OnOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	

};
