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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>
struct Dictionary_2_t1_1663;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__21.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Vector2>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m1_13918_gshared (Enumerator_t1_1669 * __this, Dictionary_2_t1_1663 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1_13918(__this, ___dictionary, method) (( void (*) (Enumerator_t1_1669 *, Dictionary_2_t1_1663 *, const MethodInfo*))Enumerator__ctor_m1_13918_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Vector2>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1_13919_gshared (Enumerator_t1_1669 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1_13919(__this, method) (( Object_t * (*) (Enumerator_t1_1669 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1_13919_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Vector2>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m1_13920_gshared (Enumerator_t1_1669 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1_13920(__this, method) (( void (*) (Enumerator_t1_1669 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1_13920_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Vector2>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_169  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_13921_gshared (Enumerator_t1_1669 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_13921(__this, method) (( DictionaryEntry_t1_169  (*) (Enumerator_t1_1669 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_13921_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Vector2>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_13922_gshared (Enumerator_t1_1669 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_13922(__this, method) (( Object_t * (*) (Enumerator_t1_1669 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_13922_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Vector2>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_13923_gshared (Enumerator_t1_1669 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_13923(__this, method) (( Object_t * (*) (Enumerator_t1_1669 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_13923_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Vector2>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1_13924_gshared (Enumerator_t1_1669 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1_13924(__this, method) (( bool (*) (Enumerator_t1_1669 *, const MethodInfo*))Enumerator_MoveNext_m1_13924_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Vector2>::get_Current()
extern "C" KeyValuePair_2_t1_1665  Enumerator_get_Current_m1_13925_gshared (Enumerator_t1_1669 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1_13925(__this, method) (( KeyValuePair_2_t1_1665  (*) (Enumerator_t1_1669 *, const MethodInfo*))Enumerator_get_Current_m1_13925_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Vector2>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m1_13926_gshared (Enumerator_t1_1669 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1_13926(__this, method) (( Object_t * (*) (Enumerator_t1_1669 *, const MethodInfo*))Enumerator_get_CurrentKey_m1_13926_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Vector2>::get_CurrentValue()
extern "C" Vector2_t7_65  Enumerator_get_CurrentValue_m1_13927_gshared (Enumerator_t1_1669 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1_13927(__this, method) (( Vector2_t7_65  (*) (Enumerator_t1_1669 *, const MethodInfo*))Enumerator_get_CurrentValue_m1_13927_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Vector2>::Reset()
extern "C" void Enumerator_Reset_m1_13928_gshared (Enumerator_t1_1669 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1_13928(__this, method) (( void (*) (Enumerator_t1_1669 *, const MethodInfo*))Enumerator_Reset_m1_13928_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Vector2>::VerifyState()
extern "C" void Enumerator_VerifyState_m1_13929_gshared (Enumerator_t1_1669 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1_13929(__this, method) (( void (*) (Enumerator_t1_1669 *, const MethodInfo*))Enumerator_VerifyState_m1_13929_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Vector2>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m1_13930_gshared (Enumerator_t1_1669 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1_13930(__this, method) (( void (*) (Enumerator_t1_1669 *, const MethodInfo*))Enumerator_VerifyCurrent_m1_13930_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Vector2>::Dispose()
extern "C" void Enumerator_Dispose_m1_13931_gshared (Enumerator_t1_1669 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1_13931(__this, method) (( void (*) (Enumerator_t1_1669 *, const MethodInfo*))Enumerator_Dispose_m1_13931_gshared)(__this, method)
