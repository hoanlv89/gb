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

// Org.BouncyCastle.Crypto.Tls.TlsECDHKeyExchange
struct TlsECDHKeyExchange_t3594646817;
// System.Collections.IList
struct IList_t3321498491;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
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

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Cert2775016569.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Cert4188827490.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Org.BouncyCastle.Crypto.Tls.TlsECDHKeyExchange::.ctor(System.Int32,System.Collections.IList,System.Int32[],System.Byte[],System.Byte[])
extern "C"  void TlsECDHKeyExchange__ctor_m943157189 (TlsECDHKeyExchange_t3594646817 * __this, int32_t ___keyExchange0, Il2CppObject * ___supportedSignatureAlgorithms1, Int32U5BU5D_t3030399641* ___namedCurves2, ByteU5BU5D_t3397334013* ___clientECPointFormats3, ByteU5BU5D_t3397334013* ___serverECPointFormats4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsECDHKeyExchange::Init(Org.BouncyCastle.Crypto.Tls.TlsContext)
extern "C"  void TlsECDHKeyExchange_Init_m1409855280 (TlsECDHKeyExchange_t3594646817 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsECDHKeyExchange::SkipServerCredentials()
extern "C"  void TlsECDHKeyExchange_SkipServerCredentials_m982637880 (TlsECDHKeyExchange_t3594646817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsECDHKeyExchange::ProcessServerCertificate(Org.BouncyCastle.Crypto.Tls.Certificate)
extern "C"  void TlsECDHKeyExchange_ProcessServerCertificate_m2457159638 (TlsECDHKeyExchange_t3594646817 * __this, Certificate_t2775016569 * ___serverCertificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsECDHKeyExchange::get_RequiresServerKeyExchange()
extern "C"  bool TlsECDHKeyExchange_get_RequiresServerKeyExchange_m3311764112 (TlsECDHKeyExchange_t3594646817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsECDHKeyExchange::ValidateCertificateRequest(Org.BouncyCastle.Crypto.Tls.CertificateRequest)
extern "C"  void TlsECDHKeyExchange_ValidateCertificateRequest_m1486460620 (TlsECDHKeyExchange_t3594646817 * __this, CertificateRequest_t4188827490 * ___certificateRequest0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsECDHKeyExchange::ProcessClientCredentials(Org.BouncyCastle.Crypto.Tls.TlsCredentials)
extern "C"  void TlsECDHKeyExchange_ProcessClientCredentials_m2053357315 (TlsECDHKeyExchange_t3594646817 * __this, Il2CppObject * ___clientCredentials0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsECDHKeyExchange::GenerateClientKeyExchange(System.IO.Stream)
extern "C"  void TlsECDHKeyExchange_GenerateClientKeyExchange_m3770143725 (TlsECDHKeyExchange_t3594646817 * __this, Stream_t3255436806 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsECDHKeyExchange::ProcessClientCertificate(Org.BouncyCastle.Crypto.Tls.Certificate)
extern "C"  void TlsECDHKeyExchange_ProcessClientCertificate_m777819010 (TlsECDHKeyExchange_t3594646817 * __this, Certificate_t2775016569 * ___clientCertificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsECDHKeyExchange::ProcessClientKeyExchange(System.IO.Stream)
extern "C"  void TlsECDHKeyExchange_ProcessClientKeyExchange_m2836815297 (TlsECDHKeyExchange_t3594646817 * __this, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsECDHKeyExchange::GeneratePremasterSecret()
extern "C"  ByteU5BU5D_t3397334013* TlsECDHKeyExchange_GeneratePremasterSecret_m715248792 (TlsECDHKeyExchange_t3594646817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
