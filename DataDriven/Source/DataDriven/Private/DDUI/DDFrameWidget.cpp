// Fill out your copyright notice in the Description page of Project Settings.


#include "DDFrameWidget.h"
#include "CanvasPanel.h"
#include "CanvasPanelSlot.h"
#include "Image.h"
#include "WidgetTree.h"
#include "Overlay.h"
#include "OverlaySlot.h"
#include "DDUI/DDPanelWidget.h"

bool UDDFrameWidget::Initialize()
{
	if (!Super::Initialize()) return false;

	//��ȡ���ڵ�
	RootCanvas = Cast<UCanvasPanel>(GetRootWidget());
	RootCanvas->SetVisibility(ESlateVisibility::SelfHitTestInvisible);

	//��������
	MaskPanel = WidgetTree->ConstructWidget<UImage>(UImage::StaticClass());

	//����͸����
	NormalLucency = FLinearColor(1.f, 1.f, 1.f, 0.f);
	TranslucenceLucency = FLinearColor(0.f, 0.f, 0.f, 0.6f);
	ImPenetrableLucency = FLinearColor(0.f, 0.f, 0.f, 0.3f);

	WaitShowTaskName = FName("WaitShowTask");

	return true;
}

void UDDFrameWidget::AdvanceLoadPanel(FName PanelName)
{
	//����Ѿ�����ȫ������ڸ��������Ѿ��������������ڸ������
	if (AllPanelGroup.Contains(PanelName) || LoadedPanelName.Contains(PanelName))
		return;
	//�����첽����
	BuildSingleClassWealth(EWealthType::Widget, PanelName, "AcceptAdvancePanel");
	//�����������Ѿ�����������
	LoadedPanelName.Push(PanelName);
}

void UDDFrameWidget::ShowUIPanel(FName PanelName)
{
	//�������Ƿ��Ѿ���ʾ�ڽ�����
	if (ShowPanelGroup.Contains(PanelName) || PopPanelStack.Contains(PanelName))
		return;
	//����ж��Ƿ��Ѿ����ظ����
	if (!AllPanelGroup.Contains(PanelName) && !LoadedPanelName.Contains(PanelName))
	{
		BuildSingleClassWealth(EWealthType::Widget, PanelName, "AcceptPanelWidget");
		LoadedPanelName.Push(PanelName);
		return;
	}

	//���Ԥ����δ���, �͵�����ʾ����, ����ѭ����⺯��, ��⵽Ԥ������ɵ�ʱ��, ��ʾUI���
	if (!AllPanelGroup.Contains(PanelName) && LoadedPanelName.Contains(PanelName) && !WaitShowPanelName.Contains(PanelName))
	{
		//������ֵ�Ԥ��ʾ������
		WaitShowPanelName.Push(PanelName);
		//����ѭ���������������ʾ����, ÿ0.3����һ��
		InvokeRepeat(WaitShowTaskName, 0.3f, 0.3f, this, &UDDFrameWidget::WaitShowPanel);
		return;
	}


	//������ڸ�UI���
	if (AllPanelGroup.Contains(PanelName))
	{
		//�ж��Ƿ��ǵ�һ����ʾ�ڽ�����
		UDDPanelWidget* PanelWidget = *AllPanelGroup.Find(PanelName);
		//���û�и��ؼ�, ˵��û�н��������
		if (PanelWidget->GetParent())
			DoShowUIPanel(PanelName);
		else
			DoEnterUIPanel(PanelName);
	}
}



void UDDFrameWidget::AcceptAdvancePanel(FName BackName, UUserWidget* BackWidget)
{
	UDDPanelWidget* PanelWidget = Cast<UDDPanelWidget>(BackWidget);

	//������Ǽ̳�PanelWidget
	if (!PanelWidget)
	{
		DDH::Debug() << "Load UI Panel : " << BackName << " Is Not DDPanelWidget" << DDH::Endl();
		return;
	}

	//ע�ᵽ���,��ע������, BackName������������Լ�ObjectName
	PanelWidget->RegisterToModule(ModuleIndex, BackName);

	//��ӵ�ȫ����
	AllPanelGroup.Add(BackName, PanelWidget);
}

void UDDFrameWidget::AcceptPanelWidget(FName BackName, UUserWidget* BackWidget)
{
	UDDPanelWidget* PanelWidget = Cast<UDDPanelWidget>(BackWidget);

	//������Ǽ̳�PanelWidget
	if (!PanelWidget)
	{
		DDH::Debug() << "Load UI Panel : " << BackName << " Is Not DDPanelWidget" << DDH::Endl();
		return;
	}

	//ע�ᵽ���,��ע������, BackName������������Լ�ObjectName
	PanelWidget->RegisterToModule(ModuleIndex, BackName);

	//��ӵ�ȫ����
	AllPanelGroup.Add(BackName, PanelWidget);

	//���е�һ����ʾ, ִ�н�����淽��
	DoEnterUIPanel(BackName);
}

