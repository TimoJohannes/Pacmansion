#pragma once
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VisualSettings.generated.h"

UCLASS()
class PACMANSION_API UVisualSettings : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "Visual Settings") static void SetMode(FString Mode);
	UFUNCTION(BlueprintCallable, Category = "Visual Settings") static void SetResolution(FString Res);
	UFUNCTION(BlueprintCallable, Category = "Visual Settings") static FString GetCommandString();
};
