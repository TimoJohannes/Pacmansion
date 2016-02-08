#pragma once
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HighscoreSystem.generated.h"

UCLASS()
class PACMANSION_API UHighscoreSystem : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintPure, Category = "Highscore System") static bool GetHighscore(FString& Scores);
		UFUNCTION(BlueprintCallable, Category = "Highscore System") static bool ClearHighscore();
};