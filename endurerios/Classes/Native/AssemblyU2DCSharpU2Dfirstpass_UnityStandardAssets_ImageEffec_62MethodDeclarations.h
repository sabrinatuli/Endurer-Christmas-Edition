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

// UnityStandardAssets.ImageEffects.Tonemapping
struct Tonemapping_t12_64;
// UnityEngine.RenderTexture
struct RenderTexture_t7_51;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.ImageEffects.Tonemapping::.ctor()
extern "C" void Tonemapping__ctor_m12_192 (Tonemapping_t12_64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::CheckResources()
extern "C" bool Tonemapping_CheckResources_m12_193 (Tonemapping_t12_64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.ImageEffects.Tonemapping::UpdateCurve()
extern "C" float Tonemapping_UpdateCurve_m12_194 (Tonemapping_t12_64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Tonemapping::OnDisable()
extern "C" void Tonemapping_OnDisable_m12_195 (Tonemapping_t12_64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::CreateInternalRenderTexture()
extern "C" bool Tonemapping_CreateInternalRenderTexture_m12_196 (Tonemapping_t12_64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Tonemapping::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void Tonemapping_OnRenderImage_m12_197 (Tonemapping_t12_64 * __this, RenderTexture_t7_51 * ___source, RenderTexture_t7_51 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
