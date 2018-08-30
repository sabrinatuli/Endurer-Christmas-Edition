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

// MadLevelManager.MadNode
struct MadNode_t11_47;
// MadLevelManager.MadRootNode
struct MadRootNode_t11_36;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t7_113;

#include "codegen/il2cpp-codegen.h"

// System.Void MadLevelManager.MadNode::.ctor()
extern "C" void MadNode__ctor_m11_1145 (MadNode_t11_47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadNode::get_Instantiating()
extern "C" bool MadNode_get_Instantiating_m11_1146 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadNode::set_Instantiating(System.Boolean)
extern "C" void MadNode_set_Instantiating_m11_1147 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadRootNode MadLevelManager.MadNode::get_Root()
extern "C" MadRootNode_t11_36 * MadNode_get_Root_m11_1148 (MadNode_t11_47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadNode MadLevelManager.MadNode::CreateChild(System.String,UnityEngine.GameObject)
extern "C" MadNode_t11_47 * MadNode_CreateChild_m11_1149 (MadNode_t11_47 * __this, String_t* ___name, GameObject_t7_113 * ___template, const MethodInfo* method) IL2CPP_METHOD_ATTR;
