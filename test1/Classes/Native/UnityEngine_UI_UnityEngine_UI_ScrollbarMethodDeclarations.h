﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.UI.Scrollbar
struct Scrollbar_t8_113;
// UnityEngine.RectTransform
struct RectTransform_t7_80;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_t8_110;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t8_36;
// System.Collections.IEnumerator
struct IEnumerator_t1_132;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t8_33;
// UnityEngine.UI.Selectable
struct Selectable_t8_55;
// UnityEngine.Transform
struct Transform_t7_81;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_Direction.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_Axis.h"

// System.Void UnityEngine.UI.Scrollbar::.ctor()
extern "C" void Scrollbar__ctor_m8_827 (Scrollbar_t8_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::get_handleRect()
extern "C" RectTransform_t7_80 * Scrollbar_get_handleRect_m8_828 (Scrollbar_t8_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_handleRect(UnityEngine.RectTransform)
extern "C" void Scrollbar_set_handleRect_m8_829 (Scrollbar_t8_113 * __this, RectTransform_t7_80 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::get_direction()
extern "C" int32_t Scrollbar_get_direction_m8_830 (Scrollbar_t8_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_direction(UnityEngine.UI.Scrollbar/Direction)
extern "C" void Scrollbar_set_direction_m8_831 (Scrollbar_t8_113 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_value()
extern "C" float Scrollbar_get_value_m8_832 (Scrollbar_t8_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_value(System.Single)
extern "C" void Scrollbar_set_value_m8_833 (Scrollbar_t8_113 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_size()
extern "C" float Scrollbar_get_size_m8_834 (Scrollbar_t8_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_size(System.Single)
extern "C" void Scrollbar_set_size_m8_835 (Scrollbar_t8_113 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Scrollbar::get_numberOfSteps()
extern "C" int32_t Scrollbar_get_numberOfSteps_m8_836 (Scrollbar_t8_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_numberOfSteps(System.Int32)
extern "C" void Scrollbar_set_numberOfSteps_m8_837 (Scrollbar_t8_113 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::get_onValueChanged()
extern "C" ScrollEvent_t8_110 * Scrollbar_get_onValueChanged_m8_838 (Scrollbar_t8_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_onValueChanged(UnityEngine.UI.Scrollbar/ScrollEvent)
extern "C" void Scrollbar_set_onValueChanged_m8_839 (Scrollbar_t8_113 * __this, ScrollEvent_t8_110 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_stepSize()
extern "C" float Scrollbar_get_stepSize_m8_840 (Scrollbar_t8_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void Scrollbar_Rebuild_m8_841 (Scrollbar_t8_113 * __this, int32_t ___executing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::LayoutComplete()
extern "C" void Scrollbar_LayoutComplete_m8_842 (Scrollbar_t8_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::GraphicUpdateComplete()
extern "C" void Scrollbar_GraphicUpdateComplete_m8_843 (Scrollbar_t8_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnEnable()
extern "C" void Scrollbar_OnEnable_m8_844 (Scrollbar_t8_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnDisable()
extern "C" void Scrollbar_OnDisable_m8_845 (Scrollbar_t8_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateCachedReferences()
extern "C" void Scrollbar_UpdateCachedReferences_m8_846 (Scrollbar_t8_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Set(System.Single)
extern "C" void Scrollbar_Set_m8_847 (Scrollbar_t8_113 * __this, float ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Set(System.Single,System.Boolean)
extern "C" void Scrollbar_Set_m8_848 (Scrollbar_t8_113 * __this, float ___input, bool ___sendCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnRectTransformDimensionsChange()
extern "C" void Scrollbar_OnRectTransformDimensionsChange_m8_849 (Scrollbar_t8_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/Axis UnityEngine.UI.Scrollbar::get_axis()
extern "C" int32_t Scrollbar_get_axis_m8_850 (Scrollbar_t8_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::get_reverseValue()
extern "C" bool Scrollbar_get_reverseValue_m8_851 (Scrollbar_t8_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateVisuals()
extern "C" void Scrollbar_UpdateVisuals_m8_852 (Scrollbar_t8_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_UpdateDrag_m8_853 (Scrollbar_t8_113 * __this, PointerEventData_t8_36 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::MayDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" bool Scrollbar_MayDrag_m8_854 (Scrollbar_t8_113 * __this, PointerEventData_t8_36 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_OnBeginDrag_m8_855 (Scrollbar_t8_113 * __this, PointerEventData_t8_36 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_OnDrag_m8_856 (Scrollbar_t8_113 * __this, PointerEventData_t8_36 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_OnPointerDown_m8_857 (Scrollbar_t8_113 * __this, PointerEventData_t8_36 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Scrollbar::ClickRepeat(UnityEngine.EventSystems.PointerEventData)
extern "C" Object_t * Scrollbar_ClickRepeat_m8_858 (Scrollbar_t8_113 * __this, PointerEventData_t8_36 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_OnPointerUp_m8_859 (Scrollbar_t8_113 * __this, PointerEventData_t8_36 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C" void Scrollbar_OnMove_m8_860 (Scrollbar_t8_113 * __this, AxisEventData_t8_33 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnLeft()
extern "C" Selectable_t8_55 * Scrollbar_FindSelectableOnLeft_m8_861 (Scrollbar_t8_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnRight()
extern "C" Selectable_t8_55 * Scrollbar_FindSelectableOnRight_m8_862 (Scrollbar_t8_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnUp()
extern "C" Selectable_t8_55 * Scrollbar_FindSelectableOnUp_m8_863 (Scrollbar_t8_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnDown()
extern "C" Selectable_t8_55 * Scrollbar_FindSelectableOnDown_m8_864 (Scrollbar_t8_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_OnInitializePotentialDrag_m8_865 (Scrollbar_t8_113 * __this, PointerEventData_t8_36 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::SetDirection(UnityEngine.UI.Scrollbar/Direction,System.Boolean)
extern "C" void Scrollbar_SetDirection_m8_866 (Scrollbar_t8_113 * __this, int32_t ___direction, bool ___includeRectLayouts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C" bool Scrollbar_UnityEngine_UI_ICanvasElement_IsDestroyed_m8_867 (Scrollbar_t8_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Scrollbar::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" Transform_t7_81 * Scrollbar_UnityEngine_UI_ICanvasElement_get_transform_m8_868 (Scrollbar_t8_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
