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

// Org.BouncyCastle.Crypto.Tls.TlsRsaKeyExchange
struct TlsRsaKeyExchange_t1676354575;
// System.Collections.IList
struct IList_t3321498491;
// Org.BouncyCastle.Crypto.Tls.TlsCredentials
struct TlsCredentials_t3503369795;
// Org.BouncyCastle.Crypto.Tls.Certificate
struct Certificate_t2775016569;
// Org.BouncyCastle.Crypto.Tls.CertificateRequest
struct CertificateRequest_t4188827490;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters
struct RsaKeyParameters_t3425534311;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Cert2775016569.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Cert4188827490.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete3425534311.h"

// System.Void Org.BouncyCastle.Crypto.Tls.TlsRsaKeyExchange::.ctor(System.Collections.IList)
extern "C"  void TlsRsaKeyExchange__ctor_m1300846749 (TlsRsaKeyExchange_t1676354575 * __this, Il2CppObject * ___supportedSignatureAlgorithms0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsRsaKeyExchange::SkipServerCredentials()
extern "C"  void TlsRsaKeyExchange_SkipServerCredentials_m3866370864 (TlsRsaKeyExchange_t1676354575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsRsaKeyExchange::ProcessServerCredentials(Org.BouncyCastle.Crypto.Tls.TlsCredentials)
extern "C"  void TlsRsaKeyExchange_ProcessServerCredentials_m1593328041 (TlsRsaKeyExchange_t1676354575 * __this, Il2CppObject * ___serverCredentials0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsRsaKeyExchange::ProcessServerCertificate(Org.BouncyCastle.Crypto.Tls.Certificate)
extern "C"  void TlsRsaKeyExchange_ProcessServerCertificate_m803990770 (TlsRsaKeyExchange_t1676354575 * __this, Certificate_t2775016569 * ___serverCertificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsRsaKeyExchange::ValidateCertificateRequest(Org.BouncyCastle.Crypto.Tls.CertificateRequest)
extern "C"  void TlsRsaKeyExchange_ValidateCertificateRequest_m2684903904 (TlsRsaKeyExchange_t1676354575 * __this, CertificateRequest_t4188827490 * ___certificateRequest0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsRsaKeyExchange::ProcessClientCredentials(Org.BouncyCastle.Crypto.Tls.TlsCredentials)
extern "C"  void TlsRsaKeyExchange_ProcessClientCredentials_m1149269197 (TlsRsaKeyExchange_t1676354575 * __this, Il2CppObject * ___clientCredentials0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsRsaKeyExchange::GenerateClientKeyExchange(System.IO.Stream)
extern "C"  void TlsRsaKeyExchange_GenerateClientKeyExchange_m2299344463 (TlsRsaKeyExchange_t1676354575 * __this, Stream_t3255436806 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsRsaKeyExchange::ProcessClientKeyExchange(System.IO.Stream)
extern "C"  void TlsRsaKeyExchange_ProcessClientKeyExchange_m4177738515 (TlsRsaKeyExchange_t1676354575 * __this, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsRsaKeyExchange::GeneratePremasterSecret()
extern "C"  ByteU5BU5D_t3397334013* TlsRsaKeyExchange_GeneratePremasterSecret_m718405096 (TlsRsaKeyExchange_t1676354575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters Org.BouncyCastle.Crypto.Tls.TlsRsaKeyExchange::ValidateRsaPublicKey(Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters)
extern "C"  RsaKeyParameters_t3425534311 * TlsRsaKeyExchange_ValidateRsaPublicKey_m3202236437 (TlsRsaKeyExchange_t1676354575 * __this, RsaKeyParameters_t3425534311 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
