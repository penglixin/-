// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/MultiThread/MultiThreadFunctionLibrary.h"
#include "Public/MultiThread/MyTaskClass.h"
#include "Engine.h"


void UMultiThreadFunctionLibrary::MultiThreadDo(int32 MaxPrime)
{
	//�����߳�
	auto task = new FAutoDeleteAsyncTask<MyTaskClass>(MaxPrime);
	if (task)
	{
		task->StartBackgroundTask();  //�÷�ʽ����task�����Զ��½�һ���̣߳����ҵ��ø����dowork����
	}

}

void UMultiThreadFunctionLibrary::SingleThreadDo(int32 MaxPrime)
{
	Do(MaxPrime);
}

void UMultiThreadFunctionLibrary::Do(int32 MaxPrime)
{
	//Calculating the prime numbers...
	for (int32 i = 1; i <= MaxPrime; i++)
	{
		bool isPrime = true;
		for (int32 j = 2; j <= i / 2; j++)
		{
			if (FMath::Fmod(i, j) == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime)
			//GLog->Log("Prime number #" + FString::FromInt(i) + ": " + FString::FromInt(i));
			GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, "Prime number #" + FString::FromInt(i) + ": " + FString::FromInt(i));
	}
}
