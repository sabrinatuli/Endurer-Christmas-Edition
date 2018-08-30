#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t7_127;
// UnityEngine.Mesh
struct Mesh_t7_29;
// UnityEngine.Color[]
struct ColorU5BU5D_t7_335;
// System.Single[]
struct SingleU5BU5D_t1_861;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t7_12;
struct WaitForSeconds_t7_12_marshaled;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"

// SphereBounce
struct  SphereBounce_t11_5  : public MonoBehaviour_t7_106
{
	// System.Single SphereBounce::force
	float ___force_2;
	// System.Single SphereBounce::torque
	float ___torque_3;
	// System.Single SphereBounce::interval
	float ___interval_4;
	// UnityEngine.Rigidbody SphereBounce::thisRigidbody
	Rigidbody_t7_127 * ___thisRigidbody_5;
	// UnityEngine.Mesh SphereBounce::thisMesh
	Mesh_t7_29 * ___thisMesh_6;
	// UnityEngine.Color[] SphereBounce::startColor
	ColorU5BU5D_t7_335* ___startColor_7;
	// System.Single[] SphereBounce::startTime
	SingleU5BU5D_t1_861* ___startTime_8;
	// System.Single[] SphereBounce::duration
	SingleU5BU5D_t1_861* ___duration_9;
	// UnityEngine.Color SphereBounce::targetColor
	Color_t7_57  ___targetColor_10;
	// System.Boolean SphereBounce::needToLerp
	bool ___needToLerp_11;
	// UnityEngine.WaitForSeconds SphereBounce::delay
	WaitForSeconds_t7_12 * ___delay_12;
};
