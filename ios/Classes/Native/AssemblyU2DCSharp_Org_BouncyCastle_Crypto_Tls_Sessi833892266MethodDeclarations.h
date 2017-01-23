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

// Org.BouncyCastle.Crypto.Tls.SessionParameters
struct SessionParameters_t833892266;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Crypto.Tls.Certificate
struct Certificate_t2775016569;
// System.Collections.IDictionary
struct IDictionary_t596158605;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Cert2775016569.h"

// System.Void Org.BouncyCastle.Crypto.Tls.SessionParameters::.ctor(System.Int32,System.Byte,System.Byte[],Org.BouncyCastle.Crypto.Tls.Certificate,System.Byte[],System.Byte[],System.Byte[])
extern "C"  void SessionParameters__ctor_m3595666158 (SessionParameters_t833892266 * __this, int32_t ___cipherSuite0, uint8_t ___compressionAlgorithm1, ByteU5BU5D_t3397334013* ___masterSecret2, Certificate_t2775016569 * ___peerCertificate3, ByteU5BU5D_t3397334013* ___pskIdentity4, ByteU5BU5D_t3397334013* ___srpIdentity5, ByteU5BU5D_t3397334013* ___encodedServerExtensions6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.SessionParameters::Clear()
extern "C"  void SessionParameters_Clear_m1701505112 (SessionParameters_t833892266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.SessionParameters Org.BouncyCastle.Crypto.Tls.SessionParameters::Copy()
extern "C"  SessionParameters_t833892266 * SessionParameters_Copy_m313176149 (SessionParameters_t833892266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.SessionParameters::get_CipherSuite()
extern "C"  int32_t SessionParameters_get_CipherSuite_m2865931253 (SessionParameters_t833892266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Tls.SessionParameters::get_CompressionAlgorithm()
extern "C"  uint8_t SessionParameters_get_CompressionAlgorithm_m3052425383 (SessionParameters_t833892266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.SessionParameters::get_MasterSecret()
extern "C"  ByteU5BU5D_t3397334013* SessionParameters_get_MasterSecret_m474063534 (SessionParameters_t833892266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.Certificate Org.BouncyCastle.Crypto.Tls.SessionParameters::get_PeerCertificate()
extern "C"  Certificate_t2775016569 * SessionParameters_get_PeerCertificate_m469547003 (SessionParameters_t833892266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.SessionParameters::get_PskIdentity()
extern "C"  ByteU5BU5D_t3397334013* SessionParameters_get_PskIdentity_m1677778746 (SessionParameters_t833892266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.SessionParameters::get_SrpIdentity()
extern "C"  ByteU5BU5D_t3397334013* SessionParameters_get_SrpIdentity_m788039795 (SessionParameters_t833892266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary Org.BouncyCastle.Crypto.Tls.SessionParameters::ReadServerExtensions()
extern "C"  Il2CppObject * SessionParameters_ReadServerExtensions_m1502055590 (SessionParameters_t833892266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
