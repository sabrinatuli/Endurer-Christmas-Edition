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

// UnityStandardAssets.ImageEffects.PostEffectsBase
struct PostEffectsBase_t12_3;
// UnityEngine.Material
struct Material_t7_38;
// UnityEngine.Shader
struct Shader_t7_87;
// UnityEngine.RenderTexture
struct RenderTexture_t7_51;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::.ctor()
extern "C" void PostEffectsBase__ctor_m12_144 (PostEffectsBase_t12_3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
extern "C" Material_t7_38 * PostEffectsBase_CheckShaderAndCreateMaterial_m12_145 (PostEffectsBase_t12_3 * __this, Shader_t7_87 * ___s, Material_t7_38 * ___m2Create, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CreateMaterial(UnityEngine.Shader,UnityEngine.Material)
extern "C" Material_t7_38 * PostEffectsBase_CreateMaterial_m12_146 (PostEffectsBase_t12_3 * __this, Shader_t7_87 * ___s, Material_t7_38 * ___m2Create, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::OnEnable()
extern "C" void PostEffectsBase_OnEnable_m12_147 (PostEffectsBase_t12_3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport()
extern "C" bool PostEffectsBase_CheckSupport_m12_148 (PostEffectsBase_t12_3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources()
extern "C" bool PostEffectsBase_CheckResources_m12_149 (PostEffectsBase_t12_3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::Start()
extern "C" void PostEffectsBase_Start_m12_150 (PostEffectsBase_t12_3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean)
extern "C" bool PostEffectsBase_CheckSupport_m12_151 (PostEffectsBase_t12_3 * __this, bool ___needDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean,System.Boolean)
extern "C" bool PostEffectsBase_CheckSupport_m12_152 (PostEffectsBase_t12_3 * __this, bool ___needDepth, bool ___needHdr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::Dx11Support()
extern "C" bool PostEffectsBase_Dx11Support_m12_153 (PostEffectsBase_t12_3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::ReportAutoDisable()
extern "C" void PostEffectsBase_ReportAutoDisable_m12_154 (PostEffectsBase_t12_3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShader(UnityEngine.Shader)
extern "C" bool PostEffectsBase_CheckShader_m12_155 (PostEffectsBase_t12_3 * __this, Shader_t7_87 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::NotSupported()
extern "C" void PostEffectsBase_NotSupported_m12_156 (PostEffectsBase_t12_3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
extern "C" void PostEffectsBase_DrawBorder_m12_157 (PostEffectsBase_t12_3 * __this, RenderTexture_t7_51 * ___dest, Material_t7_38 * ___material, const MethodInfo* method) IL2CPP_METHOD_ATTR;
