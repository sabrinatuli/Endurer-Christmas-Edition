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

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1_138;
// Mono.Security.ASN1
struct ASN1_t1_123;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1_137;
// System.Byte[]
struct ByteU5BU5D_t1_73;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m1_1463 (EncryptedData_t1_138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m1_1464 (EncryptedData_t1_138 * __this, ASN1_t1_123 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t1_137 * EncryptedData_get_EncryptionAlgorithm_m1_1465 (EncryptedData_t1_138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t1_73* EncryptedData_get_EncryptedContent_m1_1466 (EncryptedData_t1_138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
