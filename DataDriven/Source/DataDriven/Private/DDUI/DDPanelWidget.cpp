// Fill out your copyright notice in the Description page of Project Settings.


#include "DDPanelWidget.h"

FName UDDPanelWidget::PanelHiddenName(TEXT("PanelHiddenTask"));

int32 UDDPanelWidget::UIFrameModuleIndex(1);

FName UDDPanelWidget::UIFrameName(TEXT("UIFrame"));

FName UDDPanelWidget::ExitCallBackName(TEXT("ExitCallBack"));

FName UDDPanelWidget::ShowUIPanelName(TEXT("ShowUIPanel"));

FName UDDPanelWidget::HideUIPanelName(TEXT("HideUIPanel"));

FName UDDPanelWidget::ExitUIPanelName(TEXT("ExitUIPanel"));

FName UDDPanelWidget::AdvanceLoadPanelName(TEXT("AdvanceLoadPanel"));

void UDDPanelWidget::PanelEnter()
{
	SetVisibility(ESlateVisibility::Visible);
	//���ý�����涯��
	DisplayEnterMovie();
}

void UDDPanelWidget::PanelDisplay()
{
	SetVisibility(ESlateVisibility::Visible);
	//���ý�����涯��
	DisplayEnterMovie();
}

void UDDPanelWidget::PanelHidden()
{
	//�������Ƴ����涯����������غ���
	InvokeDelay(PanelHiddenName, DisplayLeaveMovie(), this, &UDDPanelWidget::SetSelfHidden);
}

void UDDPanelWidget::PanelFreeze()
{

}

void UDDPanelWidget::PanelResume()
{

}

void UDDPanelWidget::PanelExit()
{
	//���UI���������ʾ
	if (GetVisibility() != ESlateVisibility::Hidden)
		InvokeDelay(PanelHiddenName, DisplayLeaveMovie(), this, &UDDPanelWidget::RemoveCallBack);
	else
		RemoveCallBack();
}

void UDDPanelWidget::SetSelfHidden()
{
	SetVisibility(ESlateVisibility::Hidden);
}

void UDDPanelWidget::RemoveCallBack()
{
	//��ȡ���ؼ�
	UPanelWidget* WorkLayout = GetParent();
	//�Ѿ�������UI���, ����һֱû��������ʾ����������, WorkLayoutΪ��
	if (WorkLayout)
	{
		RemoveFromParent();
		//����UI�����������ؼ�
		ExitCallBack(UIFrameModuleIndex, UIFrameName, ExitCallBackName, UINature.LayoutType, WorkLayout);
	}
	//ִ������
	DDDestroy();
}

void UDDPanelWidget::ShowSelfPanel()
{
	ShowUIPanel(GetObjectName());
}

void UDDPanelWidget::HideSelfPanel()
{
	HideUIPanel(GetObjectName());
}

void UDDPanelWidget::ExitSelfPanel()
{
	ExitUIPanel(GetObjectName());
}

void UDDPanelWidget::AdvanceLoadPanel(FName PanelName)
{
	OperatorUIPanel(UIFrameModuleIndex, UIFrameName, AdvanceLoadPanelName, PanelName);
}

void UDDPanelWidget::ShowUIPanel(FName PanelName)
{
	OperatorUIPanel(UIFrameModuleIndex, UIFrameName, ShowUIPanelName, PanelName);
}

void UDDPanelWidget::HideUIPanel(FName PanelName)
{
	OperatorUIPanel(UIFrameModuleIndex, UIFrameName, HideUIPanelName, PanelName);
}

void UDDPanelWidget::ExitUIPanel(FName PanelName)
{
	OperatorUIPanel(UIFrameModuleIndex, UIFrameName, ExitUIPanelName, PanelName);
}

