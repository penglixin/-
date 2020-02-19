// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <Runtime/Core/Public/Async/AsyncWork.h>


/**
 * 
 */
class ASYNCASSETLOAD_API MyTaskClass:public FNonAbandonableTask
{
public:
	MyTaskClass();
	~MyTaskClass();


public:

	/*该类必须要有的一个函数，用于生成标注生成线程的信息*/

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(PrimeCalculationAsyncTask, STATGROUP_ThreadPoolAsyncTasks);
	}
	void DoWork();     //该方法继承与父类，在生成线程时会调用该方法进行执行任务
	int32 MaxPrime;    //由于该方法不是静态方法，所以必须在生成该类的时候赋给我们需要的进行计算的值
	MyTaskClass(int32 MaxPrime);  //补充一个构造函数用于赋值

};
