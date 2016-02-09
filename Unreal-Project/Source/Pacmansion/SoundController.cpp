#include "Pacmansion.h"
#include "SoundController.h"

USoundClass* MusicSoundClass;
USoundClass* SFXSoundClass;

float USoundController::GetMusicVolume()
{
	return MusicSoundClass->Properties.Volume;
}

float USoundController::GetSFXVolume()
{
	return SFXSoundClass->Properties.Volume;
}

void USoundController::SetMusicVolume(float Volume)
{
	MusicSoundClass->Properties.Volume = Volume;
}

void USoundController::SetSFXVolume(float Volume)
{
	SFXSoundClass->Properties.Volume = Volume;
}

void USoundController::SetSoundClasses(USoundClass* Music, USoundClass* SFX)
{
	MusicSoundClass = Music;
	SFXSoundClass = SFX;
}