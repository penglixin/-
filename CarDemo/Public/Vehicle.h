// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehicle.h"
#include "Components/InputComponent.h"
#include "Vehicle.generated.h"

class UCameraComponent;
class USpringArmComponent;
class USoundCue;
class UAudioComponent;
class UWheeledVehicleMovementComponent4W;
class AVehicleGameMode;

/**
 * 
 */
UCLASS()
class CARDEMO_API AVehicle : public AWheeledVehicle
{
	GENERATED_BODY()
protected:
	UPROPERTY(VisibleAnyWhere, Category = "CameraComponent")   //把OutCamera组件在蓝图显示出来
		UCameraComponent*  OutCamera;  //外部相机

	UPROPERTY(VisibleAnyWhere, Category = "CameraComponent")   //把InCamera组件在蓝图显示出来
		UCameraComponent*  InCamera;  //内部相机

	UPROPERTY(VisibleAnyWhere, Category = "CameraComponent")   //把InCameraBase组件在蓝图显示出来
		USceneComponent* InCameraBase;   //这是内部摄像机要绑定的组件，因为内部摄像机不能绑定在弹簧臂上

	FVector InCameraBasePos;     //  内部相机位置



	UPROPERTY(EditDefaultsOnly, Category = "Sound")
		USoundCue* EngineSound;   //定义声音片段

	UPROPERTY(VisibleAnyWhere, Category = "Sound")
		UAudioComponent* AudioComp;       //添加声音播放组件

	UPROPERTY(EditDefaultsOnly, Category = "Sound")
		USoundCue* SkidSound;   //定义声音片段

	UPROPERTY(VisibleAnyWhere, Category = "Sound")
		UAudioComponent* SkidAudioComp;       //添加声音播放组件

	void MoveForward(float Value);
	void MoveRight(float Value);

	UPROPERTY(VisibleAnyWhere, Category = "CameraComponent")
		USpringArmComponent* SpringArm;

	void OnHandbrakePressed();   //按下刹车
	void OnHandbreakReleased();  //抬起松刹车
	bool IsStopCar;

	bool bInCarCameraActive;   //判断内部摄像机是否激活
	void ChangeCamera();   //切换视角

	UWheeledVehicleMovementComponent4W* Vehicle4W;

	virtual void BeginPlay() override;

	void PlayEngineSound();   //播放引擎声音
	void PlaySkidSound();     //播放漂移音效

	void OnSkid(); //漂移
	
	float FrontSteerAngle;

	AVehicleGameMode* VehicleGameMode;   //创建游戏模式，让汽车在倒计时后才能移动
public:
	AVehicle();
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	virtual void Tick(float value) override;
	
};
