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

// Org.BouncyCastle.Crypto.Tls.LegacyTlsClient
struct LegacyTlsClient_t1589283767;
// System.Uri
struct Uri_t19570940;
// Org.BouncyCastle.Crypto.Tls.ICertificateVerifyer
struct ICertificateVerifyer_t565084154;
// Org.BouncyCastle.Crypto.Tls.IClientCredentialsProvider
struct IClientCredentialsProvider_t3199932449;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// Org.BouncyCastle.Crypto.Tls.TlsAuthentication
struct TlsAuthentication_t69036015;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"

// System.Void Org.BouncyCastle.Crypto.Tls.LegacyTlsClient::.ctor(System.Uri,Org.BouncyCastle.Crypto.Tls.ICertificateVerifyer,Org.BouncyCastle.Crypto.Tls.IClientCredentialsProvider,System.Collections.Generic.List`1<System.String>)
extern "C"  void LegacyTlsClient__ctor_m1241591844 (LegacyTlsClient_t1589283767 * __this, Uri_t19570940 * ___targetUri0, Il2CppObject * ___verifyer1, Il2CppObject * ___prov2, List_1_t1398341365 * ___hostNames3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsAuthentication Org.BouncyCastle.Crypto.Tls.LegacyTlsClient::GetAuthentication()
extern "C"  Il2CppObject * LegacyTlsClient_GetAuthentication_m2233235356 (LegacyTlsClient_t1589283767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
