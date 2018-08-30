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
struct Dictionary_2_t1_1253;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m1_7499_gshared (Enumerator_t1_1259 * __this, Dictionary_2_t1_1253 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1_7499(__this, ___dictionary, method) (( void (*) (Enumerator_t1_1259 *, Dictionary_2_t1_1253 *, const MethodInfo*))Enumerator__ctor_m1_7499_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1_7500_gshared (Enumerator_t1_1259 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1_7500(__this, method) (( Object_t * (*) (Enumerator_t1_1259 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1_7500_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m1_7501_gshared (Enumerator_t1_1259 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1_7501(__this, method) (( void (*) (Enumerator_t1_1259 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1_7501_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_169  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_7502_gshared (Enumerator_t1_1259 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_7502(__this, method) (( DictionaryEntry_t1_169  (*) (Enumerator_t1_1259 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_7502_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_7503_gshared (Enumerator_t1_1259 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_7503(__this, method) (( Object_t * (*) (Enumerator_t1_1259 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_7503_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_7504_gshared (Enumerator_t1_1259 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_7504(__this, method) (( Object_t * (*) (Enumerator_t1_1259 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_7504_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1_7505_gshared (Enumerator_t1_1259 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1_7505(__this, method) (( bool (*) (Enumerator_t1_1259 *, const MethodInfo*))Enumerator_MoveNext_m1_7505_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" KeyValuePair_2_t1_1255  Enumerator_get_Current_m1_7506_gshared (Enumerator_t1_1259 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1_7506(__this, method) (( KeyValuePair_2_t1_1255  (*) (Enumerator_t1_1259 *, const MethodInfo*))Enumerator_get_Current_m1_7506_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m1_7507_gshared (Enumerator_t1_1259 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1_7507(__this, method) (( Object_t * (*) (Enumerator_t1_1259 *, const MethodInfo*))Enumerator_get_CurrentKey_m1_7507_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentValue()
extern "C" bool Enumerator_get_CurrentValue_m1_7508_gshared (Enumerator_t1_1259 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1_7508(__this, method) (( bool (*) (Enumerator_t1_1259 *, const MethodInfo*))Enumerator_get_CurrentValue_m1_7508_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Reset()
extern "C" void Enumerator_Reset_m1_7509_gshared (Enumerator_t1_1259 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1_7509(__this, method) (( void (*) (Enumerator_t1_1259 *, const MethodInfo*))Enumerator_Reset_m1_7509_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyState()
extern "C" void Enumerator_VerifyState_m1_7510_gshared (Enumerator_t1_1259 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1_7510(__this, method) (( void (*) (Enumerator_t1_1259 *, const MethodInfo*))Enumerator_VerifyState_m1_7510_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m1_7511_gshared (Enumerator_t1_1259 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1_7511(__this, method) (( void (*) (Enumerator_t1_1259 *, const MethodInfo*))Enumerator_VerifyCurrent_m1_7511_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m1_7512_gshared (Enumerator_t1_1259 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1_7512(__this, method) (( void (*) (Enumerator_t1_1259 *, const MethodInfo*))Enumerator_Dispose_m1_7512_gshared)(__this, method)
