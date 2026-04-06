// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Naves_G1_4/Naves_G1_4GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaves_G1_4GameMode() {}
// Cross Module References
	NAVES_G1_4_API UClass* Z_Construct_UClass_ANaves_G1_4GameMode_NoRegister();
	NAVES_G1_4_API UClass* Z_Construct_UClass_ANaves_G1_4GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Naves_G1_4();
// End Cross Module References
	void ANaves_G1_4GameMode::StaticRegisterNativesANaves_G1_4GameMode()
	{
	}
	UClass* Z_Construct_UClass_ANaves_G1_4GameMode_NoRegister()
	{
		return ANaves_G1_4GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANaves_G1_4GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaves_G1_4GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Naves_G1_4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaves_G1_4GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Naves_G1_4GameMode.h" },
		{ "ModuleRelativePath", "Naves_G1_4GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaves_G1_4GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaves_G1_4GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaves_G1_4GameMode_Statics::ClassParams = {
		&ANaves_G1_4GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANaves_G1_4GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaves_G1_4GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaves_G1_4GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaves_G1_4GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaves_G1_4GameMode, 3359802137);
	template<> NAVES_G1_4_API UClass* StaticClass<ANaves_G1_4GameMode>()
	{
		return ANaves_G1_4GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaves_G1_4GameMode(Z_Construct_UClass_ANaves_G1_4GameMode, &ANaves_G1_4GameMode::StaticClass, TEXT("/Script/Naves_G1_4"), TEXT("ANaves_G1_4GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaves_G1_4GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
