// Fill out your copyright notice in the Description page of Project Settings.


#include "DDModule.h"
#include "DDModel.h"
#include "DDWealth.h"
#include "DDOO.h"

// Sets default values for this component's properties
UDDModule::UDDModule()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

}


void UDDModule::CreateManager()
{
	//ʵ�������, ������NewObjectʵ�������ʱ��������������this, ����༭��������Ϸ�˳�ʱ�ᱼ��
	Model = NewObject<UDDModel>();
	Message = NewObject<UDDMessage>();
	Wealth = NewObject<UDDWealth>();
	//��������
	Model->AddToRoot();
	Message->AddToRoot();
	Wealth->AddToRoot();
	//ָ��ģ��
	Model->AssignModule(this);
	Message->AssignModule(this);
	Wealth->AssignModule(this);
}

void UDDModule::ModuleInit()
{
	//����Init����
	Model->ModelInit();
	Message->MessageInit();
	Wealth->WealthInit();

}

void UDDModule::ModuleBeginPlay()
{
	//��Wealthָ����Դ
	Wealth->AssignData(WealthData);
	//����BeginPlay
	Model->ModelBeginPlay();
	Message->MessageBeginPlay();
	Wealth->WealthBeginPlay();

}

void UDDModule::ModuleTick(float DeltaSeconds)
{
	//����Tick
	Model->ModelTick(DeltaSeconds);
	Wealth->WealthTick(DeltaSeconds);
	Message->MessageTick(DeltaSeconds);

}

void UDDModule::ChangeModuleType(FName ModuleType)
{
	ModuleIndex = DDH::GetEnumIndexFromName(ModuleType.ToString(), GetFName());

	if (ModuleIndex < 0)
		DDH::Debug() << "Generate Module Index Error --> " << GetName() << DDH::Endl();
}

void UDDModule::RegisterObject(IDDOO* ObjectInst)
{
	//ע������������
	Model->RegisterObject(ObjectInst);
	//���Լ�ע�ᵽ�����ģ��
	ObjectInst->AssignModule(this);
}

void UDDModule::ChildDestroy(FName ObjectName)
{
	Model->DestroyObject(ObjectName);
}

void UDDModule::DestroyObject(EAgreementType Agreement, TArray<FName> TargetNameGroup)
{
	Model->DestroyObject(Agreement, TargetNameGroup);
}

void UDDModule::EnableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup)
{
	Model->EnableObject(Agreement, TargetNameGroup);
}

void UDDModule::DisableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup)
{
	Model->DisableObject(Agreement, TargetNameGroup);
}

void UDDModule::ExecuteFunction(DDModuleAgreement Agreement, DDParam* Param)
{
	//����Module��UFuntion
	UFunction* ExeFunc = FindFunction(Agreement.FunctionName);
	//�����������
	if (ExeFunc)
	{
		//���õ��óɹ�
		Param->CallResult = ECallResult::Succeed;
		//���÷���
		ProcessEvent(ExeFunc, Param->ParamPtr);
	}
	else
	{
		//���÷���������
		Param->CallResult = ECallResult::NoFunction;
	}
}

void UDDModule::ExecuteFunction(DDObjectAgreement Agreement, DDParam* Param)
{
	//��������ִ�з��䷽��
	switch (Agreement.AgreementType)
	{
	case EAgreementType::SelfObject:
		ExecuteSelfObject(Agreement, Param);
		break;
	case EAgreementType::OtherObject:
		ExecuteOtherObject(Agreement, Param);
		break;
	case EAgreementType::ClassOtherObject:
		ExecuteClassOtherObject(Agreement, Param);
		break;
	case EAgreementType::SelfClass:
		ExecuteSelfClass(Agreement, Param);
		break;
	case EAgreementType::OtherClass:
		ExecuteOtherClass(Agreement, Param);
		break;
	case EAgreementType::All:
		ExecuteAll(Agreement, Param);
		break;
	}
}

bool UDDModule::StartCoroutine(FName ObjectName, FName CoroName, DDCoroTask* CoroTask)
{
	return Message->StartCoroutine(ObjectName, CoroName, CoroTask);
}

bool UDDModule::StopCoroutine(FName ObjectName, FName CoroName)
{
	return Message->StopCoroutine(ObjectName, CoroName);
}

void UDDModule::StopAllCorotine(FName ObjectName)
{
	return Message->StopAllCorotine(ObjectName);
}

