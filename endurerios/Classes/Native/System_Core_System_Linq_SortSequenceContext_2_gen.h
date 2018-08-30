#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`2<System.Object,System.Object>
struct Func_2_t4_39;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t1_1282;
// System.Object[]
struct ObjectU5BU5D_t1_159;

#include "System_Core_System_Linq_SortContext_1_gen.h"

// System.Linq.SortSequenceContext`2<System.Object,System.Object>
struct  SortSequenceContext_2_t4_53  : public SortContext_1_t4_52
{
	// System.Func`2<TElement,TKey> System.Linq.SortSequenceContext`2::selector
	Func_2_t4_39 * ___selector_2;
	// System.Collections.Generic.IComparer`1<TKey> System.Linq.SortSequenceContext`2::comparer
	Object_t* ___comparer_3;
	// TKey[] System.Linq.SortSequenceContext`2::keys
	ObjectU5BU5D_t1_159* ___keys_4;
};
