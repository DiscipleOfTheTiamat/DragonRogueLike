// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdventureGame/AdventureGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdventureGameMode() {}

// Begin Cross Module References
ADVENTUREGAME_API UClass* Z_Construct_UClass_AAdventureGameMode();
ADVENTUREGAME_API UClass* Z_Construct_UClass_AAdventureGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_AdventureGame();
// End Cross Module References

// Begin Class AAdventureGameMode
void AAdventureGameMode::StaticRegisterNativesAAdventureGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAdventureGameMode);
UClass* Z_Construct_UClass_AAdventureGameMode_NoRegister()
{
	return AAdventureGameMode::StaticClass();
}
struct Z_Construct_UClass_AAdventureGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AdventureGameMode.h" },
		{ "ModuleRelativePath", "AdventureGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdventureGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAdventureGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AdventureGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAdventureGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAdventureGameMode_Statics::ClassParams = {
	&AAdventureGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAdventureGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAdventureGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAdventureGameMode()
{
	if (!Z_Registration_Info_UClass_AAdventureGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAdventureGameMode.OuterSingleton, Z_Construct_UClass_AAdventureGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAdventureGameMode.OuterSingleton;
}
template<> ADVENTUREGAME_API UClass* StaticClass<AAdventureGameMode>()
{
	return AAdventureGameMode::StaticClass();
}
AAdventureGameMode::AAdventureGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAdventureGameMode);
AAdventureGameMode::~AAdventureGameMode() {}
// End Class AAdventureGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_My_Visual_Studio_Projects_Unreal_Engine_Game_Github_AdventureGame_AdventureGame_Source_AdventureGame_AdventureGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAdventureGameMode, AAdventureGameMode::StaticClass, TEXT("AAdventureGameMode"), &Z_Registration_Info_UClass_AAdventureGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAdventureGameMode), 3050482956U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_Visual_Studio_Projects_Unreal_Engine_Game_Github_AdventureGame_AdventureGame_Source_AdventureGame_AdventureGameMode_h_3588623461(TEXT("/Script/AdventureGame"),
	Z_CompiledInDeferFile_FID_My_Visual_Studio_Projects_Unreal_Engine_Game_Github_AdventureGame_AdventureGame_Source_AdventureGame_AdventureGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_Visual_Studio_Projects_Unreal_Engine_Game_Github_AdventureGame_AdventureGame_Source_AdventureGame_AdventureGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
