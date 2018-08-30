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

// UnityStandardAssets.ImageEffects.DepthOfField
struct DepthOfField_t12_33;
// UnityEngine.RenderTexture
struct RenderTexture_t7_51;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.ImageEffects.DepthOfField::.ctor()
extern "C" void DepthOfField__ctor_m12_80 (DepthOfField_t12_33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.DepthOfField::CheckResources()
extern "C" bool DepthOfField_CheckResources_m12_81 (DepthOfField_t12_33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::OnEnable()
extern "C" void DepthOfField_OnEnable_m12_82 (DepthOfField_t12_33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::OnDisable()
extern "C" void DepthOfField_OnDisable_m12_83 (DepthOfField_t12_33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::ReleaseComputeResources()
extern "C" void DepthOfField_ReleaseComputeResources_m12_84 (DepthOfField_t12_33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::CreateComputeResources()
extern "C" void DepthOfField_CreateComputeResources_m12_85 (DepthOfField_t12_33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.ImageEffects.DepthOfField::FocalDistance01(System.Single)
extern "C" float DepthOfField_FocalDistance01_m12_86 (DepthOfField_t12_33 * __this, float ___worldDist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::WriteCoc(UnityEngine.RenderTexture,System.Boolean)
extern "C" void DepthOfField_WriteCoc_m12_87 (DepthOfField_t12_33 * __this, RenderTexture_t7_51 * ___fromTo, bool ___fgDilate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void DepthOfField_OnRenderImage_m12_88 (DepthOfField_t12_33 * __this, RenderTexture_t7_51 * ___source, RenderTexture_t7_51 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
