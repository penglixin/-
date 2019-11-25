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
	UPROPERTY(VisibleAnyWhere, Category = "CameraComponent")   //��OutCamera�������ͼ��ʾ����
		UCameraComponent*  OutCamera;  //�ⲿ���

	UPROPERTY(VisibleAnyWhere, Category = "CameraComponent")   //��InCamera�������ͼ��ʾ����
		UCameraComponent*  InCamera;  //�ڲ����

	UPROPERTY(VisibleAnyWhere, Category = "CameraComponent")   //��InCameraBase�������ͼ��ʾ����
		USceneComponent* InCameraBase;   //�����ڲ������Ҫ�󶨵��������Ϊ�ڲ���������ܰ��ڵ��ɱ���

	FVector InCameraBasePos;     //  �ڲ����λ��



	UPROPERTY(EditDefaultsOnly, Category = "Sound")
		USoundCue* EngineSound;   //��������Ƭ��

	UPROPERTY(VisibleAnyWhere, Category = "Sound")
		UAudioComponent* AudioComp;       //��������������

	UPROPERTY(EditDefaultsOnly, Category = "Sound")
		USoundCue* SkidSound;   //��������Ƭ��

	UPROPERTY(VisibleAnyWhere, Category = "Sound")
		UAudioComponent* SkidAudioComp;       //��������������

	void MoveForward(float Value);
	void MoveRight(float Value);

	UPROPERTY(VisibleAnyWhere, Category = "CameraComponent")
		USpringArmComponent* SpringArm;

	void OnHandbrakePressed();   //����ɲ��
	void OnHandbreakReleased();  //̧����ɲ��
	bool IsStopCar;

	bool bInCarCameraActive;   //�ж��ڲ�������Ƿ񼤻�
	void ChangeCamera();   //�л��ӽ�

	UWheeledVehicleMovementComponent4W* Vehicle4W;

	virtual void BeginPlay() override;

	void PlayEngineSound();   //������������
	void PlaySkidSound();     //����Ư����Ч

	void OnSkid(); //Ư��
	
	float FrontSteerAngle;

	AVehicleGameMode* VehicleGameMode;   //������Ϸģʽ���������ڵ���ʱ������ƶ�
public:
	AVehicle();
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	virtual void Tick(float value) override;
	
};
