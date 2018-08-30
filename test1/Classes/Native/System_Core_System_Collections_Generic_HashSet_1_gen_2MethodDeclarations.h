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

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t4_44;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t1_995;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_1131;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_179;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1_999;
// System.Object[]
struct ObjectU5BU5D_t1_159;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_132;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__0.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m4_118_gshared (HashSet_1_t4_44 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m4_118(__this, method) (( void (*) (HashSet_1_t4_44 *, const MethodInfo*))HashSet_1__ctor_m4_118_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void HashSet_1__ctor_m4_119_gshared (HashSet_1_t4_44 * __this, Object_t* ___collection, const MethodInfo* method);
#define HashSet_1__ctor_m4_119(__this, ___collection, method) (( void (*) (HashSet_1_t4_44 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m4_119_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m4_120_gshared (HashSet_1_t4_44 * __this, Object_t* ___collection, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1__ctor_m4_120(__this, ___collection, ___comparer, method) (( void (*) (HashSet_1_t4_44 *, Object_t*, Object_t*, const MethodInfo*))HashSet_1__ctor_m4_120_gshared)(__this, ___collection, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m4_121_gshared (HashSet_1_t4_44 * __this, SerializationInfo_t1_179 * ___info, StreamingContext_t1_511  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m4_121(__this, ___info, ___context, method) (( void (*) (HashSet_1_t4_44 *, SerializationInfo_t1_179 *, StreamingContext_t1_511 , const MethodInfo*))HashSet_1__ctor_m4_121_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4_122_gshared (HashSet_1_t4_44 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4_122(__this, method) (( Object_t* (*) (HashSet_1_t4_44 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4_122_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4_123_gshared (HashSet_1_t4_44 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4_123(__this, method) (( bool (*) (HashSet_1_t4_44 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4_123_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m4_124_gshared (HashSet_1_t4_44 * __this, ObjectU5BU5D_t1_159* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m4_124(__this, ___array, ___index, method) (( void (*) (HashSet_1_t4_44 *, ObjectU5BU5D_t1_159*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m4_124_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m4_125_gshared (HashSet_1_t4_44 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m4_125(__this, ___item, method) (( void (*) (HashSet_1_t4_44 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m4_125_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m4_126_gshared (HashSet_1_t4_44 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m4_126(__this, method) (( Object_t * (*) (HashSet_1_t4_44 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m4_126_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m4_127_gshared (HashSet_1_t4_44 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m4_127(__this, method) (( int32_t (*) (HashSet_1_t4_44 *, const MethodInfo*))HashSet_1_get_Count_m4_127_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m4_128_gshared (HashSet_1_t4_44 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m4_128(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t4_44 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m4_128_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m4_129_gshared (HashSet_1_t4_44 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m4_129(__this, ___size, method) (( void (*) (HashSet_1_t4_44 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m4_129_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m4_130_gshared (HashSet_1_t4_44 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m4_130(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t4_44 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m4_130_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m4_131_gshared (HashSet_1_t4_44 * __this, ObjectU5BU5D_t1_159* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m4_131(__this, ___array, ___index, method) (( void (*) (HashSet_1_t4_44 *, ObjectU5BU5D_t1_159*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m4_131_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m4_132_gshared (HashSet_1_t4_44 * __this, ObjectU5BU5D_t1_159* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m4_132(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t4_44 *, ObjectU5BU5D_t1_159*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m4_132_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m4_133_gshared (HashSet_1_t4_44 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m4_133(__this, method) (( void (*) (HashSet_1_t4_44 *, const MethodInfo*))HashSet_1_Resize_m4_133_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m4_134_gshared (HashSet_1_t4_44 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m4_134(__this, ___index, method) (( int32_t (*) (HashSet_1_t4_44 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m4_134_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m4_135_gshared (HashSet_1_t4_44 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m4_135(__this, ___item, method) (( int32_t (*) (HashSet_1_t4_44 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m4_135_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m4_136_gshared (HashSet_1_t4_44 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m4_136(__this, ___item, method) (( bool (*) (HashSet_1_t4_44 *, Object_t *, const MethodInfo*))HashSet_1_Add_m4_136_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m4_137_gshared (HashSet_1_t4_44 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m4_137(__this, method) (( void (*) (HashSet_1_t4_44 *, const MethodInfo*))HashSet_1_Clear_m4_137_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m4_138_gshared (HashSet_1_t4_44 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m4_138(__this, ___item, method) (( bool (*) (HashSet_1_t4_44 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m4_138_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m4_139_gshared (HashSet_1_t4_44 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m4_139(__this, ___item, method) (( bool (*) (HashSet_1_t4_44 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m4_139_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m4_140_gshared (HashSet_1_t4_44 * __this, SerializationInfo_t1_179 * ___info, StreamingContext_t1_511  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m4_140(__this, ___info, ___context, method) (( void (*) (HashSet_1_t4_44 *, SerializationInfo_t1_179 *, StreamingContext_t1_511 , const MethodInfo*))HashSet_1_GetObjectData_m4_140_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m4_141_gshared (HashSet_1_t4_44 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m4_141(__this, ___sender, method) (( void (*) (HashSet_1_t4_44 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m4_141_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t4_47  HashSet_1_GetEnumerator_m4_142_gshared (HashSet_1_t4_44 * __this, const MethodInfo* method);
#define HashSet_1_GetEnumerator_m4_142(__this, method) (( Enumerator_t4_47  (*) (HashSet_1_t4_44 *, const MethodInfo*))HashSet_1_GetEnumerator_m4_142_gshared)(__this, method)
