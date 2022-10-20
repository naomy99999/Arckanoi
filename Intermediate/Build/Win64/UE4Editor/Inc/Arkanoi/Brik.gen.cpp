// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arkanoi/Brik.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrik() {}
// Cross Module References
	ARKANOI_API UClass* Z_Construct_UClass_ABrik_NoRegister();
	ARKANOI_API UClass* Z_Construct_UClass_ABrik();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Arkanoi();
// End Cross Module References
	void ABrik::StaticRegisterNativesABrik()
	{
	}
	UClass* Z_Construct_UClass_ABrik_NoRegister()
	{
		return ABrik::StaticClass();
	}
	struct Z_Construct_UClass_ABrik_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABrik_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Arkanoi,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrik_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Brik.h" },
		{ "ModuleRelativePath", "Brik.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABrik_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABrik>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABrik_Statics::ClassParams = {
		&ABrik::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABrik_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABrik_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABrik()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABrik_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABrik, 1081279350);
	template<> ARKANOI_API UClass* StaticClass<ABrik>()
	{
		return ABrik::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABrik(Z_Construct_UClass_ABrik, &ABrik::StaticClass, TEXT("/Script/Arkanoi"), TEXT("ABrik"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABrik);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
