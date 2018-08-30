#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MadLevelManager.MadPanel
struct MadPanel_t11_161;
// MadLevelManager.MadList`1<UnityEngine.Vector3>
struct MadList_1_t11_168;
// MadLevelManager.MadList`1<UnityEngine.Color32>
struct MadList_1_t11_169;
// MadLevelManager.MadList`1<UnityEngine.Vector2>
struct MadList_1_t11_170;
// MadLevelManager.MadList`1<MadLevelManager.MadList`1<System.Int32>>
struct MadList_1_t11_171;
// MadLevelManager.MadObjectPool`1<MadLevelManager.MadList`1<System.Int32>>
struct MadObjectPool_1_t11_172;
// System.Collections.Generic.List`1<MadLevelManager.MadDrawCall>
struct List_1_t1_1022;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t7_191;
// System.Comparison`1<MadLevelManager.MadSprite>
struct Comparison_1_t1_1023;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// MadLevelManager.MadBigMeshRenderer
struct  MadBigMeshRenderer_t11_167  : public MonoBehaviour_t7_106
{
	// MadLevelManager.MadPanel MadLevelManager.MadBigMeshRenderer::panel
	MadPanel_t11_161 * ___panel_2;
	// MadLevelManager.MadList`1<UnityEngine.Vector3> MadLevelManager.MadBigMeshRenderer::vertices
	MadList_1_t11_168 * ___vertices_3;
	// MadLevelManager.MadList`1<UnityEngine.Color32> MadLevelManager.MadBigMeshRenderer::colors
	MadList_1_t11_169 * ___colors_4;
	// MadLevelManager.MadList`1<UnityEngine.Vector2> MadLevelManager.MadBigMeshRenderer::uv
	MadList_1_t11_170 * ___uv_5;
	// MadLevelManager.MadList`1<MadLevelManager.MadList`1<System.Int32>> MadLevelManager.MadBigMeshRenderer::triangleList
	MadList_1_t11_171 * ___triangleList_6;
	// MadLevelManager.MadObjectPool`1<MadLevelManager.MadList`1<System.Int32>> MadLevelManager.MadBigMeshRenderer::trianglesPool
	MadObjectPool_1_t11_172 * ___trianglesPool_7;
	// System.Collections.Generic.List`1<MadLevelManager.MadDrawCall> MadLevelManager.MadBigMeshRenderer::drawCalls
	List_1_t1_1022 * ___drawCalls_8;
	// System.Int32 MadLevelManager.MadBigMeshRenderer::nextDrawCall
	int32_t ___nextDrawCall_9;
	// UnityEngine.Vector3[] MadLevelManager.MadBigMeshRenderer::cornersWorker
	Vector3U5BU5D_t7_191* ___cornersWorker_10;
};
struct MadBigMeshRenderer_t11_167_StaticFields{
	// System.Comparison`1<MadLevelManager.MadSprite> MadLevelManager.MadBigMeshRenderer::<>f__am$cache9
	Comparison_1_t1_1023 * ___U3CU3Ef__amU24cache9_11;
	// System.Comparison`1<MadLevelManager.MadSprite> MadLevelManager.MadBigMeshRenderer::<>f__am$cacheA
	Comparison_1_t1_1023 * ___U3CU3Ef__amU24cacheA_12;
};
