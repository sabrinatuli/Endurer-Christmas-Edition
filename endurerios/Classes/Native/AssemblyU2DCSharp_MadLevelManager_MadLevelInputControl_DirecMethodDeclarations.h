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

// MadLevelManager.MadLevelInputControl/DirectionTraverseRule
struct DirectionTraverseRule_t11_126;
// MadLevelManager.MadLevelIcon
struct MadLevelIcon_t11_44;
// System.Collections.Generic.List`1<MadLevelManager.MadLevelIcon>
struct List_1_t1_1015;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void MadLevelManager.MadLevelInputControl/DirectionTraverseRule::.ctor()
extern "C" void DirectionTraverseRule__ctor_m11_690 (DirectionTraverseRule_t11_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelIcon MadLevelManager.MadLevelInputControl/DirectionTraverseRule::LeftIcon(MadLevelManager.MadLevelIcon)
extern "C" MadLevelIcon_t11_44 * DirectionTraverseRule_LeftIcon_m11_691 (DirectionTraverseRule_t11_126 * __this, MadLevelIcon_t11_44 * ___current, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelIcon MadLevelManager.MadLevelInputControl/DirectionTraverseRule::RightIcon(MadLevelManager.MadLevelIcon)
extern "C" MadLevelIcon_t11_44 * DirectionTraverseRule_RightIcon_m11_692 (DirectionTraverseRule_t11_126 * __this, MadLevelIcon_t11_44 * ___current, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelIcon MadLevelManager.MadLevelInputControl/DirectionTraverseRule::TopIcon(MadLevelManager.MadLevelIcon)
extern "C" MadLevelIcon_t11_44 * DirectionTraverseRule_TopIcon_m11_693 (DirectionTraverseRule_t11_126 * __this, MadLevelIcon_t11_44 * ___current, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelIcon MadLevelManager.MadLevelInputControl/DirectionTraverseRule::BottomIcon(MadLevelManager.MadLevelIcon)
extern "C" MadLevelIcon_t11_44 * DirectionTraverseRule_BottomIcon_m11_694 (DirectionTraverseRule_t11_126 * __this, MadLevelIcon_t11_44 * ___current, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelIcon MadLevelManager.MadLevelInputControl/DirectionTraverseRule::FindBest(MadLevelManager.MadLevelIcon,UnityEngine.Vector2,System.Single)
extern "C" MadLevelIcon_t11_44 * DirectionTraverseRule_FindBest_m11_695 (DirectionTraverseRule_t11_126 * __this, MadLevelIcon_t11_44 * ___origin, Vector2_t7_65  ___direction, float ___toleranceAngle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<MadLevelManager.MadLevelIcon> MadLevelManager.MadLevelInputControl/DirectionTraverseRule::FindAll(MadLevelManager.MadLevelIcon,UnityEngine.Vector2,System.Single)
extern "C" List_1_t1_1015 * DirectionTraverseRule_FindAll_m11_696 (DirectionTraverseRule_t11_126 * __this, MadLevelIcon_t11_44 * ___origin, Vector2_t7_65  ___direction, float ___toleranceAngle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
