// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/BlockCreater.h"
#include "Engine/World.h"
#include "Public/UnbreakableBlock.h"
#include "Public/BreakableBlock.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/KismetSystemLibrary.h"


// Sets default values
ABlockCreater::ABlockCreater()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = WITH_EDITOR;

	static ConstructorHelpers::FClassFinder<AUnbreakableBlock>UnBreakable(TEXT("/Game/Blueprint/BP_UnbreakableBlock"));
	UnbreakableBlock = UnBreakable.Class;

	static ConstructorHelpers::FClassFinder<ABreakableBlock>Breakable(TEXT("/Game/Blueprint/BP_BreakableBlock"));
	BreakableBlock = Breakable.Class;

	IgnorePos.Add(FVector(700, -700, 0));
	IgnorePos.Add(FVector(600, -700, 0));
	IgnorePos.Add(FVector(700, -600, 0));
	IgnorePos.Add(FVector(-700, 700, 0));
	IgnorePos.Add(FVector(-600, 700, 0));
	IgnorePos.Add(FVector(-700, 600, 0));
}

// Called when the game starts or when spawned
void ABlockCreater::BeginPlay()
{
	Super::BeginPlay();
	CreateUnbreakableBlock();
	FindAllPos();
	bDrawDebugPoint = false;
	CreateBreakableBlock();
}

void ABlockCreater::CreateUnbreakableBlock()
{
	for (int x = 0;x < Width;x++) {
		for (int y = 0;y < Length;y++) {
			if (x % 2 != 0 && y % 2 != 0) {
				FVector Pos = FVector(x-7,y-7,0)*Scale;
				GetWorld()->SpawnActor<AUnbreakableBlock>(UnbreakableBlock, Pos, FRotator::ZeroRotator);
			}
		}
	}
}

void ABlockCreater::CreateBreakableBlock()
{
	if (BreakableBlock != nullptr) {
		int BreakableNum = SpawnPos.Num()*BlockIntensity;
		TArray<FVector> TempPos;
		TempPos.Append(SpawnPos);
		int Index;
		for (int i = 0;i < BreakableNum;i++) {
			Index = FMath::RandRange(0, TempPos.Num() - 1);
			GetWorld()->SpawnActor<ABreakableBlock>(BreakableBlock, TempPos[Index], FRotator::ZeroRotator);
			TempPos.RemoveAt(Index);
		}
	}
}

bool ABlockCreater::AllowedSpawnPos(FVector Pos)
{
	if (IgnorePos.Contains(Pos))
		return false;
	return true;
}

void ABlockCreater::FindAllPos()
{
	if (SpawnPos.Num() > 0) {
		SpawnPos.Empty();
	}
	for (int x = 0;x < Width;x++) {
		for (int y = 0;y < Length;y++) {
			if (x % 2 == 0 || y % 2 == 0) {
				FVector Pos = FVector(x - 7, y - 7, 0)*Scale;
				if (AllowedSpawnPos(Pos)) {
					SpawnPos.Add(Pos);
				}
			}
		}
	}
}

void ABlockCreater::DrawDebugPos(FVector & Pos, const FLinearColor & Color)
{
	UKismetSystemLibrary::DrawDebugPoint(this, Pos, 20.0f, Color);
}

// Called every frame
void ABlockCreater::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//FindAllPos();
	if(bDrawDebugPoint) {
		for (auto &Point : SpawnPos) {
			DrawDebugPos(Point, ValidColor);
		}
		for (auto &Point : IgnorePos) {
			DrawDebugPos(Point, InValidColor);
		}
	}
}

bool ABlockCreater::ShouldTickIfViewportsOnly() const
{
	return WITH_EDITOR;
}

