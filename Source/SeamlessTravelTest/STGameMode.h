// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "STGameMode.generated.h"

/**
 *
 */
UCLASS()
class SEAMLESSTRAVELTEST_API ASTGameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:

	UWorld* worldRef;

protected:

#pragma region OVERRIDES
	UFUNCTION(BlueprintImplementableEvent)
		void GetSeamlessTravelActorList(bool bToTransition, TArray<AActor*>& ActorList) override;

	UFUNCTION(BlueprintImplementableEvent)
		void PostSeamlessTravel() override;
#pragma endregion
};
