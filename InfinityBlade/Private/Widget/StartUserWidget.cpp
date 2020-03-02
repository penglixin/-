// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Widget/StartUserWidget.h"
#include "Components/Button.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Public/Widget/AdminUserWidget.h"



bool UStartUserWidget::Initialize()
{
	if (!Super::Initialize()) {
		return false;
	}

	StartButton = (UButton*)GetWidgetFromName(TEXT("StartBtn"));
	ZhuCeButton = Cast<UButton>(GetWidgetFromName(TEXT("ZhuCeBtn")));
	ExitButton = (UButton*)GetWidgetFromName(TEXT("ExitBtn"));
	AdminButton = (UButton*)GetWidgetFromName(TEXT("AdminBtn"));

	ExitButton->OnClicked.AddDynamic(this,&UStartUserWidget::ExitButtonOnClick);

	return true;
}

void UStartUserWidget::ExitButtonOnClick()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit,false);
}
