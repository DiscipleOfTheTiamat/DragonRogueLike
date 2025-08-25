// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "C:\Program Files\Epic Games\UE_5.5\Engine\Plugins\EnhancedInput\Source\EnhancedInput\Public\EnhancedInputComponent.h" //Engine/Plugins/EnhancedInput/Source/EnhancedInput/Public/EnhancedInputComponent.h
#include "C:\Program Files\Epic Games\UE_5.5\Engine\Plugins\EnhancedInput\Source\EnhancedInput\Public\EnhancedInputSubsystems.h" 
#include "C:\Program Files\Epic Games\UE_5.5\Engine\Plugins\EnhancedInput\Source\EnhancedInput\Public\InputActionValue.h"
#include "C:\Program Files\Epic Games\UE_5.5\Engine\Plugins\EnhancedInput\Source\EnhancedInput\Public\InputAction.h"
#include "GameFramework/Character.h"
#include "DrgnCharacter.generated.h"


class UCameraComponent;
class USpringArmComponent;

UCLASS()
class ADVENTUREGAME_API ADrgnCharacter : public ACharacter
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ProjectileClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* JumpAction;
public:
	// Sets default values for this character's properties
	ADrgnCharacter();

protected:
	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArmComp;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* CameraComp;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveForward(float Value);
	void MoveRight(float Value);
	void Jump(float Value);
	void PrimaryAttack();
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
/*
- U - Ckasses deriving from UObject
- A - deriving from Actor
- F - Structs
- I - Interfaces


*/
/*
Property System
UPROPERTY, UFUNCTION, UCLASS, USTRUCT, UENUM


*/