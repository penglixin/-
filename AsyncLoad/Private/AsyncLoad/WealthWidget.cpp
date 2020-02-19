// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/AsyncLoad/WealthWidget.h"
#include "Public/AsyncLoad/WealthActor.h"
#include "Components/Image.h"
#include "Components/Overlay.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Texture2D.h"
#include "Components/OverlaySlot.h"

bool UWealthWidget::Initialize()
{
	if (!Super::Initialize())
	{
		return false;
	}

	TArray<AActor*> WealthActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AWealthActor::StaticClass(), WealthActors);
	if (WealthActors.Num() > 0)
	{
		WealthActor = Cast<AWealthActor>(WealthActors[0]);
		WealthActor->AssignWealthWidget(this);
	}
	return true;
}

void UWealthWidget::AssighTexture(UTexture2D* InTexture)
{
	Image_123->SetBrushFromTexture(InTexture);
}

void UWealthWidget::AssignOverlay_0(UUserWidget * InWidget)
{
	UOverlaySlot* OverlaySlot = Overlay_0->AddChildToOverlay(InWidget);
	OverlaySlot->SetPadding(FMargin(0.f, 0.f, 0.f, 0.f));
	OverlaySlot->SetHorizontalAlignment(EHorizontalAlignment::HAlign_Fill);
	OverlaySlot->SetVerticalAlignment(EVerticalAlignment::VAlign_Fill);
}

