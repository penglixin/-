// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "XWeapon.generated.h"

UCLASS()
class INFINITYBLADE_API AXWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AXWeapon();

	UPROPERTY(VisibleAnyWhere)
		class USkeletalMeshComponent* WeaponMesh;
	UPROPERTY(VisibleAnyWhere)
		class UCapsuleComponent* WeaponCapsule;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
