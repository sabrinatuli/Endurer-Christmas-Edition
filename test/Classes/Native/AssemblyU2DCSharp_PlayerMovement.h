#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t5_155;
// UnityEngine.Rigidbody
struct Rigidbody_t5_115;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// PlayerMovement
struct  PlayerMovement_t11_32  : public MonoBehaviour_t5_96
{
	// System.Single PlayerMovement::speed
	float ___speed_2;
	// UnityEngine.Vector3 PlayerMovement::movement
	Vector3_t5_58  ___movement_3;
	// UnityEngine.Animator PlayerMovement::anim
	Animator_t5_155 * ___anim_4;
	// UnityEngine.Rigidbody PlayerMovement::playerRigidbody
	Rigidbody_t5_115 * ___playerRigidbody_5;
	// System.Int32 PlayerMovement::floorMask
	int32_t ___floorMask_6;
	// System.Single PlayerMovement::camRayLength
	float ___camRayLength_7;
};
