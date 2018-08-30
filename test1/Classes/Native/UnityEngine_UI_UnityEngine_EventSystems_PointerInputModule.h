#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t1_960;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_t8_39;

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputModule.h"

// UnityEngine.EventSystems.PointerInputModule
struct  PointerInputModule_t8_40  : public BaseInputModule_t8_4
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t1_960 * ___m_PointerData_10;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_t8_39 * ___m_MouseState_11;
};
