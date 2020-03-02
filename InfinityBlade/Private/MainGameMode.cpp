// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/MainGameMode.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/Character.h"
#include "Public/Character/XPlayerController.h"
#include "Public/Character/XPlayerState.h"




AMainGameMode::AMainGameMode()
{
	ConstructorHelpers::FClassFinder<ACharacter>Character(TEXT("/Game/Blueprint/Character/BP_PlayerCharacter"));
	DefaultPawnClass = Character.Class;
	PlayerControllerClass = AXPlayerController::StaticClass();
	PlayerStateClass = AXPlayerState::StaticClass();

}

void AMainGameMode::BeginPlay()
{
	Super::BeginPlay();

}