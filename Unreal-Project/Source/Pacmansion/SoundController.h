#pragma once
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SoundController.generated.h"

UCLASS()
class PACMANSION_API USoundController : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "Sound Controller") static float GetMusicVolume();
	UFUNCTION(BlueprintCallable, Category = "Sound Controller") static float GetSFXVolume();
	UFUNCTION(BlueprintCallable, Category = "Sound Controller") static void SetMusicVolume(float Volume);
	UFUNCTION(BlueprintCallable, Category = "Sound Controller") static void SetSFXVolume(float Volume);
	UFUNCTION(BlueprintCallable, Category = "Sound Controller") static void SetSoundClasses(USoundClass* Music, USoundClass* SFX);
};
