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
struct HashSet_1_t4_20;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_179;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1_998;
// System.Object[]
struct ObjectU5BU5D_t1_159;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_132;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_1051;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m4_55_gshared (HashSet_1_t4_20 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m4_55(__this, method) (( void (*) (HashSet_1_t4_20 *, const MethodInfo*))HashSet_1__ctor_m4_55_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m4_56_gshared (HashSet_1_t4_20 * __this, SerializationInfo_t1_179 * ___info, StreamingContext_t1_511  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m4_56(__this, ___info, ___context, method) (( void (*) (HashSet_1_t4_20 *, SerializationInfo_t1_179 *, StreamingContext_t1_511 , const MethodInfo*))HashSet_1__ctor_m4_56_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4_57_gshared (HashSet_1_t4_20 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4_57(__this, method) (( Object_t* (*) (HashSet_1_t4_20 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4_57_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4_58_gshared (HashSet_1_t4_20 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4_58(__this, method) (( bool (*) (HashSet_1_t4_20 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4_58_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m4_59_gshared (HashSet_1_t4_20 * __this, ObjectU5BU5D_t1_159* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m4_59(__this, ___array, ___index, method) (( void (*) (HashSet_1_t4_20 *, ObjectU5BU5D_t1_159*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m4_59_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m4_60_gshared (HashSet_1_t4_20 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m4_60(__this, ___item, method) (( void (*) (HashSet_1_t4_20 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m4_60_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m4_61_gshared (HashSet_1_t4_20 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m4_61(__this, method) (( Object_t * (*) (HashSet_1_t4_20 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m4_61_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m4_62_gshared (HashSet_1_t4_20 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m4_62(__this, method) (( int32_t (*) (HashSet_1_t4_20 *, const MethodInfo*))HashSet_1_get_Count_m4_62_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m4_63_gshared (HashSet_1_t4_20 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m4_63(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t4_20 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m4_63_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m4_64_gshared (HashSet_1_t4_20 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m4_64(__this, ___size, method) (( void (*) (HashSet_1_t4_20 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m4_64_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m4_65_gshared (HashSet_1_t4_20 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m4_65(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t4_20 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m4_65_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m4_66_gshared (HashSet_1_t4_20 * __this, ObjectU5BU5D_t1_159* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m4_66(__this, ___array, ___index, method) (( void (*) (HashSet_1_t4_20 *, ObjectU5BU5D_t1_159*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m4_66_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m4_67_gshared (HashSet_1_t4_20 * __this, ObjectU5BU5D_t1_159* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m4_67(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t4_20 *, ObjectU5BU5D_t1_159*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m4_67_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m4_68_gshared (HashSet_1_t4_20 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m4_68(__this, method) (( void (*) (HashSet_1_t4_20 *, const MethodInfo*))HashSet_1_Resize_m4_68_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m4_69_gshared (HashSet_1_t4_20 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m4_69(__this, ___index, method) (( int32_t (*) (HashSet_1_t4_20 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m4_69_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m4_70_gshared (HashSet_1_t4_20 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m4_70(__this, ___item, method) (( int32_t (*) (HashSet_1_t4_20 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m4_70_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m4_71_gshared (HashSet_1_t4_20 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m4_71(__this, ___item, method) (( bool (*) (HashSet_1_t4_20 *, Object_t *, const MethodInfo*))HashSet_1_Add_m4_71_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m4_72_gshared (HashSet_1_t4_20 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m4_72(__this, method) (( void (*) (HashSet_1_t4_20 *, const MethodInfo*))HashSet_1_Clear_m4_72_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m4_73_gshared (HashSet_1_t4_20 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m4_73(__this, ___item, method) (( bool (*) (HashSet_1_t4_20 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m4_73_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m4_74_gshared (HashSet_1_t4_20 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m4_74(__this, ___item, method) (( bool (*) (HashSet_1_t4_20 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m4_74_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m4_75_gshared (HashSet_1_t4_20 * __this, SerializationInfo_t1_179 * ___info, StreamingContext_t1_511  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m4_75(__this, ___info, ___context, method) (( void (*) (HashSet_1_t4_20 *, SerializationInfo_t1_179 *, StreamingContext_t1_511 , const MethodInfo*))HashSet_1_GetObjectData_m4_75_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m4_76_gshared (HashSet_1_t4_20 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m4_76(__this, ___sender, method) (( void (*) (HashSet_1_t4_20 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m4_76_gshared)(__this, ___sender, method)
