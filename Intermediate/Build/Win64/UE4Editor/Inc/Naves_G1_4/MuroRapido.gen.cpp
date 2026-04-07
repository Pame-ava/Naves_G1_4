// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Naves_G1_4/MuroRapido.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroRapido() {}
// Cross Module References
	NAVES_G1_4_API UClass* Z_Construct_UClass_AMuroRapido_NoRegister();
	NAVES_G1_4_API UClass* Z_Construct_UClass_AMuroRapido();
	NAVES_G1_4_API UClass* Z_Construct_UClass_AMuro();
	UPackage* Z_Construct_UPackage__Script_Naves_G1_4();
// End Cross Module References
	void AMuroRapido::StaticRegisterNativesAMuroRapido()
	{
	}
	UClass* Z_Construct_UClass_AMuroRapido_NoRegister()
	{
		return AMuroRapido::StaticClass();
	}
	struct Z_Construct_UClass_AMuroRapido_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroRapido_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMuro,
		(UObject* (*)())Z_Construct_UPackage__Script_Naves_G1_4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroRapido_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MuroRapido.h" },
		{ "ModuleRelativePath", "MuroRapido.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroRapido_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroRapido>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroRapido_Statics::ClassParams = {
		&AMuroRapido::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMuroRapido_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroRapido_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroRapido()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroRapido_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroRapido, 2594940863);
	template<> NAVES_G1_4_API UClass* StaticClass<AMuroRapido>()
	{
		return AMuroRapido::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroRapido(Z_Construct_UClass_AMuroRapido, &AMuroRapido::StaticClass, TEXT("/Script/Naves_G1_4"), TEXT("AMuroRapido"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroRapido);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
