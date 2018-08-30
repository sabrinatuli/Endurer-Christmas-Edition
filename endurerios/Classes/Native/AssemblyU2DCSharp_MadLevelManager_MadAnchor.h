#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t7_113;
// UnityEngine.Camera
struct Camera_t7_100;
// MadLevelManager.MadRootNode
struct MadRootNode_t11_36;
// MadLevelManager.MadPanel
struct MadPanel_t11_161;

#include "AssemblyU2DCSharp_MadLevelManager_MadNode.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadAnchor_Mode.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadAnchor_Position.h"

// MadLevelManager.MadAnchor
struct  MadAnchor_t11_160  : public MadNode_t11_47
{
	// MadLevelManager.MadAnchor/Mode MadLevelManager.MadAnchor::mode
	int32_t ___mode_4;
	// MadLevelManager.MadAnchor/Position MadLevelManager.MadAnchor::position
	int32_t ___position_5;
	// UnityEngine.GameObject MadLevelManager.MadAnchor::anchorObject
	GameObject_t7_113 * ___anchorObject_6;
	// UnityEngine.Camera MadLevelManager.MadAnchor::anchorCamera
	Camera_t7_100 * ___anchorCamera_7;
	// MadLevelManager.MadRootNode MadLevelManager.MadAnchor::_root
	MadRootNode_t11_36 * ____root_8;
	// MadLevelManager.MadPanel MadLevelManager.MadAnchor::_panel
	MadPanel_t11_161 * ____panel_9;
};
