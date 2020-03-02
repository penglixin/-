// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Widget/AdminUserWidget.h"
#include "Components/Button.h"
#include "Components/EditableTextBox.h"
#include "Components/NamedSlot.h"
#include "Components/TextBlock.h"



bool UAdminUserWidget::Initialize()
{
	if(!Super::Initialize())
		return false;

	BackButton = (UButton*)GetWidgetFromName(TEXT("BackBtn"));
	OkButton = (UButton*)GetWidgetFromName(TEXT("OkBtn"));
	ExitButton = (UButton*)GetWidgetFromName(TEXT("Button_Exit"));
	Adminpassword = (UEditableTextBox*)GetWidgetFromName(TEXT("AdminInput"));
	namedSlot = (UNamedSlot*)GetWidgetFromName(TEXT("NamedSlot_Tips"));
	tishiText = (UTextBlock*)GetWidgetFromName(TEXT("TextBlock_Tips"));

	ExitButton->OnClicked.AddDynamic(this, &UAdminUserWidget::ExitBtnOnClickEvent);
	return true;
}



void UAdminUserWidget::ExitBtnOnClickEvent()
{
	namedSlot->SetVisibility(ESlateVisibility::Hidden);
}