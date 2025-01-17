// Fill out your copyright notice in the Description page of Project Settings.


#include "DDSceneComponent.h"

// Sets default values for this component's properties
UDDSceneComponent::UDDSceneComponent()
{
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	//设置允许销毁
	bAllowAnyoneToDestroyMe = true;
}

// Called when the game starts
void UDDSceneComponent::BeginPlay()
{
	Super::BeginPlay();

	//自动注册
	RegisterToModule(ModuleName, ObjectName, ClassName);
}

void UDDSceneComponent::DDRelease()
{
	IDDOO::DDRelease();
	//从组件中删除自己,并标记为准备被gc回收
	DestroyComponent();
}