void UDDFrameWidget::ExitCallBack(ELayoutType LayoutType, UPanelWidget* InLayout)
{
	if (LayoutType == ELayoutType::Canvas)
	{
		UCanvasPanel* WorkLayout = Cast<UCanvasPanel>(InLayout);
		if (WorkLayout->GetChildrenCount() == 0)
		{
			WorkLayout->RemoveFromParent();
			ActiveCanvas.Remove(WorkLayout);
			UnActiveCanvas.Push(WorkLayout);
		}
	}
	else
	{
		UOverlay* WorkLayout = Cast<UOverlay>(InLayout);
		if (WorkLayout->GetChildrenCount() == 0)
		{
			WorkLayout->RemoveFromParent();
			ActiveOverlay.Remove(WorkLayout);
			UnActiveOverlay.Push(WorkLayout);
		}
	}
}

void UDDFrameWidget::WaitShowPanel()
{
	TArray<FName> CompleteName;
	for (int i = 0; i < WaitShowPanelName.Num(); ++i)
	{
		if (AllPanelGroup.Contains(WaitShowPanelName[i]))
		{
			//ִ�н�����淽��
			DoEnterUIPanel(WaitShowPanelName[i]);
			//��ӵ������
			CompleteName.Push(WaitShowPanelName[i]);
		}
	}
	//�Ƴ���ɵ�UI
	for (int i = 0; i < CompleteName.Num(); ++i)
		WaitShowPanelName.Remove(CompleteName[i]);
	//���û�еȴ���ʾ��UI��, ֹͣ��ѭ������
	if (WaitShowPanelName.Num() == 0)
		StopInvoke(WaitShowTaskName);
}

void UDDFrameWidget::DoEnterUIPanel(FName PanelName)
{
	//��ȡ���ʵ��
	UDDPanelWidget* PanelWidget = *AllPanelGroup.Find(PanelName);
	//���ֲ������ͽ�����ӵ�����
	if (PanelWidget->UINature.LayoutType == ELayoutType::Canvas)
	{
		//��ȡ���ֿؼ�, ���ؼ�
		UCanvasPanel* WorkLayout = NULL;

		//�ж���ײ�Ĳ��ֿؼ��Ƿ���Canvas
		if (RootCanvas->GetChildrenCount() > 0)
			WorkLayout = Cast<UCanvasPanel>(RootCanvas->GetChildAt(RootCanvas->GetChildrenCount() - 1));

		if (!WorkLayout)
		{
			if (UnActiveCanvas.Num() == 0)
			{
				WorkLayout = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass());
				WorkLayout->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
			}
			else
				WorkLayout = UnActiveCanvas.Pop();
			//��Ӳ��ֿؼ����������
			UCanvasPanelSlot* FrameCanvasSlot = RootCanvas->AddChildToCanvas(WorkLayout);
			FrameCanvasSlot->SetAnchors(FAnchors(0.f, 0.f, 1.f, 1.f));
			FrameCanvasSlot->SetOffsets(FMargin(0.f, 0.f, 0.f, 0.f));
			//��ӵ��������
			ActiveCanvas.Push(WorkLayout);
		}

		switch (PanelWidget->UINature.PanelShowType)
		{
		case EPanelShowType::DoNothing:
			EnterPanelDoNothing(WorkLayout, PanelWidget);
			break;
		case EPanelShowType::HideOther:
			EnterPanelHideOther(WorkLayout, PanelWidget);
			break;
		case EPanelShowType::Reverse:
			EnterPanelReverse(WorkLayout, PanelWidget);
			break;
		}
	}
	else
	{
		UOverlay* WorkLayout = NULL;

		//������ڲ��ֿؼ�, ��ͼ�����һ�����ֿؼ�ת����Overlay
		if (RootCanvas->GetChildrenCount() > 0)
			WorkLayout = Cast<UOverlay>(RootCanvas->GetChildAt(RootCanvas->GetChildrenCount() - 1));

		if (!WorkLayout)
		{
			if (UnActiveOverlay.Num() == 0)
			{
				WorkLayout = WidgetTree->ConstructWidget<UOverlay>(UOverlay::StaticClass());
				WorkLayout->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
			}
			else
				WorkLayout = UnActiveOverlay.Pop();
			//��Ӳ��ֿؼ����������
			UCanvasPanelSlot* FrameCanvasSlot = RootCanvas->AddChildToCanvas(WorkLayout);
			FrameCanvasSlot->SetAnchors(FAnchors(0.f, 0.f, 1.f, 1.f));
			FrameCanvasSlot->SetOffsets(FMargin(0.f, 0.f, 0.f, 0.f));
			//��ӵ��������
			ActiveOverlay.Push(WorkLayout);
		}

		switch (PanelWidget->UINature.PanelShowType)
		{
		case EPanelShowType::DoNothing:
			EnterPanelDoNothing(WorkLayout, PanelWidget);
			break;
		case EPanelShowType::HideOther:
			EnterPanelHideOther(WorkLayout, PanelWidget);
			break;
		case EPanelShowType::Reverse:
			EnterPanelReverse(WorkLayout, PanelWidget);
			break;
		}
	}
}

