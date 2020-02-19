// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATADRIVEN_DDObject_generated_h
#error "DDObject.generated.h already included, missing '#pragma once' in DDObject.h"
#endif
#define DATADRIVEN_DDObject_generated_h

#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDObject_h_16_RPC_WRAPPERS
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDObject_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDObject_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDDObject(); \
	friend struct Z_Construct_UClass_UDDObject_Statics; \
public: \
	DECLARE_CLASS(UDDObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataDriven"), NO_API) \
	DECLARE_SERIALIZER(UDDObject) \
	virtual UObject* _getUObject() const override { return const_cast<UDDObject*>(this); }


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDObject_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUDDObject(); \
	friend struct Z_Construct_UClass_UDDObject_Statics; \
public: \
	DECLARE_CLASS(UDDObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataDriven"), NO_API) \
	DECLARE_SERIALIZER(UDDObject) \
	virtual UObject* _getUObject() const override { return const_cast<UDDObject*>(this); }


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDObject_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDDObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDDObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDDObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDDObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDDObject(UDDObject&&); \
	NO_API UDDObject(const UDDObject&); \
public:


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDObject_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDDObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDDObject(UDDObject&&); \
	NO_API UDDObject(const UDDObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDDObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDDObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDDObject)


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDObject_h_16_PRIVATE_PROPERTY_OFFSET
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDObject_h_13_PROLOG
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDObject_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDObject_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDObject_h_16_RPC_WRAPPERS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDObject_h_16_INCLASS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDObject_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDObject_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDObject_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDObject_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDObject_h_16_INCLASS_NO_PURE_DECLS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDObject_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATADRIVEN_API UClass* StaticClass<class UDDObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
