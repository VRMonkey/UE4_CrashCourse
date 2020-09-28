// Fill out your copyright notice in the Description page of Project Settings.


#include "PacManPawn.h"

// Sets default values
APacManPawn::APacManPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APacManPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APacManPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APacManPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APacManPawn::SetDirection(const FVector Direction)
{
}

void APacManPawn::OnOverlabBegin(AActor* PlayerActor, AActor* OtherActor)
{
}

