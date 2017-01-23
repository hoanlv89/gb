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

// Org.BouncyCastle.Crypto.Tls.LegacyTlsAuthentication
struct LegacyTlsAuthentication_t3599698926;
// System.Uri
struct Uri_t19570940;
// Org.BouncyCastle.Crypto.Tls.ICertificateVerifyer
struct ICertificateVerifyer_t565084154;
// Org.BouncyCastle.Crypto.Tls.IClientCredentialsProvider
struct IClientCredentialsProvider_t3199932449;
// Org.BouncyCastle.Crypto.Tls.Certificate
struct Certificate_t2775016569;
// Org.BouncyCastle.Crypto.Tls.TlsCredentials
struct TlsCredentials_t3503369795;
// Org.BouncyCastle.Crypto.Tls.TlsContext
struct TlsContext_t4077776538;
// Org.BouncyCastle.Crypto.Tls.CertificateRequest
struct CertificateRequest_t4188827490;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Cert2775016569.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Cert4188827490.h"

// System.Void Org.BouncyCastle.Crypto.Tls.LegacyTlsAuthentication::.ctor(System.Uri,Org.BouncyCastle.Crypto.Tls.ICertificateVerifyer,Org.BouncyCastle.Crypto.Tls.IClientCredentialsProvider)
extern "C"  void LegacyTlsAuthentication__ctor_m1763425299 (LegacyTlsAuthentication_t3599698926 * __this, Uri_t19570940 * ___targetUri0, Il2CppObject * ___verifyer1, Il2CppObject * ___prov2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.LegacyTlsAuthentication::NotifyServerCertificate(Org.BouncyCastle.Crypto.Tls.Certificate)
extern "C"  void LegacyTlsAuthentication_NotifyServerCertificate_m2396942811 (LegacyTlsAuthentication_t3599698926 * __this, Certificate_t2775016569 * ___serverCertificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsCredentials Org.BouncyCastle.Crypto.Tls.LegacyTlsAuthentication::GetClientCredentials(Org.BouncyCastle.Crypto.Tls.TlsContext,Org.BouncyCastle.Crypto.Tls.CertificateRequest)
extern "C"  Il2CppObject * LegacyTlsAuthentication_GetClientCredentials_m3487512898 (LegacyTlsAuthentication_t3599698926 * __this, Il2CppObject * ___context0, CertificateRequest_t4188827490 * ___certificateRequest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
