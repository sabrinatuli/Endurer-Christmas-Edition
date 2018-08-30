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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>
struct Transform_1_t1_1460;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m1_10470_gshared (Transform_1_t1_1460 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m1_10470(__this, ___object, ___method, method) (( void (*) (Transform_1_t1_1460 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1_10470_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1_169  Transform_1_Invoke_m1_10471_gshared (Transform_1_t1_1460 * __this, Object_t * ___key, KeyValuePair_2_t1_1161  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1_10471(__this, ___key, ___value, method) (( DictionaryEntry_t1_169  (*) (Transform_1_t1_1460 *, Object_t *, KeyValuePair_2_t1_1161 , const MethodInfo*))Transform_1_Invoke_m1_10471_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m1_10472_gshared (Transform_1_t1_1460 * __this, Object_t * ___key, KeyValuePair_2_t1_1161  ___value, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1_10472(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1_1460 *, Object_t *, KeyValuePair_2_t1_1161 , AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m1_10472_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1_169  Transform_1_EndInvoke_m1_10473_gshared (Transform_1_t1_1460 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m1_10473(__this, ___result, method) (( DictionaryEntry_t1_169  (*) (Transform_1_t1_1460 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m1_10473_gshared)(__this, ___result, method)
