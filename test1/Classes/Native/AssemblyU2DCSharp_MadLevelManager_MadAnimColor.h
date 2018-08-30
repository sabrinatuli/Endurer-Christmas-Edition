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
// MadLevelManager.MadSprite
struct MadSprite_t11_13;

#include "AssemblyU2DCSharp_MadLevelManager_MadAnim.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadAnimColor_ValueType.h"
#include "UnityEngine_UnityEngine_Color.h"

// MadLevelManager.MadAnimColor
struct  MadAnimColor_t11_73  : public MadAnim_t11_71
{
	// MadLevelManager.MadAnimColor/ValueType MadLevelManager.MadAnimColor::colorFrom
	int32_t ___colorFrom_29;
	// UnityEngine.Color MadLevelManager.MadAnimColor::colorFromValue
	Color_t7_57  ___colorFromValue_30;
	// MadLevelManager.MadAnimColor/ValueType MadLevelManager.MadAnimColor::colorTo
	int32_t ___colorTo_31;
	// UnityEngine.Color MadLevelManager.MadAnimColor::colorToValue
	Color_t7_57  ___colorToValue_32;
	// UnityEngine.Color MadLevelManager.MadAnimColor::origin
	Color_t7_57  ___origin_33;
	// UnityEngine.Color MadLevelManager.MadAnimColor::start
	Color_t7_57  ___start_34;
	// MadLevelManager.MadiTween/EasingFunction MadLevelManager.MadAnimColor::easingFunction
	EasingFunction_t11_74 * ___easingFunction_35;
	// MadLevelManager.MadSprite MadLevelManager.MadAnimColor::sprite
	MadSprite_t11_13 * ___sprite_36;
};
