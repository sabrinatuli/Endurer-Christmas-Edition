#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t7_81;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// MadLevelYouAreHereScript
struct  MadLevelYouAreHereScript_t11_24  : public MonoBehaviour_t7_106
{
	// UnityEngine.Vector3 MadLevelYouAreHereScript::offset
	Vector3_t7_66  ___offset_2;
	// System.Single MadLevelYouAreHereScript::animationAmplitude
	float ___animationAmplitude_3;
	// System.Single MadLevelYouAreHereScript::animationSpeed
	float ___animationSpeed_4;
	// UnityEngine.Transform MadLevelYouAreHereScript::lastUnlockedTransform
	Transform_t7_81 * ___lastUnlockedTransform_5;
	// System.Boolean MadLevelYouAreHereScript::initialized
	bool ___initialized_6;
};
