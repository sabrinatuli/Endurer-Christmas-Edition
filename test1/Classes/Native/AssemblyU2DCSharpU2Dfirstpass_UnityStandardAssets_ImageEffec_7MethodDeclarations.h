#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityStandardAssets.ImageEffects.Bloom
struct Bloom_t12_9;
// UnityEngine.RenderTexture
struct RenderTexture_t7_51;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityStandardAssets.ImageEffects.Bloom::.ctor()
extern "C" void Bloom__ctor_m12_4 (Bloom_t12_9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.Bloom::CheckResources()
extern "C" bool Bloom_CheckResources_m12_5 (Bloom_t12_9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_OnRenderImage_m12_6 (Bloom_t12_9 * __this, RenderTexture_t7_51 * ___source, RenderTexture_t7_51 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_AddTo_m12_7 (Bloom_t12_9 * __this, float ___intensity_, RenderTexture_t7_51 * ___from, RenderTexture_t7_51 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_BlendFlares_m12_8 (Bloom_t12_9 * __this, RenderTexture_t7_51 * ___from, RenderTexture_t7_51 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::BrightFilter(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_BrightFilter_m12_9 (Bloom_t12_9 * __this, float ___thresh, RenderTexture_t7_51 * ___from, RenderTexture_t7_51 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::BrightFilter(UnityEngine.Color,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_BrightFilter_m12_10 (Bloom_t12_9 * __this, Color_t7_57  ___threshColor, RenderTexture_t7_51 * ___from, RenderTexture_t7_51 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Bloom_Vignette_m12_11 (Bloom_t12_9 * __this, float ___amount, RenderTexture_t7_51 * ___from, RenderTexture_t7_51 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
