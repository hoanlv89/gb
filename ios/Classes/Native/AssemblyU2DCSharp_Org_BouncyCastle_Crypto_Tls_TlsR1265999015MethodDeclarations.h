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

// Org.BouncyCastle.Crypto.Tls.TlsRsaSigner
struct TlsRsaSigner_t1265999015;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm
struct SignatureAndHashAlgorithm_t3350051566;
// Org.BouncyCastle.Crypto.AsymmetricKeyParameter
struct AsymmetricKeyParameter_t1663727050;
// Org.BouncyCastle.Crypto.ISigner
struct ISigner_t3640387509;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// Org.BouncyCastle.Crypto.IAsymmetricBlockCipher
struct IAsymmetricBlockCipher_t1189117395;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Sign3350051566.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Asymmetr1663727050.h"

// System.Void Org.BouncyCastle.Crypto.Tls.TlsRsaSigner::.ctor()
extern "C"  void TlsRsaSigner__ctor_m3803447008 (TlsRsaSigner_t1265999015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsRsaSigner::GenerateRawSignature(Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm,Org.BouncyCastle.Crypto.AsymmetricKeyParameter,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* TlsRsaSigner_GenerateRawSignature_m1128963001 (TlsRsaSigner_t1265999015 * __this, SignatureAndHashAlgorithm_t3350051566 * ___algorithm0, AsymmetricKeyParameter_t1663727050 * ___privateKey1, ByteU5BU5D_t3397334013* ___hash2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsRsaSigner::VerifyRawSignature(Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm,System.Byte[],Org.BouncyCastle.Crypto.AsymmetricKeyParameter,System.Byte[])
extern "C"  bool TlsRsaSigner_VerifyRawSignature_m1830754508 (TlsRsaSigner_t1265999015 * __this, SignatureAndHashAlgorithm_t3350051566 * ___algorithm0, ByteU5BU5D_t3397334013* ___sigBytes1, AsymmetricKeyParameter_t1663727050 * ___publicKey2, ByteU5BU5D_t3397334013* ___hash3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.ISigner Org.BouncyCastle.Crypto.Tls.TlsRsaSigner::CreateSigner(Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm,Org.BouncyCastle.Crypto.AsymmetricKeyParameter)
extern "C"  Il2CppObject * TlsRsaSigner_CreateSigner_m3762430386 (TlsRsaSigner_t1265999015 * __this, SignatureAndHashAlgorithm_t3350051566 * ___algorithm0, AsymmetricKeyParameter_t1663727050 * ___privateKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.ISigner Org.BouncyCastle.Crypto.Tls.TlsRsaSigner::CreateVerifyer(Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm,Org.BouncyCastle.Crypto.AsymmetricKeyParameter)
extern "C"  Il2CppObject * TlsRsaSigner_CreateVerifyer_m1755391394 (TlsRsaSigner_t1265999015 * __this, SignatureAndHashAlgorithm_t3350051566 * ___algorithm0, AsymmetricKeyParameter_t1663727050 * ___publicKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsRsaSigner::IsValidPublicKey(Org.BouncyCastle.Crypto.AsymmetricKeyParameter)
extern "C"  bool TlsRsaSigner_IsValidPublicKey_m1172987691 (TlsRsaSigner_t1265999015 * __this, AsymmetricKeyParameter_t1663727050 * ___publicKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.ISigner Org.BouncyCastle.Crypto.Tls.TlsRsaSigner::MakeSigner(Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm,System.Boolean,System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  Il2CppObject * TlsRsaSigner_MakeSigner_m2603824004 (TlsRsaSigner_t1265999015 * __this, SignatureAndHashAlgorithm_t3350051566 * ___algorithm0, bool ___raw1, bool ___forSigning2, Il2CppObject * ___cp3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IAsymmetricBlockCipher Org.BouncyCastle.Crypto.Tls.TlsRsaSigner::CreateRsaImpl()
extern "C"  Il2CppObject * TlsRsaSigner_CreateRsaImpl_m2292030125 (TlsRsaSigner_t1265999015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
