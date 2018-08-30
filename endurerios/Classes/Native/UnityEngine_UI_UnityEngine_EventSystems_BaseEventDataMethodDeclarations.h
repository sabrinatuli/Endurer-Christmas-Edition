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

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t8_5;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t8_2;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t8_4;
// UnityEngine.GameObject
struct GameObject_t7_113;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.EventSystems.BaseEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C" void BaseEventData__ctor_m8_116 (BaseEventData_t8_5 * __this, EventSystem_t8_2 * ___eventSystem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::Reset()
extern "C" void BaseEventData_Reset_m8_117 (BaseEventData_t8_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::Use()
extern "C" void BaseEventData_Use_m8_118 (BaseEventData_t8_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseEventData::get_used()
extern "C" bool BaseEventData_get_used_m8_119 (BaseEventData_t8_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.BaseEventData::get_currentInputModule()
extern "C" BaseInputModule_t8_4 * BaseEventData_get_currentInputModule_m8_120 (BaseEventData_t8_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseEventData::get_selectedObject()
extern "C" GameObject_t7_113 * BaseEventData_get_selectedObject_m8_121 (BaseEventData_t8_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::set_selectedObject(UnityEngine.GameObject)
extern "C" void BaseEventData_set_selectedObject_m8_122 (BaseEventData_t8_5 * __this, GameObject_t7_113 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
