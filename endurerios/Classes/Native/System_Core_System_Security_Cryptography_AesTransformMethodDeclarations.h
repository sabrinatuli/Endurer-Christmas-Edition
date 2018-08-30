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

// System.Security.Cryptography.AesTransform
struct AesTransform_t4_12;
// System.Security.Cryptography.Aes
struct Aes_t4_10;
// System.Byte[]
struct ByteU5BU5D_t1_73;
// System.UInt32[]
struct UInt32U5BU5D_t1_99;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.AesTransform::.ctor(System.Security.Cryptography.Aes,System.Boolean,System.Byte[],System.Byte[])
extern "C" void AesTransform__ctor_m4_45 (AesTransform_t4_12 * __this, Aes_t4_10 * ___algo, bool ___encryption, ByteU5BU5D_t1_73* ___key, ByteU5BU5D_t1_73* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesTransform::.cctor()
extern "C" void AesTransform__cctor_m4_46 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesTransform::ECB(System.Byte[],System.Byte[])
extern "C" void AesTransform_ECB_m4_47 (AesTransform_t4_12 * __this, ByteU5BU5D_t1_73* ___input, ByteU5BU5D_t1_73* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.AesTransform::SubByte(System.UInt32)
extern "C" uint32_t AesTransform_SubByte_m4_48 (AesTransform_t4_12 * __this, uint32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void AesTransform_Encrypt128_m4_49 (AesTransform_t4_12 * __this, ByteU5BU5D_t1_73* ___indata, ByteU5BU5D_t1_73* ___outdata, UInt32U5BU5D_t1_99* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void AesTransform_Decrypt128_m4_50 (AesTransform_t4_12 * __this, ByteU5BU5D_t1_73* ___indata, ByteU5BU5D_t1_73* ___outdata, UInt32U5BU5D_t1_99* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;