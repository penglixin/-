// Fill out your copyright notice in the Description page of Project Settings.


#include "DDActor.h"

// Sets default values
ADDActor::ADDActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}



// Called when the game starts or when spawned
void ADDActor::BeginPlay()
{
	Super::BeginPlay();

	//�Զ�ע�ᵽ���
	RegisterToModule(ModuleName, ObjectName, ClassName);
}



void ADDActor::DDRelease()
{
	IDDOO::DDRelease();
	//�ܵ������������ôһ����ע�ᵽ�˿��,��ȡ������һ����Ϊ��
	GetDDWorld()->DestroyActor(this);
}
