// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExploredEffect.generated.h"

UCLASS()
class BOMBER_API AExploredEffect : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AExploredEffect();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnyWhere, Category = "Component")
		USceneComponent* SceneComp;
	UPROPERTY(VisibleAnyWhere, Category = "Component")
		UStaticMeshComponent* ExploredMesh;

	void DestroyEffect();
	FTimerHandle timerHandle;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetExploredLength(FVector OriginPos,FVector EndPos);
	
};
