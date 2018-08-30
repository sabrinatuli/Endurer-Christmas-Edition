#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MadLevelManager.MadiTween/EasingFunction
struct EasingFunction_t11_74;

#include "AssemblyU2DCSharp_MadLevelManager_MadAnim.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadAnimScale_ValueType.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// MadLevelManager.MadAnimScale
struct  MadAnimScale_t11_80  : public MadAnim_t11_71
{
	// MadLevelManager.MadAnimScale/ValueType MadLevelManager.MadAnimScale::scaleFrom
	int32_t ___scaleFrom_29;
	// UnityEngine.Vector3 MadLevelManager.MadAnimScale::scaleFromValue
	Vector3_t7_66  ___scaleFromValue_30;
	// MadLevelManager.MadAnimScale/ValueType MadLevelManager.MadAnimScale::scaleTo
	int32_t ___scaleTo_31;
	// UnityEngine.Vector3 MadLevelManager.MadAnimScale::scaleToValue
	Vector3_t7_66  ___scaleToValue_32;
	// UnityEngine.Vector3 MadLevelManager.MadAnimScale::originLocal
	Vector3_t7_66  ___originLocal_33;
	// UnityEngine.Vector3 MadLevelManager.MadAnimScale::startLocal
	Vector3_t7_66  ___startLocal_34;
	// MadLevelManager.MadiTween/EasingFunction MadLevelManager.MadAnimScale::easingFunction
	EasingFunction_t11_74 * ___easingFunction_35;
};
