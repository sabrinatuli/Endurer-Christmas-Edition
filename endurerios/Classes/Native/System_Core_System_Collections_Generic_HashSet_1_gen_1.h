#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t1_162;
// System.Collections.Generic.HashSet`1/Link<MadLevelManager.MadSprite>[]
struct LinkU5BU5D_t4_68;
// MadLevelManager.MadSprite[]
struct MadSpriteU5BU5D_t11_20;
// System.Collections.Generic.IEqualityComparer`1<MadLevelManager.MadSprite>
struct IEqualityComparer_1_t1_1792;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_179;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.HashSet`1<MadLevelManager.MadSprite>
struct  HashSet_1_t4_30  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1::table
	Int32U5BU5D_t1_162* ___table_4;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1::links
	LinkU5BU5D_t4_68* ___links_5;
	// T[] System.Collections.Generic.HashSet`1::slots
	MadSpriteU5BU5D_t11_20* ___slots_6;
	// System.Int32 System.Collections.Generic.HashSet`1::touched
	int32_t ___touched_7;
	// System.Int32 System.Collections.Generic.HashSet`1::empty_slot
	int32_t ___empty_slot_8;
	// System.Int32 System.Collections.Generic.HashSet`1::count
	int32_t ___count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::threshold
	int32_t ___threshold_10;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::comparer
	Object_t* ___comparer_11;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::si
	SerializationInfo_t1_179 * ___si_12;
	// System.Int32 System.Collections.Generic.HashSet`1::generation
	int32_t ___generation_13;
};
