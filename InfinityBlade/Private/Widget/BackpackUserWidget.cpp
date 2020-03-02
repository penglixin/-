// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Widget/BackpackUserWidget.h"


bool UBackpackUserWidget::Initialize()
{
	if(!Super::Initialize())
	{
		return false;
	}
	CloseBtn = (UButton*)GetWidgetFromName(TEXT("BackBtn"));
	CloseBtn->OnClicked.AddDynamic(this, &UBackpackUserWidget::CloseBtnOnClickEvent);
	ItemList = (UScrollBox*)GetWidgetFromName(TEXT("ScrollBox_ItemList"));
	return true;
}

void UBackpackUserWidget::CloseBtnOnClickEvent()
{
	this->RemoveFromViewport();
}
