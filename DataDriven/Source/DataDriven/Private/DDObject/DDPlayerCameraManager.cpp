// Fill out your copyright notice in the Description page of Project Settings.


#include "DDPlayerCameraManager.h"



ADDPlayerCameraManager::ADDPlayerCameraManager()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ADDPlayerCameraManager::BeginPlay()
{
	Super::BeginPlay();

	//�Զ�ע��
	RegisterToModule(ModuleName, ObjectName, ClassName);
}
