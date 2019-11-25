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

	void CameraMove();   //������


	void CheckIfFalling();     //������Ƿ��ڳ�������״̬�������ж��������

	UFUNCTION(BlueprintImplementableEvent)   //�ڴ����ﶨ�壬����ͼ����
		void UpdateTimer();
	UFUNCTION(BlueprintImplementableEvent)   //�ڴ����ﶨ�壬����ͼ����
		void ResetTimer();
	UFUNCTION(BlueprintCallable)
		void FallingGround();     //�����ڳ������䣬�����ֱ���䵽����
	UPROPERTY(BlueprintReadWrite)
		bool isFallowPlayer;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;  //�����Ǵ�������������ײ������
	
};
