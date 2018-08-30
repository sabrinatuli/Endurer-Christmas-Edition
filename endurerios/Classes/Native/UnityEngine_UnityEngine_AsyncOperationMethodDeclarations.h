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

// UnityEngine.AsyncOperation
struct AsyncOperation_t7_2;
struct AsyncOperation_t7_2_marshaled;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m7_759 (AsyncOperation_t7_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m7_760 (AsyncOperation_t7_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m7_761 (AsyncOperation_t7_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
extern "C" bool AsyncOperation_get_isDone_m7_762 (AsyncOperation_t7_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AsyncOperation::get_progress()
extern "C" float AsyncOperation_get_progress_m7_763 (AsyncOperation_t7_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AsyncOperation_t7_2_marshal(const AsyncOperation_t7_2& unmarshaled, AsyncOperation_t7_2_marshaled& marshaled);
extern "C" void AsyncOperation_t7_2_marshal_back(const AsyncOperation_t7_2_marshaled& marshaled, AsyncOperation_t7_2& unmarshaled);
extern "C" void AsyncOperation_t7_2_marshal_cleanup(AsyncOperation_t7_2_marshaled& marshaled);
