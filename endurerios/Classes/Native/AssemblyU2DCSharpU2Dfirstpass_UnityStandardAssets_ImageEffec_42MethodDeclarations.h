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

// UnityStandardAssets.ImageEffects.ImageEffects
struct ImageEffects_t12_44;
// UnityEngine.Material
struct Material_t7_38;
// UnityEngine.RenderTexture
struct RenderTexture_t7_51;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityStandardAssets.ImageEffects.ImageEffects::.ctor()
extern "C" void ImageEffects__ctor_m12_125 (ImageEffects_t12_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::RenderDistortion(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" void ImageEffects_RenderDistortion_m12_126 (Object_t * __this /* static, unused */, Material_t7_38 * ___material, RenderTexture_t7_51 * ___source, RenderTexture_t7_51 * ___destination, float ___angle, Vector2_t7_65  ___center, Vector2_t7_65  ___radius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::Blit(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void ImageEffects_Blit_m12_127 (Object_t * __this /* static, unused */, RenderTexture_t7_51 * ___source, RenderTexture_t7_51 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::BlitWithMaterial(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void ImageEffects_BlitWithMaterial_m12_128 (Object_t * __this /* static, unused */, Material_t7_38 * ___material, RenderTexture_t7_51 * ___source, RenderTexture_t7_51 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
