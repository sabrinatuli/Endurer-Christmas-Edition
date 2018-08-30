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

// MadLevelManager.MadLevelGridLayout/Page
struct Page_t11_58;
// UnityEngine.Transform
struct Transform_t7_81;
// MadLevelManager.MadLevelIcon
struct MadLevelIcon_t11_44;

#include "codegen/il2cpp-codegen.h"

// System.Void MadLevelManager.MadLevelGridLayout/Page::.ctor(System.Int32,UnityEngine.Transform)
extern "C" void Page__ctor_m11_200 (Page_t11_58 * __this, int32_t ___dragStopIndex, Transform_t7_81 * ___transform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelGridLayout/Page::get_dragStopIndex()
extern "C" int32_t Page_get_dragStopIndex_m11_201 (Page_t11_58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelGridLayout/Page::set_dragStopIndex(System.Int32)
extern "C" void Page_set_dragStopIndex_m11_202 (Page_t11_58 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelGridLayout/Page::ContainsIcon(MadLevelManager.MadLevelIcon)
extern "C" bool Page_ContainsIcon_m11_203 (Page_t11_58 * __this, MadLevelIcon_t11_44 * ___icon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
