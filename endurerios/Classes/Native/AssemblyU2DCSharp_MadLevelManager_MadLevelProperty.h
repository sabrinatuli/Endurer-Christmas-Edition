#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MadLevelManager.MadSprite[]
struct MadSpriteU5BU5D_t11_20;
// System.String
struct String_t;
// MadLevelManager.MadSprite
struct MadSprite_t11_13;
// MadLevelManager.MadLevelIcon
struct MadLevelIcon_t11_44;

#include "AssemblyU2DCSharp_MadLevelManager_MadNode.h"

// MadLevelManager.MadLevelProperty
struct  MadLevelProperty_t11_122  : public MadNode_t11_47
{
	// System.Boolean MadLevelManager.MadLevelProperty::_propertyEnabled
	bool ____propertyEnabled_4;
	// MadLevelManager.MadSprite[] MadLevelManager.MadLevelProperty::showWhenEnabled
	MadSpriteU5BU5D_t11_20* ___showWhenEnabled_5;
	// MadLevelManager.MadSprite[] MadLevelManager.MadLevelProperty::showWhenDisabled
	MadSpriteU5BU5D_t11_20* ___showWhenDisabled_6;
	// System.Boolean MadLevelManager.MadLevelProperty::textFromProperty
	bool ___textFromProperty_7;
	// System.String MadLevelManager.MadLevelProperty::textPropertyName
	String_t* ___textPropertyName_8;
	// System.Boolean MadLevelManager.MadLevelProperty::justAwaken
	bool ___justAwaken_9;
	// System.Boolean MadLevelManager.MadLevelProperty::onFirstUpdate
	bool ___onFirstUpdate_10;
	// MadLevelManager.MadSprite MadLevelManager.MadLevelProperty::_sprite
	MadSprite_t11_13 * ____sprite_11;
	// MadLevelManager.MadLevelIcon MadLevelManager.MadLevelProperty::_icon
	MadLevelIcon_t11_44 * ____icon_12;
};
