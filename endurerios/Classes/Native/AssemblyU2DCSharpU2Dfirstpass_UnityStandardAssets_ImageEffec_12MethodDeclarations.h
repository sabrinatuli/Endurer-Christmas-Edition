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

// UnityStandardAssets.ImageEffects.BloomAndFlares
struct BloomAndFlares_t12_14;
// UnityEngine.RenderTexture
struct RenderTexture_t7_51;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::.ctor()
extern "C" void BloomAndFlares__ctor_m12_12 (BloomAndFlares_t12_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.BloomAndFlares::CheckResources()
extern "C" bool BloomAndFlares_CheckResources_m12_13 (BloomAndFlares_t12_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndFlares_OnRenderImage_m12_14 (BloomAndFlares_t12_14 * __this, RenderTexture_t7_51 * ___source, RenderTexture_t7_51 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndFlares_AddTo_m12_15 (BloomAndFlares_t12_14 * __this, float ___intensity_, RenderTexture_t7_51 * ___from, RenderTexture_t7_51 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndFlares_BlendFlares_m12_16 (BloomAndFlares_t12_14 * __this, RenderTexture_t7_51 * ___from, RenderTexture_t7_51 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::BrightFilter(System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndFlares_BrightFilter_m12_17 (BloomAndFlares_t12_14 * __this, float ___thresh, float ___useAlphaAsMask, RenderTexture_t7_51 * ___from, RenderTexture_t7_51 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void BloomAndFlares_Vignette_m12_18 (BloomAndFlares_t12_14 * __this, float ___amount, RenderTexture_t7_51 * ___from, RenderTexture_t7_51 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
