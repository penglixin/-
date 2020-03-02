// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Widget/LoadUserWidget.h"
#include "Components/TextBlock.h"
#include "Components/CircularThrobber.h"



bool ULoadUserWidget::Initialize()
{
	if (!Super::Initialize())
	{
		return false;
	}

	GoOnText = (UTextBlock*)GetWidgetFromName(TEXT("TextBlock_Next"));
	Loadding = (UTextBlock*)GetWidgetFromName(TEXT("TextBlock_Loadding"));
	Waitting = (UCircularThrobber*)GetWidgetFromName(TEXT("CircularThrobber_0"));

	return true;
}

