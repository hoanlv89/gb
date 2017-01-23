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

// Org.BouncyCastle.Crypto.Tls.TlsECDheKeyExchange
struct TlsECDheKeyExchange_t1244283552;
// System.Collections.IList
struct IList_t3321498491;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Crypto.Tls.TlsCredentials
struct TlsCredentials_t3503369795;
// System.IO.Stream
struct Stream_t3255436806;
// Org.BouncyCastle.Crypto.Tls.CertificateRequest
struct CertificateRequest_t4188827490;
// Org.BouncyCastle.Crypto.ISigner
struct ISigner_t3640387509;
// Org.BouncyCastle.Crypto.Tls.TlsSigner
struct TlsSigner_t3777082591;
// Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm
struct SignatureAndHashAlgorithm_t3350051566;
// Org.BouncyCastle.Crypto.Tls.SecurityParameters
struct SecurityParameters_t3985528004;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Cert4188827490.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Sign3350051566.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Secu3985528004.h"

// System.Void Org.BouncyCastle.Crypto.Tls.TlsECDheKeyExchange::.ctor(System.Int32,System.Collections.IList,System.Int32[],System.Byte[],System.Byte[])
extern "C"  void TlsECDheKeyExchange__ctor_m3373852828 (TlsECDheKeyExchange_t1244283552 * __this, int32_t ___keyExchange0, Il2CppObject * ___supportedSignatureAlgorithms1, Int32U5BU5D_t3030399641* ___namedCurves2, ByteU5BU5D_t3397334013* ___clientECPointFormats3, ByteU5BU5D_t3397334013* ___serverECPointFormats4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsECDheKeyExchange::ProcessServerCredentials(Org.BouncyCastle.Crypto.Tls.TlsCredentials)
extern "C"  void TlsECDheKeyExchange_ProcessServerCredentials_m2183713998 (TlsECDheKeyExchange_t1244283552 * __this, Il2CppObject * ___serverCredentials0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsECDheKeyExchange::GenerateServerKeyExchange()
extern "C"  ByteU5BU5D_t3397334013* TlsECDheKeyExchange_GenerateServerKeyExchange_m4285578527 (TlsECDheKeyExchange_t1244283552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsECDheKeyExchange::ProcessServerKeyExchange(System.IO.Stream)
extern "C"  void TlsECDheKeyExchange_ProcessServerKeyExchange_m3031132964 (TlsECDheKeyExchange_t1244283552 * __this, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsECDheKeyExchange::ValidateCertificateRequest(Org.BouncyCastle.Crypto.Tls.CertificateRequest)
extern "C"  void TlsECDheKeyExchange_ValidateCertificateRequest_m4049203641 (TlsECDheKeyExchange_t1244283552 * __this, CertificateRequest_t4188827490 * ___certificateRequest0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsECDheKeyExchange::ProcessClientCredentials(Org.BouncyCastle.Crypto.Tls.TlsCredentials)
extern "C"  void TlsECDheKeyExchange_ProcessClientCredentials_m2867281210 (TlsECDheKeyExchange_t1244283552 * __this, Il2CppObject * ___clientCredentials0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.ISigner Org.BouncyCastle.Crypto.Tls.TlsECDheKeyExchange::InitVerifyer(Org.BouncyCastle.Crypto.Tls.TlsSigner,Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm,Org.BouncyCastle.Crypto.Tls.SecurityParameters)
extern "C"  Il2CppObject * TlsECDheKeyExchange_InitVerifyer_m1869156901 (TlsECDheKeyExchange_t1244283552 * __this, Il2CppObject * ___tlsSigner0, SignatureAndHashAlgorithm_t3350051566 * ___algorithm1, SecurityParameters_t3985528004 * ___securityParameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
