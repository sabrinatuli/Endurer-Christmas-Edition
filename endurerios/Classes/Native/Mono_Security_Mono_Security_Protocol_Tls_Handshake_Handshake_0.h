﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.Protocol.Tls.Context
struct Context_t2_60;
// System.Byte[]
struct ByteU5BU5D_t1_73;

#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStream.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentType.h"

// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct  HandshakeMessage_t2_82  : public TlsStream_t2_73
{
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::context
	Context_t2_60 * ___context_5;
	// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::handshakeType
	uint8_t ___handshakeType_6;
	// Mono.Security.Protocol.Tls.ContentType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::contentType
	uint8_t ___contentType_7;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::cache
	ByteU5BU5D_t1_73* ___cache_8;
};
