#include "Pacmansion.h"
#include "HighscoreSystem.h"

FString file = FPaths::GameDir() + "highscore.txt";

bool UHighscoreSystem::GetHighscore(FString& Scores)
{
	return FFileHelper::LoadFileToString(Scores, *(file));
}

bool UHighscoreSystem::ClearHighscore()
{
	return FFileHelper::SaveStringToFile("- empty -", *(file));
}