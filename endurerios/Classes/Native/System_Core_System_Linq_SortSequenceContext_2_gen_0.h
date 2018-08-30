#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`2<System.Object,System.Int32>
struct Func_2_t4_36;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t1_1685;
// System.Int32[]
struct Int32U5BU5D_t1_162;

#include "System_Core_System_Linq_SortContext_1_gen.h"

// System.Linq.SortSequenceContext`2<System.Object,System.Int32>
struct  SortSequenceContext_2_t4_64  : public SortContext_1_t4_52
{
	// System.Func`2<TElement,TKey> System.Linq.SortSequenceContext`2::selector
	Func_2_t4_36 * ___selector_2;
	// System.Collections.Generic.IComparer`1<TKey> System.Linq.SortSequenceContext`2::comparer
	Object_t* ___comparer_3;
	// TKey[] System.Linq.SortSequenceContext`2::keys
	Int32U5BU5D_t1_162* ___keys_4;
};
