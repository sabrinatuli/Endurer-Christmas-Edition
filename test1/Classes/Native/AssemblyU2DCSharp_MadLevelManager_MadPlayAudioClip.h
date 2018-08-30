#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t7_150;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadPlayAudioClip_EventType.h"

// MadLevelManager.MadPlayAudioClip
struct  MadPlayAudioClip_t11_194  : public MonoBehaviour_t7_106
{
	// MadLevelManager.MadPlayAudioClip/EventType MadLevelManager.MadPlayAudioClip::eventType
	int32_t ___eventType_2;
	// UnityEngine.AudioClip MadLevelManager.MadPlayAudioClip::audioClip
	AudioClip_t7_150 * ___audioClip_3;
	// System.Single MadLevelManager.MadPlayAudioClip::volume
	float ___volume_4;
};
