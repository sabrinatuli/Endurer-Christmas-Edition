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

// UnityStandardAssets.ImageEffects.CameraMotionBlur
struct CameraMotionBlur_t12_22;
// UnityEngine.RenderTexture
struct RenderTexture_t7_51;
// UnityEngine.Camera
struct Camera_t7_100;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::.ctor()
extern "C" void CameraMotionBlur__ctor_m12_35 (CameraMotionBlur_t12_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::.cctor()
extern "C" void CameraMotionBlur__cctor_m12_36 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::CalculateViewProjection()
extern "C" void CameraMotionBlur_CalculateViewProjection_m12_37 (CameraMotionBlur_t12_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::Start()
extern "C" void CameraMotionBlur_Start_m12_38 (CameraMotionBlur_t12_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::OnEnable()
extern "C" void CameraMotionBlur_OnEnable_m12_39 (CameraMotionBlur_t12_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::OnDisable()
extern "C" void CameraMotionBlur_OnDisable_m12_40 (CameraMotionBlur_t12_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.CameraMotionBlur::CheckResources()
extern "C" bool CameraMotionBlur_CheckResources_m12_41 (CameraMotionBlur_t12_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void CameraMotionBlur_OnRenderImage_m12_42 (CameraMotionBlur_t12_22 * __this, RenderTexture_t7_51 * ___source, RenderTexture_t7_51 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::Remember()
extern "C" void CameraMotionBlur_Remember_m12_43 (CameraMotionBlur_t12_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityStandardAssets.ImageEffects.CameraMotionBlur::GetTmpCam()
extern "C" Camera_t7_100 * CameraMotionBlur_GetTmpCam_m12_44 (CameraMotionBlur_t12_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::StartFrame()
extern "C" void CameraMotionBlur_StartFrame_m12_45 (CameraMotionBlur_t12_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityStandardAssets.ImageEffects.CameraMotionBlur::divRoundUp(System.Int32,System.Int32)
extern "C" int32_t CameraMotionBlur_divRoundUp_m12_46 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
