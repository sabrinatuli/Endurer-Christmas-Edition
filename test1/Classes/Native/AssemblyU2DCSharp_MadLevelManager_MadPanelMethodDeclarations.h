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

// MadLevelManager.MadPanel
struct MadPanel_t11_161;
// MadLevelManager.MadPanel/Event1`1<MadLevelManager.MadSprite>
struct Event1_1_t11_192;
// MadLevelManager.MadMaterialStore
struct MadMaterialStore_t11_189;
// MadLevelManager.MadSprite
struct MadSprite_t11_13;
// UnityEngine.Camera
struct Camera_t7_100;
// System.Collections.Generic.List`1<MadLevelManager.MadSprite>
struct List_1_t1_1041;
// UnityEngine.Transform
struct Transform_t7_81;
// MadLevelManager.MadPanel[]
struct MadPanelU5BU5D_t11_273;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void MadLevelManager.MadPanel::.ctor()
extern "C" void MadPanel__ctor_m11_1151 (MadPanel_t11_161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadPanel::.cctor()
extern "C" void MadPanel__cctor_m11_1152 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadPanel::add_onFocusChanged(MadLevelManager.MadPanel/Event1`1<MadLevelManager.MadSprite>)
extern "C" void MadPanel_add_onFocusChanged_m11_1153 (MadPanel_t11_161 * __this, Event1_1_t11_192 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadPanel::remove_onFocusChanged(MadLevelManager.MadPanel/Event1`1<MadLevelManager.MadSprite>)
extern "C" void MadPanel_remove_onFocusChanged_m11_1154 (MadPanel_t11_161 * __this, Event1_1_t11_192 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadMaterialStore MadLevelManager.MadPanel::get_materialStore()
extern "C" MadMaterialStore_t11_189 * MadPanel_get_materialStore_m11_1155 (MadPanel_t11_161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadPanel::set_materialStore(MadLevelManager.MadMaterialStore)
extern "C" void MadPanel_set_materialStore_m11_1156 (MadPanel_t11_161 * __this, MadMaterialStore_t11_189 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadSprite MadLevelManager.MadPanel::get_focusedSprite()
extern "C" MadSprite_t11_13 * MadPanel_get_focusedSprite_m11_1157 (MadPanel_t11_161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadPanel::set_focusedSprite(MadLevelManager.MadSprite)
extern "C" void MadPanel_set_focusedSprite_m11_1158 (MadPanel_t11_161 * __this, MadSprite_t11_13 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera MadLevelManager.MadPanel::get_currentCamera()
extern "C" Camera_t7_100 * MadPanel_get_currentCamera_m11_1159 (MadPanel_t11_161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadPanel::OnGUI()
extern "C" void MadPanel_OnGUI_m11_1160 (MadPanel_t11_161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MadLevelManager.MadPanel::WorldToPanel(UnityEngine.Camera,UnityEngine.Vector3)
extern "C" Vector3_t7_66  MadPanel_WorldToPanel_m11_1161 (MadPanel_t11_161 * __this, Camera_t7_100 * ___worldCamera, Vector3_t7_66  ___worldPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadPanel::OnEnable()
extern "C" void MadPanel_OnEnable_m11_1162 (MadPanel_t11_161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadPanel::Unity5Check()
extern "C" void MadPanel_Unity5Check_m11_1163 (MadPanel_t11_161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadPanel::OnDisable()
extern "C" void MadPanel_OnDisable_m11_1164 (MadPanel_t11_161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadPanel::Update()
extern "C" void MadPanel_Update_m11_1165 (MadPanel_t11_161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadPanel::UpdateInput()
extern "C" void MadPanel_UpdateInput_m11_1166 (MadPanel_t11_161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadPanel::UpdateTouchInput()
extern "C" void MadPanel_UpdateTouchInput_m11_1167 (MadPanel_t11_161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadPanel::UpdateMouseInput()
extern "C" void MadPanel_UpdateMouseInput_m11_1168 (MadPanel_t11_161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadPanel::IsDragging(MadLevelManager.MadSprite)
extern "C" bool MadPanel_IsDragging_m11_1169 (MadPanel_t11_161 * __this, MadSprite_t11_13 * ___sprite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<MadLevelManager.MadSprite> MadLevelManager.MadPanel::AllSpritesForScreenPoint(UnityEngine.Vector2)
extern "C" List_1_t1_1041 * MadPanel_AllSpritesForScreenPoint_m11_1170 (MadPanel_t11_161 * __this, Vector2_t7_65  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadPanel MadLevelManager.MadPanel::FirstOrNull(UnityEngine.Transform)
extern "C" MadPanel_t11_161 * MadPanel_FirstOrNull_m11_1171 (Object_t * __this /* static, unused */, Transform_t7_81 * ___currentTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadPanel MadLevelManager.MadPanel::UniqueOrNull()
extern "C" MadPanel_t11_161 * MadPanel_UniqueOrNull_m11_1172 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadPanel[] MadLevelManager.MadPanel::All()
extern "C" MadPanelU5BU5D_t11_273* MadPanel_All_m11_1173 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
