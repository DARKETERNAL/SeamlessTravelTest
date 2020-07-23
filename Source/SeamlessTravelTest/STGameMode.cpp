// Fill out your copyright notice in the Description page of Project Settings.

#include "STGameMode.h"
#include <Runtime\Engine\Classes\Kismet\GameplayStatics.h>

void ASTGameMode::AddPersistantActor(AActor* actor)
{
	TArray<AActor*> travelerActors;

	GetSeamlessTravelActorList(true, travelerActors);

	travelerActors.Add(actor);
}

void ASTGameMode::InitSeamlessTravel()
{
	worldRef = GetWorld();

	bUseSeamlessTravel = true;
}

void ASTGameMode::SeamlessTravel(const FString& URL)
{
	if (worldRef == nullptr)
	{
		InitSeamlessTravel();
	}

	worldRef->SeamlessTravel(URL);
}

void ASTGameMode::AssignViewTargetToCameraManager(APlayerCameraManager* cameraManager, AActor* viewTargetActor)
{
	if (cameraManager != nullptr)
	{
		FTViewTarget viewTarget = FTViewTarget();
		FViewTargetTransitionParams transitionParams = FViewTargetTransitionParams();

		cameraManager->AssignViewTarget(viewTargetActor, viewTarget, transitionParams);
	}
}
