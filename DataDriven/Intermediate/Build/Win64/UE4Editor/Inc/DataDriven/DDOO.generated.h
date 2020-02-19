// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATADRIVEN_DDOO_generated_h
#error "DDOO.generated.h already included, missing '#pragma once' in DDOO.h"
#endif
#define DATADRIVEN_DDOO_generated_h

#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDOO_h_15_RPC_WRAPPERS
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDOO_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDOO_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATADRIVEN_API UDDOO(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDDOO) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATADRIVEN_API, UDDOO); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDDOO); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DATADRIVEN_API UDDOO(UDDOO&&); \
	DATADRIVEN_API UDDOO(const UDDOO&); \
public:


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDOO_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATADRIVEN_API UDDOO(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DATADRIVEN_API UDDOO(UDDOO&&); \
	DATADRIVEN_API UDDOO(const UDDOO&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATADRIVEN_API, UDDOO); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDDOO); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDDOO)


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDOO_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDDOO(); \
	friend struct Z_Construct_UClass_UDDOO_Statics; \
public: \
	DECLARE_CLASS(UDDOO, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DataDriven"), DATADRIVEN_API) \
	DECLARE_SERIALIZER(UDDOO)


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDOO_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDOO_h_15_GENERATED_UINTERFACE_BODY() \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDOO_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDOO_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDOO_h_15_GENERATED_UINTERFACE_BODY() \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDOO_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDOO_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDDOO() {} \
public: \
	typedef UDDOO UClassType; \
	typedef IDDOO ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDOO_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IDDOO() {} \
public: \
	typedef UDDOO UClassType; \
	typedef IDDOO ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDOO_h_12_PROLOG
#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDOO_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDOO_h_15_RPC_WRAPPERS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDOO_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDOO_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDOO_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDOO_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATADRIVEN_API UClass* StaticClass<class UDDOO>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProjects_FrameDemo_Plugins_DataDriven_Source_DataDriven_Public_DDObject_DDOO_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
