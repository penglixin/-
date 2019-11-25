// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BomberManHUD.generated.h"


class UTextBlock;

/**
 * 
 */
UCLASS()
class BOMBER_API UBomberManHUD : public UUserWidget
{
	GENERATED_BODY()

protected:

		virtual bool Initialize() override;


		UPROPERTY(Meta=(BindWidget))
			UTextBlock*  RemainTimer;

		UPROPERTY(Meta = (BindWidget))
			UTextBlock*  WinTitle;

		UPROPERTY(Meta = (BindWidget))
			UTextBlock*  P1_Text;

		UPROPERTY(Meta = (BindWidget))
			UTextBlock*  P2_Text;

		UPROPERTY(Meta = (BindWidget))
			class UButton*  Restart;

		UPROPERTY(Meta = (BindWidget))
			class UButton* NextLevel;

		UFUNCTION()
			void OnRestartClicked();

		UFUNCTION()
			void OnNextClicked();

		UPROPERTY(Meta = (BindWidget))
			class UCanvasPanel* CanvasPanel_1;
public:

	void SetRemainTimer(FText text);

	void SetWinTitle(FText text);

	void SetP1Text(FText text);

	void SetP2Text(FText text);

	void SetCanvasVisible();
};
