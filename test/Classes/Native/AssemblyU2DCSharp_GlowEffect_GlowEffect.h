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
// UnityEngine.Shader
struct Shader_t5_78;
// UnityEngine.Camera
struct Camera_t5_91;
// UnityEngine.RenderTexture
struct RenderTexture_t5_44;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_GlowEffect_GlowEffect_GlowMode.h"
#include "AssemblyU2DCSharp_GlowEffect_GlowEffect_BlendMode.h"
#include "UnityEngine_UnityEngine_LayerMask.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Rect.h"

// GlowEffect.GlowEffect
struct  GlowEffect_t11_2  : public MonoBehaviour_t5_96
{
	// UnityEngine.Material GlowEffect.GlowEffect::glowMaterial
	Material_t5_36 * ___glowMaterial_2;
	// UnityEngine.Shader GlowEffect.GlowEffect::glowReplaceShader
	Shader_t5_78 * ___glowReplaceShader_3;
	// GlowEffect.GlowEffect/GlowMode GlowEffect.GlowEffect::glowMode
	int32_t ___glowMode_4;
	// GlowEffect.GlowEffect/BlendMode GlowEffect.GlowEffect::blendMode
	int32_t ___blendMode_5;
	// System.Int32 GlowEffect.GlowEffect::downsampleSize
	int32_t ___downsampleSize_6;
	// System.Int32 GlowEffect.GlowEffect::blurIterations
	int32_t ___blurIterations_7;
	// System.Single GlowEffect.GlowEffect::blurSpread
	float ___blurSpread_8;
	// System.Single GlowEffect.GlowEffect::glowStrength
	float ___glowStrength_9;
	// UnityEngine.LayerMask GlowEffect.GlowEffect::ignoreLayers
	LayerMask_t5_56  ___ignoreLayers_10;
	// UnityEngine.Color GlowEffect.GlowEffect::glowColorMultiplier
	Color_t5_50  ___glowColorMultiplier_11;
	// UnityEngine.Camera GlowEffect.GlowEffect::origCamera
	Camera_t5_91 * ___origCamera_12;
	// UnityEngine.Camera GlowEffect.GlowEffect::shaderCamera
	Camera_t5_91 * ___shaderCamera_13;
	// System.Int32 GlowEffect.GlowEffect::shaderCullingMask
	int32_t ___shaderCullingMask_14;
	// UnityEngine.Rect GlowEffect.GlowEffect::normalizedRect
	Rect_t5_33  ___normalizedRect_15;
	// UnityEngine.RenderTexture GlowEffect.GlowEffect::replaceRenderTexture
	RenderTexture_t5_44 * ___replaceRenderTexture_16;
};
