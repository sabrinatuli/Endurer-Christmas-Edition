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

// UltimateJoystickJAVA
struct UltimateJoystickJAVA_t10_21;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t8_36;
// System.Collections.IEnumerator
struct IEnumerator_t1_132;
// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t8_139;
// UnityEngine.CanvasGroup
struct CanvasGroup_t7_187;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UltimateJoystickJAVA::.ctor()
extern "C" void UltimateJoystickJAVA__ctor_m10_61 (UltimateJoystickJAVA_t10_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickJAVA::.cctor()
extern "C" void UltimateJoystickJAVA__cctor_m10_62 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickJAVA::Start()
extern "C" void UltimateJoystickJAVA_Start_m10_63 (UltimateJoystickJAVA_t10_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickJAVA::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void UltimateJoystickJAVA_OnPointerDown_m10_64 (UltimateJoystickJAVA_t10_21 * __this, PointerEventData_t8_36 * ___touchInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickJAVA::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void UltimateJoystickJAVA_OnDrag_m10_65 (UltimateJoystickJAVA_t10_21 * __this, PointerEventData_t8_36 * ___touchInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickJAVA::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" void UltimateJoystickJAVA_OnPointerUp_m10_66 (UltimateJoystickJAVA_t10_21 * __this, PointerEventData_t8_36 * ___touchInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickJAVA::UpdateJoystick(UnityEngine.EventSystems.PointerEventData)
extern "C" void UltimateJoystickJAVA_UpdateJoystick_m10_67 (UltimateJoystickJAVA_t10_21 * __this, PointerEventData_t8_36 * ___touchInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UltimateJoystickJAVA::ConfigureImagePosition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t7_65  UltimateJoystickJAVA_ConfigureImagePosition_m10_68 (UltimateJoystickJAVA_t10_21 * __this, Vector2_t7_65  ___textureSize, Vector2_t7_65  ___customSpacing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickJAVA::TensionAccentDisplay()
extern "C" void UltimateJoystickJAVA_TensionAccentDisplay_m10_69 (UltimateJoystickJAVA_t10_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickJAVA::TensionAccentReset()
extern "C" void UltimateJoystickJAVA_TensionAccentReset_m10_70 (UltimateJoystickJAVA_t10_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UltimateJoystickJAVA::TapCounter()
extern "C" Object_t * UltimateJoystickJAVA_TapCounter_m10_71 (UltimateJoystickJAVA_t10_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UltimateJoystickJAVA::TapCounterDelay()
extern "C" Object_t * UltimateJoystickJAVA_TapCounterDelay_m10_72 (UltimateJoystickJAVA_t10_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UltimateJoystickJAVA::ThrowableMovement()
extern "C" Object_t * UltimateJoystickJAVA_ThrowableMovement_m10_73 (UltimateJoystickJAVA_t10_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.CanvasScaler UltimateJoystickJAVA::GetParentCanvas()
extern "C" CanvasScaler_t8_139 * UltimateJoystickJAVA_GetParentCanvas_m10_74 (UltimateJoystickJAVA_t10_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CanvasGroup UltimateJoystickJAVA::GetCanvasGroup()
extern "C" CanvasGroup_t7_187 * UltimateJoystickJAVA_GetCanvasGroup_m10_75 (UltimateJoystickJAVA_t10_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UltimateJoystickJAVA::get_JoystickPositionDeadZone()
extern "C" Vector2_t7_65  UltimateJoystickJAVA_get_JoystickPositionDeadZone_m10_76 (UltimateJoystickJAVA_t10_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickJAVA::SetJoystickPosition(System.String,UnityEngine.Vector2)
extern "C" void UltimateJoystickJAVA_SetJoystickPosition_m10_77 (Object_t * __this /* static, unused */, String_t* ___joystickName, Vector2_t7_65  ___joystickPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickJAVA::Update()
extern "C" void UltimateJoystickJAVA_Update_m10_78 (UltimateJoystickJAVA_t10_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickJAVA::UpdatePositioning()
extern "C" void UltimateJoystickJAVA_UpdatePositioning_m10_79 (UltimateJoystickJAVA_t10_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UltimateJoystickJAVA::get_JoystickPosition()
extern "C" Vector2_t7_65  UltimateJoystickJAVA_get_JoystickPosition_m10_80 (UltimateJoystickJAVA_t10_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UltimateJoystickJAVA::get_JoystickDistance()
extern "C" float UltimateJoystickJAVA_get_JoystickDistance_m10_81 (UltimateJoystickJAVA_t10_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickJAVA::ResetUltimateJoystick()
extern "C" void UltimateJoystickJAVA_ResetUltimateJoystick_m10_82 (UltimateJoystickJAVA_t10_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickJAVA::UpdateHighlightColor()
extern "C" void UltimateJoystickJAVA_UpdateHighlightColor_m10_83 (UltimateJoystickJAVA_t10_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UltimateJoystickJAVA::GetPosition(System.String)
extern "C" Vector2_t7_65  UltimateJoystickJAVA_GetPosition_m10_84 (Object_t * __this /* static, unused */, String_t* ___joystickName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickJAVA::Main()
extern "C" void UltimateJoystickJAVA_Main_m10_85 (UltimateJoystickJAVA_t10_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
