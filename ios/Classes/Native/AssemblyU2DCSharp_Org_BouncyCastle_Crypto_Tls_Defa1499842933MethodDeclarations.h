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

// Org.BouncyCastle.Crypto.Tls.DefaultTlsClient
struct DefaultTlsClient_t1499842933;
// Org.BouncyCastle.Crypto.Tls.TlsCipherFactory
struct TlsCipherFactory_t3073296058;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// Org.BouncyCastle.Crypto.Tls.TlsKeyExchange
struct TlsKeyExchange_t520409047;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Tls.DefaultTlsClient::.ctor()
extern "C"  void DefaultTlsClient__ctor_m655137074 (DefaultTlsClient_t1499842933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.DefaultTlsClient::.ctor(Org.BouncyCastle.Crypto.Tls.TlsCipherFactory)
extern "C"  void DefaultTlsClient__ctor_m2107100160 (DefaultTlsClient_t1499842933 * __this, Il2CppObject * ___cipherFactory0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Crypto.Tls.DefaultTlsClient::GetCipherSuites()
extern "C"  Int32U5BU5D_t3030399641* DefaultTlsClient_GetCipherSuites_m503657334 (DefaultTlsClient_t1499842933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsKeyExchange Org.BouncyCastle.Crypto.Tls.DefaultTlsClient::GetKeyExchange()
extern "C"  Il2CppObject * DefaultTlsClient_GetKeyExchange_m666664720 (DefaultTlsClient_t1499842933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsKeyExchange Org.BouncyCastle.Crypto.Tls.DefaultTlsClient::CreateDHKeyExchange(System.Int32)
extern "C"  Il2CppObject * DefaultTlsClient_CreateDHKeyExchange_m3741144583 (DefaultTlsClient_t1499842933 * __this, int32_t ___keyExchange0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsKeyExchange Org.BouncyCastle.Crypto.Tls.DefaultTlsClient::CreateDheKeyExchange(System.Int32)
extern "C"  Il2CppObject * DefaultTlsClient_CreateDheKeyExchange_m936844424 (DefaultTlsClient_t1499842933 * __this, int32_t ___keyExchange0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsKeyExchange Org.BouncyCastle.Crypto.Tls.DefaultTlsClient::CreateECDHKeyExchange(System.Int32)
extern "C"  Il2CppObject * DefaultTlsClient_CreateECDHKeyExchange_m1134122497 (DefaultTlsClient_t1499842933 * __this, int32_t ___keyExchange0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsKeyExchange Org.BouncyCastle.Crypto.Tls.DefaultTlsClient::CreateECDheKeyExchange(System.Int32)
extern "C"  Il2CppObject * DefaultTlsClient_CreateECDheKeyExchange_m4271779736 (DefaultTlsClient_t1499842933 * __this, int32_t ___keyExchange0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsKeyExchange Org.BouncyCastle.Crypto.Tls.DefaultTlsClient::CreateRsaKeyExchange()
extern "C"  Il2CppObject * DefaultTlsClient_CreateRsaKeyExchange_m2816492650 (DefaultTlsClient_t1499842933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