void UDDFrameWidget::EnterPanelDoNothing(UCanvasPanel* WorkLayout, UDDPanelWidget* PanelWidget)
{
	//���UI��嵽���ؼ�
	UCanvasPanelSlot* PanelSlot = WorkLayout->AddChildToCanvas(PanelWidget);
	PanelSlot->SetAnchors(PanelWidget->UINature.Anchors);
	PanelSlot->SetOffsets(PanelWidget->UINature.Offsets);

	//��UI�����ӵ���ʾ��, UI����GetObjectName(), PanelName, ��Դϵͳ�µ�WealthName����һ��
	ShowPanelGroup.Add(PanelWidget->GetObjectName(), PanelWidget);
	//����UI���Ľ��������������
	PanelWidget->PanelEnter();
}

void UDDFrameWidget::EnterPanelDoNothing(UOverlay* WorkLayout, UDDPanelWidget* PanelWidget)
{
	//���UI��嵽Overlay����
	UOverlaySlot* PanelSlot = WorkLayout->AddChildToOverlay(PanelWidget);
	PanelSlot->SetPadding(PanelWidget->UINature.Offsets);
	PanelSlot->SetHorizontalAlignment(PanelWidget->UINature.HAlign);
	PanelSlot->SetVerticalAlignment(PanelWidget->UINature.VAlign);

	//��UI�����ӵ���ʾ��, UI����GetObjectName(), PanelName, ��Դϵͳ�µ�WealthName����һ��
	ShowPanelGroup.Add(PanelWidget->GetObjectName(), PanelWidget);
	//����UI���Ľ��������������
	PanelWidget->PanelEnter();
}

void UDDFrameWidget::EnterPanelHideOther(UCanvasPanel* WorkLayout, UDDPanelWidget* PanelWidget)
{
	//����ʾ���ͬһ�㼶��������������, �����Level_All��ȫ������, Level_All���ȼ���
	for (TMap<FName, UDDPanelWidget*>::TIterator It(ShowPanelGroup); It; ++It)
		if (PanelWidget->UINature.LayoutLevel == ELayoutLevel::Level_All || PanelWidget->UINature.LayoutLevel == It.Value()->UINature.LayoutLevel)
			It.Value()->PanelHidden();

	//���UI��嵽Layout
	UCanvasPanelSlot* PanelSlot = WorkLayout->AddChildToCanvas(PanelWidget);
	PanelSlot->SetAnchors(PanelWidget->UINature.Anchors);
	PanelSlot->SetOffsets(PanelWidget->UINature.Offsets);

	//���UI�����ӵ���ʾ��
	ShowPanelGroup.Add(PanelWidget->GetObjectName(), PanelWidget);
	//���ý�������������ں���
	PanelWidget->PanelEnter();
}

void UDDFrameWidget::EnterPanelHideOther(UOverlay* WorkLayout, UDDPanelWidget* PanelWidget)
{
	//����ʾ���ͬһ�㼶��������������, �����Level_All��ȫ������, Level_All���ȼ���
	for (TMap<FName, UDDPanelWidget*>::TIterator It(ShowPanelGroup); It; ++It)
		if (PanelWidget->UINature.LayoutLevel == ELayoutLevel::Level_All || PanelWidget->UINature.LayoutLevel == It.Value()->UINature.LayoutLevel)
			It.Value()->PanelHidden();

	//��ӵ�UOverlay
	UOverlaySlot* PanelSlot = WorkLayout->AddChildToOverlay(PanelWidget);
	PanelSlot->SetPadding(PanelWidget->UINature.Offsets);
	PanelSlot->SetHorizontalAlignment(PanelWidget->UINature.HAlign);
	PanelSlot->SetVerticalAlignment(PanelWidget->UINature.VAlign);

	//���UI�����ӵ���ʾ��
	ShowPanelGroup.Add(PanelWidget->GetObjectName(), PanelWidget);
	//���ý�������������ں���
	PanelWidget->PanelEnter();
}

void UDDFrameWidget::EnterPanelReverse(UCanvasPanel* WorkLayout, UDDPanelWidget* PanelWidget)
{
	//��ջ�����һ���ڵ㶳��
	if (PopPanelStack.Num() > 0)
	{
		TArray<UDDPanelWidget*> PanelStack;
		PopPanelStack.GenerateValueArray(PanelStack);
		PanelStack[PanelStack.Num() - 1]->PanelFreeze();
	}

	//��������
	ActiveMask(WorkLayout, PanelWidget->UINature.PanelLucenyType);

	//��ӵ���������
	UCanvasPanelSlot* PanelSlot = WorkLayout->AddChildToCanvas(PanelWidget);
	PanelSlot->SetAnchors(PanelWidget->UINature.Anchors);
	PanelSlot->SetOffsets(PanelWidget->UINature.Offsets);

	//��ӵ�����ջ, �������н����������ں���
	PopPanelStack.Add(PanelWidget->GetObjectName(), PanelWidget);
	PanelWidget->PanelEnter();
}

