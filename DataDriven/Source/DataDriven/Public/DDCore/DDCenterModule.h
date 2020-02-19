// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DDCore/DDModule.h"
#include "DDCenterModule.generated.h"

class IDDOO;
/**
 * 
 */
UCLASS()
class DATADRIVEN_API UDDCenterModule : public UDDModule
{
	GENERATED_BODY()
	
public:
	//�������ñ�ģ���Լ���ģ���EditChangeModuleType����
	void IterChangeModuleType(UDDModule* Module, FName ModType);
	//�ݹ鴴��ģ��
	void IterCreateManager(UDDModule* Module);
	//�ݹ��ʼ��
	void IterModuleInit(UDDModule* Module);
	//�ݹ�BeginPlay
	void IterModuleBeginPlay(UDDModule* Module);
	//�ݹ�Tick
	void IterModuleTick(UDDModule* Module, float DeltaSeconds);
	//��ȡ����ģ�鵽ģ������, ����ö������
	void TotalGatherModule(FName ModType);
	//��ȡ����ģ�鵽����
	void IterGatherModule(UDDModule* Module, TArray<UDDModule*>& GatherGroup);
	//ע�����ģ��
	bool RegisterToModule(IDDOO* ObejctInst);

	//ִ�з��䷽��
	void AllotExecuteFunction(DDModuleAgreement Agreement, DDParam* Param);

	//ִ�з��䷽��
	void AllotExecuteFunction(DDObjectAgreement Agreement, DDParam* Param);

	//ע����ýӿ�
	template<typename RetType, typename... VarTypes>
	DDFunHandle AllotRegisterFunPort(int32 ModuleID, FName CallName, TFunction<RetType(VarTypes...)> InsFun);

protected:

	//����ģ�������, ˳����ö����ͬ
	TArray<UDDModule*> ModuleGroup;

};

template<typename RetType, typename... VarTypes>
DDFunHandle UDDCenterModule::AllotRegisterFunPort(int32 ModuleID, FName CallName, TFunction<RetType(VarTypes...)> InsFun)
{
	if (ModuleGroup[ModuleID])
		return ModuleGroup[ModuleID]->RegisterFunPort<RetType, VarTypes...>(CallName, InsFun);
	return DDFunHandle();
}
