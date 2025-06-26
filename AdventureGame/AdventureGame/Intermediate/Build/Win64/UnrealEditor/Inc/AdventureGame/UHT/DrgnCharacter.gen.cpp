// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdventureGame/Public/DrgnCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrgnCharacter() {}

// Begin Cross Module References
ADVENTUREGAME_API UClass* Z_Construct_UClass_ADrgnCharacter();
ADVENTUREGAME_API UClass* Z_Construct_UClass_ADrgnCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AdventureGame();
// End Cross Module References

// Begin Class ADrgnCharacter
void ADrgnCharacter::StaticRegisterNativesADrgnCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADrgnCharacter);
UClass* Z_Construct_UClass_ADrgnCharacter_NoRegister()
{
	return ADrgnCharacter::StaticClass();
}
struct Z_Construct_UClass_ADrgnCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DrgnCharacter.h" },
		{ "ModuleRelativePath", "Public/DrgnCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "DrgnCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DrgnCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "DrgnCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DrgnCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADrgnCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrgnCharacter_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrgnCharacter, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrgnCharacter_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrgnCharacter, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADrgnCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrgnCharacter_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrgnCharacter_Statics::NewProp_CameraComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrgnCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADrgnCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_AdventureGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrgnCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADrgnCharacter_Statics::ClassParams = {
	&ADrgnCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADrgnCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADrgnCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrgnCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ADrgnCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADrgnCharacter()
{
	if (!Z_Registration_Info_UClass_ADrgnCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADrgnCharacter.OuterSingleton, Z_Construct_UClass_ADrgnCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADrgnCharacter.OuterSingleton;
}
template<> ADVENTUREGAME_API UClass* StaticClass<ADrgnCharacter>()
{
	return ADrgnCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADrgnCharacter);
ADrgnCharacter::~ADrgnCharacter() {}
// End Class ADrgnCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_Visual_Studio_Projects_Unreal_Engine_Game_Github_AdventureGame_AdventureGame_Source_AdventureGame_Public_DrgnCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADrgnCharacter, ADrgnCharacter::StaticClass, TEXT("ADrgnCharacter"), &Z_Registration_Info_UClass_ADrgnCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADrgnCharacter), 32528309U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_Visual_Studio_Projects_Unreal_Engine_Game_Github_AdventureGame_AdventureGame_Source_AdventureGame_Public_DrgnCharacter_h_3537604216(TEXT("/Script/AdventureGame"),
	Z_CompiledInDeferFile_FID_My_Visual_Studio_Projects_Unreal_Engine_Game_Github_AdventureGame_AdventureGame_Source_AdventureGame_Public_DrgnCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_Visual_Studio_Projects_Unreal_Engine_Game_Github_AdventureGame_AdventureGame_Source_AdventureGame_Public_DrgnCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
