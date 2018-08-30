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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1_1129;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m1_6327_gshared (Enumerator_t1_1137 * __this, Dictionary_2_t1_1129 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1_6327(__this, ___dictionary, method) (( void (*) (Enumerator_t1_1137 *, Dictionary_2_t1_1129 *, const MethodInfo*))Enumerator__ctor_m1_6327_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1_6328_gshared (Enumerator_t1_1137 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1_6328(__this, method) (( Object_t * (*) (Enumerator_t1_1137 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1_6328_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m1_6329_gshared (Enumerator_t1_1137 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1_6329(__this, method) (( void (*) (Enumerator_t1_1137 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1_6329_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_169  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_6330_gshared (Enumerator_t1_1137 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_6330(__this, method) (( DictionaryEntry_t1_169  (*) (Enumerator_t1_1137 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_6330_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_6331_gshared (Enumerator_t1_1137 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_6331(__this, method) (( Object_t * (*) (Enumerator_t1_1137 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_6331_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_6332_gshared (Enumerator_t1_1137 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_6332(__this, method) (( Object_t * (*) (Enumerator_t1_1137 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_6332_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1_6333_gshared (Enumerator_t1_1137 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1_6333(__this, method) (( bool (*) (Enumerator_t1_1137 *, const MethodInfo*))Enumerator_MoveNext_m1_6333_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t1_1132  Enumerator_get_Current_m1_6334_gshared (Enumerator_t1_1137 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1_6334(__this, method) (( KeyValuePair_2_t1_1132  (*) (Enumerator_t1_1137 *, const MethodInfo*))Enumerator_get_Current_m1_6334_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m1_6335_gshared (Enumerator_t1_1137 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1_6335(__this, method) (( Object_t * (*) (Enumerator_t1_1137 *, const MethodInfo*))Enumerator_get_CurrentKey_m1_6335_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m1_6336_gshared (Enumerator_t1_1137 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1_6336(__this, method) (( int32_t (*) (Enumerator_t1_1137 *, const MethodInfo*))Enumerator_get_CurrentValue_m1_6336_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m1_6337_gshared (Enumerator_t1_1137 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1_6337(__this, method) (( void (*) (Enumerator_t1_1137 *, const MethodInfo*))Enumerator_Reset_m1_6337_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m1_6338_gshared (Enumerator_t1_1137 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1_6338(__this, method) (( void (*) (Enumerator_t1_1137 *, const MethodInfo*))Enumerator_VerifyState_m1_6338_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m1_6339_gshared (Enumerator_t1_1137 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1_6339(__this, method) (( void (*) (Enumerator_t1_1137 *, const MethodInfo*))Enumerator_VerifyCurrent_m1_6339_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m1_6340_gshared (Enumerator_t1_1137 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1_6340(__this, method) (( void (*) (Enumerator_t1_1137 *, const MethodInfo*))Enumerator_Dispose_m1_6340_gshared)(__this, method)
