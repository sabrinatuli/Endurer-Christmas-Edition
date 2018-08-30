#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<MadLevelManager.MadAnimator/AnimationRef>
struct List_1_t1_1008;

#include "mscorlib_System_Object.h"

// MadLevelManager.MadAnimator/Action
struct  Action_t11_81  : public Object_t
{
	// System.Collections.Generic.List`1<MadLevelManager.MadAnimator/AnimationRef> MadLevelManager.MadAnimator/Action::playAnimations
	List_1_t1_1008 * ___playAnimations_0;
	// System.Collections.Generic.List`1<MadLevelManager.MadAnimator/AnimationRef> MadLevelManager.MadAnimator/Action::stopAnimations
	List_1_t1_1008 * ___stopAnimations_1;
	// System.Boolean MadLevelManager.MadAnimator/Action::stopAllAnimations
	bool ___stopAllAnimations_2;
};