bool UDDModule::StartInvoke(FName ObjectName, FName InvokeName, DDInvokeTask* InvokeTask)
{
	return Message->StartInvoke(ObjectName, InvokeName, InvokeTask);
}

bool UDDModule::StopInvoke(FName ObjectName, FName InvokeName)
{
	return Message->StopInvoke(ObjectName, InvokeName);
}

void UDDModule::StopAllInvoke(FName ObjectName)
{
	Message->StopAllInvoke(ObjectName);
}

void UDDModule::UnBindInput(FName ObjectName)
{
	Message->UnBindInput(ObjectName);
}

FWealthURL* UDDModule::GainWealthURL(FName WealthName)
{
	return Wealth->GainWealthURL(WealthName);
}

void UDDModule::GainWealthURL(FName WealthKind, TArray<FWealthURL*>& OutURL)
{
	Wealth->GainWealthURL(WealthKind, OutURL);
}

void UDDModule::LoadObjectWealth(FName WealthName, FName ObjectName, FName FunName)
{
	Wealth->LoadObjectWealth(WealthName, ObjectName, FunName);
}

void UDDModule::LoadObjectWealthKind(FName WealthKind, FName ObjectName, FName FunName)
{
	Wealth->LoadObjectWealthKind(WealthKind, ObjectName, FunName);
}

void UDDModule::LoadClassWealth(FName WealthName, FName ObjectName, FName FunName)
{
	Wealth->LoadClassWealth(WealthName, ObjectName, FunName);
}

void UDDModule::LoadClassWealthKind(FName WealthKind, FName ObjectName, FName FunName)
{
	Wealth->LoadClassWealthKind(WealthKind, ObjectName, FunName);
}

void UDDModule::BuildSingleClassWealth(EWealthType WealthType, FName WealthName, FName ObjectName, FName FunName, FTransform SpawnTransform)
{
	Wealth->BuildSingleClassWealth(WealthType, WealthName, ObjectName, FunName, SpawnTransform);
}

void UDDModule::BuildKindClassWealth(EWealthType WealthType, FName WealthKind, FName ObjectName, FName FunName, TArray<FTransform> SpawnTransforms)
{
	Wealth->BuildKindClassWealth(WealthType, WealthKind, ObjectName, FunName, SpawnTransforms);
}

void UDDModule::BuildMultiClassWealth(EWealthType WealthType, FName WealthName, int32 Amount, FName ObjectName, FName FunName, TArray<FTransform> SpawnTransforms)
{
	Wealth->BuildMultiClassWealth(WealthType, WealthName, Amount, ObjectName, FunName, SpawnTransforms);
}

void UDDModule::ExecuteSelfObject(DDObjectAgreement Agreement, DDParam* Param)
{
	//����洢Ŀ��������
	TArray<IDDOO*> TargetObjectGroup;
	//������ģ���ȡ������
	Model->GetSelfObject(Agreement.ObjectGroup, TargetObjectGroup);
	//ѭ�����÷����¼�
	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		//��ȡ���䷽��
		UFunction* ExeFunc = TargetObjectGroup[i]->GetObjectBody()->FindFunction(Agreement.FunctionName);
		if (ExeFunc)
		{
			//���õ��óɹ�
			Param->CallResult = ECallResult::Succeed;
			//ִ�з���
			TargetObjectGroup[i]->GetObjectBody()->ProcessEvent(ExeFunc, Param->ParamPtr);
		}
		else
		{
			//�����Ҳ�������
			Param->CallResult = ECallResult::NoFunction;
		}
	}
	//�����ȡ�Ķ�����ȱʧ, ���ý��Ϊ����ȱʧ, �����������ȼ����
	if (TargetObjectGroup.Num() != Agreement.ObjectGroup.Num())
		Param->CallResult = ECallResult::LackObject;
}

void UDDModule::ExecuteOtherObject(DDObjectAgreement Agreement, DDParam* Param)
{
	//����洢Ŀ��������
	TArray<IDDOO*> TargetObjectGroup;
	//�����������ȡ������
	int32 TotalObjectNum = Model->GetOtherObject(Agreement.ObjectGroup, TargetObjectGroup);
	//ѭ�����÷����¼�
	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		//��ȡ���䷽��
		UFunction* ExeFunc = TargetObjectGroup[i]->GetObjectBody()->FindFunction(Agreement.FunctionName);
		if (ExeFunc)
		{
			//���õ��óɹ�
			Param->CallResult = ECallResult::Succeed;
			//ִ�з���
			TargetObjectGroup[i]->GetObjectBody()->ProcessEvent(ExeFunc, Param->ParamPtr);
		}
		else
		{
			//�����Ҳ�������
			Param->CallResult = ECallResult::NoFunction;
		}
	}
	//�ж϶�����û��ȱʧ
	if (Agreement.ObjectGroup.Num() + TargetObjectGroup.Num() != TotalObjectNum)
		Param->CallResult = ECallResult::LackObject;
}

