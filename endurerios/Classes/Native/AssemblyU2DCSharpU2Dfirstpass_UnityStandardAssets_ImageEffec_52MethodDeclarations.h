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

// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion
struct ScreenSpaceAmbientOcclusion_t12_54;
// UnityEngine.Material
struct Material_t7_38;
// UnityEngine.Shader
struct Shader_t7_87;
// UnityEngine.RenderTexture
struct RenderTexture_t7_51;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::.ctor()
extern "C" void ScreenSpaceAmbientOcclusion__ctor_m12_176 (ScreenSpaceAmbientOcclusion_t12_54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::CreateMaterial(UnityEngine.Shader)
extern "C" Material_t7_38 * ScreenSpaceAmbientOcclusion_CreateMaterial_m12_177 (Object_t * __this /* static, unused */, Shader_t7_87 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::DestroyMaterial(UnityEngine.Material)
extern "C" void ScreenSpaceAmbientOcclusion_DestroyMaterial_m12_178 (Object_t * __this /* static, unused */, Material_t7_38 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::OnDisable()
extern "C" void ScreenSpaceAmbientOcclusion_OnDisable_m12_179 (ScreenSpaceAmbientOcclusion_t12_54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::Start()
extern "C" void ScreenSpaceAmbientOcclusion_Start_m12_180 (ScreenSpaceAmbientOcclusion_t12_54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::OnEnable()
extern "C" void ScreenSpaceAmbientOcclusion_OnEnable_m12_181 (ScreenSpaceAmbientOcclusion_t12_54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::CreateMaterials()
extern "C" void ScreenSpaceAmbientOcclusion_CreateMaterials_m12_182 (ScreenSpaceAmbientOcclusion_t12_54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void ScreenSpaceAmbientOcclusion_OnRenderImage_m12_183 (ScreenSpaceAmbientOcclusion_t12_54 * __this, RenderTexture_t7_51 * ___source, RenderTexture_t7_51 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
