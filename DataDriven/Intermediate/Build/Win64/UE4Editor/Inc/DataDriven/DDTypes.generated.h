// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATADRIVEN_DDTypes_generated_h
#error "DDTypes.generated.h already included, missing '#pragma once' in DDTypes.h"
#endif
#define DATADRIVEN_DDTypes_generated_h

#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_1042_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUINature_Statics; \
	DATADRIVEN_API static class UScriptStruct* StaticStruct();


template<> DATADRIVEN_API UScriptStruct* StaticStruct<struct FUINature>();

#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_935_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWealthURL_Statics; \
	DATADRIVEN_API static class UScriptStruct* StaticStruct();


template<> DATADRIVEN_API UScriptStruct* StaticStruct<struct FWealthURL>();

#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_906_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClassWealthEntry_Statics; \
	DATADRIVEN_API static class UScriptStruct* StaticStruct();


template<> DATADRIVEN_API UScriptStruct* StaticStruct<struct FClassWealthEntry>();

#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_873_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FObjectWealthEntry_Statics; \
	DATADRIVEN_API static class UScriptStruct* StaticStruct();


template<> DATADRIVEN_API UScriptStruct* StaticStruct<struct FObjectWealthEntry>();

#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_860_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWealthWidget_Statics; \
	DATADRIVEN_API static class UScriptStruct* StaticStruct(); \
	typedef FWealthItem Super;


template<> DATADRIVEN_API UScriptStruct* StaticStruct<struct FWealthWidget>();

#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_845_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWealthActor_Statics; \
	DATADRIVEN_API static class UScriptStruct* StaticStruct(); \
	typedef FWealthItem Super;


template<> DATADRIVEN_API UScriptStruct* StaticStruct<struct FWealthActor>();

#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_833_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWealthObject_Statics; \
	DATADRIVEN_API static class UScriptStruct* StaticStruct(); \
	typedef FWealthItem Super;


template<> DATADRIVEN_API UScriptStruct* StaticStruct<struct FWealthObject>();

#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_816_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWealthItem_Statics; \
	DATADRIVEN_API static class UScriptStruct* StaticStruct();


template<> DATADRIVEN_API UScriptStruct* StaticStruct<struct FWealthItem>();

#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_19_RPC_WRAPPERS
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDDTypes(); \
	friend struct Z_Construct_UClass_UDDTypes_Statics; \
