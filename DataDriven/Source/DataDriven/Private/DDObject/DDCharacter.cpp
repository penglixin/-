// Fill out your copyright notice in the Description page of Project Settings.


#include "DDCharacter.h"

// Sets default values
ADDCharacter::ADDCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADDCharacter::BeginPlay()
{
	Super::BeginPlay();

	//�Զ�ע��
	RegisterToModule(ModuleName, ObjectName, ClassName);
}


void ADDCharacter::DDRelease()
{
	IDDOO::DDRelease();
	//�ܵ������������ôһ����ע�ᵽ�˿��,��ȡ������һ����Ϊ��
	GetDDWorld()->DestroyActor(this);
}

