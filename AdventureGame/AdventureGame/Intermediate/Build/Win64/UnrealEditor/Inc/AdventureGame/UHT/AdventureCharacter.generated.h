// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AdventureCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef ADVENTUREGAME_AdventureCharacter_generated_h
#error "AdventureCharacter.generated.h already included, missing '#pragma once' in AdventureCharacter.h"
#endif
#define ADVENTUREGAME_AdventureCharacter_generated_h

#define FID_My_Visual_Studio_Projects_Unreal_Engine_Game_Github_AdventureGame_AdventureGame_Source_AdventureGame_AdventureCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execMove);


#define FID_My_Visual_Studio_Projects_Unreal_Engine_Game_Github_AdventureGame_AdventureGame_Source_AdventureGame_AdventureCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdventureCharacter(); \
	friend struct Z_Construct_UClass_AAdventureCharacter_Statics; \
public: \
	DECLARE_CLASS(AAdventureCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdventureGame"), NO_API) \
	DECLARE_SERIALIZER(AAdventureCharacter)


#define FID_My_Visual_Studio_Projects_Unreal_Engine_Game_Github_AdventureGame_AdventureGame_Source_AdventureGame_AdventureCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAdventureCharacter(AAdventureCharacter&&); \
	AAdventureCharacter(const AAdventureCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdventureCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdventureCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAdventureCharacter) \
	NO_API virtual ~AAdventureCharacter();


#define FID_My_Visual_Studio_Projects_Unreal_Engine_Game_Github_AdventureGame_AdventureGame_Source_AdventureGame_AdventureCharacter_h_21_PROLOG
#define FID_My_Visual_Studio_Projects_Unreal_Engine_Game_Github_AdventureGame_AdventureGame_Source_AdventureGame_AdventureCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_My_Visual_Studio_Projects_Unreal_Engine_Game_Github_AdventureGame_AdventureGame_Source_AdventureGame_AdventureCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_My_Visual_Studio_Projects_Unreal_Engine_Game_Github_AdventureGame_AdventureGame_Source_AdventureGame_AdventureCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_My_Visual_Studio_Projects_Unreal_Engine_Game_Github_AdventureGame_AdventureGame_Source_AdventureGame_AdventureCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVENTUREGAME_API UClass* StaticClass<class AAdventureCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_My_Visual_Studio_Projects_Unreal_Engine_Game_Github_AdventureGame_AdventureGame_Source_AdventureGame_AdventureCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
