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

// Org.BouncyCastle.Crypto.Tls.TlsDheKeyExchange
struct TlsDheKeyExchange_t3136059924;
// System.Collections.IList
struct IList_t3321498491;
// Org.BouncyCastle.Crypto.Parameters.DHParameters
struct DHParameters_t431035336;
// Org.BouncyCastle.Crypto.Tls.TlsCredentials
struct TlsCredentials_t3503369795;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.Stream
struct Stream_t3255436806;
// Org.BouncyCastle.Crypto.ISigner
struct ISigner_t3640387509;
// Org.BouncyCastle.Crypto.Tls.TlsSigner
struct TlsSigner_t3777082591;
// Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm
struct SignatureAndHashAlgorithm_t3350051566;
// Org.BouncyCastle.Crypto.Tls.SecurityParameters
struct SecurityParameters_t3985528004;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Parameter431035336.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Sign3350051566.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Secu3985528004.h"

// System.Void Org.BouncyCastle.Crypto.Tls.TlsDheKeyExchange::.ctor(System.Int32,System.Collections.IList,Org.BouncyCastle.Crypto.Parameters.DHParameters)
extern "C"  void TlsDheKeyExchange__ctor_m1511024908 (TlsDheKeyExchange_t3136059924 * __this, int32_t ___keyExchange0, Il2CppObject * ___supportedSignatureAlgorithms1, DHParameters_t431035336 * ___dhParameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsDheKeyExchange::ProcessServerCredentials(Org.BouncyCastle.Crypto.Tls.TlsCredentials)
extern "C"  void TlsDheKeyExchange_ProcessServerCredentials_m896526310 (TlsDheKeyExchange_t3136059924 * __this, Il2CppObject * ___serverCredentials0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsDheKeyExchange::GenerateServerKeyExchange()
extern "C"  ByteU5BU5D_t3397334013* TlsDheKeyExchange_GenerateServerKeyExchange_m2365107089 (TlsDheKeyExchange_t3136059924 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsDheKeyExchange::ProcessServerKeyExchange(System.IO.Stream)
extern "C"  void TlsDheKeyExchange_ProcessServerKeyExchange_m3150719896 (TlsDheKeyExchange_t3136059924 * __this, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.ISigner Org.BouncyCastle.Crypto.Tls.TlsDheKeyExchange::InitVerifyer(Org.BouncyCastle.Crypto.Tls.TlsSigner,Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm,Org.BouncyCastle.Crypto.Tls.SecurityParameters)
extern "C"  Il2CppObject * TlsDheKeyExchange_InitVerifyer_m1250696927 (TlsDheKeyExchange_t3136059924 * __this, Il2CppObject * ___tlsSigner0, SignatureAndHashAlgorithm_t3350051566 * ___algorithm1, SecurityParameters_t3985528004 * ___securityParameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