void UDDFrameWidget::EnterPanelReverse(UOverlay* WorkLayout, UDDPanelWidget* PanelWidget)
{
	//��ջ�����һ���ڵ㶳��
	if (PopPanelStack.Num() > 0)
	{
		TArray<UDDPanelWidget*> PanelStack;
		PopPanelStack.GenerateValueArray(PanelStack);
		PanelStack[PanelStack.Num() - 1]->PanelFreeze();
	}

	//��������
	ActiveMask(WorkLayout, PanelWidget->UINature.PanelLucenyType);

	//��ӵ���������
	UOverlaySlot* PanelSlot = WorkLayout->AddChildToOverlay(PanelWidget);
	PanelSlot->SetPadding(PanelWidget->UINature.Offsets);
	PanelSlot->SetHorizontalAlignment(PanelWidget->UINature.HAlign);
	PanelSlot->SetVerticalAlignment(PanelWidget->UINature.VAlign);

	//��ӵ�����ջ, �������н����������ں���
	PopPanelStack.Add(PanelWidget->GetObjectName(), PanelWidget);
	PanelWidget->PanelEnter();
}



void UDDFrameWidget::DoShowUIPanel(FName PanelName)
{
	//��ȫ�����ȡ����
	UDDPanelWidget* PanelWidget = *AllPanelGroup.Find(PanelName);

	//����UI������͵��ò�ͬ����ʾ����
	switch (PanelWidget->UINature.PanelShowType)
	{
	case EPanelShowType::DoNothing:
		ShowPanelDoNothing(PanelWidget);
		break;
	case EPanelShowType::HideOther:
		ShowPanelHideOther(PanelWidget);
		break;
	case EPanelShowType::Reverse:
		ShowPanelReverse(PanelWidget);
		break;
	}
}

void UDDFrameWidget::ShowPanelDoNothing(UDDPanelWidget* PanelWidget)
{
	//���UI��嵽��ʾ��
	ShowPanelGroup.Add(PanelWidget->GetObjectName(), PanelWidget);
	PanelWidget->PanelDisplay();
}

void UDDFrameWidget::ShowPanelHideOther(UDDPanelWidget* PanelWidget)
{
	//����ʾ���ͬһ�㼶��������������, �����Level_All��ȫ������, Level_All���ȼ���
	for (TMap<FName, UDDPanelWidget*>::TIterator It(ShowPanelGroup); It; ++It)
		if (PanelWidget->UINature.LayoutLevel == ELayoutLevel::Level_All || PanelWidget->UINature.LayoutLevel == It.Value()->UINature.LayoutLevel)
			It.Value()->PanelHidden();

	//��ӵ���ʾ��
	ShowPanelGroup.Add(PanelWidget->GetObjectName(), PanelWidget);
	PanelWidget->PanelDisplay();
}

