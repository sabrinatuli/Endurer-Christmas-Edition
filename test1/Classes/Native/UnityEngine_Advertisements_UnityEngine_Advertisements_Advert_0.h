#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Advertisements.ShowOptions
struct ShowOptions_t9_3;
// UnityEngine.Advertisements.UnityAdsPlatform
struct UnityAdsPlatform_t9_4;
// System.String
struct String_t;

#include "mscorlib_System_Object.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertisements_Advert.h"

// UnityEngine.Advertisements.Advertisement
struct  Advertisement_t9_2  : public Object_t
{
};
struct Advertisement_t9_2_StaticFields{
	// System.Boolean UnityEngine.Advertisements.Advertisement::s_Initialized
	bool ___s_Initialized_0;
	// System.Boolean UnityEngine.Advertisements.Advertisement::s_Showing
	bool ___s_Showing_1;
	// UnityEngine.Advertisements.ShowOptions UnityEngine.Advertisements.Advertisement::s_ShowOptions
	ShowOptions_t9_3 * ___s_ShowOptions_2;
	// System.Boolean UnityEngine.Advertisements.Advertisement::s_ResultDelivered
	bool ___s_ResultDelivered_3;
	// UnityEngine.Advertisements.UnityAdsPlatform UnityEngine.Advertisements.Advertisement::s_Implementation
	UnityAdsPlatform_t9_4 * ___s_Implementation_4;
	// System.String UnityEngine.Advertisements.Advertisement::s_ExtensionPath
	String_t* ___s_ExtensionPath_5;
	// UnityEngine.Advertisements.Advertisement/DebugLevel UnityEngine.Advertisements.Advertisement::_debugLevel
	int32_t ____debugLevel_6;
};
