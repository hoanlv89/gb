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

// Org.BouncyCastle.Crypto.Tls.TlsProtocol/HandshakeMessage
struct HandshakeMessage_t3117171608;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Crypto.Tls.TlsProtocol
struct TlsProtocol_t2348540693;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_TlsP2348540693.h"

// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol/HandshakeMessage::.ctor(System.Byte)
extern "C"  void HandshakeMessage__ctor_m2922328690 (HandshakeMessage_t3117171608 * __this, uint8_t ___handshakeType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol/HandshakeMessage::.ctor(System.Byte,System.Int32)
extern "C"  void HandshakeMessage__ctor_m561842343 (HandshakeMessage_t3117171608 * __this, uint8_t ___handshakeType0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol/HandshakeMessage::Write(System.Byte[])
extern "C"  void HandshakeMessage_Write_m2797460569 (HandshakeMessage_t3117171608 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol/HandshakeMessage::WriteToRecordStream(Org.BouncyCastle.Crypto.Tls.TlsProtocol)
extern "C"  void HandshakeMessage_WriteToRecordStream_m1384636959 (HandshakeMessage_t3117171608 * __this, TlsProtocol_t2348540693 * ___protocol0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
