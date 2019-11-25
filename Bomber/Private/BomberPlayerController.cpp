// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/BomberPlayerController.h"
#include "GameFrameWork/Pawn.h"
#include "Engine/LocalPlayer.h"
#include "Public/BomberCharacter.h"
#include "Public/Bomb.h"


void ABomberPlayerController::BeginPlay() {
	Super::BeginPlay();
	
}

void ABomberPlayerController::MoveVertical(float AixsValue)
{
	Pawn = GetPawn();  //获取当前的pawn
	if (Pawn != nullptr) {
		Pawn->AddMovementInput(FVector::ForwardVector,AixsValue);
	}
}

void ABomberPlayerController::MoveHorizontal(float AixsValue)
{
	Pawn = GetPawn();  //获取当前的pawn
	if (Pawn != nullptr) {
		Pawn->AddMovementInput(FVector::RightVector, AixsValue);
	}
}

void ABomberPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	int32 id=GetLocalPlayer()->GetControllerId();
	if (id == 0) {
		InputComponent->BindAxis("MoveVertical_P1", this, &ABomberPlayerController::MoveVertical);
		InputComponent->BindAxis("MoveHorizontal_P1", this, &ABomberPlayerController::MoveHorizontal);
		InputComponent->BindAction("Bomb_P1", IE_Pressed, this,&ABomberPlayerController::CreateBombInput);
		InputComponent->BindAction("Remote_P1", IE_Pressed, this, &ABomberPlayerController::RemoteExploredInput);
	}
	if (id == 1) {
		InputComponent->BindAxis("MoveVertical_P2", this, &ABomberPlayerController::MoveVertical);
		InputComponent->BindAxis("MoveHorizontal_P2", this, &ABomberPlayerController::MoveHorizontal);
		InputComponent->BindAction("Bomb_P2", IE_Pressed, this, &ABomberPlayerController::CreateBombInput);
		InputComponent->BindAction("Remote_P2", IE_Pressed, this, &ABomberPlayerController::RemoteExploredInput);
	}
}

void ABomberPlayerController::CreateBombInput()
{
	Pawn = GetPawn();
	if (Pawn) {
		ABomberCharacter* Player = Cast<ABomberCharacter>(Pawn);
		if (Player) {
			Player->CreateBomb();
		}
	}
}

void ABomberPlayerController::RemoteExploredInput()  //按下键 爆炸
{
	Pawn = GetPawn();
	if (Pawn) {
		ABomberCharacter* Player = Cast<ABomberCharacter>(Pawn);
		if (!Player->GetHasRemote()) {
			return;
		}
		else
		{
			for (int i = 0;i < Player->PlacedBombNum.Num();i++) {
				if (Player->PlacedBombNum[i]) {
					Player->PlacedBombNum[i]->Explode();
					i--;
				}
			}
		}
	}
}
