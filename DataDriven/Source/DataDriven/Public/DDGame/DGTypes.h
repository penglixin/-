// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DGTypes.generated.h"


#pragma region GamePart

/************************************************************************/
/* ��������Ϸ�����ݷ�����              Begin            ��������Ϸ�����ݷ�����*/
/************************************************************************/

//ʾ��ģ��ö��, ģ��Լ��, ���Ҫʹ��DataDriven�����UI���, ��һ��Ҫ��HUDģ����ڵڶ�λ, UIFrame��ܹ�����ʼ����HUDģ����
UENUM()
enum class EDDExampleModule : uint8
{
	Center = 0,    //����ģ��, Լ�����ڵ�һλ
	HUD,           //UIģ��, Լ�����ڵڶ�λ, UI��ܻ�ֱ��ʹ�����1ȥ��ȡHUDģ��, �����ʹ��UI���, ����Ҫǿ���ڵڶ�λ
	Data,          //����ģ��
	Player,        //���ģ��
	NPC,           //NPCģ��
	Bots,          //�ж�ģ��
};



/************************************************************************/
/* ��������Ϸ�����ݷ�����               End             ��������Ϸ�����ݷ�����*/
/************************************************************************/


#pragma endregion


/**
 * 
 */
UCLASS()
class DATADRIVEN_API UDGTypes : public UObject
{
	GENERATED_BODY()
	
};
