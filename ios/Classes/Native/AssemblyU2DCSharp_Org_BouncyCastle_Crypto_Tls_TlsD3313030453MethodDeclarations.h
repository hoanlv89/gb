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

// Org.BouncyCastle.Crypto.Tls.TlsDsaSigner
struct TlsDsaSigner_t3313030453;
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

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Sign3350051566.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Asymmetr1663727050.h"

// System.Void Org.BouncyCastle.Crypto.Tls.TlsDsaSigner::.ctor()
extern "C"  void TlsDsaSigner__ctor_m3000746222 (TlsDsaSigner_t3313030453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsDsaSigner::GenerateRawSignature(Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm,Org.BouncyCastle.Crypto.AsymmetricKeyParameter,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* TlsDsaSigner_GenerateRawSignature_m909734251 (TlsDsaSigner_t3313030453 * __this, SignatureAndHashAlgorithm_t3350051566 * ___algorithm0, AsymmetricKeyParameter_t1663727050 * ___privateKey1, ByteU5BU5D_t3397334013* ___hash2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsDsaSigner::VerifyRawSignature(Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm,System.Byte[],Org.BouncyCastle.Crypto.AsymmetricKeyParameter,System.Byte[])
extern "C"  bool TlsDsaSigner_VerifyRawSignature_m1349094682 (TlsDsaSigner_t3313030453 * __this, SignatureAndHashAlgorithm_t3350051566 * ___algorithm0, ByteU5BU5D_t3397334013* ___sigBytes1, AsymmetricKeyParameter_t1663727050 * ___publicKey2, ByteU5BU5D_t3397334013* ___hash3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.ISigner Org.BouncyCastle.Crypto.Tls.TlsDsaSigner::CreateSigner(Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm,Org.BouncyCastle.Crypto.AsymmetricKeyParameter)
extern "C"  Il2CppObject * TlsDsaSigner_CreateSigner_m3018032312 (TlsDsaSigner_t3313030453 * __this, SignatureAndHashAlgorithm_t3350051566 * ___algorithm0, AsymmetricKeyParameter_t1663727050 * ___privateKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.ISigner Org.BouncyCastle.Crypto.Tls.TlsDsaSigner::CreateVerifyer(Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm,Org.BouncyCastle.Crypto.AsymmetricKeyParameter)
extern "C"  Il2CppObject * TlsDsaSigner_CreateVerifyer_m3200220212 (TlsDsaSigner_t3313030453 * __this, SignatureAndHashAlgorithm_t3350051566 * ___algorithm0, AsymmetricKeyParameter_t1663727050 * ___publicKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Tls.TlsDsaSigner::MakeInitParameters(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  Il2CppObject * TlsDsaSigner_MakeInitParameters_m3090575964 (TlsDsaSigner_t3313030453 * __this, bool ___forSigning0, Il2CppObject * ___cp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.ISigner Org.BouncyCastle.Crypto.Tls.TlsDsaSigner::MakeSigner(Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm,System.Boolean,System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  Il2CppObject * TlsDsaSigner_MakeSigner_m1904194870 (TlsDsaSigner_t3313030453 * __this, SignatureAndHashAlgorithm_t3350051566 * ___algorithm0, bool ___raw1, bool ___forSigning2, Il2CppObject * ___cp3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
