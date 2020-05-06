// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FLOCKING_AgentCollide_generated_h
#error "AgentCollide.generated.h already included, missing '#pragma once' in AgentCollide.h"
#endif
#define FLOCKING_AgentCollide_generated_h

#define Flocking_Source_Flocking_AgentCollide_h_13_SPARSE_DATA
#define Flocking_Source_Flocking_AgentCollide_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnActorHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Flocking_Source_Flocking_AgentCollide_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActorHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Flocking_Source_Flocking_AgentCollide_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAgentCollide(); \
	friend struct Z_Construct_UClass_UAgentCollide_Statics; \
public: \
	DECLARE_CLASS(UAgentCollide, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flocking"), NO_API) \
	DECLARE_SERIALIZER(UAgentCollide)


#define Flocking_Source_Flocking_AgentCollide_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAgentCollide(); \
	friend struct Z_Construct_UClass_UAgentCollide_Statics; \
public: \
	DECLARE_CLASS(UAgentCollide, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flocking"), NO_API) \
	DECLARE_SERIALIZER(UAgentCollide)


#define Flocking_Source_Flocking_AgentCollide_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAgentCollide(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAgentCollide) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAgentCollide); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAgentCollide); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAgentCollide(UAgentCollide&&); \
	NO_API UAgentCollide(const UAgentCollide&); \
public:


#define Flocking_Source_Flocking_AgentCollide_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAgentCollide(UAgentCollide&&); \
	NO_API UAgentCollide(const UAgentCollide&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAgentCollide); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAgentCollide); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAgentCollide)


#define Flocking_Source_Flocking_AgentCollide_h_13_PRIVATE_PROPERTY_OFFSET
#define Flocking_Source_Flocking_AgentCollide_h_10_PROLOG
#define Flocking_Source_Flocking_AgentCollide_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Flocking_Source_Flocking_AgentCollide_h_13_PRIVATE_PROPERTY_OFFSET \
	Flocking_Source_Flocking_AgentCollide_h_13_SPARSE_DATA \
	Flocking_Source_Flocking_AgentCollide_h_13_RPC_WRAPPERS \
	Flocking_Source_Flocking_AgentCollide_h_13_INCLASS \
	Flocking_Source_Flocking_AgentCollide_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Flocking_Source_Flocking_AgentCollide_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Flocking_Source_Flocking_AgentCollide_h_13_PRIVATE_PROPERTY_OFFSET \
	Flocking_Source_Flocking_AgentCollide_h_13_SPARSE_DATA \
	Flocking_Source_Flocking_AgentCollide_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Flocking_Source_Flocking_AgentCollide_h_13_INCLASS_NO_PURE_DECLS \
	Flocking_Source_Flocking_AgentCollide_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOCKING_API UClass* StaticClass<class UAgentCollide>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Flocking_Source_Flocking_AgentCollide_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
