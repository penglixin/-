// Fill out your copyright notice in the Description page of Project Settings.


#include "DDCameraActor.h"

ADDCameraActor::ADDCameraActor()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ADDCameraActor::BeginPlay()
{
	Super::BeginPlay();

	//�Զ�ע��
	RegisterToModule(ModuleName, ObjectName, ClassName);
}

void ADDCameraActor::DDRelease()
{
	IDDOO::DDRelease();
	//�ܵ������������ôһ����ע�ᵽ�˿��,��ȡ������һ����Ϊ��
	GetDDWorld()->DestroyActor(this);
}


