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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1_1159;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m1_6561_gshared (Enumerator_t1_1165 * __this, Dictionary_2_t1_1159 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1_6561(__this, ___dictionary, method) (( void (*) (Enumerator_t1_1165 *, Dictionary_2_t1_1159 *, const MethodInfo*))Enumerator__ctor_m1_6561_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1_6562_gshared (Enumerator_t1_1165 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1_6562(__this, method) (( Object_t * (*) (Enumerator_t1_1165 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1_6562_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m1_6563_gshared (Enumerator_t1_1165 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1_6563(__this, method) (( void (*) (Enumerator_t1_1165 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1_6563_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_169  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_6564_gshared (Enumerator_t1_1165 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_6564(__this, method) (( DictionaryEntry_t1_169  (*) (Enumerator_t1_1165 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_6564_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_6565_gshared (Enumerator_t1_1165 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_6565(__this, method) (( Object_t * (*) (Enumerator_t1_1165 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_6565_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_6566_gshared (Enumerator_t1_1165 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_6566(__this, method) (( Object_t * (*) (Enumerator_t1_1165 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_6566_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1_6567_gshared (Enumerator_t1_1165 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1_6567(__this, method) (( bool (*) (Enumerator_t1_1165 *, const MethodInfo*))Enumerator_MoveNext_m1_6567_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1_1161  Enumerator_get_Current_m1_6568_gshared (Enumerator_t1_1165 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1_6568(__this, method) (( KeyValuePair_2_t1_1161  (*) (Enumerator_t1_1165 *, const MethodInfo*))Enumerator_get_Current_m1_6568_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m1_6569_gshared (Enumerator_t1_1165 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1_6569(__this, method) (( Object_t * (*) (Enumerator_t1_1165 *, const MethodInfo*))Enumerator_get_CurrentKey_m1_6569_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m1_6570_gshared (Enumerator_t1_1165 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1_6570(__this, method) (( Object_t * (*) (Enumerator_t1_1165 *, const MethodInfo*))Enumerator_get_CurrentValue_m1_6570_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Reset()
extern "C" void Enumerator_Reset_m1_6571_gshared (Enumerator_t1_1165 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1_6571(__this, method) (( void (*) (Enumerator_t1_1165 *, const MethodInfo*))Enumerator_Reset_m1_6571_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m1_6572_gshared (Enumerator_t1_1165 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1_6572(__this, method) (( void (*) (Enumerator_t1_1165 *, const MethodInfo*))Enumerator_VerifyState_m1_6572_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m1_6573_gshared (Enumerator_t1_1165 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1_6573(__this, method) (( void (*) (Enumerator_t1_1165 *, const MethodInfo*))Enumerator_VerifyCurrent_m1_6573_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m1_6574_gshared (Enumerator_t1_1165 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1_6574(__this, method) (( void (*) (Enumerator_t1_1165 *, const MethodInfo*))Enumerator_Dispose_m1_6574_gshared)(__this, method)
