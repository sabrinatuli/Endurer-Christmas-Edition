#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RenderTexture
struct RenderTexture_t7_51;

#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_25.h"

// UnityStandardAssets.ImageEffects.MotionBlur
struct  MotionBlur_t12_45  : public ImageEffectBase_t12_27
{
	// System.Single UnityStandardAssets.ImageEffects.MotionBlur::blurAmount
	float ___blurAmount_4;
	// System.Boolean UnityStandardAssets.ImageEffects.MotionBlur::extraBlur
	bool ___extraBlur_5;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.MotionBlur::accumTexture
	RenderTexture_t7_51 * ___accumTexture_6;
};
