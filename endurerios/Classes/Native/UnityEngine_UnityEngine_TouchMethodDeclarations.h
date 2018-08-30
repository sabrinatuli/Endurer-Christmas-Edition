#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Touch.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_TouchPhase.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" int32_t Touch_get_fingerId_m7_911 (Touch_t7_109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t7_65  Touch_get_position_m7_912 (Touch_t7_109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_rawPosition()
extern "C" Vector2_t7_65  Touch_get_rawPosition_m7_913 (Touch_t7_109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
extern "C" Vector2_t7_65  Touch_get_deltaPosition_m7_914 (Touch_t7_109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Touch::get_deltaTime()
extern "C" float Touch_get_deltaTime_m7_915 (Touch_t7_109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Touch::get_tapCount()
extern "C" int32_t Touch_get_tapCount_m7_916 (Touch_t7_109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m7_917 (Touch_t7_109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Touch::get_pressure()
extern "C" float Touch_get_pressure_m7_918 (Touch_t7_109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Touch::get_maximumPossiblePressure()
extern "C" float Touch_get_maximumPossiblePressure_m7_919 (Touch_t7_109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Touch_t7_109_marshal(const Touch_t7_109& unmarshaled, Touch_t7_109_marshaled& marshaled);
extern "C" void Touch_t7_109_marshal_back(const Touch_t7_109_marshaled& marshaled, Touch_t7_109& unmarshaled);
extern "C" void Touch_t7_109_marshal_cleanup(Touch_t7_109_marshaled& marshaled);
