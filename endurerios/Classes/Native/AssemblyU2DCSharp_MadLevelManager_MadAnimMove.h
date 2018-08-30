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
#include "AssemblyU2DCSharp_MadLevelManager_MadAnimMove_ValueType.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// MadLevelManager.MadAnimMove
struct  MadAnimMove_t11_76  : public MadAnim_t11_71
{
	// MadLevelManager.MadAnimMove/ValueType MadLevelManager.MadAnimMove::moveFrom
	int32_t ___moveFrom_29;
	// UnityEngine.Vector3 MadLevelManager.MadAnimMove::moveFromPosition
	Vector3_t7_66  ___moveFromPosition_30;
	// MadLevelManager.MadAnimMove/ValueType MadLevelManager.MadAnimMove::moveTo
	int32_t ___moveTo_31;
	// UnityEngine.Vector3 MadLevelManager.MadAnimMove::moveToPosition
	Vector3_t7_66  ___moveToPosition_32;
	// UnityEngine.Vector3 MadLevelManager.MadAnimMove::originWorld
	Vector3_t7_66  ___originWorld_33;
	// UnityEngine.Vector3 MadLevelManager.MadAnimMove::originLocal
	Vector3_t7_66  ___originLocal_34;
	// UnityEngine.Vector3 MadLevelManager.MadAnimMove::startWorld
	Vector3_t7_66  ___startWorld_35;
	// UnityEngine.Vector3 MadLevelManager.MadAnimMove::startLocal
	Vector3_t7_66  ___startLocal_36;
	// MadLevelManager.MadiTween/EasingFunction MadLevelManager.MadAnimMove::_easingFunction
	EasingFunction_t11_74 * ____easingFunction_37;
};
