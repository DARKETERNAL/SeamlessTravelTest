// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SeamlessTravelFunctions.generated.h"

/**
 *
 */
UCLASS()
class SEAMLESSTRAVELTEST_API USeamlessTravelFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "SeamlessTravel", meta = (WorldContext = "WorldContextObject"))
		static void SeamlessTravelToWorld(const UObject* worldContextObject, const FString& mapNameURL);
};
