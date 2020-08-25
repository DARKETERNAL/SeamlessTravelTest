// Fill out your copyright notice in the Description page of Project Settings.

#include "STGameMode.h"
#include <Runtime\Engine\Classes\Kismet\GameplayStatics.h>

void ASTGameMode::SetSeamlessTravelPausePoint(bool pause)
{
	GEngine->GetWorld()->SetSeamlessTravelMidpointPause(pause);
}

void ASTGameMode::HandleSeamlessTravelPlayer(AController*& newController)
{
	Super::HandleSeamlessTravelPlayer(newController);
	UE_LOG(LogClass, Log, TEXT("Handle seamless travel player"));
}
