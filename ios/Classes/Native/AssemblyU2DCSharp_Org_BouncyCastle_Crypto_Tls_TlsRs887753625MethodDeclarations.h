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

// Org.BouncyCastle.Crypto.Tls.TlsRsaUtilities
struct TlsRsaUtilities_t887753625;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Crypto.Tls.TlsContext
struct TlsContext_t4077776538;
// Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters
struct RsaKeyParameters_t3425534311;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete3425534311.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Org.BouncyCastle.Crypto.Tls.TlsRsaUtilities::.ctor()
extern "C"  void TlsRsaUtilities__ctor_m3721624632 (TlsRsaUtilities_t887753625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsRsaUtilities::GenerateEncryptedPreMasterSecret(Org.BouncyCastle.Crypto.Tls.TlsContext,Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters,System.IO.Stream)
extern "C"  ByteU5BU5D_t3397334013* TlsRsaUtilities_GenerateEncryptedPreMasterSecret_m4250464219 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___context0, RsaKeyParameters_t3425534311 * ___rsaServerPublicKey1, Stream_t3255436806 * ___output2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsRsaUtilities::SafeDecryptPreMasterSecret(Org.BouncyCastle.Crypto.Tls.TlsContext,Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* TlsRsaUtilities_SafeDecryptPreMasterSecret_m1890762146 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___context0, RsaKeyParameters_t3425534311 * ___rsaServerPrivateKey1, ByteU5BU5D_t3397334013* ___encryptedPreMasterSecret2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
