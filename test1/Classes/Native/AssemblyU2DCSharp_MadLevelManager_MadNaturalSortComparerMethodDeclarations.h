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

// MadLevelManager.MadNaturalSortComparer
struct MadNaturalSortComparer_t11_221;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void MadLevelManager.MadNaturalSortComparer::.ctor(System.Boolean)
extern "C" void MadNaturalSortComparer__ctor_m11_1634 (MadNaturalSortComparer_t11_221 * __this, bool ___inAscendingOrder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadNaturalSortComparer::System.Collections.Generic.IComparer<string>.Compare(System.String,System.String)
extern "C" int32_t MadNaturalSortComparer_System_Collections_Generic_IComparerU3CstringU3E_Compare_m11_1635 (MadNaturalSortComparer_t11_221 * __this, String_t* ___x, String_t* ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadNaturalSortComparer::Compare(System.String,System.String)
extern "C" int32_t MadNaturalSortComparer_Compare_m11_1636 (MadNaturalSortComparer_t11_221 * __this, String_t* ___x, String_t* ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadNaturalSortComparer::PartCompare(System.String,System.String)
extern "C" int32_t MadNaturalSortComparer_PartCompare_m11_1637 (Object_t * __this /* static, unused */, String_t* ___left, String_t* ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadNaturalSortComparer::Dispose()
extern "C" void MadNaturalSortComparer_Dispose_m11_1638 (MadNaturalSortComparer_t11_221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
