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

// Org.BouncyCastle.Crypto.Tls.AbstractTlsKeyExchange
struct AbstractTlsKeyExchange_t3351798479;
// System.Collections.IList
struct IList_t3321498491;
// Org.BouncyCastle.Crypto.Tls.TlsContext
struct TlsContext_t4077776538;
// Org.BouncyCastle.Crypto.Tls.Certificate
struct Certificate_t2775016569;
// Org.BouncyCastle.Crypto.Tls.TlsCredentials
struct TlsCredentials_t3503369795;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Cert2775016569.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsKeyExchange::.ctor(System.Int32,System.Collections.IList)
extern "C"  void AbstractTlsKeyExchange__ctor_m1802670088 (AbstractTlsKeyExchange_t3351798479 * __this, int32_t ___keyExchange0, Il2CppObject * ___supportedSignatureAlgorithms1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsKeyExchange::Init(Org.BouncyCastle.Crypto.Tls.TlsContext)
extern "C"  void AbstractTlsKeyExchange_Init_m1580583986 (AbstractTlsKeyExchange_t3351798479 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsKeyExchange::ProcessServerCertificate(Org.BouncyCastle.Crypto.Tls.Certificate)
extern "C"  void AbstractTlsKeyExchange_ProcessServerCertificate_m314106968 (AbstractTlsKeyExchange_t3351798479 * __this, Certificate_t2775016569 * ___serverCertificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsKeyExchange::ProcessServerCredentials(Org.BouncyCastle.Crypto.Tls.TlsCredentials)
extern "C"  void AbstractTlsKeyExchange_ProcessServerCredentials_m2838738861 (AbstractTlsKeyExchange_t3351798479 * __this, Il2CppObject * ___serverCredentials0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.AbstractTlsKeyExchange::get_RequiresServerKeyExchange()
extern "C"  bool AbstractTlsKeyExchange_get_RequiresServerKeyExchange_m1858711542 (AbstractTlsKeyExchange_t3351798479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.AbstractTlsKeyExchange::GenerateServerKeyExchange()
extern "C"  ByteU5BU5D_t3397334013* AbstractTlsKeyExchange_GenerateServerKeyExchange_m471110206 (AbstractTlsKeyExchange_t3351798479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsKeyExchange::SkipServerKeyExchange()
extern "C"  void AbstractTlsKeyExchange_SkipServerKeyExchange_m3173701846 (AbstractTlsKeyExchange_t3351798479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsKeyExchange::ProcessServerKeyExchange(System.IO.Stream)
extern "C"  void AbstractTlsKeyExchange_ProcessServerKeyExchange_m976811223 (AbstractTlsKeyExchange_t3351798479 * __this, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsKeyExchange::SkipClientCredentials()
extern "C"  void AbstractTlsKeyExchange_SkipClientCredentials_m657923790 (AbstractTlsKeyExchange_t3351798479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsKeyExchange::ProcessClientCertificate(Org.BouncyCastle.Crypto.Tls.Certificate)
extern "C"  void AbstractTlsKeyExchange_ProcessClientCertificate_m1497946388 (AbstractTlsKeyExchange_t3351798479 * __this, Certificate_t2775016569 * ___clientCertificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsKeyExchange::ProcessClientKeyExchange(System.IO.Stream)
extern "C"  void AbstractTlsKeyExchange_ProcessClientKeyExchange_m437661075 (AbstractTlsKeyExchange_t3351798479 * __this, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
