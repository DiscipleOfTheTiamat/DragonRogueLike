// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "C:\Program Files\Epic Games\UE_5.5\Engine\Plugins\EnhancedInput\Source\EnhancedInput\Public\EnhancedInputComponent.h" //Engine/Plugins/EnhancedInput/Source/EnhancedInput/Public/EnhancedInputComponent.h
#include "C:\Program Files\Epic Games\UE_5.5\Engine\Plugins\EnhancedInput\Source\EnhancedInput\Public\EnhancedInputSubsystems.h" 
#include "C:\Program Files\Epic Games\UE_5.5\Engine\Plugins\EnhancedInput\Source\EnhancedInput\Public\InputActionValue.h"
#include "C:\Program Files\Epic Games\UE_5.5\Engine\Plugins\EnhancedInput\Source\EnhancedInput\Public\InputAction.h"
#include "AdventureCharacter.generated.h"

class UInputMappingContext;
class UInputAction;
class UInputComponent;

UCLASS()
class ADVENTUREGAME_API AAdventureCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAdventureCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* FirstPersonContext;

	// Move Input Actions
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* MoveAction;

	// Jump Input Actions
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* JumpAction;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* LookAction;

	void Move2(const FInputActionInstance& Instance);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	UFUNCTION()
	void Move(const FInputActionValue& Value);
	// Handles Look Input
	UFUNCTION()
	void Look(const FInputActionValue& Value);
	
	// First Person camera
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* FirstPersonCameraComponent;

	// First-person mesh, visible only to the owning player
	UPROPERTY(VisibleAnywhere, Category = Mesh)
	USkeletalMeshComponent* FirstPersonMeshComponent;
};