void UDDFrameWidget::ShowPanelReverse(UDDPanelWidget* PanelWidget)
{
	//�������ջ����Ԫ��, �������ĵ���
	if (PopPanelStack.Num() > 0)
	{
		TArray<UDDPanelWidget*> PanelStack;
		PopPanelStack.GenerateValueArray(PanelStack);
		PanelStack[PanelStack.Num() - 1]->PanelFreeze();
	}

	//�����������ӵ�ǰ���ؼ��Ƴ�, ��������ӵ����Ľ���
	if (PanelWidget->UINature.LayoutType == ELayoutType::Canvas)
	{
		UCanvasPanel* PreWorkLayout = Cast<UCanvasPanel>(PanelWidget->GetParent());
		UCanvasPanelSlot* PrePanelSlot = Cast<UCanvasPanelSlot>(PanelWidget->Slot);
		FAnchors PreAnchors = PrePanelSlot->GetAnchors();
		FMargin PreOffsets = PrePanelSlot->GetOffsets();

		//��PanelWidget�ӵ�ǰ���ؼ��Ƴ�
		PanelWidget->RemoveFromParent();
		//�����ؼ�
		if (PreWorkLayout->GetChildrenCount() == 0)
		{
			PreWorkLayout->RemoveFromParent();
			ActiveCanvas.Remove(PreWorkLayout);
			UnActiveCanvas.Push(PreWorkLayout);
		}

		//Ѱ������WorkLayout
		UCanvasPanel* WorkLayout = NULL;

		//�ж���ײ�Ĳ��ֿؼ��Ƿ���Canvas
		if (RootCanvas->GetChildrenCount() > 0)
			WorkLayout = Cast<UCanvasPanel>(RootCanvas->GetChildAt(RootCanvas->GetChildrenCount() - 1));

		if (!WorkLayout)
		{
			if (UnActiveCanvas.Num() == 0)
			{
				WorkLayout = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass());
				WorkLayout->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
			}
			else
				WorkLayout = UnActiveCanvas.Pop();
			//��Ӳ��ֿؼ����������
			UCanvasPanelSlot* FrameCanvasSlot = RootCanvas->AddChildToCanvas(WorkLayout);
			FrameCanvasSlot->SetAnchors(FAnchors(0.f, 0.f, 1.f, 1.f));
			FrameCanvasSlot->SetOffsets(FMargin(0.f, 0.f, 0.f, 0.f));
			//��ӵ��������
			ActiveCanvas.Push(WorkLayout);
		}

		//�������ֵ���㵯��
		ActiveMask(WorkLayout, PanelWidget->UINature.PanelLucenyType);

		//�ѵ�����ӵ���ȡ�����ĸ��ؼ�
		UCanvasPanelSlot* PanelSlot = WorkLayout->AddChildToCanvas(PanelWidget);
		PanelSlot->SetAnchors(PreAnchors);
		PanelSlot->SetOffsets(PreOffsets);
	}
	else
	{
		UOverlay* PreWorkLayout = Cast<UOverlay>(PanelWidget->GetParent());
		UOverlaySlot* PrePanelSlot = Cast<UOverlaySlot>(PanelWidget->Slot);
		FMargin PrePadding = PrePanelSlot->Padding;
		TEnumAsByte<EHorizontalAlignment> PreHAlign = PrePanelSlot->HorizontalAlignment;
		TEnumAsByte<EVerticalAlignment> PreVAlign = PrePanelSlot->VerticalAlignment;

		//��PanelWidget�ӵ�ǰ���ؼ��Ƴ�
		PanelWidget->RemoveFromParent();
		//�����ؼ�
		if (PreWorkLayout->GetChildrenCount() == 0)
		{
			PreWorkLayout->RemoveFromParent();
			ActiveOverlay.Remove(PreWorkLayout);
			UnActiveOverlay.Push(PreWorkLayout);
		}

		UOverlay* WorkLayout = NULL;

		//������ڲ��ֿؼ�, ��ͼ�����һ�����ֿؼ�ת����Overlay
		if (RootCanvas->GetChildrenCount() > 0)
			WorkLayout = Cast<UOverlay>(RootCanvas->GetChildAt(RootCanvas->GetChildrenCount() - 1));

		if (!WorkLayout)
		{
			if (UnActiveOverlay.Num() == 0)
			{
				WorkLayout = WidgetTree->ConstructWidget<UOverlay>(UOverlay::StaticClass());
				WorkLayout->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
			}
			else
				WorkLayout = UnActiveOverlay.Pop();
			//��Ӳ��ֿؼ����������
			UCanvasPanelSlot* FrameCanvasSlot = RootCanvas->AddChildToCanvas(WorkLayout);
			FrameCanvasSlot->SetAnchors(FAnchors(0.f, 0.f, 1.f, 1.f));
			FrameCanvasSlot->SetOffsets(FMargin(0.f, 0.f, 0.f, 0.f));
			//��ӵ��������
			ActiveOverlay.Push(WorkLayout);
		}

		//�������ֵ���㵯��
		ActiveMask(WorkLayout, PanelWidget->UINature.PanelLucenyType);

		//��ӵ�������ȡ�������Ĳ��ֿؼ�
		UOverlaySlot* PanelSlot = WorkLayout->AddChildToOverlay(PanelWidget);
		PanelSlot->SetPadding(PrePadding);
		PanelSlot->SetHorizontalAlignment(PreHAlign);
		PanelSlot->SetVerticalAlignment(PreVAlign);
	}

	//��ӵ�����ջ
	PopPanelStack.Add(PanelWidget->GetObjectName(), PanelWidget);
	//��ʾ����
	PanelWidget->PanelDisplay();
}


void UDDFrameWidget::HideUIPanel(FName PanelName)
{
	//�ж�UI����Ƿ�����ʾ����ߵ���ջ
	if (!ShowPanelGroup.Contains(PanelName) && !PopPanelStack.Contains(PanelName))
		return;

	//��ȡUI���
	UDDPanelWidget* PanelWidget = *AllPanelGroup.Find(PanelName);

	//����UI������͵��ò�ͬ�����ط���
	switch (PanelWidget->UINature.PanelShowType)
	{
	case EPanelShowType::DoNothing:
		HidePanelDoNothing(PanelWidget);
		break;
	case EPanelShowType::HideOther:
		HidePanelHideOther(PanelWidget);
		break;
	case EPanelShowType::Reverse:
		HidePanelReverse(PanelWidget);
		break;
	}
}


void UDDFrameWidget::HidePanelDoNothing(UDDPanelWidget* PanelWidget)
{
	//����ʾ���Ƴ�
	ShowPanelGroup.Remove(PanelWidget->GetObjectName());
	//����������������
	PanelWidget->PanelHidden();
}

void UDDFrameWidget::HidePanelHideOther(UDDPanelWidget* PanelWidget)
{
	//����ʾ���Ƴ�
	ShowPanelGroup.Remove(PanelWidget->GetObjectName());

	//��ʾͬһ�㼶�µ�����UI���, ����������Level_All�㼶, ��ʾ������ʾ������
	for (TMap<FName, UDDPanelWidget*>::TIterator It(ShowPanelGroup); It; ++It)
		if (PanelWidget->UINature.LayoutLevel == ELayoutLevel::Level_All || PanelWidget->UINature.LayoutLevel == It.Value()->UINature.LayoutLevel)
			It.Value()->PanelDisplay();

	//����������������
	PanelWidget->PanelHidden();
}

