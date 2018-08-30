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

// MadLevelManager.MadDragStopDraggable
struct MadDragStopDraggable_t11_56;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void MadLevelManager.MadDragStopDraggable::.ctor()
extern "C" void MadDragStopDraggable__ctor_m11_1012 (MadDragStopDraggable_t11_56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadDragStopDraggable::get_dragStopCount()
extern "C" int32_t MadDragStopDraggable_get_dragStopCount_m11_1013 (MadDragStopDraggable_t11_56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadDragStopDraggable::get_dragStopCurrentIndex()
extern "C" int32_t MadDragStopDraggable_get_dragStopCurrentIndex_m11_1014 (MadDragStopDraggable_t11_56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadDragStopDraggable::set_dragStopCurrentIndex(System.Int32)
extern "C" void MadDragStopDraggable_set_dragStopCurrentIndex_m11_1015 (MadDragStopDraggable_t11_56 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 MadLevelManager.MadDragStopDraggable::get_progress()
extern "C" Vector2_t7_65  MadDragStopDraggable_get_progress_m11_1016 (MadDragStopDraggable_t11_56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadDragStopDraggable::get_animating()
extern "C" bool MadDragStopDraggable_get_animating_m11_1017 (MadDragStopDraggable_t11_56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadDragStopDraggable::set_animating(System.Boolean)
extern "C" void MadDragStopDraggable_set_animating_m11_1018 (MadDragStopDraggable_t11_56 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadDragStopDraggable::Update()
extern "C" void MadDragStopDraggable_Update_m11_1019 (MadDragStopDraggable_t11_56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadDragStopDraggable::ClearDragStops()
extern "C" void MadDragStopDraggable_ClearDragStops_m11_1020 (MadDragStopDraggable_t11_56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadDragStopDraggable::AddDragStop(System.Single,System.Single)
extern "C" int32_t MadDragStopDraggable_AddDragStop_m11_1021 (MadDragStopDraggable_t11_56 * __this, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadDragStopDraggable::ComputeAvarageDistance()
extern "C" void MadDragStopDraggable_ComputeAvarageDistance_m11_1022 (MadDragStopDraggable_t11_56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadDragStopDraggable::MoveTo(System.Int32,System.Boolean)
extern "C" void MadDragStopDraggable_MoveTo_m11_1023 (MadDragStopDraggable_t11_56 * __this, int32_t ___dragStop, bool ___now, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadDragStopDraggable::ReturnToDragStop()
extern "C" void MadDragStopDraggable_ReturnToDragStop_m11_1024 (MadDragStopDraggable_t11_56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadDragStopDraggable::IntendedDragStopIndex()
extern "C" int32_t MadDragStopDraggable_IntendedDragStopIndex_m11_1025 (MadDragStopDraggable_t11_56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadDragStopDraggable::IndexChange(System.Single,System.Single)
extern "C" int32_t MadDragStopDraggable_IndexChange_m11_1026 (MadDragStopDraggable_t11_56 * __this, float ___force, float ___thredshold, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadDragStopDraggable::GetInteriaForce()
extern "C" float MadDragStopDraggable_GetInteriaForce_m11_1027 (MadDragStopDraggable_t11_56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadDragStopDraggable::ClosestDragStopIndex(System.Int32)
extern "C" int32_t MadDragStopDraggable_ClosestDragStopIndex_m11_1028 (MadDragStopDraggable_t11_56 * __this, int32_t ___skip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadDragStopDraggable::ClosestNeighborTo(System.Int32)
extern "C" int32_t MadDragStopDraggable_ClosestNeighborTo_m11_1029 (MadDragStopDraggable_t11_56 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadDragStopDraggable::GetProgress()
extern "C" float MadDragStopDraggable_GetProgress_m11_1030 (MadDragStopDraggable_t11_56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
