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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1_907;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__8.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m1_9617_gshared (Enumerator_t1_1417 * __this, Dictionary_2_t1_907 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1_9617(__this, ___dictionary, method) (( void (*) (Enumerator_t1_1417 *, Dictionary_2_t1_907 *, const MethodInfo*))Enumerator__ctor_m1_9617_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1_9618_gshared (Enumerator_t1_1417 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1_9618(__this, method) (( Object_t * (*) (Enumerator_t1_1417 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1_9618_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m1_9619_gshared (Enumerator_t1_1417 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1_9619(__this, method) (( void (*) (Enumerator_t1_1417 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1_9619_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_169  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_9620_gshared (Enumerator_t1_1417 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_9620(__this, method) (( DictionaryEntry_t1_169  (*) (Enumerator_t1_1417 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_9620_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_9621_gshared (Enumerator_t1_1417 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_9621(__this, method) (( Object_t * (*) (Enumerator_t1_1417 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_9621_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_9622_gshared (Enumerator_t1_1417 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_9622(__this, method) (( Object_t * (*) (Enumerator_t1_1417 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_9622_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1_9623_gshared (Enumerator_t1_1417 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1_9623(__this, method) (( bool (*) (Enumerator_t1_1417 *, const MethodInfo*))Enumerator_MoveNext_m1_9623_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1_1413  Enumerator_get_Current_m1_9624_gshared (Enumerator_t1_1417 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1_9624(__this, method) (( KeyValuePair_2_t1_1413  (*) (Enumerator_t1_1417 *, const MethodInfo*))Enumerator_get_Current_m1_9624_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m1_9625_gshared (Enumerator_t1_1417 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1_9625(__this, method) (( int32_t (*) (Enumerator_t1_1417 *, const MethodInfo*))Enumerator_get_CurrentKey_m1_9625_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m1_9626_gshared (Enumerator_t1_1417 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1_9626(__this, method) (( Object_t * (*) (Enumerator_t1_1417 *, const MethodInfo*))Enumerator_get_CurrentValue_m1_9626_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m1_9627_gshared (Enumerator_t1_1417 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1_9627(__this, method) (( void (*) (Enumerator_t1_1417 *, const MethodInfo*))Enumerator_Reset_m1_9627_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m1_9628_gshared (Enumerator_t1_1417 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1_9628(__this, method) (( void (*) (Enumerator_t1_1417 *, const MethodInfo*))Enumerator_VerifyState_m1_9628_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m1_9629_gshared (Enumerator_t1_1417 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1_9629(__this, method) (( void (*) (Enumerator_t1_1417 *, const MethodInfo*))Enumerator_VerifyCurrent_m1_9629_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m1_9630_gshared (Enumerator_t1_1417 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1_9630(__this, method) (( void (*) (Enumerator_t1_1417 *, const MethodInfo*))Enumerator_Dispose_m1_9630_gshared)(__this, method)
