#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t7_113;
// GlowEffect.GlowEffect
struct GlowEffect_t11_2;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_GlowEffect_GlowEffect_GlowMode.h"
#include "AssemblyU2DCSharp_GlowEffect_GlowEffect_BlendMode.h"
#include "UnityEngine_UnityEngine_Rect.h"

// GlowEffect.Demo
struct  Demo_t11_1  : public MonoBehaviour_t7_106
{
	// System.Boolean GlowEffect.Demo::enableGlow
	bool ___enableGlow_2;
	// GlowEffect.GlowEffect/GlowMode GlowEffect.Demo::glowMode
	int32_t ___glowMode_3;
	// GlowEffect.GlowEffect/BlendMode GlowEffect.Demo::blendMode
	int32_t ___blendMode_4;
	// System.Int32 GlowEffect.Demo::downsamplePower
	int32_t ___downsamplePower_5;
	// System.Single GlowEffect.Demo::glowStrength
	float ___glowStrength_6;
	// System.Int32 GlowEffect.Demo::blurIterations
	int32_t ___blurIterations_7;
	// System.Single GlowEffect.Demo::blurSpread
	float ___blurSpread_8;
	// UnityEngine.GameObject GlowEffect.Demo::glowGroup
	GameObject_t7_113 * ___glowGroup_9;
	// UnityEngine.GameObject GlowEffect.Demo::alphaGlowGroup
	GameObject_t7_113 * ___alphaGlowGroup_10;
	// GlowEffect.GlowEffect GlowEffect.Demo::glowEffect
	GlowEffect_t11_2 * ___glowEffect_11;
	// UnityEngine.Rect GlowEffect.Demo::glowControlsVisibleRect
	Rect_t7_35  ___glowControlsVisibleRect_12;
	// UnityEngine.Rect GlowEffect.Demo::glowControlsNotVisibleRect
	Rect_t7_35  ___glowControlsNotVisibleRect_13;
	// System.Boolean GlowEffect.Demo::showGlowControls
	bool ___showGlowControls_14;
	// System.Single GlowEffect.Demo::updateInterval
	float ___updateInterval_15;
	// System.Single GlowEffect.Demo::accum
	float ___accum_16;
	// System.Int32 GlowEffect.Demo::frames
	int32_t ___frames_17;
	// System.Single GlowEffect.Demo::timeleft
	float ___timeleft_18;
	// System.Single GlowEffect.Demo::fps
	float ___fps_19;
};
