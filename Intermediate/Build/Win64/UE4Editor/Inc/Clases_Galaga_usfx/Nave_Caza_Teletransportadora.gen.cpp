// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Clases_Galaga_usfx/Nave_Caza_Teletransportadora.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNave_Caza_Teletransportadora() {}
// Cross Module References
	CLASES_GALAGA_USFX_API UClass* Z_Construct_UClass_ANave_Caza_Teletransportadora_NoRegister();
	CLASES_GALAGA_USFX_API UClass* Z_Construct_UClass_ANave_Caza_Teletransportadora();
	CLASES_GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemigaCaza();
	UPackage* Z_Construct_UPackage__Script_Clases_Galaga_usfx();
// End Cross Module References
	void ANave_Caza_Teletransportadora::StaticRegisterNativesANave_Caza_Teletransportadora()
	{
	}
	UClass* Z_Construct_UClass_ANave_Caza_Teletransportadora_NoRegister()
	{
		return ANave_Caza_Teletransportadora::StaticClass();
	}
	struct Z_Construct_UClass_ANave_Caza_Teletransportadora_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANave_Caza_Teletransportadora_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaCaza,
		(UObject* (*)())Z_Construct_UPackage__Script_Clases_Galaga_usfx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Caza_Teletransportadora_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nave_Caza_Teletransportadora.h" },
		{ "ModuleRelativePath", "Nave_Caza_Teletransportadora.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANave_Caza_Teletransportadora_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANave_Caza_Teletransportadora>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANave_Caza_Teletransportadora_Statics::ClassParams = {
		&ANave_Caza_Teletransportadora::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANave_Caza_Teletransportadora_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Caza_Teletransportadora_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANave_Caza_Teletransportadora()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANave_Caza_Teletransportadora_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANave_Caza_Teletransportadora, 3227792423);
	template<> CLASES_GALAGA_USFX_API UClass* StaticClass<ANave_Caza_Teletransportadora>()
	{
		return ANave_Caza_Teletransportadora::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANave_Caza_Teletransportadora(Z_Construct_UClass_ANave_Caza_Teletransportadora, &ANave_Caza_Teletransportadora::StaticClass, TEXT("/Script/Clases_Galaga_usfx"), TEXT("ANave_Caza_Teletransportadora"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANave_Caza_Teletransportadora);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif