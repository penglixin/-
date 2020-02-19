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

	/*�������Ҫ�е�һ���������������ɱ�ע�����̵߳���Ϣ*/

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(PrimeCalculationAsyncTask, STATGROUP_ThreadPoolAsyncTasks);
	}
	void DoWork();     //�÷����̳��븸�࣬�������߳�ʱ����ø÷�������ִ������
	int32 MaxPrime;    //���ڸ÷������Ǿ�̬���������Ա��������ɸ����ʱ�򸳸�������Ҫ�Ľ��м����ֵ
	MyTaskClass(int32 MaxPrime);  //����һ�����캯�����ڸ�ֵ

};
