﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Security.Cryptography.DESTransform
struct DESTransform_t1_557;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1_112;
// System.Byte[]
struct ByteU5BU5D_t1_73;
// System.UInt32[]
struct UInt32U5BU5D_t1_99;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.DESTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[],System.Byte[])
extern "C" void DESTransform__ctor_m1_3763 (DESTransform_t1_557 * __this, SymmetricAlgorithm_t1_112 * ___symmAlgo, bool ___encryption, ByteU5BU5D_t1_73* ___key, ByteU5BU5D_t1_73* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::.cctor()
extern "C" void DESTransform__cctor_m1_3764 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.DESTransform::CipherFunct(System.UInt32,System.Int32)
extern "C" uint32_t DESTransform_CipherFunct_m1_3765 (DESTransform_t1_557 * __this, uint32_t ___r, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::Permutation(System.Byte[],System.Byte[],System.UInt32[],System.Boolean)
extern "C" void DESTransform_Permutation_m1_3766 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_73* ___input, ByteU5BU5D_t1_73* ___output, UInt32U5BU5D_t1_99* ___permTab, bool ___preSwap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::BSwap(System.Byte[])
extern "C" void DESTransform_BSwap_m1_3767 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_73* ___byteBuff, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::SetKey(System.Byte[])
extern "C" void DESTransform_SetKey_m1_3768 (DESTransform_t1_557 * __this, ByteU5BU5D_t1_73* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ProcessBlock(System.Byte[],System.Byte[])
extern "C" void DESTransform_ProcessBlock_m1_3769 (DESTransform_t1_557 * __this, ByteU5BU5D_t1_73* ___input, ByteU5BU5D_t1_73* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ECB(System.Byte[],System.Byte[])
extern "C" void DESTransform_ECB_m1_3770 (DESTransform_t1_557 * __this, ByteU5BU5D_t1_73* ___input, ByteU5BU5D_t1_73* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DESTransform::GetStrongKey()
extern "C" ByteU5BU5D_t1_73* DESTransform_GetStrongKey_m1_3771 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
