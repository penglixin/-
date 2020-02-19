// Fill out your copyright notice in the Description page of Project Settings.


#include "DDOO.h"

// Add default functionality here for any IDDOO functions that are not pure virtual.

void IDDOO::RegisterToModule(FName ModName, FName ObjName /*= FName()*/, FName ClsName /*= FName()*/)
{
	//�ж��Ƿ��Ѿ�ע�ᵽ�����
	if (IDriver && IModule)
		return;
	//���ģ����Ϊ��, ֱ�ӷ���
	if (ModName.IsNone())
		return;
	//ָ��������������
	if (!ObjName.IsNone())
		IObjectName = ObjName;
	if (!ClsName.IsNone())
		IClassName = ClsName;
	//��ȡUObject����
	IBody = Cast<UObject>(this);
	//��ȡ������
	IDriver = UDDCommon::Get()->GetDriver();
	//ע�ᵽģ��
	if (IDriver)
	{
		//�����õ�IDΪ��ֱ�ӷ���
		ModuleIndex = DDH::GetEnumIndexFromName(IDriver->ModuleType.ToString(), ModName);
		if (ModuleIndex < 0)
		{
			DDH::Debug() << GetObjectName() << " Get " << ModName << " ModuleIndex Failed!" << DDH::Endl();
			return;
		}
		//���ע�᲻�ɹ�˵����û��ʵ������Ӧ��Module
		if (!IDriver->RegisterToModule(this))
			DDH::Debug() << GetObjectName() << " Register To " << ModName << " Failed !" << DDH::Endl();
	}
	else
		//DDriver������
		DDH::Debug() << GetObjectName() << " Get DDDriver Failed !" << DDH::Endl();
}

void IDDOO::RegisterToModule(int32 ModIndex, FName ObjName /*= FName()*/, FName ClsName /*= FName()*/)
{
	//�ж��Ƿ��Ѿ�ע�ᵽ�����
	if (IDriver && IModule)
		return;
	//ָ��������������
	if (!ObjName.IsNone())
		IObjectName = ObjName;
	if (!ClsName.IsNone())
		IClassName = ClsName;
	//��ȡUObject����
	IBody = Cast<UObject>(this);
	//��ȡ������
	IDriver = UDDCommon::Get()->GetDriver();
	//ע�ᵽģ��
	if (IDriver)
	{
		//�����õ�IDΪ��ֱ�ӷ���
		ModuleIndex = ModIndex;
		if (ModuleIndex < 0)
		{
			DDH::Debug() << GetObjectName() << " Get ModuleIndex " << ModuleIndex << " ModuleIndex Failed!" << DDH::Endl();
			return;
		}
		//���ע�᲻�ɹ�˵����û��ʵ������Ӧ��Module
		if (!IDriver->RegisterToModule(this))
			DDH::Debug() << GetObjectName() << " Register To ModuleIndex " << ModuleIndex << " Failed !" << DDH::Endl();
	}
	else
		//DDriver������
		DDH::Debug() << GetObjectName() << " Get DDDriver Failed !" << DDH::Endl();
}

FName IDDOO::GetObjectName()
{
	if (!IObjectName.IsNone())
		return IObjectName;
	IObjectName = IBody->GetFName();
	return IObjectName;
}

FName IDDOO::GetClassName()
{
	if (!IClassName.IsNone())
		return IClassName;
	IClassName = IBody->GetClass()->GetFName();
	return IClassName;
}

int32 IDDOO::GetModuleIndex() const
{
	return ModuleIndex;
}

UObject* IDDOO::GetObjectBody() const
{
	return IBody;
}

UWorld* IDDOO::GetDDWorld() const
{
	if (IDriver)
		return IDriver->GetWorld();
	return NULL;
}

void IDDOO::AssignModule(UDDModule* Mod)
{
	IModule = Mod;
}

bool IDDOO::ActiveLife()
{
	switch (LifeState)
	{
	case EBaseObjectLife::None:
		DDInit();
		LifeState = EBaseObjectLife::Init;
		break;
	case EBaseObjectLife::Init:
		DDLoading();
		LifeState = EBaseObjectLife::Loading;
		break;
	case EBaseObjectLife::Loading:
		DDRegister();
		LifeState = EBaseObjectLife::Register;
		break;
	case EBaseObjectLife::Register:
		DDEnable();
		LifeState = EBaseObjectLife::Enable;
		//��������״̬Ϊ�ȶ�
		RunState = EBaseObjectState::Stable;
		//����true, ֹͣ���м���״̬����
		return true;
	}
	return false;
}

bool IDDOO::DestroyLife()
{
	switch (LifeState)
	{
	case EBaseObjectLife::Enable:
		DDDisable();
		LifeState = EBaseObjectLife::Disable;
		//����״̬Ϊ����
		RunState = EBaseObjectState::Destroy;
		break;
	case EBaseObjectLife::Disable:
		DDUnRegister();
		LifeState = EBaseObjectLife::UnRegister;
		//��������״̬Ϊ����,�����Disable״̬�����еĶ���û���޸�RunStateΪ����
		RunState = EBaseObjectState::Destroy;
		break;
	case EBaseObjectLife::UnRegister:
		DDUnLoading();
		LifeState = EBaseObjectLife::UnLoading;
		//����true, ֹͣ��������״̬����
		return true;
	}
	return false;
}

void IDDOO::DDInit() {}

void IDDOO::DDLoading() {}

void IDDOO::DDRegister() {}

