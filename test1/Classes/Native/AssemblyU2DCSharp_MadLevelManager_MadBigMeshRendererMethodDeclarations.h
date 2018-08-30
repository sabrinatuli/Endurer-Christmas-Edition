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

// MadLevelManager.MadBigMeshRenderer
struct MadBigMeshRenderer_t11_167;
// MadLevelManager.MadDrawCall
struct MadDrawCall_t11_176;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<MadLevelManager.MadSprite>>
struct List_1_t1_1040;
// System.Collections.Generic.List`1<MadLevelManager.MadSprite>
struct List_1_t1_1041;
// System.Collections.Generic.ICollection`1<MadLevelManager.MadSprite>
struct ICollection_1_t1_1042;
// MadLevelManager.MadSprite
struct MadSprite_t11_13;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t7_191;
// UnityEngine.Camera
struct Camera_t7_100;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void MadLevelManager.MadBigMeshRenderer::.ctor()
extern "C" void MadBigMeshRenderer__ctor_m11_987 (MadBigMeshRenderer_t11_167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadBigMeshRenderer::OnEnable()
extern "C" void MadBigMeshRenderer_OnEnable_m11_988 (MadBigMeshRenderer_t11_167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadDrawCall MadLevelManager.MadBigMeshRenderer::NextDrawCall()
extern "C" MadDrawCall_t11_176 * MadBigMeshRenderer_NextDrawCall_m11_989 (MadBigMeshRenderer_t11_167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadBigMeshRenderer::DrawCallsFinalize()
extern "C" void MadBigMeshRenderer_DrawCallsFinalize_m11_990 (MadBigMeshRenderer_t11_167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadBigMeshRenderer::OnDisable()
extern "C" void MadBigMeshRenderer_OnDisable_m11_991 (MadBigMeshRenderer_t11_167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadBigMeshRenderer::Start()
extern "C" void MadBigMeshRenderer_Start_m11_992 (MadBigMeshRenderer_t11_167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadBigMeshRenderer::Update()
extern "C" void MadBigMeshRenderer_Update_m11_993 (MadBigMeshRenderer_t11_167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadBigMeshRenderer::LateUpdate()
extern "C" void MadBigMeshRenderer_LateUpdate_m11_994 (MadBigMeshRenderer_t11_167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadBigMeshRenderer::DrawOnMultipleDrawCalls(System.Collections.Generic.List`1<System.Collections.Generic.List`1<MadLevelManager.MadSprite>>)
extern "C" void MadBigMeshRenderer_DrawOnMultipleDrawCalls_m11_995 (MadBigMeshRenderer_t11_167 * __this, List_1_t1_1040 * ___batchedSprites, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadBigMeshRenderer::DrawOnSingleDrawCall(System.Collections.Generic.List`1<System.Collections.Generic.List`1<MadLevelManager.MadSprite>>)
extern "C" void MadBigMeshRenderer_DrawOnSingleDrawCall_m11_996 (MadBigMeshRenderer_t11_167 * __this, List_1_t1_1040 * ___batchedSprites, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadBigMeshRenderer::OnDestroy()
extern "C" void MadBigMeshRenderer_OnDestroy_m11_997 (MadBigMeshRenderer_t11_167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<MadLevelManager.MadSprite> MadLevelManager.MadBigMeshRenderer::VisibleSprites(System.Collections.Generic.ICollection`1<MadLevelManager.MadSprite>)
extern "C" List_1_t1_1041 * MadBigMeshRenderer_VisibleSprites_m11_998 (MadBigMeshRenderer_t11_167 * __this, Object_t* ___sprites, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadBigMeshRenderer::SpriteVisible(MadLevelManager.MadSprite)
extern "C" bool MadBigMeshRenderer_SpriteVisible_m11_999 (MadBigMeshRenderer_t11_167 * __this, MadSprite_t11_13 * ___sprite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadBigMeshRenderer::VisibleOnCameraAny(UnityEngine.Vector3[],UnityEngine.Camera)
extern "C" bool MadBigMeshRenderer_VisibleOnCameraAny_m11_1000 (MadBigMeshRenderer_t11_167 * __this, Vector3U5BU5D_t7_191* ___corners, Camera_t7_100 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadBigMeshRenderer::VisibleOnCamera(UnityEngine.Vector3,UnityEngine.Camera)
extern "C" bool MadBigMeshRenderer_VisibleOnCamera_m11_1001 (MadBigMeshRenderer_t11_167 * __this, Vector3_t7_66  ___corner, Camera_t7_100 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadBigMeshRenderer::SortByGUIDepth(System.Collections.Generic.List`1<MadLevelManager.MadSprite>)
extern "C" void MadBigMeshRenderer_SortByGUIDepth_m11_1002 (MadBigMeshRenderer_t11_167 * __this, List_1_t1_1041 * ___sprites, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadBigMeshRenderer::SortByZ(System.Collections.Generic.List`1<MadLevelManager.MadSprite>)
extern "C" void MadBigMeshRenderer_SortByZ_m11_1003 (MadBigMeshRenderer_t11_167 * __this, List_1_t1_1041 * ___sprites, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<MadLevelManager.MadSprite>> MadLevelManager.MadBigMeshRenderer::Batch(System.Collections.Generic.List`1<MadLevelManager.MadSprite>)
extern "C" List_1_t1_1040 * MadBigMeshRenderer_Batch_m11_1004 (MadBigMeshRenderer_t11_167 * __this, List_1_t1_1041 * ___sprites, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadBigMeshRenderer::CanBatch(MadLevelManager.MadSprite,MadLevelManager.MadSprite)
extern "C" bool MadBigMeshRenderer_CanBatch_m11_1005 (MadBigMeshRenderer_t11_167 * __this, MadSprite_t11_13 * ___a, MadSprite_t11_13 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadBigMeshRenderer::<SortByGUIDepth>m__8F(MadLevelManager.MadSprite,MadLevelManager.MadSprite)
extern "C" int32_t MadBigMeshRenderer_U3CSortByGUIDepthU3Em__8F_m11_1006 (Object_t * __this /* static, unused */, MadSprite_t11_13 * ___x, MadSprite_t11_13 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadBigMeshRenderer::<SortByZ>m__90(MadLevelManager.MadSprite,MadLevelManager.MadSprite)
extern "C" int32_t MadBigMeshRenderer_U3CSortByZU3Em__90_m11_1007 (Object_t * __this /* static, unused */, MadSprite_t11_13 * ___x, MadSprite_t11_13 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
