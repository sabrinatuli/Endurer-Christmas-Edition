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

// GlowEffect.GlowEffect
struct GlowEffect_t11_2;
// UnityEngine.RenderTexture
struct RenderTexture_t5_44;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void GlowEffect.GlowEffect::.ctor()
extern "C" void GlowEffect__ctor_m11_20 (GlowEffect_t11_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GlowEffect.GlowEffect::get_BlurIterations()
extern "C" int32_t GlowEffect_get_BlurIterations_m11_21 (GlowEffect_t11_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect.GlowEffect::set_BlurIterations(System.Int32)
extern "C" void GlowEffect_set_BlurIterations_m11_22 (GlowEffect_t11_2 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GlowEffect.GlowEffect::get_BlurSpread()
extern "C" float GlowEffect_get_BlurSpread_m11_23 (GlowEffect_t11_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect.GlowEffect::set_BlurSpread(System.Single)
extern "C" void GlowEffect_set_BlurSpread_m11_24 (GlowEffect_t11_2 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GlowEffect.GlowEffect::get_GlowStrength()
extern "C" float GlowEffect_get_GlowStrength_m11_25 (GlowEffect_t11_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect.GlowEffect::set_GlowStrength(System.Single)
extern "C" void GlowEffect_set_GlowStrength_m11_26 (GlowEffect_t11_2 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color GlowEffect.GlowEffect::get_GlowColorMultiplier()
extern "C" Color_t5_50  GlowEffect_get_GlowColorMultiplier_m11_27 (GlowEffect_t11_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect.GlowEffect::set_GlowColorMultiplier(UnityEngine.Color)
extern "C" void GlowEffect_set_GlowColorMultiplier_m11_28 (GlowEffect_t11_2 * __this, Color_t5_50  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect.GlowEffect::Awake()
extern "C" void GlowEffect_Awake_m11_29 (GlowEffect_t11_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect.GlowEffect::Start()
extern "C" void GlowEffect_Start_m11_30 (GlowEffect_t11_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect.GlowEffect::OnEnable()
extern "C" void GlowEffect_OnEnable_m11_31 (GlowEffect_t11_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect.GlowEffect::UpdateGlowMaterial()
extern "C" void GlowEffect_UpdateGlowMaterial_m11_32 (GlowEffect_t11_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect.GlowEffect::OnDisable()
extern "C" void GlowEffect_OnDisable_m11_33 (GlowEffect_t11_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect.GlowEffect::OnPreRender()
extern "C" void GlowEffect_OnPreRender_m11_34 (GlowEffect_t11_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect.GlowEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void GlowEffect_OnRenderImage_m11_35 (GlowEffect_t11_2 * __this, RenderTexture_t5_44 * ___source, RenderTexture_t5_44 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect.GlowEffect::CalculateGlow(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void GlowEffect_CalculateGlow_m11_36 (GlowEffect_t11_2 * __this, RenderTexture_t5_44 * ___source, RenderTexture_t5_44 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect.GlowEffect::DisableShaderKeywords()
extern "C" void GlowEffect_DisableShaderKeywords_m11_37 (GlowEffect_t11_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