void UDDFrameWidget::HidePanelReverse(UDDPanelWidget* PanelWidget)
{
	//��ȡ����ջ������
	TArray<UDDPanelWidget*> PopStack;
	PopPanelStack.GenerateValueArray(PopStack);

	//����������ϲ�ĵ���, ֱ�ӷ���
	if (PopStack[PopStack.Num() - 1] != PanelWidget)
	{
		DDH::Debug() << PanelWidget->GetObjectName() << " Is Not Last Panel In PopPanelStack" << DDH::Endl();
		return;
	}

	//��ջ���Ƴ�
	PopPanelStack.Remove(PanelWidget->GetObjectName());
	//ִ�����غ���
	PanelWidget->PanelHidden();

	//��������ջ
	PopStack.Pop();
	if (PopStack.Num() > 0)
	{
		UDDPanelWidget* PrePanelWidget = PopStack[PopStack.Num() - 1];
		//ת�����ֵ��µ����ĵ�������һ��
		TransferMask(PrePanelWidget);
		//�ظ�����������ĵ���
		PrePanelWidget->PanelResume();
	}
	else
		RemoveMaskPanel();
}

void UDDFrameWidget::ExitUIPanel(FName PanelName)
{
	//�������Ԥ���ص���û�м������,  �������������ִ�е�һ����ʾ������ǰ���غ������ִ�����ٽ���,  ���ڻ��������
	if (!AllPanelGroup.Contains(PanelName) && LoadedPanelName.Contains(PanelName))
	{
		DDH::Debug() << "Do Not Exit UI Panel when Loading Panel" << DDH::Endl();
		return;
	}

	//������UI���û�м��ص�ȫ����
	if (!AllPanelGroup.Contains(PanelName))
		return;

	//��ȡUI���
	UDDPanelWidget* PanelWidget = *AllPanelGroup.Find(PanelName);
	//�Ƿ�����ʾ����ߵ���ջ��
	if (!ShowPanelGroup.Contains(PanelName) && !PopPanelStack.Contains(PanelName))
	{
		AllPanelGroup.Remove(PanelName);
		LoadedPanelName.Remove(PanelName);
		//����PanelExit��������, ������ڴ��ͷŴ����ڸ����ں�������
		PanelWidget->PanelExit();
		//ֱ�ӷ���
		return;
	}

	//��������UI�����ص�����
	switch (PanelWidget->UINature.PanelShowType)
	{
	case EPanelShowType::DoNothing:
		ExitPanelDoNothing(PanelWidget);
		break;
	case EPanelShowType::HideOther:
		ExitPanelHideOther(PanelWidget);
		break;
	case EPanelShowType::Reverse:
		ExitPanelReverse(PanelWidget);
		break;
	}
}

void UDDFrameWidget::ExitPanelDoNothing(UDDPanelWidget* PanelWidget)
{
	//����ʵ��, ȫ����, �����������Ƴ�
	ShowPanelGroup.Remove(PanelWidget->GetObjectName());
	AllPanelGroup.Remove(PanelWidget->GetObjectName());
	LoadedPanelName.Remove(PanelWidget->GetObjectName());

	//����������������
	PanelWidget->PanelExit();
}

void UDDFrameWidget::ExitPanelHideOther(UDDPanelWidget* PanelWidget)
{
	//����ʵ��, ȫ����, �����������Ƴ�
	ShowPanelGroup.Remove(PanelWidget->GetObjectName());
	AllPanelGroup.Remove(PanelWidget->GetObjectName());
	LoadedPanelName.Remove(PanelWidget->GetObjectName());

	//��ʾͬһ�㼶�µ�����UI���, ����������Level_All�㼶, ��ʾ������ʾ������
	for (TMap<FName, UDDPanelWidget*>::TIterator It(ShowPanelGroup); It; ++It)
		if (PanelWidget->UINature.LayoutLevel == ELayoutLevel::Level_All || PanelWidget->UINature.LayoutLevel == It.Value()->UINature.LayoutLevel)
			It.Value()->PanelDisplay();

	//����������������
	PanelWidget->PanelExit();

}

void UDDFrameWidget::ExitPanelReverse(UDDPanelWidget* PanelWidget)
{
	//��ȡ����ջ������
	TArray<UDDPanelWidget*> PopStack;
	PopPanelStack.GenerateValueArray(PopStack);

	//����������ϲ�ĵ���, ֱ�ӷ���
	if (PopStack[PopStack.Num() - 1] != PanelWidget)
	{
		DDH::Debug() << PanelWidget->GetObjectName() << " Is Not Last Panel In PopPanelStack" << DDH::Endl();
		return;
	}

	//��ջ, ȫ����, �������������Ƴ�
	PopPanelStack.Remove(PanelWidget->GetObjectName());
	AllPanelGroup.Remove(PanelWidget->GetObjectName());
	LoadedPanelName.Remove(PanelWidget->GetObjectName());
	//���������������ں���
	PanelWidget->PanelExit();

	//��������ջ
	PopStack.Pop();
	if (PopStack.Num() > 0)
	{
		UDDPanelWidget* PrePanelWidget = PopStack[PopStack.Num() - 1];
		//ת�����ֵ��µ����ĵ�������һ��
		TransferMask(PrePanelWidget);
		//�ظ�����������ĵ���
		PrePanelWidget->PanelResume();
	}
	else
		RemoveMaskPanel();
}

