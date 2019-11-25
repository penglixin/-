// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bomb.generated.h"

class UBoxComponent;
class UParticleSystemComponent;
class AExploredEffect;
class USoundCue;

UCLASS()
class BOMBER_API ABomb : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABomb();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnyWhere, Category = "Components")
		UBoxComponent* BoxCollision;
	UPROPERTY(VisibleAnyWhere, Category = "Components")
		UStaticMeshComponent*  BombMesh;
	UPROPERTY(VisibleAnyWhere, Category = "Components")
		UParticleSystemComponent*  ParticleSys;

	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlapComp,AActor* OtherActor, UPrimitiveComponent* OtherComp,int32 Index);  //OtherActor是与Bomb碰撞的物体

	
	UPROPERTY(EditAnyWhere, Category = "Explode")
		float ExplodeCD = 1.5f;     //1.5秒后爆炸
	UPROPERTY(EditAnyWhere, Category = "Explode", meta = (ClampMin = "1.0", ClampMax = "10.0"))
		float ExploredRange = 1.0f;  //爆炸范围
	UPROPERTY(EditAnyWhere, Category = "ExploredEffect")
		TSubclassOf<AExploredEffect> ExploedEffect;


	class ABomberCharacter* BomberCharacter;

	FTimerHandle timerHandle;

	FVector LineTraceDirection(FVector Direction);

	void SpawnEffect(FVector Direction);

	UPROPERTY(EditAnyWhere, Category = "Explode")
		USoundCue* ExploreSound;

public:	
	UFUNCTION(BlueprintCallable)
		void Explode();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetExploredRange(float Boost) {	this->ExploredRange = Boost;  }
	
};
