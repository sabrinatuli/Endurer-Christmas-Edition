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

// Boo.Lang.List`1<System.Object>
struct List_1_t5_19;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_132;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1_999;
// System.Object[]
struct ObjectU5BU5D_t1_159;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Boo.Lang.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m5_66_gshared (List_1_t5_19 * __this, const MethodInfo* method);
#define List_1__ctor_m5_66(__this, method) (( void (*) (List_1_t5_19 *, const MethodInfo*))List_1__ctor_m5_66_gshared)(__this, method)
// System.Void Boo.Lang.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m5_67_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m5_67(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m5_67_gshared)(__this /* static, unused */, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m5_68_gshared (List_1_t5_19 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m5_68(__this, ___item, method) (( void (*) (List_1_t5_19 *, Object_t *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m5_68_gshared)(__this, ___item, method)
// System.Collections.IEnumerator Boo.Lang.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m5_69_gshared (List_1_t5_19 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m5_69(__this, method) (( Object_t * (*) (List_1_t5_19 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m5_69_gshared)(__this, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern "C" void List_1_System_Collections_Generic_IListU3CTU3E_Insert_m5_70_gshared (List_1_t5_19 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_Generic_IListU3CTU3E_Insert_m5_70(__this, ___index, ___item, method) (( void (*) (List_1_t5_19 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_Generic_IListU3CTU3E_Insert_m5_70_gshared)(__this, ___index, ___item, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern "C" void List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m5_71_gshared (List_1_t5_19 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m5_71(__this, ___index, method) (( void (*) (List_1_t5_19 *, int32_t, const MethodInfo*))List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m5_71_gshared)(__this, ___index, method)
// System.Boolean Boo.Lang.List`1<System.Object>::System.Collections.Generic.ICollection<T>.Remove(T)
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m5_72_gshared (List_1_t5_19 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m5_72(__this, ___item, method) (( bool (*) (List_1_t5_19 *, Object_t *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m5_72_gshared)(__this, ___item, method)
// System.Int32 Boo.Lang.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m5_73_gshared (List_1_t5_19 * __this, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m5_73(__this, ___value, method) (( int32_t (*) (List_1_t5_19 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m5_73_gshared)(__this, ___value, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m5_74_gshared (List_1_t5_19 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m5_74(__this, ___index, ___value, method) (( void (*) (List_1_t5_19 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m5_74_gshared)(__this, ___index, ___value, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m5_75_gshared (List_1_t5_19 * __this, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m5_75(__this, ___value, method) (( void (*) (List_1_t5_19 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m5_75_gshared)(__this, ___value, method)
// System.Int32 Boo.Lang.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m5_76_gshared (List_1_t5_19 * __this, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m5_76(__this, ___value, method) (( int32_t (*) (List_1_t5_19 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m5_76_gshared)(__this, ___value, method)
// System.Boolean Boo.Lang.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m5_77_gshared (List_1_t5_19 * __this, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m5_77(__this, ___value, method) (( bool (*) (List_1_t5_19 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m5_77_gshared)(__this, ___value, method)
// System.Object Boo.Lang.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m5_78_gshared (List_1_t5_19 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m5_78(__this, ___index, method) (( Object_t * (*) (List_1_t5_19 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m5_78_gshared)(__this, ___index, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m5_79_gshared (List_1_t5_19 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m5_79(__this, ___index, ___value, method) (( void (*) (List_1_t5_19 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m5_79_gshared)(__this, ___index, ___value, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.IList.RemoveAt(System.Int32)
extern "C" void List_1_System_Collections_IList_RemoveAt_m5_80_gshared (List_1_t5_19 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_RemoveAt_m5_80(__this, ___index, method) (( void (*) (List_1_t5_19 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_RemoveAt_m5_80_gshared)(__this, ___index, method)
// System.Boolean Boo.Lang.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m5_81_gshared (List_1_t5_19 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m5_81(__this, method) (( bool (*) (List_1_t5_19 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m5_81_gshared)(__this, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m5_82_gshared (List_1_t5_19 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m5_82(__this, ___array, ___index, method) (( void (*) (List_1_t5_19 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m5_82_gshared)(__this, ___array, ___index, method)
// System.Int32 Boo.Lang.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m5_83_gshared (List_1_t5_19 * __this, const MethodInfo* method);
#define List_1_get_Count_m5_83(__this, method) (( int32_t (*) (List_1_t5_19 *, const MethodInfo*))List_1_get_Count_m5_83_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> Boo.Lang.List`1<System.Object>::GetEnumerator()
extern "C" Object_t* List_1_GetEnumerator_m5_84_gshared (List_1_t5_19 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m5_84(__this, method) (( Object_t* (*) (List_1_t5_19 *, const MethodInfo*))List_1_GetEnumerator_m5_84_gshared)(__this, method)
// System.Void Boo.Lang.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m5_85_gshared (List_1_t5_19 * __this, ObjectU5BU5D_t1_159* ___target, int32_t ___index, const MethodInfo* method);
#define List_1_CopyTo_m5_85(__this, ___target, ___index, method) (( void (*) (List_1_t5_19 *, ObjectU5BU5D_t1_159*, int32_t, const MethodInfo*))List_1_CopyTo_m5_85_gshared)(__this, ___target, ___index, method)
// System.Boolean Boo.Lang.List`1<System.Object>::get_IsSynchronized()
extern "C" bool List_1_get_IsSynchronized_m5_86_gshared (List_1_t5_19 * __this, const MethodInfo* method);
#define List_1_get_IsSynchronized_m5_86(__this, method) (( bool (*) (List_1_t5_19 *, const MethodInfo*))List_1_get_IsSynchronized_m5_86_gshared)(__this, method)
// System.Object Boo.Lang.List`1<System.Object>::get_SyncRoot()
extern "C" Object_t * List_1_get_SyncRoot_m5_87_gshared (List_1_t5_19 * __this, const MethodInfo* method);
#define List_1_get_SyncRoot_m5_87(__this, method) (( Object_t * (*) (List_1_t5_19 *, const MethodInfo*))List_1_get_SyncRoot_m5_87_gshared)(__this, method)
// System.Boolean Boo.Lang.List`1<System.Object>::get_IsReadOnly()
extern "C" bool List_1_get_IsReadOnly_m5_88_gshared (List_1_t5_19 * __this, const MethodInfo* method);
#define List_1_get_IsReadOnly_m5_88(__this, method) (( bool (*) (List_1_t5_19 *, const MethodInfo*))List_1_get_IsReadOnly_m5_88_gshared)(__this, method)
// T Boo.Lang.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m5_89_gshared (List_1_t5_19 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m5_89(__this, ___index, method) (( Object_t * (*) (List_1_t5_19 *, int32_t, const MethodInfo*))List_1_get_Item_m5_89_gshared)(__this, ___index, method)
// System.Void Boo.Lang.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m5_90_gshared (List_1_t5_19 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m5_90(__this, ___index, ___value, method) (( void (*) (List_1_t5_19 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m5_90_gshared)(__this, ___index, ___value, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::Push(T)
extern "C" List_1_t5_19 * List_1_Push_m5_91_gshared (List_1_t5_19 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Push_m5_91(__this, ___item, method) (( List_1_t5_19 * (*) (List_1_t5_19 *, Object_t *, const MethodInfo*))List_1_Push_m5_91_gshared)(__this, ___item, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::Add(T)
extern "C" List_1_t5_19 * List_1_Add_m5_92_gshared (List_1_t5_19 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m5_92(__this, ___item, method) (( List_1_t5_19 * (*) (List_1_t5_19 *, Object_t *, const MethodInfo*))List_1_Add_m5_92_gshared)(__this, ___item, method)
// System.String Boo.Lang.List`1<System.Object>::ToString()
extern "C" String_t* List_1_ToString_m5_93_gshared (List_1_t5_19 * __this, const MethodInfo* method);
#define List_1_ToString_m5_93(__this, method) (( String_t* (*) (List_1_t5_19 *, const MethodInfo*))List_1_ToString_m5_93_gshared)(__this, method)
// System.String Boo.Lang.List`1<System.Object>::Join(System.String)
extern "C" String_t* List_1_Join_m5_94_gshared (List_1_t5_19 * __this, String_t* ___separator, const MethodInfo* method);
#define List_1_Join_m5_94(__this, ___separator, method) (( String_t* (*) (List_1_t5_19 *, String_t*, const MethodInfo*))List_1_Join_m5_94_gshared)(__this, ___separator, method)
// System.Int32 Boo.Lang.List`1<System.Object>::GetHashCode()
extern "C" int32_t List_1_GetHashCode_m5_95_gshared (List_1_t5_19 * __this, const MethodInfo* method);
#define List_1_GetHashCode_m5_95(__this, method) (( int32_t (*) (List_1_t5_19 *, const MethodInfo*))List_1_GetHashCode_m5_95_gshared)(__this, method)
// System.Boolean Boo.Lang.List`1<System.Object>::Equals(System.Object)
extern "C" bool List_1_Equals_m5_96_gshared (List_1_t5_19 * __this, Object_t * ___other, const MethodInfo* method);
#define List_1_Equals_m5_96(__this, ___other, method) (( bool (*) (List_1_t5_19 *, Object_t *, const MethodInfo*))List_1_Equals_m5_96_gshared)(__this, ___other, method)
// System.Boolean Boo.Lang.List`1<System.Object>::Equals(Boo.Lang.List`1<T>)
extern "C" bool List_1_Equals_m5_97_gshared (List_1_t5_19 * __this, List_1_t5_19 * ___other, const MethodInfo* method);
#define List_1_Equals_m5_97(__this, ___other, method) (( bool (*) (List_1_t5_19 *, List_1_t5_19 *, const MethodInfo*))List_1_Equals_m5_97_gshared)(__this, ___other, method)
// System.Void Boo.Lang.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m5_98_gshared (List_1_t5_19 * __this, const MethodInfo* method);
#define List_1_Clear_m5_98(__this, method) (( void (*) (List_1_t5_19 *, const MethodInfo*))List_1_Clear_m5_98_gshared)(__this, method)
// System.Boolean Boo.Lang.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m5_99_gshared (List_1_t5_19 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m5_99(__this, ___item, method) (( bool (*) (List_1_t5_19 *, Object_t *, const MethodInfo*))List_1_Contains_m5_99_gshared)(__this, ___item, method)
// System.Int32 Boo.Lang.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m5_100_gshared (List_1_t5_19 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m5_100(__this, ___item, method) (( int32_t (*) (List_1_t5_19 *, Object_t *, const MethodInfo*))List_1_IndexOf_m5_100_gshared)(__this, ___item, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::Insert(System.Int32,T)
extern "C" List_1_t5_19 * List_1_Insert_m5_101_gshared (List_1_t5_19 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m5_101(__this, ___index, ___item, method) (( List_1_t5_19 * (*) (List_1_t5_19 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m5_101_gshared)(__this, ___index, ___item, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::Remove(T)
extern "C" List_1_t5_19 * List_1_Remove_m5_102_gshared (List_1_t5_19 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m5_102(__this, ___item, method) (( List_1_t5_19 * (*) (List_1_t5_19 *, Object_t *, const MethodInfo*))List_1_Remove_m5_102_gshared)(__this, ___item, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" List_1_t5_19 * List_1_RemoveAt_m5_103_gshared (List_1_t5_19 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m5_103(__this, ___index, method) (( List_1_t5_19 * (*) (List_1_t5_19 *, int32_t, const MethodInfo*))List_1_RemoveAt_m5_103_gshared)(__this, ___index, method)
// System.Void Boo.Lang.List`1<System.Object>::EnsureCapacity(System.Int32)
extern "C" void List_1_EnsureCapacity_m5_104_gshared (List_1_t5_19 * __this, int32_t ___minCapacity, const MethodInfo* method);
#define List_1_EnsureCapacity_m5_104(__this, ___minCapacity, method) (( void (*) (List_1_t5_19 *, int32_t, const MethodInfo*))List_1_EnsureCapacity_m5_104_gshared)(__this, ___minCapacity, method)
// T[] Boo.Lang.List`1<System.Object>::NewArray(System.Int32)
extern "C" ObjectU5BU5D_t1_159* List_1_NewArray_m5_105_gshared (List_1_t5_19 * __this, int32_t ___minCapacity, const MethodInfo* method);
#define List_1_NewArray_m5_105(__this, ___minCapacity, method) (( ObjectU5BU5D_t1_159* (*) (List_1_t5_19 *, int32_t, const MethodInfo*))List_1_NewArray_m5_105_gshared)(__this, ___minCapacity, method)
// System.Void Boo.Lang.List`1<System.Object>::InnerRemoveAt(System.Int32)
extern "C" void List_1_InnerRemoveAt_m5_106_gshared (List_1_t5_19 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_InnerRemoveAt_m5_106(__this, ___index, method) (( void (*) (List_1_t5_19 *, int32_t, const MethodInfo*))List_1_InnerRemoveAt_m5_106_gshared)(__this, ___index, method)
// System.Boolean Boo.Lang.List`1<System.Object>::InnerRemove(T)
extern "C" bool List_1_InnerRemove_m5_107_gshared (List_1_t5_19 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_InnerRemove_m5_107(__this, ___item, method) (( bool (*) (List_1_t5_19 *, Object_t *, const MethodInfo*))List_1_InnerRemove_m5_107_gshared)(__this, ___item, method)
// System.Int32 Boo.Lang.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" int32_t List_1_CheckIndex_m5_108_gshared (List_1_t5_19 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m5_108(__this, ___index, method) (( int32_t (*) (List_1_t5_19 *, int32_t, const MethodInfo*))List_1_CheckIndex_m5_108_gshared)(__this, ___index, method)
// System.Int32 Boo.Lang.List`1<System.Object>::NormalizeIndex(System.Int32)
extern "C" int32_t List_1_NormalizeIndex_m5_109_gshared (List_1_t5_19 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_NormalizeIndex_m5_109(__this, ___index, method) (( int32_t (*) (List_1_t5_19 *, int32_t, const MethodInfo*))List_1_NormalizeIndex_m5_109_gshared)(__this, ___index, method)
// T Boo.Lang.List`1<System.Object>::Coerce(System.Object)
extern "C" Object_t * List_1_Coerce_m5_110_gshared (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method);
#define List_1_Coerce_m5_110(__this /* static, unused */, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))List_1_Coerce_m5_110_gshared)(__this /* static, unused */, ___value, method)
