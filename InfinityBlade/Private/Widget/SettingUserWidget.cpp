// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Widget/SettingUserWidget.h"
//#include "Kismet/KismetSystemLibrary.h"
#include "Public/Character/PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "GenericPlatform/GenericPlatformMisc.h"
#include "GameFramework/SpringArmComponent.h"

bool USettingUserWidget::Initialize()
{
	if(!Super::Initialize())
	{
		return false;
	}

	GoOn = (UButton*)GetWidgetFromName(TEXT("Button_jixu"));
	ExitBtn = (UButton*)GetWidgetFromName(TEXT("Button_tuichu"));
	DistanceSlider = (USlider*)GetWidgetFromName(TEXT("Slider_Distance"));
	HighSlider = (USlider*)GetWidgetFromName(TEXT("Slider_High"));

	GoOn->OnClicked.__Internal_AddDynamic(this, &USettingUserWidget::GoOnBtnOnClickedEvent, FName("GoOnBtnOnClickedEvent"));
	ExitBtn->OnClicked.__Internal_AddDynamic(this, &USettingUserWidget::ExitBtnOnClickenEvent, FName("ExitBtnOnClickenEvent"));

	DistanceSlider->OnMouseCaptureEnd.AddDynamic(this, &USettingUserWidget::DistanceSliderValueChanged);
	HighSlider->OnMouseCaptureEnd.AddDynamic(this, &USettingUserWidget::HighSliderValueChanged);
	return true;
}

void USettingUserWidget::GoOnBtnOnClickedEvent()
{
	XCharacter = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	XCharacter->Dis_Value = DistanceSlider->GetValue();
	XCharacter->High_Value = HighSlider->GetValue();
	this->RemoveFromViewport();
}

void USettingUserWidget::ExitBtnOnClickenEvent()
{
	//GetWorld()->GetFirstPlayerController()->ConsoleCommand("quit");
	//AXPlayerController* XController = Cast<AXPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	//UKismetSystemLibrary::QuitGame(GetWorld(), XController, EQuitPreference::Quit, false);
	FGenericPlatformMisc::RequestExit(false);
}

void USettingUserWidget::DistanceSliderValueChanged()
{
	XCharacter = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	float value = DistanceSlider->GetValue() - 0.5f;
	XCharacter->SpringArm->TargetArmLength = 450.f + value * 600.f;
}

void USettingUserWidget::HighSliderValueChanged()
{
	XCharacter = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	float value = HighSlider->GetValue() - 0.5f;
	XCharacter->SpringArm->SetWorldRotation(FRotator(-35.f + value * 120.f, 0.f, 0.f));
}
