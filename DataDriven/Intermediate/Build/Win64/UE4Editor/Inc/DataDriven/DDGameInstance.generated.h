// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATADRIVEN_DDGameInstance_generated_h
#error "DDGameInstance.generated.h already included, missing '#pragma once' in DDGameInstance.h"
#endif
#define DATADRIVEN_DDGameInstance_generated_h

#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDGameInstance_h_16_RPC_WRAPPERS
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDGameInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDGameInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDDGameInstance(); \
	friend struct Z_Construct_UClass_UDDGameInstance_Statics; \
public: \
	DECLARE_CLASS(UDDGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DataDriven"), NO_API) \
	DECLARE_SERIALIZER(UDDGameInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UDDGameInstance*>(this); }


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDGameInstance_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUDDGameInstance(); \
	friend struct Z_Construct_UClass_UDDGameInstance_Statics; \
public: \
	DECLARE_CLASS(UDDGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DataDriven"), NO_API) \
	DECLARE_SERIALIZER(UDDGameInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UDDGameInstance*>(this); }


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDGameInstance_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDDGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDDGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDDGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDDGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDDGameInstance(UDDGameInstance&&); \
	NO_API UDDGameInstance(const UDDGameInstance&); \
public:


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDGameInstance_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDDGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDDGameInstance(UDDGameInstance&&); \
	NO_API UDDGameInstance(const UDDGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDDGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDDGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDDGameInstance)


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDGameInstance_h_16_PRIVATE_PROPERTY_OFFSET
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDGameInstance_h_13_PROLOG
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDGameInstance_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDGameInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDGameInstance_h_16_RPC_WRAPPERS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDGameInstance_h_16_INCLASS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDGameInstance_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDGameInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDGameInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDGameInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDGameInstance_h_16_INCLASS_NO_PURE_DECLS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDGameInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATADRIVEN_API UClass* StaticClass<class UDDGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
