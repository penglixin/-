// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/BomberGameMode.h"
#include "Public/BomberPlayerController.h"
#include "Public/BomberCharacter.h"
#include "ConstructorHelpers.h"
#include "Kismet/KismetStringLibrary.h"
#include "Public/UserWidget/BomberManHUD.h"
#include "Kismet/GameplayStatics.h"
#include "Public/BomberSaveGame.h"
#include "GameFramework/PlayerController.h"

ABomberGameMode::ABomberGameMode() {

	PrimaryActorTick.bCanEverTick = true;

	PlayerControllerClass = ABomberPlayerController::StaticClass();

	static ConstructorHelpers::FClassFinder<ABomberCharacter> Bomber (TEXT("/Game/Blueprint/BP_BomberCharacter"));
	DefaultPawnClass = Bomber.Class;
}

void ABomberGameMode::BeginPlay()
{
	Super::BeginPlay();
	BomberHUD = CreateWidget<UBomberManHUD>(GetWorld(),LoadClass<UBomberManHUD>(this,TEXT("WidgetBlueprint'/Game/Blueprint/WBP_HUD.WBP_HUD_C'")));
	BomberHUD->AddToViewport();

	SaveGame = Cast<UBomberSaveGame>(UGameplayStatics::CreateSaveGameObject(UBomberSaveGame::StaticClass()));
}

void ABomberGameMode::IncrementP1Score()
{
	if (UGameplayStatics::DoesSaveGameExist(SlotName,UserIndex)) { 
		SaveGame = Cast<UBomberSaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, UserIndex));
	}
	else
	{
		SaveGame = Cast<UBomberSaveGame>(UGameplayStatics::CreateSaveGameObject(UBomberSaveGame::StaticClass()));
	}
	SaveGame->SetP1_Score();
	UGameplayStatics::SaveGameToSlot(SaveGame, SlotName, UserIndex);
}

void ABomberGameMode::IncrementP2Score()
{
	if (UGameplayStatics::DoesSaveGameExist(SlotName, UserIndex)) {
		SaveGame = Cast<UBomberSaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, UserIndex));
	}
	else
	{
		SaveGame = Cast<UBomberSaveGame>(UGameplayStatics::CreateSaveGameObject(UBomberSaveGame::StaticClass()));
	}
	SaveGame->SetP2_Score();
	UGameplayStatics::SaveGameToSlot(SaveGame, SlotName, UserIndex);
}

void ABomberGameMode::UpdateScore()
{
	BomberHUD->SetP1Text(FText::AsNumber(SaveGame->GetP1_Score()));
	BomberHUD->SetP2Text(FText::AsNumber(SaveGame->GetP2_Score()));
	BomberHUD->SetCanvasVisible();
}

void ABomberGameMode::OnGameEnd()
{
	UGameplayStatics::SetGamePaused(this,true);
	UGameplayStatics::GetPlayerController(this, 0)->bShowMouseCursor = true;
	//UGameplayStatics::GetPlayerController(this, 0)->SetInputMode(const FInputModeDataBase & InData);

}

void ABomberGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	TotalTime -= DeltaSeconds;
	TimeText = FText::FromString(UKismetStringLibrary::TimeSecondsToString(TotalTime));
	BomberHUD->SetRemainTimer(TimeText);
}

void ABomberGameMode::OnplayerDeath(AController * controller)
{
	ABomberPlayerController* BomberPlayerController = Cast<ABomberPlayerController>(controller);
	int32 id = UGameplayStatics::GetPlayerControllerID(BomberPlayerController);
	FText winTitle1 = FText::FromString("Player 1 Win!");
	FText winTitle2 = FText::FromString("Player 2 Win!");
	if (id == 0) {    //玩家1死亡
		BomberHUD->SetWinTitle(winTitle2);
		IncrementP2Score();
	}
	else if (id==1)   //玩家2死亡
	{
		BomberHUD->SetWinTitle(winTitle1);
		IncrementP1Score();
	}
	UpdateScore();
	OnGameEnd();
}

void ABomberGameMode::Restart()
{
	UGameplayStatics::RemovePlayer(UGameplayStatics::GetPlayerController(this,1), Destroy());  //销毁玩家2
	UGameplayStatics::OpenLevel(this,"Level_1");   //打开Level_1
}

void ABomberGameMode::Next()
{
	UGameplayStatics::RemovePlayer(UGameplayStatics::GetPlayerController(this, 1), Destroy());  //销毁玩家2
	UGameplayStatics::OpenLevel(this, "Level_2");   //打开Level_2
}