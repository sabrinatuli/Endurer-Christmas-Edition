#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t7_49;
// MadLevelManager.MadFreeDraggable
struct MadFreeDraggable_t11_54;
// MadLevelManager.MadTransform/Predicate`1<MadLevelManager.MadLevelIcon>
struct Predicate_1_t11_49;
// System.Func`2<MadLevelManager.MadLevelIcon,System.Boolean>
struct Func_2_t4_23;

#include "AssemblyU2DCSharp_MadLevelManager_MadLevelAbstractLayout.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// MadLevelManager.MadLevelFreeLayout
struct  MadLevelFreeLayout_t11_53  : public MadLevelAbstractLayout_t11_46
{
	// UnityEngine.Vector2 MadLevelManager.MadLevelFreeLayout::offset
	Vector2_t7_65  ___offset_43;
	// UnityEngine.Texture2D MadLevelManager.MadLevelFreeLayout::backgroundTexture
	Texture2D_t7_49 * ___backgroundTexture_44;
	// MadLevelManager.MadFreeDraggable MadLevelManager.MadLevelFreeLayout::_draggable
	MadFreeDraggable_t11_54 * ____draggable_45;
	// System.Boolean MadLevelManager.MadLevelFreeLayout::dirty
	bool ___dirty_46;
	// System.Int32 MadLevelManager.MadLevelFreeLayout::lastHash
	int32_t ___lastHash_47;
};
struct MadLevelFreeLayout_t11_53_StaticFields{
	// MadLevelManager.MadTransform/Predicate`1<MadLevelManager.MadLevelIcon> MadLevelManager.MadLevelFreeLayout::<>f__am$cache5
	Predicate_1_t11_49 * ___U3CU3Ef__amU24cache5_48;
	// System.Func`2<MadLevelManager.MadLevelIcon,System.Boolean> MadLevelManager.MadLevelFreeLayout::<>f__am$cache6
	Func_2_t4_23 * ___U3CU3Ef__amU24cache6_49;
};
