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
#include "AssemblyU2DCSharp_MadLevelManager_MadAnimRotate_ValueType.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// MadLevelManager.MadAnimRotate
struct  MadAnimRotate_t11_78  : public MadAnim_t11_71
{
	// MadLevelManager.MadAnimRotate/ValueType MadLevelManager.MadAnimRotate::rotateFrom
	int32_t ___rotateFrom_29;
	// UnityEngine.Vector3 MadLevelManager.MadAnimRotate::rotateFromValue
	Vector3_t7_66  ___rotateFromValue_30;
	// MadLevelManager.MadAnimRotate/ValueType MadLevelManager.MadAnimRotate::rotateTo
	int32_t ___rotateTo_31;
	// UnityEngine.Vector3 MadLevelManager.MadAnimRotate::rotateToValue
	Vector3_t7_66  ___rotateToValue_32;
	// UnityEngine.Vector3 MadLevelManager.MadAnimRotate::originLocal
	Vector3_t7_66  ___originLocal_33;
	// UnityEngine.Vector3 MadLevelManager.MadAnimRotate::startLocal
	Vector3_t7_66  ___startLocal_34;
	// MadLevelManager.MadiTween/EasingFunction MadLevelManager.MadAnimRotate::easingFunction
	EasingFunction_t11_74 * ___easingFunction_35;
};
