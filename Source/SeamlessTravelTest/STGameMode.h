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

	UFUNCTION(BlueprintCallable, Category = "ST Test")
		void AddPersistantActor(AActor* actor);

	UFUNCTION(BlueprintCallable, Category = "ST Test")
		void InitSeamlessTravel();

	UFUNCTION(BlueprintCallable, Category = "ST Test")
		void SeamlessTravel(const FString& URL);

	UFUNCTION(BlueprintCallable, Category = "ST Test")
		void AssignViewTargetToCameraManager(APlayerCameraManager* cameraManager, AActor* viewTargetActor);


#pragma region OVERRIDES
	UFUNCTION(BlueprintImplementableEvent)
		void GetSeamlessTravelActorList(bool bToTransition, TArray<AActor*>& ActorList) override;

	UFUNCTION(BlueprintImplementableEvent)
		void PostSeamlessTravel() override;
#pragma endregion



};
