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

// Mono.Security.X509.X509Certificate
struct X509Certificate_t1_128;
// System.Byte[]
struct ByteU5BU5D_t1_73;
// System.Security.Cryptography.DSA
struct DSA_t1_108;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t1_123;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_179;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
extern "C" void X509Certificate__ctor_m1_1384 (X509Certificate_t1_128 * __this, ByteU5BU5D_t1_73* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::.cctor()
extern "C" void X509Certificate__cctor_m1_1385 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
extern "C" void X509Certificate_Parse_m1_1386 (X509Certificate_t1_128 * __this, ByteU5BU5D_t1_73* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t1_73* X509Certificate_GetUnsignedBigInteger_m1_1387 (X509Certificate_t1_128 * __this, ByteU5BU5D_t1_73* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
extern "C" DSA_t1_108 * X509Certificate_get_DSA_m1_1388 (X509Certificate_t1_128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
extern "C" String_t* X509Certificate_get_IssuerName_m1_1389 (X509Certificate_t1_128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
extern "C" ByteU5BU5D_t1_73* X509Certificate_get_KeyAlgorithmParameters_m1_1390 (X509Certificate_t1_128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
extern "C" ByteU5BU5D_t1_73* X509Certificate_get_PublicKey_m1_1391 (X509Certificate_t1_128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
extern "C" ByteU5BU5D_t1_73* X509Certificate_get_RawData_m1_1392 (X509Certificate_t1_128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
extern "C" String_t* X509Certificate_get_SubjectName_m1_1393 (X509Certificate_t1_128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
extern "C" DateTime_t1_129  X509Certificate_get_ValidFrom_m1_1394 (X509Certificate_t1_128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
extern "C" DateTime_t1_129  X509Certificate_get_ValidUntil_m1_1395 (X509Certificate_t1_128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
extern "C" ASN1_t1_123 * X509Certificate_GetIssuerName_m1_1396 (X509Certificate_t1_128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
extern "C" ASN1_t1_123 * X509Certificate_GetSubjectName_m1_1397 (X509Certificate_t1_128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void X509Certificate_GetObjectData_m1_1398 (X509Certificate_t1_128 * __this, SerializationInfo_t1_179 * ___info, StreamingContext_t1_511  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
extern "C" ByteU5BU5D_t1_73* X509Certificate_PEM_m1_1399 (Object_t * __this /* static, unused */, String_t* ___type, ByteU5BU5D_t1_73* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