void UDDFrameWidget::ActiveMask(UCanvasPanel* WorkLayout, EPanelLucenyType LucenyType)
{
	//�Ƴ�����
	RemoveMaskPanel(WorkLayout);

	//������ֵ��µĸ��ؼ�
	UCanvasPanelSlot* MaskSlot = WorkLayout->AddChildToCanvas(MaskPanel);
	MaskSlot->SetAnchors(FAnchors(0.f, 0.f, 1.f, 1.f));
	MaskSlot->SetOffsets(FMargin(0.f, 0.f, 0.f, 0.f));

	//����͸����������͸����
	switch (LucenyType)
	{
	case EPanelLucenyType::Lucency:
		MaskPanel->SetVisibility(ESlateVisibility::Visible);
		MaskPanel->SetColorAndOpacity(NormalLucency);
		break;
	case EPanelLucenyType::Translucence:
		MaskPanel->SetVisibility(ESlateVisibility::Visible);
		MaskPanel->SetColorAndOpacity(TranslucenceLucency);
		break;
	case EPanelLucenyType::ImPenetrable:
		MaskPanel->SetVisibility(ESlateVisibility::Visible);
		MaskPanel->SetColorAndOpacity(ImPenetrableLucency);
		break;
	case EPanelLucenyType::Pentrate:
		MaskPanel->SetVisibility(ESlateVisibility::Hidden);
		MaskPanel->SetColorAndOpacity(NormalLucency);
		break;
	}
}

void UDDFrameWidget::ActiveMask(UOverlay* WorkLayout, EPanelLucenyType LucenyType)
{
	//�Ƴ�����
	RemoveMaskPanel(WorkLayout);

	//������ֵ��µĸ��ؼ�
	UOverlaySlot* MaskSlot = WorkLayout->AddChildToOverlay(MaskPanel);
	MaskSlot->SetPadding(FMargin(0.f, 0.f, 0.f, 0.f));
	MaskSlot->SetHorizontalAlignment(HAlign_Fill);
	MaskSlot->SetVerticalAlignment(VAlign_Fill);


	//����͸����������͸����
	switch (LucenyType)
	{
	case EPanelLucenyType::Lucency:
		MaskPanel->SetVisibility(ESlateVisibility::Visible);
		MaskPanel->SetColorAndOpacity(NormalLucency);
		break;
	case EPanelLucenyType::Translucence:
		MaskPanel->SetVisibility(ESlateVisibility::Visible);
		MaskPanel->SetColorAndOpacity(TranslucenceLucency);
		break;
	case EPanelLucenyType::ImPenetrable:
		MaskPanel->SetVisibility(ESlateVisibility::Visible);
		MaskPanel->SetColorAndOpacity(ImPenetrableLucency);
		break;
	case EPanelLucenyType::Pentrate:
		MaskPanel->SetVisibility(ESlateVisibility::Hidden);
		MaskPanel->SetColorAndOpacity(NormalLucency);
		break;
	}
}

