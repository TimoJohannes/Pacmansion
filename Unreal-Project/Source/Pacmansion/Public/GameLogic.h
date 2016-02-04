

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameLogic.generated.h"

/**
 * 
 */
UCLASS()
class PACMANSION_API UGameLogic : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintPure, Category = "Game Logic") static void GetX(int& x);
	
};
