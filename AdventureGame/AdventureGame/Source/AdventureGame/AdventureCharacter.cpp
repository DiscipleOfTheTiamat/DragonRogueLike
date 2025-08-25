// Fill out your copyright notice in the Description page of Project Settings.


#include "AdventureCharacter.h"

// Sets default values
AAdventureCharacter::AAdventureCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create a first person camera component.
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	check(FirstPersonCameraComponent != nullptr);

	// Create a first person mesh component for the owning player.
	FirstPersonMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FirstPersonMesh"));
	check(FirstPersonMeshComponent != nullptr);

	// Attach the FirstPerson mesh to the Skeletal Mesh
	FirstPersonMeshComponent->SetupAttachment(GetMesh());

	// Attach the camera component to the first-person Skeletal Mesh.
	FirstPersonCameraComponent->SetupAttachment(FirstPersonMeshComponent, FName("Head"));

	// Enable the pawn to control camera rotation.
	FirstPersonCameraComponent->bUsePawnControlRotation = true;
}

// Called when the game starts or when spawned
void AAdventureCharacter::BeginPlay()
{
	Super::BeginPlay();

	check(GEngine != nullptr);
	// Only the owning player sees the first person mesh
	//FirstPersonMeshComponent->SetOwnerNoSee(true);

	// The owning player doesn't see the regular (third-person) body mesh
	//GetMesh()->SetOwnerNoSee(true);

	// Position the camera slightly above the eyes.
	FirstPersonCameraComponent->SetRelativeLocation(FVector(0.0f, -150.9f, 180.0f));//(FVector(0.0f, -150.9f, 180.0f));

	// Get the player controller for this character
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		// Get the enhanced input local player subsystem and add a new input mapping context to it
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(FirstPersonContext, 0);
		}
	}
	// Display a debug message for five seconds. 
	// The -1 "Key" value argument prevents the message from being updated or refreshed.
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("We are using AdventureCharacter."));
}

// Called every frame
void AAdventureCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAdventureCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Check the UInputComponent passed to this function and cast it to an UEnhancedInputComponent
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Bind Movement Actions
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AAdventureCharacter::Move2);//AAdventureCharacter

		// Bind Jump Actions
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);//ACharacter
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);//ACharacter

		//APawn//
		// Bind Look Actions
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AAdventureCharacter::Look);//AAdventureCharacter
	}
}
void AAdventureCharacter::Move(const FInputActionValue& Value)
{
	const FVector2d MovementValue = Value.Get<FVector2D>();
	if (Controller)
	{
		// Add left and right movement
		const FVector Right = GetActorRightVector();
		AddMovementInput(Right, MovementValue.X);

		// Add forward and back movement
		const FVector Forward = GetActorForwardVector();
		AddMovementInput(Forward, MovementValue.Y);
	}
}
void AAdventureCharacter::Look(const FInputActionValue& Value)
{
	const FVector2D LookAxisValue = Value.Get<FVector2D>();
	if (Controller)
	{
		APawn::AddControllerYawInput(LookAxisValue.X);
		APawn::AddControllerPitchInput(LookAxisValue.Y);
		//AddControllerYawInput(LookAxisValue.X);
		//AddControllerPitchInput(LookAxisValue.Y);
	}
}
void AAdventureCharacter::Move2(const FInputActionInstance& Instance)
{
	FRotator ControlRot = GetControlRotation();
	ControlRot.Pitch = 0.0f;
	ControlRot.Roll = 0.0f;

	// Get value from input (combined value from WASD keys or single Gamepad stick) and convert to Vector (x,y)
	const FVector2D AxisValue = Instance.GetValue().Get<FVector2D>();

	// Move forward/back
	AddMovementInput(ControlRot.Vector(), AxisValue.Y);

	// Move Right/Left strafe
	const FVector RightVector = ControlRot.RotateVector(FVector::RightVector);
	AddMovementInput(RightVector, AxisValue.X);
}