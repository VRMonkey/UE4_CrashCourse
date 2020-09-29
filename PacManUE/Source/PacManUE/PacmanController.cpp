// Fill out your copyright notice in the Description page of Project Settings.


#include "PacmanController.h"
#include "PacmanPawn.h"

APacmanPawn* APacmanController::GetPacmanPawn() const
{
	return Cast<APacmanPawn>(GetPawn());
}



void APacmanController::SetupInputComponent() {
	Super::SetupInputComponent();

	InputComponent->BindAction("MoveUp", IE_Pressed, this, &APacmanController::MoveUp);
	InputComponent->BindAction("MoveDown", IE_Pressed, this, &APacmanController::MoveDown);
	InputComponent->BindAction("MoveLeft", IE_Pressed, this, &APacmanController::MoveLeft);
	InputComponent->BindAction("MoveRight", IE_Pressed, this, &APacmanController::MoveRight);
}

void APacmanController::MoveUp()
{
	UE_LOG(LogTemp, Warning, TEXT("UP"));
	if (GetPacmanPawn() != nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("PRA CIMA"));
		GetPacmanPawn()->SetDirection(FVector::UpVector);
	}
}

void APacmanController::MoveDown()
{
	if (GetPacmanPawn() != nullptr) {
		GetPacmanPawn()->SetDirection(FVector::DownVector);
	}
}

void APacmanController::MoveLeft()
{
	GetPacmanPawn()->SetDirection(FVector::LeftVector);
}

void APacmanController::MoveRight()
{
	GetPacmanPawn()->SetDirection(FVector::RightVector);
}
