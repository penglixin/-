// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CloudControl.generated.h"


UCLASS()
class CLOUDDEMO_API ACloudControl : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACloudControl();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	APlayerController* PC;

	FVector LaunchVelocity;  //向上弹射的速度

	void MoveTowardsCursor();  //朝向鼠标移动

	void MoveUpOnKeyPress();     //按下空格向上弹射,只在游戏开始时可以通过按键弹射
	
	void SetSpeed();  

	void GameOver();
	UFUNCTION(BlueprintCallable)
		void ReStart();
	UFUNCTION(BlueprintImplementableEvent)   //在代码里定义，在蓝图操作
		void DisplayRestartButton();
	UPROPERTY(BlueprintReadOnly)
		bool isOver;
	bool isStart;
	UPROPERTY(EditAnyWhere, Category = "Speed")
		float AirSpeed;
	UPROPERTY(EditAnyWhere, Category = "Speed")
		float GroundSpeed;
	int Score;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void Launch();       //碰到云时发射
	
	void IncreaseScore();

	int GetScore() const;  //readonly

};
