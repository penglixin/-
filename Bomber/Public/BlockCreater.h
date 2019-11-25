// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BlockCreater.generated.h"


class AUnbreakableBlock;
class ABreakableBlock;


UCLASS()
class BOMBER_API ABlockCreater : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlockCreater();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnyWhere, Category = "BlockCreater")
		TSubclassOf<AUnbreakableBlock> UnbreakableBlock;   //TSubclassOf<>让Cloud只能是<>里的类类型,或者其子类

	UPROPERTY(EditAnyWhere, Category = "BlockCreater")
		TSubclassOf<ABreakableBlock> BreakableBlock;   //TSubclassOf<>让Cloud只能是<>里的类类型,或者其子类

	UPROPERTY(EditAnyWhere, Category = "BlockCreater|Setting")
		int Length = 15;
	UPROPERTY(EditAnyWhere, Category = "BlockCreater|Setting")
		int Width = 15;
	UPROPERTY(EditAnyWhere, Category = "BlockCreater|Setting")
		float Scale = 100.0f;

	UPROPERTY(EditAnyWhere, Category = "BlockCreater", meta = (ClampMin = "0.0", ClampMax = "1.0"))
		float BlockIntensity = 0.6f;


	UPROPERTY(VisibleAnyWhere, Category = "BlockCreater|Setting")
		TArray<FVector> SpawnPos;    //存储所有合法位置，用于生成BreakableBlock
	UPROPERTY(EditAnyWhere, Category = "BlockCreater|Setting")
		TArray<FVector> IgnorePos;   //存储主角生成的位置

	const FLinearColor ValidColor = FLinearColor(0, 0, 1);
	const FLinearColor InValidColor = FLinearColor(1, 0, 0);

	UPROPERTY(EditAnyWhere, Category = "BlockCreater|Debug")
		bool bDrawDebugPoint=true;

	void CreateUnbreakableBlock();
	void CreateBreakableBlock();

	bool AllowedSpawnPos(FVector Pos);   //判断位置是否合法
	UFUNCTION(BlueprintCallable)
	void FindAllPos();          //找到所有合法位置

	void DrawDebugPos(FVector &Pos,const FLinearColor &Color);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual bool ShouldTickIfViewportsOnly() const override;
	
};
