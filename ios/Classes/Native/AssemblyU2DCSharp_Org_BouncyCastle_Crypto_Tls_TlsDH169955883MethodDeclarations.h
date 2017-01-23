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

// Org.BouncyCastle.Crypto.Tls.TlsDHKeyExchange
struct TlsDHKeyExchange_t169955883;
// System.Collections.IList
struct IList_t3321498491;
// Org.BouncyCastle.Crypto.Parameters.DHParameters
struct DHParameters_t431035336;
// Org.BouncyCastle.Crypto.Tls.TlsContext
struct TlsContext_t4077776538;
// Org.BouncyCastle.Crypto.Tls.Certificate
struct Certificate_t2775016569;
// Org.BouncyCastle.Crypto.Tls.CertificateRequest
struct CertificateRequest_t4188827490;
// Org.BouncyCastle.Crypto.Tls.TlsCredentials
struct TlsCredentials_t3503369795;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Parameter431035336.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Cert2775016569.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Cert4188827490.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Org.BouncyCastle.Crypto.Tls.TlsDHKeyExchange::.ctor(System.Int32,System.Collections.IList,Org.BouncyCastle.Crypto.Parameters.DHParameters)
extern "C"  void TlsDHKeyExchange__ctor_m3437716321 (TlsDHKeyExchange_t169955883 * __this, int32_t ___keyExchange0, Il2CppObject * ___supportedSignatureAlgorithms1, DHParameters_t431035336 * ___dhParameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsDHKeyExchange::Init(Org.BouncyCastle.Crypto.Tls.TlsContext)
extern "C"  void TlsDHKeyExchange_Init_m3122271276 (TlsDHKeyExchange_t169955883 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsDHKeyExchange::SkipServerCredentials()
extern "C"  void TlsDHKeyExchange_SkipServerCredentials_m1315086828 (TlsDHKeyExchange_t169955883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsDHKeyExchange::ProcessServerCertificate(Org.BouncyCastle.Crypto.Tls.Certificate)
extern "C"  void TlsDHKeyExchange_ProcessServerCertificate_m1682201702 (TlsDHKeyExchange_t169955883 * __this, Certificate_t2775016569 * ___serverCertificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsDHKeyExchange::get_RequiresServerKeyExchange()
extern "C"  bool TlsDHKeyExchange_get_RequiresServerKeyExchange_m2369773968 (TlsDHKeyExchange_t169955883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsDHKeyExchange::ValidateCertificateRequest(Org.BouncyCastle.Crypto.Tls.CertificateRequest)
extern "C"  void TlsDHKeyExchange_ValidateCertificateRequest_m1423757532 (TlsDHKeyExchange_t169955883 * __this, CertificateRequest_t4188827490 * ___certificateRequest0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsDHKeyExchange::ProcessClientCredentials(Org.BouncyCastle.Crypto.Tls.TlsCredentials)
extern "C"  void TlsDHKeyExchange_ProcessClientCredentials_m1294286925 (TlsDHKeyExchange_t169955883 * __this, Il2CppObject * ___clientCredentials0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsDHKeyExchange::GenerateClientKeyExchange(System.IO.Stream)
extern "C"  void TlsDHKeyExchange_GenerateClientKeyExchange_m3193260511 (TlsDHKeyExchange_t169955883 * __this, Stream_t3255436806 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsDHKeyExchange::ProcessClientCertificate(Org.BouncyCastle.Crypto.Tls.Certificate)
extern "C"  void TlsDHKeyExchange_ProcessClientCertificate_m1085779602 (TlsDHKeyExchange_t169955883 * __this, Certificate_t2775016569 * ___clientCertificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsDHKeyExchange::ProcessClientKeyExchange(System.IO.Stream)
extern "C"  void TlsDHKeyExchange_ProcessClientKeyExchange_m2481755187 (TlsDHKeyExchange_t169955883 * __this, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsDHKeyExchange::GeneratePremasterSecret()
extern "C"  ByteU5BU5D_t3397334013* TlsDHKeyExchange_GeneratePremasterSecret_m2224392676 (TlsDHKeyExchange_t169955883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
