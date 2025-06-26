// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DrgnCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class ADVENTUREGAME_API ADrgnCharacter : public ACharacter
{
	GENERATED_BODY()

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