void UDDModule::ExecuteClassOtherObject(DDObjectAgreement Agreement, DDParam* Param)
{
	//����洢Ŀ��������
	TArray<IDDOO*> TargetObjectGroup;
	//�����������ȡ������
	int32 TotalClassNum = Model->GetClassOtherObject(Agreement.ObjectGroup, TargetObjectGroup);
	//ѭ�����÷����¼�
	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		//��ȡ���䷽��
		UFunction* ExeFunc = TargetObjectGroup[i]->GetObjectBody()->FindFunction(Agreement.FunctionName);
		if (ExeFunc)
		{
			//���õ��óɹ�
			Param->CallResult = ECallResult::Succeed;
			//ִ�з���
			TargetObjectGroup[i]->GetObjectBody()->ProcessEvent(ExeFunc, Param->ParamPtr);
		}
		else
		{
			//�����Ҳ�������
			Param->CallResult = ECallResult::NoFunction;
		}
	}
	//�ж϶���ȱʧ
	if (Agreement.ObjectGroup.Num() + TargetObjectGroup.Num() != TotalClassNum)
		Param->CallResult = ECallResult::LackObject;
}

void UDDModule::ExecuteSelfClass(DDObjectAgreement Agreement, DDParam* Param)
{
	//����洢Ŀ��������
	TArray<IDDOO*> TargetObjectGroup;
	//�����������ȡ������
	Model->GetSelfClass(Agreement.ObjectGroup, TargetObjectGroup);
	//ѭ�����÷����¼�
	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		//��ȡ���䷽��
		UFunction* ExeFunc = TargetObjectGroup[i]->GetObjectBody()->FindFunction(Agreement.FunctionName);
		if (ExeFunc)
		{
			//���õ��óɹ�
			Param->CallResult = ECallResult::Succeed;
			//ִ�з���
			TargetObjectGroup[i]->GetObjectBody()->ProcessEvent(ExeFunc, Param->ParamPtr);
		}
		else
		{
			//�����Ҳ�������
			Param->CallResult = ECallResult::NoFunction;
		}
	}
	//�ж϶���ȱʧ
	if(TargetObjectGroup.Num() == 0)
		Param->CallResult = ECallResult::LackObject;
}

void UDDModule::ExecuteOtherClass(DDObjectAgreement Agreement, DDParam* Param)
{
	//����洢Ŀ��������
	TArray<IDDOO*> TargetObjectGroup;
	//�����������ȡ������
	Model->GetOtherClass(Agreement.ObjectGroup, TargetObjectGroup);
	//ѭ�����÷����¼�
	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		//��ȡ���䷽��
		UFunction* ExeFunc = TargetObjectGroup[i]->GetObjectBody()->FindFunction(Agreement.FunctionName);
		if (ExeFunc)
		{
			//���õ��óɹ�
			Param->CallResult = ECallResult::Succeed;
			//ִ�з���
			TargetObjectGroup[i]->GetObjectBody()->ProcessEvent(ExeFunc, Param->ParamPtr);
		}
		else
		{
			//�����Ҳ�������
			Param->CallResult = ECallResult::NoFunction;
		}
	}
	//�ж϶���ȱʧ
	if (TargetObjectGroup.Num() == 0)
		Param->CallResult = ECallResult::LackObject;
}

void UDDModule::ExecuteAll(DDObjectAgreement Agreement, DDParam* Param)
{
	//����洢Ŀ��������
	TArray<IDDOO*> TargetObjectGroup;
	//�����������ȡ������
	Model->GetAll(TargetObjectGroup);
	//ѭ�����÷����¼�
	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		//��ȡ���䷽��
		UFunction* ExeFunc = TargetObjectGroup[i]->GetObjectBody()->FindFunction(Agreement.FunctionName);
		if (ExeFunc)
		{
			//���õ��óɹ�
			Param->CallResult = ECallResult::Succeed;
			//ִ�з���
			TargetObjectGroup[i]->GetObjectBody()->ProcessEvent(ExeFunc, Param->ParamPtr);
		}
		else
		{
			//�����Ҳ�������
			Param->CallResult = ECallResult::NoFunction;
		}
	}
}

