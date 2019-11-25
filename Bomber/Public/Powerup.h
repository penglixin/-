// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Public/BomberGameMode.h"
#include "Powerup.generated.h"


class UBoxComponent;
class UBillboardComponent;

UCLASS()
class BOMBER_API APowerup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APowerup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnyWhere, Category = "Component")
		UBoxComponent* BoxCollision;

	UPROPERTY(VisibleAnyWhere, Category = "Component")
		UBillboardComponent* BillBoard;
	UPROPERTY(VisibleAnyWhere, Category = "Component")
		TArray<UTexture2D*> Sprites;

	EPowerupType PowerupType;

	UPROPERTY(EditAnyWhere, Category = "Component")
		float AddSpeed = 100.0f;
	UPROPERTY(EditAnyWhere, Category = "Component")
		float ExploredRangeBoost = 1;
	class ABomberCharacter* BomberCharacter;

	void ResetPowerup();

	FTimerHandle TimerHandle_Reset;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	
};
