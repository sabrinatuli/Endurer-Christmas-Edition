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

// MadLevelManager.MadDraggable
struct MadDraggable_t11_103;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadiTween_EaseType.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void MadLevelManager.MadDraggable::.ctor()
extern "C" void MadDraggable__ctor_m11_1031 (MadDraggable_t11_103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadDraggable::get_lastTouchTime()
extern "C" float MadDraggable_get_lastTouchTime_m11_1032 (MadDraggable_t11_103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadDraggable::set_lastTouchTime(System.Single)
extern "C" void MadDraggable_set_lastTouchTime_m11_1033 (MadDraggable_t11_103 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 MadLevelManager.MadDraggable::get_lastTouchCameraPos()
extern "C" Vector2_t7_65  MadDraggable_get_lastTouchCameraPos_m11_1034 (MadDraggable_t11_103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadDraggable::set_lastTouchCameraPos(UnityEngine.Vector2)
extern "C" void MadDraggable_set_lastTouchCameraPos_m11_1035 (MadDraggable_t11_103 * __this, Vector2_t7_65  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadDraggable::get_dragging()
extern "C" bool MadDraggable_get_dragging_m11_1036 (MadDraggable_t11_103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadDraggable::set_dragging(System.Boolean)
extern "C" void MadDraggable_set_dragging_m11_1037 (MadDraggable_t11_103 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 MadLevelManager.MadDraggable::get_cameraPos()
extern "C" Vector2_t7_65  MadDraggable_get_cameraPos_m11_1038 (MadDraggable_t11_103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadDraggable::set_cameraPos(UnityEngine.Vector2)
extern "C" void MadDraggable_set_cameraPos_m11_1039 (MadDraggable_t11_103 * __this, Vector2_t7_65  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 MadLevelManager.MadDraggable::get_progress()
extern "C" Vector2_t7_65  MadDraggable_get_progress_m11_1040 (MadDraggable_t11_103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadDraggable::OnEnable()
extern "C" void MadDraggable_OnEnable_m11_1041 (MadDraggable_t11_103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadDraggable::Upgrade()
extern "C" void MadDraggable_Upgrade_m11_1042 (MadDraggable_t11_103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadDraggable::Start()
extern "C" void MadDraggable_Start_m11_1043 (MadDraggable_t11_103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadDraggable::Update()
extern "C" void MadDraggable_Update_m11_1044 (MadDraggable_t11_103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadDraggable::FixedUpdate()
extern "C" void MadDraggable_FixedUpdate_m11_1045 (MadDraggable_t11_103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadDraggable::LateUpdate()
extern "C" void MadDraggable_LateUpdate_m11_1046 (MadDraggable_t11_103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadDraggable::UpdateTouchClassification()
extern "C" void MadDraggable_UpdateTouchClassification_m11_1047 (MadDraggable_t11_103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadDraggable::IsTouchingSingle()
extern "C" bool MadDraggable_IsTouchingSingle_m11_1048 (MadDraggable_t11_103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadDraggable::IsTouchingJustStarted()
extern "C" bool MadDraggable_IsTouchingJustStarted_m11_1049 (MadDraggable_t11_103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadDraggable::IsTouchingJustEnded()
extern "C" bool MadDraggable_IsTouchingJustEnded_m11_1050 (MadDraggable_t11_103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 MadLevelManager.MadDraggable::TouchPosition()
extern "C" Vector2_t7_65  MadDraggable_TouchPosition_m11_1051 (MadDraggable_t11_103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadDraggable::RegisterDelta(UnityEngine.Vector2)
extern "C" void MadDraggable_RegisterDelta_m11_1052 (MadDraggable_t11_103 * __this, Vector2_t7_65  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadDraggable::Clear()
extern "C" void MadDraggable_Clear_m11_1053 (MadDraggable_t11_103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadDraggable::ComputeInteriaForce()
extern "C" void MadDraggable_ComputeInteriaForce_m11_1054 (MadDraggable_t11_103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 MadLevelManager.MadDraggable::Ease(MadLevelManager.MadiTween/EaseType,UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C" Vector2_t7_65  MadDraggable_Ease_m11_1055 (MadDraggable_t11_103 * __this, int32_t ___type, Vector2_t7_65  ___start, Vector2_t7_65  ___end, float ___percentage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MadLevelManager.MadDraggable::Ease(MadLevelManager.MadiTween/EaseType,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector3_t7_66  MadDraggable_Ease_m11_1056 (MadDraggable_t11_103 * __this, int32_t ___type, Vector3_t7_66  ___start, Vector3_t7_66  ___end, float ___percentage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