void UDDFrameWidget::TransferMask(UDDPanelWidget* PanelWidget)
{
	//��ʱ����PanelWidget�Լ����ϲ������UI���
	TArray<UDDPanelWidget*> AbovePanelStack;
	//��ʱ����PanelWidget�Լ����ϲ������UI���Ĳ�������
	TArray<FUINature> AboveNatureStack;

	//���ֲ���
	if (PanelWidget->UINature.LayoutType == ELayoutType::Canvas)
	{
		UCanvasPanel* WorkLayout = Cast<UCanvasPanel>(PanelWidget->GetParent());

		int32 StartOrder = WorkLayout->GetChildIndex(PanelWidget);
		for (int i = StartOrder; i < WorkLayout->GetChildrenCount(); ++i)
		{
			UDDPanelWidget* TempPanelWidget = Cast<UDDPanelWidget>(WorkLayout->GetChildAt(i));
			//�������DDPanelWidget
			if (!TempPanelWidget)
				continue;
			//����UI����Լ���������
			AbovePanelStack.Push(TempPanelWidget);
			FUINature TempUINature;
			UCanvasPanelSlot* TempPanelSlot = Cast<UCanvasPanelSlot>(TempPanelWidget);
			TempUINature.Anchors = TempPanelSlot->GetAnchors();
			TempUINature.Offsets = TempPanelSlot->GetOffsets();
			AboveNatureStack.Push(TempUINature);
		}

		//ѭ���Ƴ��ϲ�UI���
		for (int i = 0; i < AbovePanelStack.Num(); ++i)
			AbovePanelStack[i]->RemoveFromParent();

		//������ֵ��µĸ��ؼ�
		UCanvasPanelSlot* MaskSlot = WorkLayout->AddChildToCanvas(MaskPanel);
		MaskSlot->SetAnchors(FAnchors(0.f, 0.f, 1.f, 1.f));
		MaskSlot->SetOffsets(FMargin(0.f, 0.f, 0.f, 0.f));

		//����͸����������͸����
		switch (PanelWidget->UINature.PanelLucenyType)
		{
		case EPanelLucenyType::Lucency:
			MaskPanel->SetVisibility(ESlateVisibility::Visible);
			MaskPanel->SetColorAndOpacity(NormalLucency);
			break;
		case EPanelLucenyType::Translucence:
			MaskPanel->SetVisibility(ESlateVisibility::Visible);
			MaskPanel->SetColorAndOpacity(TranslucenceLucency);
			break;
		case EPanelLucenyType::ImPenetrable:
			MaskPanel->SetVisibility(ESlateVisibility::Visible);
			MaskPanel->SetColorAndOpacity(ImPenetrableLucency);
			break;
		case EPanelLucenyType::Pentrate:
			MaskPanel->SetVisibility(ESlateVisibility::Hidden);
			MaskPanel->SetColorAndOpacity(NormalLucency);
			break;
		}

		//�Ѹղ��Ƴ���UI��尴˳��������ӵ����ֿؼ�
		for (int i = 0; i < AbovePanelStack.Num(); ++i)
		{
			UCanvasPanelSlot* PanelSlot = WorkLayout->AddChildToCanvas(AbovePanelStack[i]);
			PanelSlot->SetAnchors(AboveNatureStack[i].Anchors);
			PanelSlot->SetOffsets(AboveNatureStack[i].Offsets);
		}
	}
	else
	{
		UOverlay* WorkLayout = Cast<UOverlay>(PanelWidget->GetParent());

		int32 StartOrder = WorkLayout->GetChildIndex(PanelWidget);
		for (int i = StartOrder; i < WorkLayout->GetChildrenCount(); ++i)
		{
			UDDPanelWidget* TempPanelWidget = Cast<UDDPanelWidget>(WorkLayout->GetChildAt(i));
			if (!TempPanelWidget)
				continue;
			//����UI����Լ���������
			AbovePanelStack.Push(TempPanelWidget);
			FUINature TempUINature;
			UOverlaySlot* TempPanelSlot = Cast<UOverlaySlot>(TempPanelWidget->Slot);
			TempUINature.Offsets = TempPanelSlot->Padding;
			TempUINature.HAlign = TempPanelSlot->HorizontalAlignment;
			TempUINature.VAlign = TempPanelSlot->VerticalAlignment;
			AboveNatureStack.Push(TempUINature);
		}

		//ѭ���Ƴ��ϲ�UI���
		for (int i = 0; i < AbovePanelStack.Num(); ++i)
			AbovePanelStack[i]->RemoveFromParent();

		//������ֵ��µĸ��ؼ�
		UOverlaySlot* MaskSlot = WorkLayout->AddChildToOverlay(MaskPanel);
		MaskSlot->SetPadding(FMargin(0.f, 0.f, 0.f, 0.f));
		MaskSlot->SetHorizontalAlignment(HAlign_Fill);
		MaskSlot->SetVerticalAlignment(VAlign_Fill);


		//����͸����������͸����
		switch (PanelWidget->UINature.PanelLucenyType)
		{
		case EPanelLucenyType::Lucency:
			MaskPanel->SetVisibility(ESlateVisibility::Visible);
			MaskPanel->SetColorAndOpacity(NormalLucency);
			break;
		case EPanelLucenyType::Translucence:
			MaskPanel->SetVisibility(ESlateVisibility::Visible);
			MaskPanel->SetColorAndOpacity(TranslucenceLucency);
			break;
		case EPanelLucenyType::ImPenetrable:
			MaskPanel->SetVisibility(ESlateVisibility::Visible);
			MaskPanel->SetColorAndOpacity(ImPenetrableLucency);
			break;
		case EPanelLucenyType::Pentrate:
			MaskPanel->SetVisibility(ESlateVisibility::Hidden);
			MaskPanel->SetColorAndOpacity(NormalLucency);
			break;
		}

		//��UI������ز��ֿؼ�
		for (int i = 0; i < AbovePanelStack.Num(); ++i)
		{
			UOverlaySlot* PanelSlot = WorkLayout->AddChildToOverlay(AbovePanelStack[i]);
			PanelSlot->SetPadding(AboveNatureStack[i].Offsets);
			PanelSlot->SetHorizontalAlignment(AboveNatureStack[i].HAlign);
			PanelSlot->SetVerticalAlignment(AboveNatureStack[i].VAlign);
		}
	}
}

void UDDFrameWidget::RemoveMaskPanel(UPanelWidget* WorkLayout /*= NULL*/)
{
	//��ȡ���ֵ�ǰ���ؼ�
	UPanelWidget* MaskParent = MaskPanel->GetParent();
	if (MaskParent)
	{
		//�Ƚϵ�ǰ���ؼ��뽫Ҫ����ĸ��ؼ��Ƿ���ͬ, ��ǰ���ؼ���֮�ؼ�Ϊ1
		if (MaskParent != WorkLayout && MaskParent->GetChildrenCount() == 1)
		{
			MaskParent->RemoveFromParent();
			UCanvasPanel* ParentCanvas = Cast<UCanvasPanel>(MaskParent);
			UOverlay* ParentOverlay = Cast<UOverlay>(MaskParent);
			if (ParentCanvas)
			{
				ActiveCanvas.Remove(ParentCanvas);
				UnActiveCanvas.Push(ParentCanvas);
			}
			else if (ParentOverlay)
			{
				ActiveOverlay.Remove(ParentOverlay);
				UnActiveOverlay.Push(ParentOverlay);
			}
		}
		//�����ִӸ����Ƴ�
		MaskPanel->RemoveFromParent();
	}
}