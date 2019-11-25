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

	FVector LaunchVelocity;  //���ϵ�����ٶ�

	void MoveTowardsCursor();  //��������ƶ�

	void MoveUpOnKeyPress();     //���¿ո����ϵ���,ֻ����Ϸ��ʼʱ����ͨ����������
	
	void SetSpeed();  

	void GameOver();
	UFUNCTION(BlueprintCallable)
		void ReStart();
	UFUNCTION(BlueprintImplementableEvent)   //�ڴ����ﶨ�壬����ͼ����
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
	void Launch();       //������ʱ����
	
	void IncreaseScore();

	int GetScore() const;  //readonly

};
