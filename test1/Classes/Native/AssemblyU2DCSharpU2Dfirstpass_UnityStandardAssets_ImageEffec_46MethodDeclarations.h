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

// UnityStandardAssets.ImageEffects.PostEffectsHelper
struct PostEffectsHelper_t12_48;
// UnityEngine.RenderTexture
struct RenderTexture_t7_51;
// UnityEngine.Material
struct Material_t7_38;
// UnityEngine.Camera
struct Camera_t7_100;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::.ctor()
extern "C" void PostEffectsHelper__ctor_m12_158 (PostEffectsHelper_t12_48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void PostEffectsHelper_OnRenderImage_m12_159 (PostEffectsHelper_t12_48 * __this, RenderTexture_t7_51 * ___source, RenderTexture_t7_51 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawLowLevelPlaneAlignedWithCamera(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Camera)
extern "C" void PostEffectsHelper_DrawLowLevelPlaneAlignedWithCamera_m12_160 (Object_t * __this /* static, unused */, float ___dist, RenderTexture_t7_51 * ___source, RenderTexture_t7_51 * ___dest, Material_t7_38 * ___material, Camera_t7_100 * ___cameraForProjectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
extern "C" void PostEffectsHelper_DrawBorder_m12_161 (Object_t * __this /* static, unused */, RenderTexture_t7_51 * ___dest, Material_t7_38 * ___material, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawLowLevelQuad(System.Single,System.Single,System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C" void PostEffectsHelper_DrawLowLevelQuad_m12_162 (Object_t * __this /* static, unused */, float ___x1, float ___x2, float ___y1, float ___y2, RenderTexture_t7_51 * ___source, RenderTexture_t7_51 * ___dest, Material_t7_38 * ___material, const MethodInfo* method) IL2CPP_METHOD_ATTR;
