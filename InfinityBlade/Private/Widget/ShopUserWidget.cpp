// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Widget/ShopUserWidget.h"



bool UShopUserWidget::Initialize()
{
	if(!Super::Initialize())
	{
		return false;
	}
	CloseBtn = (UButton*)GetWidgetFromName(TEXT("BackBtn"));
	CloseBtn->OnClicked.__Internal_AddDynamic(this, &UShopUserWidget::CloseBtnOnClickEvent, FName("CloseBtnOnClickEvent"));

	return true;
}

void UShopUserWidget::CloseBtnOnClickEvent()
{
	this->RemoveFromViewport();
}