public: \
	DECLARE_CLASS(UDDTypes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataDriven"), NO_API) \
	DECLARE_SERIALIZER(UDDTypes)


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUDDTypes(); \
	friend struct Z_Construct_UClass_UDDTypes_Statics; \
public: \
	DECLARE_CLASS(UDDTypes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataDriven"), NO_API) \
	DECLARE_SERIALIZER(UDDTypes)


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDDTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDDTypes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDDTypes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDDTypes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDDTypes(UDDTypes&&); \
	NO_API UDDTypes(const UDDTypes&); \
public:


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDDTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDDTypes(UDDTypes&&); \
	NO_API UDDTypes(const UDDTypes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDDTypes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDDTypes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDDTypes)


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_19_PRIVATE_PROPERTY_OFFSET
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_16_PROLOG
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_19_PRIVATE_PROPERTY_OFFSET \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_19_RPC_WRAPPERS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_19_INCLASS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_19_PRIVATE_PROPERTY_OFFSET \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_19_INCLASS_NO_PURE_DECLS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATADRIVEN_API UClass* StaticClass<class UDDTypes>();

#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_961_RPC_WRAPPERS
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_961_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_961_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWealthData(); \
	friend struct Z_Construct_UClass_UWealthData_Statics; \
public: \
	DECLARE_CLASS(UWealthData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataDriven"), NO_API) \
	DECLARE_SERIALIZER(UWealthData)


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_961_INCLASS \
private: \
	static void StaticRegisterNativesUWealthData(); \
	friend struct Z_Construct_UClass_UWealthData_Statics; \
public: \
	DECLARE_CLASS(UWealthData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataDriven"), NO_API) \
	DECLARE_SERIALIZER(UWealthData)


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_961_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWealthData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWealthData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWealthData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWealthData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWealthData(UWealthData&&); \
	NO_API UWealthData(const UWealthData&); \
public:


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_961_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWealthData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWealthData(UWealthData&&); \
	NO_API UWealthData(const UWealthData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWealthData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWealthData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWealthData)


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_961_PRIVATE_PROPERTY_OFFSET
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_958_PROLOG
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_961_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_961_PRIVATE_PROPERTY_OFFSET \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_961_RPC_WRAPPERS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_961_INCLASS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_961_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_961_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_961_PRIVATE_PROPERTY_OFFSET \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_961_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_961_INCLASS_NO_PURE_DECLS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h_961_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATADRIVEN_API UClass* StaticClass<class UWealthData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDCommon_DDTypes_h


#define FOREACH_ENUM_EPANELLUCENYTYPE(op) \
	op(EPanelLucenyType::Lucency) \
	op(EPanelLucenyType::Translucence) \
	op(EPanelLucenyType::ImPenetrable) \
	op(EPanelLucenyType::Pentrate) 

enum class EPanelLucenyType : uint8;
template<> DATADRIVEN_API UEnum* StaticEnum<EPanelLucenyType>();

#define FOREACH_ENUM_EPANELSHOWTYPE(op) \
	op(EPanelShowType::DoNothing) \
	op(EPanelShowType::HideOther) \
	op(EPanelShowType::Reverse) 

enum class EPanelShowType : uint8;
template<> DATADRIVEN_API UEnum* StaticEnum<EPanelShowType>();

#define FOREACH_ENUM_ELAYOUTLEVEL(op) \
	op(ELayoutLevel::Level_0) \
	op(ELayoutLevel::Level_1) \
	op(ELayoutLevel::Level_2) \
	op(ELayoutLevel::Level_3) \
	op(ELayoutLevel::Level_All) 

enum class ELayoutLevel : uint8;
template<> DATADRIVEN_API UEnum* StaticEnum<ELayoutLevel>();

#define FOREACH_ENUM_ELAYOUTTYPE(op) \
	op(ELayoutType::Canvas) \
	op(ELayoutType::Overlay) 

enum class ELayoutType : uint8;
template<> DATADRIVEN_API UEnum* StaticEnum<ELayoutType>();

#define FOREACH_ENUM_EWEALTHTYPE(op) \
	op(EWealthType::Object) \
	op(EWealthType::Actor) \
	op(EWealthType::Widget) 

enum class EWealthType : uint8;
template<> DATADRIVEN_API UEnum* StaticEnum<EWealthType>();

#define FOREACH_ENUM_ECALLRESULT(op) \
	op(ECallResult::NoModule) \
	op(ECallResult::LackObject) \
	op(ECallResult::NoFunction) \
	op(ECallResult::Succeed) 

enum class ECallResult : uint8;
template<> DATADRIVEN_API UEnum* StaticEnum<ECallResult>();

#define FOREACH_ENUM_EAGREEMENTTYPE(op) \
	op(EAgreementType::SelfObject) \
	op(EAgreementType::OtherObject) \
	op(EAgreementType::ClassOtherObject) \
	op(EAgreementType::SelfClass) \
	op(EAgreementType::OtherClass) \
	op(EAgreementType::All) 

enum class EAgreementType : uint8;
template<> DATADRIVEN_API UEnum* StaticEnum<EAgreementType>();

#define FOREACH_ENUM_EBASEOBJECTSTATE(op) \
	op(EBaseObjectState::Active) \
	op(EBaseObjectState::Stable) \
	op(EBaseObjectState::Destroy) 

enum class EBaseObjectState : uint8;
template<> DATADRIVEN_API UEnum* StaticEnum<EBaseObjectState>();

#define FOREACH_ENUM_EBASEOBJECTLIFE(op) \
	op(EBaseObjectLife::None) \
	op(EBaseObjectLife::Init) \
	op(EBaseObjectLife::Loading) \
	op(EBaseObjectLife::Register) \
	op(EBaseObjectLife::Enable) \
	op(EBaseObjectLife::Disable) \
	op(EBaseObjectLife::UnRegister) \
	op(EBaseObjectLife::UnLoading) 

enum class EBaseObjectLife : uint8;
template<> DATADRIVEN_API UEnum* StaticEnum<EBaseObjectLife>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
