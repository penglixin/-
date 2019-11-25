// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameCamera.generated.h"

class UCameraComponent;
class ACloudControl;
class UBoxComponent;
class ACloud;

UCLASS()
class CLOUDDEMO_API AGameCamera : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameCamera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnyWhere, Category = "Components")
		 UCameraComponent* CameraComp;

	UPROPERTY(VisibleAnyWhere, Category = "Components")
		UBoxComponent* DestoryArea;

	APlayerController* PC;
	ACloudControl* CloudCtrl;
	ACloud* Cloud;

	void CameraMove();   //鼠标跟随


	void CheckIfFalling();     //看玩家是否处于持续掉落状态，用于判断玩家死亡

	UFUNCTION(BlueprintImplementableEvent)   //在代码里定义，在蓝图操作
		void UpdateTimer();
	UFUNCTION(BlueprintImplementableEvent)   //在代码里定义，在蓝图操作
		void ResetTimer();
	UFUNCTION(BlueprintCallable)
		void FallingGround();     //当处于持续下落，让玩家直接落到地面
	UPROPERTY(BlueprintReadWrite)
		bool isFallowPlayer;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;  //参数是传递与他发生碰撞的物体
	
};
