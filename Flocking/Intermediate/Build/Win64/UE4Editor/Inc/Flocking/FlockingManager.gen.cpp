// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flocking/FlockingManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlockingManager() {}
// Cross Module References
	FLOCKING_API UClass* Z_Construct_UClass_UFlockingManager_NoRegister();
	FLOCKING_API UClass* Z_Construct_UClass_UFlockingManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Flocking();
	FLOCKING_API UClass* Z_Construct_UClass_AAgent_NoRegister();
// End Cross Module References
	void UFlockingManager::StaticRegisterNativesUFlockingManager()
	{
	}
	UClass* Z_Construct_UClass_UFlockingManager_NoRegister()
	{
		return UFlockingManager::StaticClass();
	}
	struct Z_Construct_UClass_UFlockingManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Agents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Agents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Agents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlockingManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Flocking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockingManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FlockingManager.h" },
		{ "ModuleRelativePath", "FlockingManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockingManager_Statics::NewProp_Agents_MetaData[] = {
		{ "Category", "FlockingManager" },
		{ "ModuleRelativePath", "FlockingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlockingManager_Statics::NewProp_Agents = { "Agents", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlockingManager, Agents), METADATA_PARAMS(Z_Construct_UClass_UFlockingManager_Statics::NewProp_Agents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockingManager_Statics::NewProp_Agents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlockingManager_Statics::NewProp_Agents_Inner = { "Agents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AAgent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlockingManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockingManager_Statics::NewProp_Agents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlockingManager_Statics::NewProp_Agents_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlockingManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlockingManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlockingManager_Statics::ClassParams = {
		&UFlockingManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlockingManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlockingManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlockingManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockingManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlockingManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlockingManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlockingManager, 2567884175);
	template<> FLOCKING_API UClass* StaticClass<UFlockingManager>()
	{
		return UFlockingManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlockingManager(Z_Construct_UClass_UFlockingManager, &UFlockingManager::StaticClass, TEXT("/Script/Flocking"), TEXT("UFlockingManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlockingManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
