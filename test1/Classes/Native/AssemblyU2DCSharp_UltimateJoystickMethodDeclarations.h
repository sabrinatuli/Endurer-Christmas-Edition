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

// UltimateJoystick
struct UltimateJoystick_t11_266;
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

// System.Void UltimateJoystick::.ctor()
extern "C" void UltimateJoystick__ctor_m11_1837 (UltimateJoystick_t11_266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystick::.cctor()
extern "C" void UltimateJoystick__cctor_m11_1838 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystick::Start()
extern "C" void UltimateJoystick_Start_m11_1839 (UltimateJoystick_t11_266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void UltimateJoystick_OnPointerDown_m11_1840 (UltimateJoystick_t11_266 * __this, PointerEventData_t8_36 * ___touchInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void UltimateJoystick_OnDrag_m11_1841 (UltimateJoystick_t11_266 * __this, PointerEventData_t8_36 * ___touchInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" void UltimateJoystick_OnPointerUp_m11_1842 (UltimateJoystick_t11_266 * __this, PointerEventData_t8_36 * ___touchInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystick::UpdateJoystick(UnityEngine.EventSystems.PointerEventData)
extern "C" void UltimateJoystick_UpdateJoystick_m11_1843 (UltimateJoystick_t11_266 * __this, PointerEventData_t8_36 * ___touchInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UltimateJoystick::ConfigureImagePosition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t7_65  UltimateJoystick_ConfigureImagePosition_m11_1844 (UltimateJoystick_t11_266 * __this, Vector2_t7_65  ___textureSize, Vector2_t7_65  ___customSpacing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystick::TensionAccentDisplay()
extern "C" void UltimateJoystick_TensionAccentDisplay_m11_1845 (UltimateJoystick_t11_266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystick::TensionAccentReset()
extern "C" void UltimateJoystick_TensionAccentReset_m11_1846 (UltimateJoystick_t11_266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UltimateJoystick::TapCounter()
extern "C" Object_t * UltimateJoystick_TapCounter_m11_1847 (UltimateJoystick_t11_266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UltimateJoystick::TapCounterDelay()
extern "C" Object_t * UltimateJoystick_TapCounterDelay_m11_1848 (UltimateJoystick_t11_266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UltimateJoystick::ThrowableMovement()
extern "C" Object_t * UltimateJoystick_ThrowableMovement_m11_1849 (UltimateJoystick_t11_266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.CanvasScaler UltimateJoystick::GetParentCanvas()
extern "C" CanvasScaler_t8_139 * UltimateJoystick_GetParentCanvas_m11_1850 (UltimateJoystick_t11_266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CanvasGroup UltimateJoystick::GetCanvasGroup()
extern "C" CanvasGroup_t7_187 * UltimateJoystick_GetCanvasGroup_m11_1851 (UltimateJoystick_t11_266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UltimateJoystick::get_JoystickPositionDeadZone()
extern "C" Vector2_t7_65  UltimateJoystick_get_JoystickPositionDeadZone_m11_1852 (UltimateJoystick_t11_266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystick::SetPosition(System.String,UnityEngine.Vector2)
extern "C" void UltimateJoystick_SetPosition_m11_1853 (UltimateJoystick_t11_266 * __this, String_t* ___joystickName, Vector2_t7_65  ___joystickPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystick::Update()
extern "C" void UltimateJoystick_Update_m11_1854 (UltimateJoystick_t11_266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystick::UpdatePositioning()
extern "C" void UltimateJoystick_UpdatePositioning_m11_1855 (UltimateJoystick_t11_266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UltimateJoystick::get_JoystickPosition()
extern "C" Vector2_t7_65  UltimateJoystick_get_JoystickPosition_m11_1856 (UltimateJoystick_t11_266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UltimateJoystick::get_JoystickDistance()
extern "C" float UltimateJoystick_get_JoystickDistance_m11_1857 (UltimateJoystick_t11_266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystick::ResetUltimateJoystick()
extern "C" void UltimateJoystick_ResetUltimateJoystick_m11_1858 (UltimateJoystick_t11_266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystick::UpdateHighlightColor()
extern "C" void UltimateJoystick_UpdateHighlightColor_m11_1859 (UltimateJoystick_t11_266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UltimateJoystick::GetPosition(System.String)
extern "C" Vector2_t7_65  UltimateJoystick_GetPosition_m11_1860 (Object_t * __this /* static, unused */, String_t* ___joystickName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
