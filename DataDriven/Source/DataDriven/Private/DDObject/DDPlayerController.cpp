// Fill out your copyright notice in the Description page of Project Settings.


#include "DDPlayerController.h"


ADDPlayerController::ADDPlayerController()
{
	//���뿪��Controller����Character��֡�������ܹ���ⰴ��, �����ֻ����Controller��
	PrimaryActorTick.bCanEverTick = true;
}

void ADDPlayerController::BeginPlay()
{
	Super::BeginPlay();

	//�Զ�ע��
	RegisterToModule(ModuleName, ObjectName, ClassName);
}