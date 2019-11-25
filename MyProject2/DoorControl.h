// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "DoorControl.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDoorEvent);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPROJECT2_API UDoorControl : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDoorControl();
	UPROPERTY(BlueprintAssignable)  //��ʾ����ͼ����ʶ��
	FDoorEvent OnOpen;

	UPROPERTY(BlueprintAssignable)  //��ʾ����ͼ����ʶ��
	FDoorEvent OnClose;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void OpenDoor();
	void CloseDoor();
	float GetTotalMass();

private:
	AActor* Owner;
	UPROPERTY(EditAnywhere)
	ATriggerVolume* TriggerVolume;
	AActor* DefaultPawn;

	float OpenDoorTime = 0.3;  //����ʱ����1s
	float LastOpenDoorTime = 0;  //��¼��һ�ο��ŵ�ʱ��
};