void IDDOO::DDEnable() {}

void IDDOO::DDTick(float DeltaSeconds) {}

void IDDOO::DDDisable() {}

void IDDOO::DDUnRegister() {}

void IDDOO::DDUnLoading() {}

void IDDOO::DDRelease() 
{
	//ע������Э��, ��ʱ�Լ������¼�
	StopAllCorotine();
	StopAllInvoke();
	UnBindInput();
}

void IDDOO::OnEnable()
{
	//����״̬Ϊ����״̬
	LifeState = EBaseObjectLife::Enable;
}

void IDDOO::OnDisable()
{
	//����״̬Ϊʧ��״̬
	LifeState = EBaseObjectLife::Disable;
}

void IDDOO::DDDestroy()
{
	IModule->ChildDestroy(GetObjectName());
}

void IDDOO::ExecuteFunction(DDModuleAgreement Agreement, DDParam* Param)
{
	if (Agreement.ModuleIndex == ModuleIndex)
		IModule->ExecuteFunction(Agreement, Param);
	else
		IDriver->ExecuteFunction(Agreement, Param);
}

void IDDOO::ExecuteFunction(DDObjectAgreement Agreement, DDParam* Param)
{
	if (Agreement.ModuleIndex == ModuleIndex)
		IModule->ExecuteFunction(Agreement, Param);
	else
		IDriver->ExecuteFunction(Agreement, Param);
}

bool IDDOO::StartCoroutine(FName CoroName, DDCoroTask* CoroTask)
{
	return IModule->StartCoroutine(GetObjectName(), CoroName, CoroTask);
}

bool IDDOO::StopCoroutine(FName CoroName)
{
	return IModule->StopCoroutine(GetObjectName(), CoroName);
}

void IDDOO::StopAllCorotine()
{
	return IModule->StopAllCorotine(GetObjectName());
}

bool IDDOO::StopInvoke(FName InvokeName)
{
	return IModule->StopInvoke(GetObjectName(), InvokeName);
}

void IDDOO::StopAllInvoke()
{
	IModule->StopAllInvoke(GetObjectName());
}

void IDDOO::UnBindInput()
{
	IModule->UnBindInput(GetObjectName());
}

FWealthURL* IDDOO::GainWealthURL(FName WealthName)
{
	return IModule->GainWealthURL(WealthName);
}

void IDDOO::GainWealthURL(FName WealthKind, TArray<FWealthURL*>& OutURL)
{
	IModule->GainWealthURL(WealthKind, OutURL);
}

void IDDOO::LoadObjectWealth(FName WealthName, FName FunName)
{
	IModule->LoadObjectWealth(WealthName, GetObjectName(), FunName);
}

void IDDOO::LoadObjectWealthKind(FName WealthKind, FName FunName)
{
	IModule->LoadObjectWealthKind(WealthKind, GetObjectName(), FunName);
}

void IDDOO::LoadClassWealth(FName WealthName, FName FunName)
{
	IModule->LoadClassWealth(WealthName, GetObjectName(), FunName);
}

void IDDOO::LoadClassWealthKind(FName WealthKind, FName FunName)
{
	IModule->LoadClassWealthKind(WealthKind, GetObjectName(), FunName);
}

void IDDOO::BuildSingleClassWealth(EWealthType WealthType, FName WealthName, FName FunName)
{
	IModule->BuildSingleClassWealth(WealthType, WealthName, GetObjectName(), FunName, FTransform::Identity);
}

void IDDOO::BuildSingleClassWealth(EWealthType WealthType, FName WealthName, FName FunName, FTransform SpawnTransform)
{
	IModule->BuildSingleClassWealth(WealthType, WealthName, GetObjectName(), FunName, SpawnTransform);
}

void IDDOO::BuildKindClassWealth(EWealthType WealthType, FName WealthKind, FName FunName)
{
	IModule->BuildKindClassWealth(WealthType, WealthKind, GetObjectName(), FunName, TArray<FTransform>{ FTransform::Identity });
}

void IDDOO::BuildKindClassWealth(EWealthType WealthType, FName WealthKind, FName FunName, FTransform SpawnTransform)
{
	IModule->BuildKindClassWealth(WealthType, WealthKind, GetObjectName(), FunName, TArray<FTransform>{ SpawnTransform });
}

void IDDOO::BuildKindClassWealth(EWealthType WealthType, FName WealthKind, FName FunName, TArray<FTransform> SpawnTransforms)
{
	IModule->BuildKindClassWealth(WealthType, WealthKind, GetObjectName(), FunName, SpawnTransforms);
}

void IDDOO::BuildMultiClassWealth(EWealthType WealthType, FName WealthName, int32 Amount, FName FunName)
{
	IModule->BuildMultiClassWealth(WealthType, WealthName, Amount, GetObjectName(), FunName, TArray<FTransform>{ FTransform::Identity });
}

void IDDOO::BuildMultiClassWealth(EWealthType WealthType, FName WealthName, int32 Amount, FName FunName, FTransform SpawnTransform)
{
	IModule->BuildMultiClassWealth(WealthType, WealthName, Amount, GetObjectName(), FunName, TArray<FTransform>{ SpawnTransform });
}

void IDDOO::BuildMultiClassWealth(EWealthType WealthType, FName WealthName, int32 Amount, FName FunName, TArray<FTransform> SpawnTransforms)
{
	IModule->BuildMultiClassWealth(WealthType, WealthName, Amount, GetObjectName(), FunName, SpawnTransforms);
}

