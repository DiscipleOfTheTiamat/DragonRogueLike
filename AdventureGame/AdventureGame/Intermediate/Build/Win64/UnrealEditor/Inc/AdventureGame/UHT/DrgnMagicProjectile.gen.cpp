// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdventureGame/Public/DrgnMagicProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrgnMagicProjectile() {}

// Begin Cross Module References
ADVENTUREGAME_API UClass* Z_Construct_UClass_ADrgnMagicProjectile();
ADVENTUREGAME_API UClass* Z_Construct_UClass_ADrgnMagicProjectile_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AdventureGame();
// End Cross Module References

// Begin Class ADrgnMagicProjectile
void ADrgnMagicProjectile::StaticRegisterNativesADrgnMagicProjectile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADrgnMagicProjectile);
UClass* Z_Construct_UClass_ADrgnMagicProjectile_NoRegister()
{
	return ADrgnMagicProjectile::StaticClass();
}
struct Z_Construct_UClass_ADrgnMagicProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DrgnMagicProjectile.h" },
		{ "ModuleRelativePath", "Public/DrgnMagicProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[] = {
		{ "Category", "DrgnMagicProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DrgnMagicProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComp_MetaData[] = {
		{ "Category", "DrgnMagicProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DrgnMagicProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectComp_MetaData[] = {
		{ "Category", "DrgnMagicProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DrgnMagicProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EffectComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADrgnMagicProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrgnMagicProjectile_Statics::NewProp_SphereComp = { "SphereComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrgnMagicProjectile, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComp_MetaData), NewProp_SphereComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrgnMagicProjectile_Statics::NewProp_MovementComp = { "MovementComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrgnMagicProjectile, MovementComp), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComp_MetaData), NewProp_MovementComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrgnMagicProjectile_Statics::NewProp_EffectComp = { "EffectComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrgnMagicProjectile, EffectComp), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectComp_MetaData), NewProp_EffectComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADrgnMagicProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrgnMagicProjectile_Statics::NewProp_SphereComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrgnMagicProjectile_Statics::NewProp_MovementComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrgnMagicProjectile_Statics::NewProp_EffectComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrgnMagicProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADrgnMagicProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AdventureGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrgnMagicProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADrgnMagicProjectile_Statics::ClassParams = {
	&ADrgnMagicProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADrgnMagicProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADrgnMagicProjectile_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrgnMagicProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_ADrgnMagicProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADrgnMagicProjectile()
{
	if (!Z_Registration_Info_UClass_ADrgnMagicProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADrgnMagicProjectile.OuterSingleton, Z_Construct_UClass_ADrgnMagicProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADrgnMagicProjectile.OuterSingleton;
}
template<> ADVENTUREGAME_API UClass* StaticClass<ADrgnMagicProjectile>()
{
	return ADrgnMagicProjectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADrgnMagicProjectile);
ADrgnMagicProjectile::~ADrgnMagicProjectile() {}
// End Class ADrgnMagicProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_Visual_Studio_Projects_Unreal_Engine_Game_Github_AdventureGame_AdventureGame_Source_AdventureGame_Public_DrgnMagicProjectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADrgnMagicProjectile, ADrgnMagicProjectile::StaticClass, TEXT("ADrgnMagicProjectile"), &Z_Registration_Info_UClass_ADrgnMagicProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADrgnMagicProjectile), 652031210U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_Visual_Studio_Projects_Unreal_Engine_Game_Github_AdventureGame_AdventureGame_Source_AdventureGame_Public_DrgnMagicProjectile_h_3268386199(TEXT("/Script/AdventureGame"),
	Z_CompiledInDeferFile_FID_My_Visual_Studio_Projects_Unreal_Engine_Game_Github_AdventureGame_AdventureGame_Source_AdventureGame_Public_DrgnMagicProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_Visual_Studio_Projects_Unreal_Engine_Game_Github_AdventureGame_AdventureGame_Source_AdventureGame_Public_DrgnMagicProjectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
