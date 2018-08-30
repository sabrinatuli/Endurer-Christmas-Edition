#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MadLevelManager.MadAnimation/Action/Tint
struct Tint_t11_162;
// UnityEngine.AudioClip
struct AudioClip_t7_150;

#include "mscorlib_System_Object.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadiTween_EaseType.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// MadLevelManager.MadAnimation/Action
struct  Action_t11_163  : public Object_t
{
	// System.Boolean MadLevelManager.MadAnimation/Action::enabled
	bool ___enabled_0;
	// MadLevelManager.MadiTween/EaseType MadLevelManager.MadAnimation/Action::easeType
	int32_t ___easeType_1;
	// UnityEngine.Vector3 MadLevelManager.MadAnimation/Action::move
	Vector3_t7_66  ___move_2;
	// UnityEngine.Vector3 MadLevelManager.MadAnimation/Action::rotate
	Vector3_t7_66  ___rotate_3;
	// UnityEngine.Vector3 MadLevelManager.MadAnimation/Action::scale
	Vector3_t7_66  ___scale_4;
	// System.Single MadLevelManager.MadAnimation/Action::time
	float ___time_5;
	// System.Boolean MadLevelManager.MadAnimation/Action::tintEnabled
	bool ___tintEnabled_6;
	// MadLevelManager.MadAnimation/Action/Tint MadLevelManager.MadAnimation/Action::tint
	Tint_t11_162 * ___tint_7;
	// UnityEngine.AudioClip MadLevelManager.MadAnimation/Action::playSound
	AudioClip_t7_150 * ___playSound_8;
	// System.Single MadLevelManager.MadAnimation/Action::playSoundVolume
	float ___playSoundVolume_9;
};
