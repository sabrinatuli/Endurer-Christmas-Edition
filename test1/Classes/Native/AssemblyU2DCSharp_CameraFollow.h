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

// CameraFollow
struct  CameraFollow_t11_226  : public MonoBehaviour_t7_106
{
	// UnityEngine.Transform CameraFollow::target
	Transform_t7_81 * ___target_2;
	// System.Single CameraFollow::smoothing
	float ___smoothing_3;
	// UnityEngine.Vector3 CameraFollow::offset
	Vector3_t7_66  ___offset_4;
};
