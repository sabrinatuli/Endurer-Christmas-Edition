#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t7_168;
// UnityEngine.Rigidbody
struct Rigidbody_t7_127;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// PlayerMovement
struct  PlayerMovement_t11_252  : public MonoBehaviour_t7_106
{
	// System.Single PlayerMovement::speed
	float ___speed_2;
	// UnityEngine.Vector3 PlayerMovement::movement
	Vector3_t7_66  ___movement_3;
	// UnityEngine.Animator PlayerMovement::anim
	Animator_t7_168 * ___anim_4;
	// UnityEngine.Vector2 PlayerMovement::joystickRightPos
	Vector2_t7_65  ___joystickRightPos_5;
	// UnityEngine.Rigidbody PlayerMovement::playerRigidbody
	Rigidbody_t7_127 * ___playerRigidbody_6;
	// System.Int32 PlayerMovement::floorMask
	int32_t ___floorMask_7;
	// System.Single PlayerMovement::camRayLength
	float ___camRayLength_8;
};
