#include "Pacmansion.h"
#include "SoundController.h"

float sfxVolume = 0.5;
float musicVolume = 0.5;

float USoundController::GetMusicVolume()
{
	return musicVolume;
}

float USoundController::GetSFXVolume()
{
	return sfxVolume;
}

void USoundController::SetMusicVolume(float Volume)
{
	musicVolume = Volume;
}

void USoundController::SetSFXVolume(float Volume)
{
	sfxVolume = Volume;
}