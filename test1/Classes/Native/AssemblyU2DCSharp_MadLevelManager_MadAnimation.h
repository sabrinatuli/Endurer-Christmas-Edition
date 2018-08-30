#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MadLevelManager.MadAnimation/Action
struct Action_t11_163;
// MadLevelManager.MadSprite
struct MadSprite_t11_13;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Color.h"

// MadLevelManager.MadAnimation
struct  MadAnimation_t11_164  : public MonoBehaviour_t7_106
{
	// MadLevelManager.MadAnimation/Action MadLevelManager.MadAnimation::onMouseEnter
	Action_t11_163 * ___onMouseEnter_2;
	// MadLevelManager.MadAnimation/Action MadLevelManager.MadAnimation::onMouseExit
	Action_t11_163 * ___onMouseExit_3;
	// MadLevelManager.MadAnimation/Action MadLevelManager.MadAnimation::onTouchEnter
	Action_t11_163 * ___onTouchEnter_4;
	// MadLevelManager.MadAnimation/Action MadLevelManager.MadAnimation::onTouchExit
	Action_t11_163 * ___onTouchExit_5;
	// MadLevelManager.MadAnimation/Action MadLevelManager.MadAnimation::onFocus
	Action_t11_163 * ___onFocus_6;
	// MadLevelManager.MadAnimation/Action MadLevelManager.MadAnimation::onFocusLost
	Action_t11_163 * ___onFocusLost_7;
	// MadLevelManager.MadSprite MadLevelManager.MadAnimation::sprite
	MadSprite_t11_13 * ___sprite_8;
	// UnityEngine.Vector3 MadLevelManager.MadAnimation::origPosition
	Vector3_t7_66  ___origPosition_9;
	// UnityEngine.Vector3 MadLevelManager.MadAnimation::origRotation
	Vector3_t7_66  ___origRotation_10;
	// UnityEngine.Vector3 MadLevelManager.MadAnimation::origScale
	Vector3_t7_66  ___origScale_11;
	// UnityEngine.Color MadLevelManager.MadAnimation::origTint
	Color_t7_57  ___origTint_12;
	// System.Boolean MadLevelManager.MadAnimation::hasOrigs
	bool ___hasOrigs_13;
};
