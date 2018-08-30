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

// UnityEngine.Coroutine
struct Coroutine_t7_16;
struct Coroutine_t7_16_marshaled;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m7_19 (Coroutine_t7_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m7_20 (Coroutine_t7_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m7_21 (Coroutine_t7_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Coroutine_t7_16_marshal(const Coroutine_t7_16& unmarshaled, Coroutine_t7_16_marshaled& marshaled);
extern "C" void Coroutine_t7_16_marshal_back(const Coroutine_t7_16_marshaled& marshaled, Coroutine_t7_16& unmarshaled);
extern "C" void Coroutine_t7_16_marshal_cleanup(Coroutine_t7_16_marshaled& marshaled);
