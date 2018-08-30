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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1_1169;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m1_7332_gshared (Enumerator_t1_1175 * __this, Dictionary_2_t1_1169 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1_7332(__this, ___dictionary, method) (( void (*) (Enumerator_t1_1175 *, Dictionary_2_t1_1169 *, const MethodInfo*))Enumerator__ctor_m1_7332_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1_7333_gshared (Enumerator_t1_1175 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1_7333(__this, method) (( Object_t * (*) (Enumerator_t1_1175 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1_7333_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m1_7334_gshared (Enumerator_t1_1175 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1_7334(__this, method) (( void (*) (Enumerator_t1_1175 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1_7334_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_169  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_7335_gshared (Enumerator_t1_1175 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_7335(__this, method) (( DictionaryEntry_t1_169  (*) (Enumerator_t1_1175 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_7335_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_7336_gshared (Enumerator_t1_1175 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_7336(__this, method) (( Object_t * (*) (Enumerator_t1_1175 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_7336_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_7337_gshared (Enumerator_t1_1175 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_7337(__this, method) (( Object_t * (*) (Enumerator_t1_1175 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_7337_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1_7338_gshared (Enumerator_t1_1175 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1_7338(__this, method) (( bool (*) (Enumerator_t1_1175 *, const MethodInfo*))Enumerator_MoveNext_m1_7338_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" KeyValuePair_2_t1_1171  Enumerator_get_Current_m1_7339_gshared (Enumerator_t1_1175 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1_7339(__this, method) (( KeyValuePair_2_t1_1171  (*) (Enumerator_t1_1175 *, const MethodInfo*))Enumerator_get_Current_m1_7339_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m1_7340_gshared (Enumerator_t1_1175 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1_7340(__this, method) (( Object_t * (*) (Enumerator_t1_1175 *, const MethodInfo*))Enumerator_get_CurrentKey_m1_7340_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentValue()
extern "C" bool Enumerator_get_CurrentValue_m1_7341_gshared (Enumerator_t1_1175 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1_7341(__this, method) (( bool (*) (Enumerator_t1_1175 *, const MethodInfo*))Enumerator_get_CurrentValue_m1_7341_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Reset()
extern "C" void Enumerator_Reset_m1_7342_gshared (Enumerator_t1_1175 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1_7342(__this, method) (( void (*) (Enumerator_t1_1175 *, const MethodInfo*))Enumerator_Reset_m1_7342_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyState()
extern "C" void Enumerator_VerifyState_m1_7343_gshared (Enumerator_t1_1175 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1_7343(__this, method) (( void (*) (Enumerator_t1_1175 *, const MethodInfo*))Enumerator_VerifyState_m1_7343_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m1_7344_gshared (Enumerator_t1_1175 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1_7344(__this, method) (( void (*) (Enumerator_t1_1175 *, const MethodInfo*))Enumerator_VerifyCurrent_m1_7344_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m1_7345_gshared (Enumerator_t1_1175 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1_7345(__this, method) (( void (*) (Enumerator_t1_1175 *, const MethodInfo*))Enumerator_Dispose_m1_7345_gshared)(__this, method)
