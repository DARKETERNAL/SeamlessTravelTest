# SeamlessTravelTest

Simple project to test Seamless Travel setup for a single player experience, based on the UE4 third person template.

All assets used are part of the StarterContent, and are used under their respective licence terms.

#USAGE:

Load either ThirdPersonExampleMap or ThirdPersonExampleMap_B level. While on it, press key T to travel to the other level.

#CODE

STGameMode.h just defines Blueprint-implementable overrides for relevant functions and events (AGameMode::GetSeamlessTravelActorList and AGameMode::PostSeamlessTravel). No implementation is included in STGameMode.cpp

SeamlessTravelFunctions.h declares Blueprint-callable static USeamlessTravelFunctions::SeamlessTravelToWorld function to be used anywhere in Blueprints.

#Blueprints

#ThirdPersonGameMode 

GameMode has been reparented to ASTGameMode and exposes TravelToNextLevel event. This event toggles a simple loadscreen to mask level transition, and does a simple material color change into the ThirdPersonCharacter to test actor persistence between levels. It also implements overrides for declared events in STGameMode.h

ThirdPersonGameMode::GetSeamlessTravelActorList function just adds player character as a persistant actor for seamless travel, besides whatever parent implementation does.

ThirdPersonGameMode::PostSeamlessTravel function repositions player character to a valid PlayerStart actor location and manually sets it as a view target before fading out the loadscreen widget.

ThirdPersonGameMode::ToggleLoadscreen function is a wrapper function to call STPlayerController::ToggleLoadscreen Blueprint function.


#Docs

Seamless travel documentation: https://docs.unrealengine.com/en-US/Gameplay/Networking/Travelling/index.html

#Some notes

• According to the docs, GameMode actor will persist only in server. On client, it won't. Adding GameMode as a persistant actor will cause a crash (will appreciate any insight on this :) )
• PlayerController actors will persist automatically, as stated in docs. Player actors won't.






 
