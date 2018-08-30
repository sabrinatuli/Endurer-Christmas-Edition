﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t1_1469;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t1_1458;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m1_10478_gshared (ShimEnumerator_t1_1469 * __this, Dictionary_2_t1_1458 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m1_10478(__this, ___host, method) (( void (*) (ShimEnumerator_t1_1469 *, Dictionary_2_t1_1458 *, const MethodInfo*))ShimEnumerator__ctor_m1_10478_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m1_10479_gshared (ShimEnumerator_t1_1469 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m1_10479(__this, method) (( bool (*) (ShimEnumerator_t1_1469 *, const MethodInfo*))ShimEnumerator_MoveNext_m1_10479_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t1_169  ShimEnumerator_get_Entry_m1_10480_gshared (ShimEnumerator_t1_1469 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m1_10480(__this, method) (( DictionaryEntry_t1_169  (*) (ShimEnumerator_t1_1469 *, const MethodInfo*))ShimEnumerator_get_Entry_m1_10480_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m1_10481_gshared (ShimEnumerator_t1_1469 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m1_10481(__this, method) (( Object_t * (*) (ShimEnumerator_t1_1469 *, const MethodInfo*))ShimEnumerator_get_Key_m1_10481_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m1_10482_gshared (ShimEnumerator_t1_1469 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m1_10482(__this, method) (( Object_t * (*) (ShimEnumerator_t1_1469 *, const MethodInfo*))ShimEnumerator_get_Value_m1_10482_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m1_10483_gshared (ShimEnumerator_t1_1469 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m1_10483(__this, method) (( Object_t * (*) (ShimEnumerator_t1_1469 *, const MethodInfo*))ShimEnumerator_get_Current_m1_10483_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reset()
extern "C" void ShimEnumerator_Reset_m1_10484_gshared (ShimEnumerator_t1_1469 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m1_10484(__this, method) (( void (*) (ShimEnumerator_t1_1469 *, const MethodInfo*))ShimEnumerator_Reset_m1_10484_gshared)(__this, method)