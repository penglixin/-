// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "MainUserWidget.generated.h"

class UButton;

/**
 * 
 */
UCLASS()
class INFINITYBLADE_API UMainUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	//���ܹ�����ť
	UPROPERTY(Meta = (BindWidget))
		UButton* Button_Attack;
	UPROPERTY(Meta = (BindWidget))
		UButton* Button_Skill1;
	UPROPERTY(Meta = (BindWidget))
		UButton* Button_Skill2;
	UPROPERTY(Meta = (BindWidget))
		UButton* Button_Skill3;
	UPROPERTY(Meta = (BindWidget))
		UButton* Button_Skill4;

	UPROPERTY(Meta = (BindWidget))
		UButton* Button_Shop;
	UPROPERTY(Meta = (BindWidget))
		UButton* Button_Backpack;
	UPROPERTY(Meta = (BindWidget))
		UButton* Button_Setting;
	//��ȴ��
	UPROPERTY(Meta = (BindWidget))
		UProgressBar* CDBar_One;
	UPROPERTY(Meta = (BindWidget))
		UProgressBar* CDBar_Two;
	UPROPERTY(Meta = (BindWidget))
		UProgressBar* CDBar_Three;
	UPROPERTY(Meta = (BindWidget))
		UProgressBar* CDBar_Four;
	//Ѫ����ħ����
	UPROPERTY(Meta = (BindWidget))
		UProgressBar* ProgressBar_HP;
	UPROPERTY(Meta = (BindWidget))
		UProgressBar* ProgressBar_MP;
	//ħ������
	UPROPERTY(Meta = (BindWidget))
		UTextBlock* NotEnough;
	UPROPERTY(Meta = (BindWidget))
		UTextBlock* FullBlood;
	UPROPERTY(Meta = (BindWidget))
		UTextBlock* TextBlock_Cold;
	UPROPERTY(Meta = (BindWidget))
		UTextBlock* TextBlock_ID;
protected:

	virtual bool Initialize() override;


public:

};
