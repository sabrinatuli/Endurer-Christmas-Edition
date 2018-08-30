#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t5_115;
// UnityEngine.Mesh
struct Mesh_t5_27;
// UnityEngine.Color[]
struct ColorU5BU5D_t5_317;
// System.Single[]
struct SingleU5BU5D_t1_860;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t5_11;
struct WaitForSeconds_t5_11_marshaled;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"

// SphereBounce
struct  SphereBounce_t11_5  : public MonoBehaviour_t5_96
{
	// System.Single SphereBounce::force
	float ___force_2;
	// System.Single SphereBounce::torque
	float ___torque_3;
	// System.Single SphereBounce::interval
	float ___interval_4;
	// UnityEngine.Rigidbody SphereBounce::thisRigidbody
	Rigidbody_t5_115 * ___thisRigidbody_5;
	// UnityEngine.Mesh SphereBounce::thisMesh
	Mesh_t5_27 * ___thisMesh_6;
	// UnityEngine.Color[] SphereBounce::startColor
	ColorU5BU5D_t5_317* ___startColor_7;
	// System.Single[] SphereBounce::startTime
	SingleU5BU5D_t1_860* ___startTime_8;
	// System.Single[] SphereBounce::duration
	SingleU5BU5D_t1_860* ___duration_9;
	// UnityEngine.Color SphereBounce::targetColor
	Color_t5_50  ___targetColor_10;
	// System.Boolean SphereBounce::needToLerp
	bool ___needToLerp_11;
	// UnityEngine.WaitForSeconds SphereBounce::delay
	WaitForSeconds_t5_11 * ___delay_12;
};
