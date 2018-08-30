#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// MadLevelManager.MadSprite
struct MadSprite_t11_13;
// MadLevelManager.MadLevelIcon
struct MadLevelIcon_t11_44;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadLevelPropertyCondition_.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadLevelPropertyCondition__0.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadLevelPropertyCondition__1.h"

// MadLevelManager.MadLevelPropertyCondition
struct  MadLevelPropertyCondition_t11_145  : public MonoBehaviour_t7_106
{
	// MadLevelManager.MadLevelPropertyCondition/PropertyType MadLevelManager.MadLevelPropertyCondition::propertyType
	int32_t ___propertyType_2;
	// System.String MadLevelManager.MadLevelPropertyCondition::customPropertyName
	String_t* ___customPropertyName_3;
	// MadLevelManager.MadLevelPropertyCondition/Comparer MadLevelManager.MadLevelPropertyCondition::comparer
	int32_t ___comparer_4;
	// System.String MadLevelManager.MadLevelPropertyCondition::rightSideValue
	String_t* ___rightSideValue_5;
	// MadLevelManager.MadLevelPropertyCondition/Action MadLevelManager.MadLevelPropertyCondition::action
	int32_t ___action_6;
	// MadLevelManager.MadSprite MadLevelManager.MadLevelPropertyCondition::sprite
	MadSprite_t11_13 * ___sprite_7;
	// MadLevelManager.MadLevelIcon MadLevelManager.MadLevelPropertyCondition::icon
	MadLevelIcon_t11_44 * ___icon_8;
};
