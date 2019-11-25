// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/UserWidget/BomberManHUD.h"
#include "Components/TextBlock.h"
#include "Components/CanvasPanel.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Public/BomberGameMode.h"


bool UBomberManHUD::Initialize() 
{
	if (!Super::Initialize()) {
		return false;
	}
	Restart->OnClicked.AddDynamic(this, &UBomberManHUD::OnRestartClicked);
	NextLevel->OnClicked.AddDynamic(this, &UBomberManHUD::OnNextClicked);
	return true;
}

void UBomberManHUD::OnRestartClicked()
{
	ABomberGameMode* GameMode = Cast<ABomberGameMode>(UGameplayStatics::GetGameMode(this));
	if (GameMode) {
		GameMode->Restart();
	}
}

void UBomberManHUD::OnNextClicked()
{
	Cast<ABomberGameMode>(UGameplayStatics::GetGameMode(this))->Next();
}

void UBomberManHUD::SetRemainTimer(FText text)
{
	RemainTimer->SetText(text);
}

void UBomberManHUD::SetWinTitle(FText text)
{
	WinTitle->SetText(text);
}

void UBomberManHUD::SetP1Text(FText text)
{
	P1_Text->SetText(text);
}

void UBomberManHUD::SetP2Text(FText text)
{
	P2_Text->SetText(text);
}

void UBomberManHUD::SetCanvasVisible()
{
	CanvasPanel_1->SetVisibility(ESlateVisibility::Visible);
}
