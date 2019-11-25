// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BreakableBlock.generated.h"


class UParticleSystem;

UCLASS()
class BOMBER_API ABreakableBlock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABreakableBlock();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnyWhere, Category = "Component")
		UStaticMeshComponent* BreakableMesh;
	UPROPERTY(EditAnyWhere, Category = "Explosion")
		UParticleSystem*  Explosion;

	class ABomberGameMode* BomberGameMode;

	UPROPERTY(EditAnyWhere, Category = "Explosion")
		TSubclassOf<class APowerup> Power;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void OnDestroy();
	
};
