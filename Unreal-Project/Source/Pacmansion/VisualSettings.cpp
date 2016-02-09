#include "Pacmansion.h"
#include "VisualSettings.h"

FString ResString = "1280x720";
FString ModeString = "w";

void UVisualSettings::SetMode(FString Mode)
{
	ModeString = Mode;
}

void UVisualSettings::SetResolution(FString Res)
{
	ResString = Res;
}

FString UVisualSettings::GetCommandString()
{
	return "r.SetRes " + ResString + ModeString;
}