// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MultiThreadFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class ASYNCASSETLOAD_API UMultiThreadFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	

public:

	UFUNCTION(BlueprintCallable, Category = "MultiThreadTest")
		static void MultiThreadDo(int32 MaxPrime);   //参数用于计算质数

	UFUNCTION(BlueprintCallable, Category = "MultiThreadTest")
		static void SingleThreadDo(int32 MaxPrime);

	static void Do(int32 MaxPrime);


};
