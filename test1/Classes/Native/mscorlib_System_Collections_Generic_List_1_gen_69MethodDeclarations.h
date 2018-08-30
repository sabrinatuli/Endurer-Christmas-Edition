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

// System.Collections.Generic.List`1<System.Char>
struct List_1_t1_1872;
// System.Collections.Generic.IEnumerable`1<System.Char>
struct IEnumerable_1_t1_1088;
// System.Collections.Generic.IEnumerator`1<System.Char>
struct IEnumerator_1_t1_802;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_132;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Char>
struct ICollection_1_t1_2036;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Char>
struct ReadOnlyCollection_1_t1_1874;
// System.Char[]
struct CharU5BU5D_t1_16;
// System.Predicate`1<System.Char>
struct Predicate_1_t1_1876;
// System.Comparison`1<System.Char>
struct Comparison_1_t1_1880;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_65.h"

// System.Void System.Collections.Generic.List`1<System.Char>::.ctor()
extern "C" void List_1__ctor_m1_17537_gshared (List_1_t1_1872 * __this, const MethodInfo* method);
#define List_1__ctor_m1_17537(__this, method) (( void (*) (List_1_t1_1872 *, const MethodInfo*))List_1__ctor_m1_17537_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m1_17538_gshared (List_1_t1_1872 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m1_17538(__this, ___collection, method) (( void (*) (List_1_t1_1872 *, Object_t*, const MethodInfo*))List_1__ctor_m1_17538_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Char>::.ctor(System.Int32)
extern "C" void List_1__ctor_m1_17539_gshared (List_1_t1_1872 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1_17539(__this, ___capacity, method) (( void (*) (List_1_t1_1872 *, int32_t, const MethodInfo*))List_1__ctor_m1_17539_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Char>::.cctor()
extern "C" void List_1__cctor_m1_17540_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m1_17540(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m1_17540_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Char>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_17541_gshared (List_1_t1_1872 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_17541(__this, method) (( Object_t* (*) (List_1_t1_1872 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_17541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m1_17542_gshared (List_1_t1_1872 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m1_17542(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1_1872 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1_17542_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Char>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m1_17543_gshared (List_1_t1_1872 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m1_17543(__this, method) (( Object_t * (*) (List_1_t1_1872 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1_17543_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m1_17544_gshared (List_1_t1_1872 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m1_17544(__this, ___item, method) (( int32_t (*) (List_1_t1_1872 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1_17544_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m1_17545_gshared (List_1_t1_1872 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m1_17545(__this, ___item, method) (( bool (*) (List_1_t1_1872 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1_17545_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m1_17546_gshared (List_1_t1_1872 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m1_17546(__this, ___item, method) (( int32_t (*) (List_1_t1_1872 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1_17546_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Char>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m1_17547_gshared (List_1_t1_1872 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m1_17547(__this, ___index, ___item, method) (( void (*) (List_1_t1_1872 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1_17547_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Char>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m1_17548_gshared (List_1_t1_1872 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m1_17548(__this, ___item, method) (( void (*) (List_1_t1_1872 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1_17548_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_17549_gshared (List_1_t1_1872 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_17549(__this, method) (( bool (*) (List_1_t1_1872 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_17549_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m1_17550_gshared (List_1_t1_1872 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m1_17550(__this, method) (( bool (*) (List_1_t1_1872 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m1_17550_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Char>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m1_17551_gshared (List_1_t1_1872 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m1_17551(__this, method) (( Object_t * (*) (List_1_t1_1872 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1_17551_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m1_17552_gshared (List_1_t1_1872 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m1_17552(__this, method) (( bool (*) (List_1_t1_1872 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m1_17552_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m1_17553_gshared (List_1_t1_1872 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m1_17553(__this, method) (( bool (*) (List_1_t1_1872 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m1_17553_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Char>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m1_17554_gshared (List_1_t1_1872 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m1_17554(__this, ___index, method) (( Object_t * (*) (List_1_t1_1872 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1_17554_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Char>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m1_17555_gshared (List_1_t1_1872 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m1_17555(__this, ___index, ___value, method) (( void (*) (List_1_t1_1872 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1_17555_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Add(T)
extern "C" void List_1_Add_m1_17556_gshared (List_1_t1_1872 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Add_m1_17556(__this, ___item, method) (( void (*) (List_1_t1_1872 *, uint16_t, const MethodInfo*))List_1_Add_m1_17556_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Char>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m1_17557_gshared (List_1_t1_1872 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m1_17557(__this, ___newCount, method) (( void (*) (List_1_t1_1872 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m1_17557_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Char>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m1_17558_gshared (List_1_t1_1872 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m1_17558(__this, ___collection, method) (( void (*) (List_1_t1_1872 *, Object_t*, const MethodInfo*))List_1_AddCollection_m1_17558_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Char>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m1_17559_gshared (List_1_t1_1872 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m1_17559(__this, ___enumerable, method) (( void (*) (List_1_t1_1872 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m1_17559_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Char>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m1_17560_gshared (List_1_t1_1872 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m1_17560(__this, ___collection, method) (( void (*) (List_1_t1_1872 *, Object_t*, const MethodInfo*))List_1_AddRange_m1_17560_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Char>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1_1874 * List_1_AsReadOnly_m1_17561_gshared (List_1_t1_1872 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m1_17561(__this, method) (( ReadOnlyCollection_1_t1_1874 * (*) (List_1_t1_1872 *, const MethodInfo*))List_1_AsReadOnly_m1_17561_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Clear()
extern "C" void List_1_Clear_m1_17562_gshared (List_1_t1_1872 * __this, const MethodInfo* method);
#define List_1_Clear_m1_17562(__this, method) (( void (*) (List_1_t1_1872 *, const MethodInfo*))List_1_Clear_m1_17562_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::Contains(T)
extern "C" bool List_1_Contains_m1_17563_gshared (List_1_t1_1872 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Contains_m1_17563(__this, ___item, method) (( bool (*) (List_1_t1_1872 *, uint16_t, const MethodInfo*))List_1_Contains_m1_17563_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Char>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m1_17564_gshared (List_1_t1_1872 * __this, CharU5BU5D_t1_16* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m1_17564(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1_1872 *, CharU5BU5D_t1_16*, int32_t, const MethodInfo*))List_1_CopyTo_m1_17564_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Char>::Find(System.Predicate`1<T>)
extern "C" uint16_t List_1_Find_m1_17565_gshared (List_1_t1_1872 * __this, Predicate_1_t1_1876 * ___match, const MethodInfo* method);
#define List_1_Find_m1_17565(__this, ___match, method) (( uint16_t (*) (List_1_t1_1872 *, Predicate_1_t1_1876 *, const MethodInfo*))List_1_Find_m1_17565_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Char>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m1_17566_gshared (Object_t * __this /* static, unused */, Predicate_1_t1_1876 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m1_17566(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1_1876 *, const MethodInfo*))List_1_CheckMatch_m1_17566_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m1_17567_gshared (List_1_t1_1872 * __this, Predicate_1_t1_1876 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m1_17567(__this, ___match, method) (( int32_t (*) (List_1_t1_1872 *, Predicate_1_t1_1876 *, const MethodInfo*))List_1_FindIndex_m1_17567_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m1_17568_gshared (List_1_t1_1872 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1_1876 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m1_17568(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1_1872 *, int32_t, int32_t, Predicate_1_t1_1876 *, const MethodInfo*))List_1_GetIndex_m1_17568_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Char>::GetEnumerator()
extern "C" Enumerator_t1_1873  List_1_GetEnumerator_m1_17569_gshared (List_1_t1_1872 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m1_17569(__this, method) (( Enumerator_t1_1873  (*) (List_1_t1_1872 *, const MethodInfo*))List_1_GetEnumerator_m1_17569_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m1_17570_gshared (List_1_t1_1872 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m1_17570(__this, ___item, method) (( int32_t (*) (List_1_t1_1872 *, uint16_t, const MethodInfo*))List_1_IndexOf_m1_17570_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m1_17571_gshared (List_1_t1_1872 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m1_17571(__this, ___start, ___delta, method) (( void (*) (List_1_t1_1872 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m1_17571_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Char>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m1_17572_gshared (List_1_t1_1872 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m1_17572(__this, ___index, method) (( void (*) (List_1_t1_1872 *, int32_t, const MethodInfo*))List_1_CheckIndex_m1_17572_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m1_17573_gshared (List_1_t1_1872 * __this, int32_t ___index, uint16_t ___item, const MethodInfo* method);
#define List_1_Insert_m1_17573(__this, ___index, ___item, method) (( void (*) (List_1_t1_1872 *, int32_t, uint16_t, const MethodInfo*))List_1_Insert_m1_17573_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Char>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m1_17574_gshared (List_1_t1_1872 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m1_17574(__this, ___collection, method) (( void (*) (List_1_t1_1872 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m1_17574_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Char>::Remove(T)
extern "C" bool List_1_Remove_m1_17575_gshared (List_1_t1_1872 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Remove_m1_17575(__this, ___item, method) (( bool (*) (List_1_t1_1872 *, uint16_t, const MethodInfo*))List_1_Remove_m1_17575_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m1_17576_gshared (List_1_t1_1872 * __this, Predicate_1_t1_1876 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m1_17576(__this, ___match, method) (( int32_t (*) (List_1_t1_1872 *, Predicate_1_t1_1876 *, const MethodInfo*))List_1_RemoveAll_m1_17576_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Char>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m1_17577_gshared (List_1_t1_1872 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m1_17577(__this, ___index, method) (( void (*) (List_1_t1_1872 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1_17577_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Reverse()
extern "C" void List_1_Reverse_m1_17578_gshared (List_1_t1_1872 * __this, const MethodInfo* method);
#define List_1_Reverse_m1_17578(__this, method) (( void (*) (List_1_t1_1872 *, const MethodInfo*))List_1_Reverse_m1_17578_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Sort()
extern "C" void List_1_Sort_m1_17579_gshared (List_1_t1_1872 * __this, const MethodInfo* method);
#define List_1_Sort_m1_17579(__this, method) (( void (*) (List_1_t1_1872 *, const MethodInfo*))List_1_Sort_m1_17579_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m1_17580_gshared (List_1_t1_1872 * __this, Comparison_1_t1_1880 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m1_17580(__this, ___comparison, method) (( void (*) (List_1_t1_1872 *, Comparison_1_t1_1880 *, const MethodInfo*))List_1_Sort_m1_17580_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Char>::ToArray()
extern "C" CharU5BU5D_t1_16* List_1_ToArray_m1_17581_gshared (List_1_t1_1872 * __this, const MethodInfo* method);
#define List_1_ToArray_m1_17581(__this, method) (( CharU5BU5D_t1_16* (*) (List_1_t1_1872 *, const MethodInfo*))List_1_ToArray_m1_17581_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::TrimExcess()
extern "C" void List_1_TrimExcess_m1_17582_gshared (List_1_t1_1872 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m1_17582(__this, method) (( void (*) (List_1_t1_1872 *, const MethodInfo*))List_1_TrimExcess_m1_17582_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m1_17583_gshared (List_1_t1_1872 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m1_17583(__this, method) (( int32_t (*) (List_1_t1_1872 *, const MethodInfo*))List_1_get_Capacity_m1_17583_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m1_17584_gshared (List_1_t1_1872 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m1_17584(__this, ___value, method) (( void (*) (List_1_t1_1872 *, int32_t, const MethodInfo*))List_1_set_Capacity_m1_17584_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Char>::get_Count()
extern "C" int32_t List_1_get_Count_m1_17585_gshared (List_1_t1_1872 * __this, const MethodInfo* method);
#define List_1_get_Count_m1_17585(__this, method) (( int32_t (*) (List_1_t1_1872 *, const MethodInfo*))List_1_get_Count_m1_17585_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Char>::get_Item(System.Int32)
extern "C" uint16_t List_1_get_Item_m1_17586_gshared (List_1_t1_1872 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m1_17586(__this, ___index, method) (( uint16_t (*) (List_1_t1_1872 *, int32_t, const MethodInfo*))List_1_get_Item_m1_17586_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Char>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m1_17587_gshared (List_1_t1_1872 * __this, int32_t ___index, uint16_t ___value, const MethodInfo* method);
#define List_1_set_Item_m1_17587(__this, ___index, ___value, method) (( void (*) (List_1_t1_1872 *, int32_t, uint16_t, const MethodInfo*))List_1_set_Item_m1_17587_gshared)(__this, ___index, ___value, method)
