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
struct Dictionary_2_t1_900;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m1_9348_gshared (Enumerator_t1_1331 * __this, Dictionary_2_t1_900 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1_9348(__this, ___dictionary, method) (( void (*) (Enumerator_t1_1331 *, Dictionary_2_t1_900 *, const MethodInfo*))Enumerator__ctor_m1_9348_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1_9349_gshared (Enumerator_t1_1331 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1_9349(__this, method) (( Object_t * (*) (Enumerator_t1_1331 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1_9349_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m1_9350_gshared (Enumerator_t1_1331 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1_9350(__this, method) (( void (*) (Enumerator_t1_1331 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1_9350_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_169  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_9351_gshared (Enumerator_t1_1331 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_9351(__this, method) (( DictionaryEntry_t1_169  (*) (Enumerator_t1_1331 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_9351_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_9352_gshared (Enumerator_t1_1331 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_9352(__this, method) (( Object_t * (*) (Enumerator_t1_1331 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_9352_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_9353_gshared (Enumerator_t1_1331 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_9353(__this, method) (( Object_t * (*) (Enumerator_t1_1331 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_9353_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1_9354_gshared (Enumerator_t1_1331 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1_9354(__this, method) (( bool (*) (Enumerator_t1_1331 *, const MethodInfo*))Enumerator_MoveNext_m1_9354_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1_1327  Enumerator_get_Current_m1_9355_gshared (Enumerator_t1_1331 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1_9355(__this, method) (( KeyValuePair_2_t1_1327  (*) (Enumerator_t1_1331 *, const MethodInfo*))Enumerator_get_Current_m1_9355_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m1_9356_gshared (Enumerator_t1_1331 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1_9356(__this, method) (( int32_t (*) (Enumerator_t1_1331 *, const MethodInfo*))Enumerator_get_CurrentKey_m1_9356_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m1_9357_gshared (Enumerator_t1_1331 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1_9357(__this, method) (( Object_t * (*) (Enumerator_t1_1331 *, const MethodInfo*))Enumerator_get_CurrentValue_m1_9357_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m1_9358_gshared (Enumerator_t1_1331 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1_9358(__this, method) (( void (*) (Enumerator_t1_1331 *, const MethodInfo*))Enumerator_Reset_m1_9358_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m1_9359_gshared (Enumerator_t1_1331 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1_9359(__this, method) (( void (*) (Enumerator_t1_1331 *, const MethodInfo*))Enumerator_VerifyState_m1_9359_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m1_9360_gshared (Enumerator_t1_1331 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1_9360(__this, method) (( void (*) (Enumerator_t1_1331 *, const MethodInfo*))Enumerator_VerifyCurrent_m1_9360_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m1_9361_gshared (Enumerator_t1_1331 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1_9361(__this, method) (( void (*) (Enumerator_t1_1331 *, const MethodInfo*))Enumerator_Dispose_m1_9361_gshared)(__this, method)
