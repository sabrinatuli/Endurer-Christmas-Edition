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

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t5_96;
// UnityEngine.Coroutine
struct Coroutine_t5_15;
struct Coroutine_t5_15_marshaled;
// System.Collections.IEnumerator
struct IEnumerator_t1_132;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Advertisements.AsyncExec::.cctor()
extern "C" void AsyncExec__cctor_m9_26 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MonoBehaviour UnityEngine.Advertisements.AsyncExec::get_coroutineHost()
extern "C" MonoBehaviour_t5_96 * AsyncExec_get_coroutineHost_m9_27 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Advertisements.AsyncExec::StartCoroutine(System.Collections.IEnumerator)
extern "C" Coroutine_t5_15 * AsyncExec_StartCoroutine_m9_28 (Object_t * __this /* static, unused */, Object_t * ___enumerator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
