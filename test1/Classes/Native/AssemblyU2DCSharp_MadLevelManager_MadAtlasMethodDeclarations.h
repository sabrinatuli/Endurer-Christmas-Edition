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

// MadLevelManager.MadAtlas
struct MadAtlas_t11_166;
// MadLevelManager.MadAtlas/Item
struct Item_t11_165;
// System.Collections.Generic.IEnumerable`1<MadLevelManager.MadAtlas/Item>
struct IEnumerable_1_t1_1039;
// System.String
struct String_t;
// System.Collections.Generic.List`1<MadLevelManager.MadAtlas/Item>
struct List_1_t1_1020;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1_827;

#include "codegen/il2cpp-codegen.h"

// System.Void MadLevelManager.MadAtlas::.ctor()
extern "C" void MadAtlas__ctor_m11_976 (MadAtlas_t11_166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadAtlas::AddItem(MadLevelManager.MadAtlas/Item)
extern "C" bool MadAtlas_AddItem_m11_977 (MadAtlas_t11_166 * __this, Item_t11_165 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadAtlas::AddItemRange(System.Collections.Generic.IEnumerable`1<MadLevelManager.MadAtlas/Item>)
extern "C" void MadAtlas_AddItemRange_m11_978 (MadAtlas_t11_166 * __this, Object_t* ___items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadAtlas/Item MadLevelManager.MadAtlas::GetItem(System.String)
extern "C" Item_t11_165 * MadAtlas_GetItem_m11_979 (MadAtlas_t11_166 * __this, String_t* ___guid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadAtlas::ClearItems()
extern "C" void MadAtlas_ClearItems_m11_980 (MadAtlas_t11_166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<MadLevelManager.MadAtlas/Item> MadLevelManager.MadAtlas::ListItems()
extern "C" List_1_t1_1020 * MadAtlas_ListItems_m11_981 (MadAtlas_t11_166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> MadLevelManager.MadAtlas::ListItemNames()
extern "C" List_1_t1_827 * MadAtlas_ListItemNames_m11_982 (MadAtlas_t11_166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> MadLevelManager.MadAtlas::ListItemGUIDs()
extern "C" List_1_t1_827 * MadAtlas_ListItemGUIDs_m11_983 (MadAtlas_t11_166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadAtlas::Refresh()
extern "C" void MadAtlas_Refresh_m11_984 (MadAtlas_t11_166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadAtlas::<ListItemNames>m__8D(MadLevelManager.MadAtlas/Item)
extern "C" String_t* MadAtlas_U3CListItemNamesU3Em__8D_m11_985 (Object_t * __this /* static, unused */, Item_t11_165 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadAtlas::<ListItemGUIDs>m__8E(MadLevelManager.MadAtlas/Item)
extern "C" String_t* MadAtlas_U3CListItemGUIDsU3Em__8E_m11_986 (Object_t * __this /* static, unused */, Item_t11_165 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
