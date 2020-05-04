// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLOCKING_FlockingGameModeBase_generated_h
#error "FlockingGameModeBase.generated.h already included, missing '#pragma once' in FlockingGameModeBase.h"
#endif
#define FLOCKING_FlockingGameModeBase_generated_h

#define Flocking_Source_Flocking_FlockingGameModeBase_h_15_SPARSE_DATA
#define Flocking_Source_Flocking_FlockingGameModeBase_h_15_RPC_WRAPPERS
#define Flocking_Source_Flocking_FlockingGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Flocking_Source_Flocking_FlockingGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlockingGameModeBase(); \
	friend struct Z_Construct_UClass_AFlockingGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AFlockingGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flocking"), NO_API) \
	DECLARE_SERIALIZER(AFlockingGameModeBase)


#define Flocking_Source_Flocking_FlockingGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFlockingGameModeBase(); \
	friend struct Z_Construct_UClass_AFlockingGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AFlockingGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flocking"), NO_API) \
	DECLARE_SERIALIZER(AFlockingGameModeBase)


#define Flocking_Source_Flocking_FlockingGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlockingGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlockingGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlockingGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlockingGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlockingGameModeBase(AFlockingGameModeBase&&); \
	NO_API AFlockingGameModeBase(const AFlockingGameModeBase&); \
public:


#define Flocking_Source_Flocking_FlockingGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlockingGameModeBase(AFlockingGameModeBase&&); \
	NO_API AFlockingGameModeBase(const AFlockingGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlockingGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlockingGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlockingGameModeBase)


#define Flocking_Source_Flocking_FlockingGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AFlockingGameModeBase, Mesh); } \
	FORCEINLINE static uint32 __PPO__Manager() { return STRUCT_OFFSET(AFlockingGameModeBase, Manager); }


#define Flocking_Source_Flocking_FlockingGameModeBase_h_12_PROLOG
#define Flocking_Source_Flocking_FlockingGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Flocking_Source_Flocking_FlockingGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Flocking_Source_Flocking_FlockingGameModeBase_h_15_SPARSE_DATA \
	Flocking_Source_Flocking_FlockingGameModeBase_h_15_RPC_WRAPPERS \
	Flocking_Source_Flocking_FlockingGameModeBase_h_15_INCLASS \
	Flocking_Source_Flocking_FlockingGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Flocking_Source_Flocking_FlockingGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Flocking_Source_Flocking_FlockingGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Flocking_Source_Flocking_FlockingGameModeBase_h_15_SPARSE_DATA \
	Flocking_Source_Flocking_FlockingGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Flocking_Source_Flocking_FlockingGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Flocking_Source_Flocking_FlockingGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOCKING_API UClass* StaticClass<class AFlockingGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Flocking_Source_Flocking_FlockingGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
