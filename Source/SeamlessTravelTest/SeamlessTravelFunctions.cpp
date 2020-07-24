// Fill out your copyright notice in the Description page of Project Settings.

#include "SeamlessTravelFunctions.h"

void USeamlessTravelFunctions::SeamlessTravelToWorld(const UObject* worldContextObject, const FString& mapNameURL)
{
	if (mapNameURL.IsEmpty())
	{
		UE_LOG(LogClass, Error, TEXT("Can't travel to map: Invalid map name"));
	}
	else
	{
		UWorld* worldRef = GEngine->GetWorldFromContextObject(worldContextObject);

		if (worldRef == nullptr)
		{
			UE_LOG(LogClass, Error, TEXT("Can't travel to map: Invalid world"))
		}
		else
		{
			worldRef->SeamlessTravel(mapNameURL);
		}
	}
}