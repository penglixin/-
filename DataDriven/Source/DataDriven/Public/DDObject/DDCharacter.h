// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DDOO.h"
#include "DDCharacter.generated.h"

UCLASS()
class DATADRIVEN_API ADDCharacter : public ACharacter, public IDDOO
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADDCharacter();

	//��д�ͷź���
	virtual void DDRelease() override;

public:

	//ģ������,���Ϊ��,˵��Ҫ�ֶ�ָ��,��Ϊ�վ����Զ�ָ��
	UPROPERTY(EditAnywhere, Category = "DataDriven")
		FName ModuleName;
	//��������,���Ϊ��,˵��Ҫ�ֶ�ָ��,��Ϊ�վ����Զ�ָ��
	UPROPERTY(EditAnywhere, Category = "DataDriven")
		FName ObjectName;
	//������,���Ϊ��,˵��Ҫ�ֶ�ָ��,��Ϊ�վ����Զ�ָ��
	UPROPERTY(EditAnywhere, Category = "DataDriven")
		FName ClassName;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


};
