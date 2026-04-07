// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Naves_G1_4/EnemigoExtraterrestre.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoExtraterrestre() {}
// Cross Module References
	NAVES_G1_4_API UClass* Z_Construct_UClass_AEnemigoExtraterrestre_NoRegister();
	NAVES_G1_4_API UClass* Z_Construct_UClass_AEnemigoExtraterrestre();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Naves_G1_4();
// End Cross Module References
	void AEnemigoExtraterrestre::StaticRegisterNativesAEnemigoExtraterrestre()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoExtraterrestre_NoRegister()
	{
		return AEnemigoExtraterrestre::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoExtraterrestre_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoExtraterrestre_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Naves_G1_4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoExtraterrestre_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemigoExtraterrestre.h" },
		{ "ModuleRelativePath", "EnemigoExtraterrestre.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoExtraterrestre_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoExtraterrestre>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoExtraterrestre_Statics::ClassParams = {
		&AEnemigoExtraterrestre::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoExtraterrestre_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoExtraterrestre_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoExtraterrestre()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoExtraterrestre_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoExtraterrestre, 816345482);
	template<> NAVES_G1_4_API UClass* StaticClass<AEnemigoExtraterrestre>()
	{
		return AEnemigoExtraterrestre::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoExtraterrestre(Z_Construct_UClass_AEnemigoExtraterrestre, &AEnemigoExtraterrestre::StaticClass, TEXT("/Script/Naves_G1_4"), TEXT("AEnemigoExtraterrestre"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoExtraterrestre);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
