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
struct Dictionary_2_t1_1079;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m1_6424_gshared (Enumerator_t1_1085 * __this, Dictionary_2_t1_1079 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1_6424(__this, ___dictionary, method) (( void (*) (Enumerator_t1_1085 *, Dictionary_2_t1_1079 *, const MethodInfo*))Enumerator__ctor_m1_6424_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1_6425_gshared (Enumerator_t1_1085 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1_6425(__this, method) (( Object_t * (*) (Enumerator_t1_1085 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1_6425_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m1_6426_gshared (Enumerator_t1_1085 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1_6426(__this, method) (( void (*) (Enumerator_t1_1085 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1_6426_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_169  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_6427_gshared (Enumerator_t1_1085 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_6427(__this, method) (( DictionaryEntry_t1_169  (*) (Enumerator_t1_1085 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_6427_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_6428_gshared (Enumerator_t1_1085 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_6428(__this, method) (( Object_t * (*) (Enumerator_t1_1085 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_6428_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_6429_gshared (Enumerator_t1_1085 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_6429(__this, method) (( Object_t * (*) (Enumerator_t1_1085 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_6429_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1_6430_gshared (Enumerator_t1_1085 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1_6430(__this, method) (( bool (*) (Enumerator_t1_1085 *, const MethodInfo*))Enumerator_MoveNext_m1_6430_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1_1081  Enumerator_get_Current_m1_6431_gshared (Enumerator_t1_1085 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1_6431(__this, method) (( KeyValuePair_2_t1_1081  (*) (Enumerator_t1_1085 *, const MethodInfo*))Enumerator_get_Current_m1_6431_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m1_6432_gshared (Enumerator_t1_1085 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1_6432(__this, method) (( Object_t * (*) (Enumerator_t1_1085 *, const MethodInfo*))Enumerator_get_CurrentKey_m1_6432_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m1_6433_gshared (Enumerator_t1_1085 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1_6433(__this, method) (( Object_t * (*) (Enumerator_t1_1085 *, const MethodInfo*))Enumerator_get_CurrentValue_m1_6433_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Reset()
extern "C" void Enumerator_Reset_m1_6434_gshared (Enumerator_t1_1085 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1_6434(__this, method) (( void (*) (Enumerator_t1_1085 *, const MethodInfo*))Enumerator_Reset_m1_6434_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m1_6435_gshared (Enumerator_t1_1085 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1_6435(__this, method) (( void (*) (Enumerator_t1_1085 *, const MethodInfo*))Enumerator_VerifyState_m1_6435_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m1_6436_gshared (Enumerator_t1_1085 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1_6436(__this, method) (( void (*) (Enumerator_t1_1085 *, const MethodInfo*))Enumerator_VerifyCurrent_m1_6436_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m1_6437_gshared (Enumerator_t1_1085 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1_6437(__this, method) (( void (*) (Enumerator_t1_1085 *, const MethodInfo*))Enumerator_Dispose_m1_6437_gshared)(__this, method)
