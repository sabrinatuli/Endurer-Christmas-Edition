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

// MadLevelManager.MadLevelFreeLayout
struct MadLevelFreeLayout_t11_53;
// MadLevelManager.MadFreeDraggable
struct MadFreeDraggable_t11_54;
// MadLevelManager.MadLevelIcon
struct MadLevelIcon_t11_44;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t7_113;
// System.Collections.Generic.List`1<MadLevelManager.MadLevelIcon>
struct List_1_t1_1015;
// System.Collections.Generic.HashSet`1<MadLevelManager.MadLevelIcon>
struct HashSet_1_t4_31;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadiTween_EaseType.h"

// System.Void MadLevelManager.MadLevelFreeLayout::.ctor()
extern "C" void MadLevelFreeLayout__ctor_m11_169 (MadLevelFreeLayout_t11_53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadFreeDraggable MadLevelManager.MadLevelFreeLayout::get_draggable()
extern "C" MadFreeDraggable_t11_54 * MadLevelFreeLayout_get_draggable_m11_170 (MadLevelFreeLayout_t11_53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelIcon MadLevelManager.MadLevelFreeLayout::GetIcon(System.String)
extern "C" MadLevelIcon_t11_44 * MadLevelFreeLayout_GetIcon_m11_171 (MadLevelFreeLayout_t11_53 * __this, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelIcon MadLevelManager.MadLevelFreeLayout::FindClosestIcon(UnityEngine.Vector3)
extern "C" MadLevelIcon_t11_44 * MadLevelFreeLayout_FindClosestIcon_m11_172 (MadLevelFreeLayout_t11_53 * __this, Vector3_t7_66  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelFreeLayout::LookAtIcon(MadLevelManager.MadLevelIcon)
extern "C" void MadLevelFreeLayout_LookAtIcon_m11_173 (MadLevelFreeLayout_t11_53 * __this, MadLevelIcon_t11_44 * ___icon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelFreeLayout::LookAtIcon(MadLevelManager.MadLevelIcon,MadLevelManager.MadiTween/EaseType,System.Single)
extern "C" void MadLevelFreeLayout_LookAtIcon_m11_174 (MadLevelFreeLayout_t11_53 * __this, MadLevelIcon_t11_44 * ___icon, int32_t ___easeType, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelFreeLayout::LookAtLevel(System.String,MadLevelManager.MadiTween/EaseType,System.Single)
extern "C" void MadLevelFreeLayout_LookAtLevel_m11_175 (MadLevelFreeLayout_t11_53 * __this, String_t* ___levelName, int32_t ___easeType, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelFreeLayout::ReplaceIcons(UnityEngine.GameObject)
extern "C" void MadLevelFreeLayout_ReplaceIcons_m11_176 (MadLevelFreeLayout_t11_53 * __this, GameObject_t7_113 * ___newIcon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelFreeLayout::OnEnable()
extern "C" void MadLevelFreeLayout_OnEnable_m11_177 (MadLevelFreeLayout_t11_53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelFreeLayout::Update()
extern "C" void MadLevelFreeLayout_Update_m11_178 (MadLevelFreeLayout_t11_53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelFreeLayout::IsDirty()
extern "C" bool MadLevelFreeLayout_IsDirty_m11_179 (MadLevelFreeLayout_t11_53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelFreeLayout::Build()
extern "C" void MadLevelFreeLayout_Build_m11_180 (MadLevelFreeLayout_t11_53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelFreeLayout::Collides(MadLevelManager.MadLevelIcon,System.Collections.Generic.List`1<MadLevelManager.MadLevelIcon>)
extern "C" bool MadLevelFreeLayout_Collides_m11_181 (MadLevelFreeLayout_t11_53 * __this, MadLevelIcon_t11_44 * ___icon, List_1_t1_1015 * ___iconList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelFreeLayout::BuildBackgroundTexture()
extern "C" void MadLevelFreeLayout_BuildBackgroundTexture_m11_182 (MadLevelFreeLayout_t11_53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelFreeLayout::DeactivateAllOther(System.Collections.Generic.HashSet`1<MadLevelManager.MadLevelIcon>)
extern "C" void MadLevelFreeLayout_DeactivateAllOther_m11_183 (MadLevelFreeLayout_t11_53 * __this, HashSet_1_t4_31 * ___activeIcons, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelFreeLayout::<FindClosestIcon>m__10(MadLevelManager.MadLevelIcon)
extern "C" bool MadLevelFreeLayout_U3CFindClosestIconU3Em__10_m11_184 (Object_t * __this /* static, unused */, MadLevelIcon_t11_44 * ___ic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelFreeLayout::<ReplaceIcons>m__11(MadLevelManager.MadLevelIcon)
extern "C" bool MadLevelFreeLayout_U3CReplaceIconsU3Em__11_m11_185 (Object_t * __this /* static, unused */, MadLevelIcon_t11_44 * ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelFreeLayout::<OnEnable>m__13()
extern "C" void MadLevelFreeLayout_U3COnEnableU3Em__13_m11_186 (MadLevelFreeLayout_t11_53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
