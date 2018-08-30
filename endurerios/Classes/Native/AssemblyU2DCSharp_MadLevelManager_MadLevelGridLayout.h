#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MadLevelManager.MadSprite
struct MadSprite_t11_13;
// MadLevelManager.MadDragStopDraggable
struct MadDragStopDraggable_t11_56;
// System.Collections.Generic.List`1<MadLevelManager.MadLevelGridLayout/Page>
struct List_1_t1_1006;
// MadLevelManager.MadTransform/Predicate`1<MadLevelManager.MadLevelIcon>
struct Predicate_1_t11_49;
// MadLevelManager.MadTransform/Predicate`1<UnityEngine.Transform>
struct Predicate_1_t11_67;
// System.Func`2<MadLevelManager.MadLevelIcon,System.Int32>
struct Func_2_t4_24;
// System.Comparison`1<UnityEngine.Transform>
struct Comparison_1_t1_1007;

#include "AssemblyU2DCSharp_MadLevelManager_MadLevelAbstractLayout.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadLevelGridLayout_SetupMe.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadLevelGridLayout_Horizon.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadLevelGridLayout_Vertica.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadLevelGridLayout_PagingM.h"

// MadLevelManager.MadLevelGridLayout
struct  MadLevelGridLayout_t11_66  : public MadLevelAbstractLayout_t11_46
{
	// MadLevelManager.MadLevelGridLayout/SetupMethod MadLevelManager.MadLevelGridLayout::setupMethod
	int32_t ___setupMethod_43;
	// MadLevelManager.MadSprite MadLevelManager.MadLevelGridLayout::rightSlideSprite
	MadSprite_t11_13 * ___rightSlideSprite_44;
	// MadLevelManager.MadSprite MadLevelManager.MadLevelGridLayout::leftSlideSprite
	MadSprite_t11_13 * ___leftSlideSprite_45;
	// UnityEngine.Vector2 MadLevelManager.MadLevelGridLayout::iconScale
	Vector2_t7_65  ___iconScale_46;
	// UnityEngine.Vector2 MadLevelManager.MadLevelGridLayout::iconOffset
	Vector2_t7_65  ___iconOffset_47;
	// UnityEngine.Vector2 MadLevelManager.MadLevelGridLayout::rightSlideScale
	Vector2_t7_65  ___rightSlideScale_48;
	// UnityEngine.Vector2 MadLevelManager.MadLevelGridLayout::rightSlideOffset
	Vector2_t7_65  ___rightSlideOffset_49;
	// UnityEngine.Vector2 MadLevelManager.MadLevelGridLayout::leftSlideScale
	Vector2_t7_65  ___leftSlideScale_50;
	// UnityEngine.Vector2 MadLevelManager.MadLevelGridLayout::leftSlideOffset
	Vector2_t7_65  ___leftSlideOffset_51;
	// System.Int32 MadLevelManager.MadLevelGridLayout::gridWidth
	int32_t ___gridWidth_52;
	// System.Int32 MadLevelManager.MadLevelGridLayout::gridHeight
	int32_t ___gridHeight_53;
	// System.Boolean MadLevelManager.MadLevelGridLayout::limitLevelsPerPage
	bool ___limitLevelsPerPage_54;
	// System.Int32 MadLevelManager.MadLevelGridLayout::levelsPerPage
	int32_t ___levelsPerPage_55;
	// System.Int32 MadLevelManager.MadLevelGridLayout::pixelsWidth
	int32_t ___pixelsWidth_56;
	// System.Int32 MadLevelManager.MadLevelGridLayout::pixelsHeight
	int32_t ___pixelsHeight_57;
	// MadLevelManager.MadLevelGridLayout/HorizontalAlign MadLevelManager.MadLevelGridLayout::horizontalAlign
	int32_t ___horizontalAlign_58;
	// MadLevelManager.MadLevelGridLayout/VerticalAlign MadLevelManager.MadLevelGridLayout::verticalAlign
	int32_t ___verticalAlign_59;
	// System.Boolean MadLevelManager.MadLevelGridLayout::pagesOffsetFromResolution
	bool ___pagesOffsetFromResolution_60;
	// System.Single MadLevelManager.MadLevelGridLayout::pagesOffsetManual
	float ___pagesOffsetManual_61;
	// MadLevelManager.MadLevelGridLayout/PagingMethod MadLevelManager.MadLevelGridLayout::pagingMethod
	int32_t ___pagingMethod_62;
	// System.Boolean MadLevelManager.MadLevelGridLayout::pagingInvert
	bool ___pagingInvert_63;
	// System.Single MadLevelManager.MadLevelGridLayout::pagesOffsetPercent
	float ___pagesOffsetPercent_64;
	// System.Single MadLevelManager.MadLevelGridLayout::pagesZoomScale
	float ___pagesZoomScale_65;
	// System.Boolean MadLevelManager.MadLevelGridLayout::dirty
	bool ___dirty_66;
	// System.Boolean MadLevelManager.MadLevelGridLayout::deepClean
	bool ___deepClean_67;
	// System.Int32 MadLevelManager.MadLevelGridLayout::hash
	int32_t ___hash_68;
	// MadLevelManager.MadDragStopDraggable MadLevelManager.MadLevelGridLayout::draggable
	MadDragStopDraggable_t11_56 * ___draggable_69;
	// MadLevelManager.MadSprite MadLevelManager.MadLevelGridLayout::slideLeft
	MadSprite_t11_13 * ___slideLeft_70;
	// MadLevelManager.MadSprite MadLevelManager.MadLevelGridLayout::slideRight
	MadSprite_t11_13 * ___slideRight_71;
	// System.Collections.Generic.List`1<MadLevelManager.MadLevelGridLayout/Page> MadLevelManager.MadLevelGridLayout::pages
	List_1_t1_1006 * ___pages_72;
	// System.Int32 MadLevelManager.MadLevelGridLayout::pageCurrentIndex
	int32_t ___pageCurrentIndex_73;
	// System.Boolean MadLevelManager.MadLevelGridLayout::hideManagedObjects
	bool ___hideManagedObjects_74;
	// UnityEngine.Vector2 MadLevelManager.MadLevelGridLayout::_iconScale
	Vector2_t7_65  ____iconScale_75;
	// System.Boolean MadLevelManager.MadLevelGridLayout::canSwitchPagesInThisFrame
	bool ___canSwitchPagesInThisFrame_76;
};
struct MadLevelGridLayout_t11_66_StaticFields{
	// MadLevelManager.MadTransform/Predicate`1<MadLevelManager.MadLevelIcon> MadLevelManager.MadLevelGridLayout::<>f__am$cache22
	Predicate_1_t11_49 * ___U3CU3Ef__amU24cache22_77;
	// MadLevelManager.MadTransform/Predicate`1<UnityEngine.Transform> MadLevelManager.MadLevelGridLayout::<>f__am$cache23
	Predicate_1_t11_67 * ___U3CU3Ef__amU24cache23_78;
	// System.Func`2<MadLevelManager.MadLevelIcon,System.Int32> MadLevelManager.MadLevelGridLayout::<>f__am$cache24
	Func_2_t4_24 * ___U3CU3Ef__amU24cache24_79;
	// MadLevelManager.MadTransform/Predicate`1<UnityEngine.Transform> MadLevelManager.MadLevelGridLayout::<>f__am$cache25
	Predicate_1_t11_67 * ___U3CU3Ef__amU24cache25_80;
	// System.Comparison`1<UnityEngine.Transform> MadLevelManager.MadLevelGridLayout::<>f__am$cache26
	Comparison_1_t1_1007 * ___U3CU3Ef__amU24cache26_81;
};
