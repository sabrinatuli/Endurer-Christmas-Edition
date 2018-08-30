#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t5_36;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"

// GlowColorAnimation
struct  GlowColorAnimation_t11_3  : public MonoBehaviour_t5_96
{
	// UnityEngine.Color GlowColorAnimation::colorA
	Color_t5_50  ___colorA_2;
	// UnityEngine.Color GlowColorAnimation::colorB
	Color_t5_50  ___colorB_3;
	// System.Single GlowColorAnimation::speed
	float ___speed_4;
	// UnityEngine.Material GlowColorAnimation::glowMaterial
	Material_t5_36 * ___glowMaterial_5;
};
