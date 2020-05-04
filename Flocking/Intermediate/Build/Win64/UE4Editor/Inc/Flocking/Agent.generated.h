// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLOCKING_Agent_generated_h
#error "Agent.generated.h already included, missing '#pragma once' in Agent.h"
#endif
#define FLOCKING_Agent_generated_h

#define Flocking_Source_Flocking_Agent_h_12_SPARSE_DATA
#define Flocking_Source_Flocking_Agent_h_12_RPC_WRAPPERS
#define Flocking_Source_Flocking_Agent_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Flocking_Source_Flocking_Agent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAgent(); \
	friend struct Z_Construct_UClass_AAgent_Statics; \
public: \
	DECLARE_CLASS(AAgent, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flocking"), NO_API) \
	DECLARE_SERIALIZER(AAgent)


#define Flocking_Source_Flocking_Agent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAgent(); \
	friend struct Z_Construct_UClass_AAgent_Statics; \
public: \
	DECLARE_CLASS(AAgent, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flocking"), NO_API) \
	DECLARE_SERIALIZER(AAgent)


#define Flocking_Source_Flocking_Agent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAgent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAgent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAgent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAgent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAgent(AAgent&&); \
	NO_API AAgent(const AAgent&); \
public:


#define Flocking_Source_Flocking_Agent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAgent(AAgent&&); \
	NO_API AAgent(const AAgent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAgent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAgent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAgent)


#define Flocking_Source_Flocking_Agent_h_12_PRIVATE_PROPERTY_OFFSET
#define Flocking_Source_Flocking_Agent_h_9_PROLOG
#define Flocking_Source_Flocking_Agent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Flocking_Source_Flocking_Agent_h_12_PRIVATE_PROPERTY_OFFSET \
	Flocking_Source_Flocking_Agent_h_12_SPARSE_DATA \
	Flocking_Source_Flocking_Agent_h_12_RPC_WRAPPERS \
	Flocking_Source_Flocking_Agent_h_12_INCLASS \
	Flocking_Source_Flocking_Agent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Flocking_Source_Flocking_Agent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Flocking_Source_Flocking_Agent_h_12_PRIVATE_PROPERTY_OFFSET \
	Flocking_Source_Flocking_Agent_h_12_SPARSE_DATA \
	Flocking_Source_Flocking_Agent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Flocking_Source_Flocking_Agent_h_12_INCLASS_NO_PURE_DECLS \
	Flocking_Source_Flocking_Agent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOCKING_API UClass* StaticClass<class AAgent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Flocking_Source_Flocking_Agent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
