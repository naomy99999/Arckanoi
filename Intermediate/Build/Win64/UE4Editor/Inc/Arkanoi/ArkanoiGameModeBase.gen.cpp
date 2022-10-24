// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arkanoi/ArkanoiGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArkanoiGameModeBase() {}
// Cross Module References
	ARKANOI_API UClass* Z_Construct_UClass_AArkanoiGameModeBase_NoRegister();
	ARKANOI_API UClass* Z_Construct_UClass_AArkanoiGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Arkanoi();
// End Cross Module References
	void AArkanoiGameModeBase::StaticRegisterNativesAArkanoiGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AArkanoiGameModeBase_NoRegister()
	{
		return AArkanoiGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AArkanoiGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArkanoiGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Arkanoi,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArkanoiGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ArkanoiGameModeBase.h" },
		{ "ModuleRelativePath", "ArkanoiGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArkanoiGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArkanoiGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArkanoiGameModeBase_Statics::ClassParams = {
		&AArkanoiGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AArkanoiGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArkanoiGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArkanoiGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArkanoiGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArkanoiGameModeBase, 3504423907);
	template<> ARKANOI_API UClass* StaticClass<AArkanoiGameModeBase>()
	{
		return AArkanoiGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArkanoiGameModeBase(Z_Construct_UClass_AArkanoiGameModeBase, &AArkanoiGameModeBase::StaticClass, TEXT("/Script/Arkanoi"), TEXT("AArkanoiGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArkanoiGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
