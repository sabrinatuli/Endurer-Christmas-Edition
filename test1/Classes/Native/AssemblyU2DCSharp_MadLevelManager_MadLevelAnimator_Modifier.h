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
// MadLevelManager.MadLevelAnimator/ModifierFunction
struct ModifierFunction_t11_100;

#include "mscorlib_System_Object.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadLevelAnimator_Modifier__1.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadLevelAnimator_Modifier_.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadLevelAnimator_Modifier__0.h"

// MadLevelManager.MadLevelAnimator/Modifier
struct  Modifier_t11_99  : public Object_t
{
	// System.String MadLevelManager.MadLevelAnimator/Modifier::animationName
	String_t* ___animationName_0;
	// MadLevelManager.MadLevelAnimator/Modifier/ModifierFunc MadLevelManager.MadLevelAnimator/Modifier::modifierFunction
	int32_t ___modifierFunction_1;
	// MadLevelManager.MadLevelAnimator/Modifier/Operator MadLevelManager.MadLevelAnimator/Modifier::baseOperator
	int32_t ___baseOperator_2;
	// MadLevelManager.MadLevelAnimator/Modifier/Value MadLevelManager.MadLevelAnimator/Modifier::firstParameter
	int32_t ___firstParameter_3;
	// MadLevelManager.MadLevelAnimator/Modifier/Operator MadLevelManager.MadLevelAnimator/Modifier::valueOperator
	int32_t ___valueOperator_4;
	// System.Single MadLevelManager.MadLevelAnimator/Modifier::secondParameter
	float ___secondParameter_5;
	// MadLevelManager.MadLevelAnimator/ModifierFunction MadLevelManager.MadLevelAnimator/Modifier::customModifierFunction
	ModifierFunction_t11_100 * ___customModifierFunction_6;
};
