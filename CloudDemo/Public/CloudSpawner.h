// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CloudSpawner.generated.h"

class UBoxComponent;
class ACloud;
class ACloudControl;

UCLASS()
class CLOUDDEMO_API ACloudSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACloudSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void SpawnCloud();
	
	UFUNCTION(BlueprintCallable)
		void ResetCloudSpawner();

	UPROPERTY(VisibleAnyWhere, Category = "Component")
		UBoxComponent*  SpawnArea;            

	UPROPERTY(VisibleAnyWhere, Category = "Component")
		UBoxComponent*  TriggerArea;
	UPROPERTY(VisibleAnyWhere, Category = "Component")
		USceneComponent* DefauleRootComponent;   //用于绑定SpawnArea和TriggerArea组件

	UPROPERTY(EditAnyWhere, Category = "Cloud")
		TSubclassOf<ACloud> Cloud;       //TSubclassOf<>让Cloud只能是<>里的类类型

	ACloudControl* CloudCtrl;

	UPROPERTY(EditAnyWhere, Category = "Cloud")
		int InitSpawnCount;
	UPROPERTY(EditAnyWhere, Category = "Cloud")
		float SpawnRaise;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;  //参数是传递与他发生碰撞的物体
	
};
