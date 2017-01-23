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

// Org.BouncyCastle.Crypto.Tls.AbstractTlsSigner
struct AbstractTlsSigner_t463031607;
// Org.BouncyCastle.Crypto.Tls.TlsContext
struct TlsContext_t4077776538;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Crypto.AsymmetricKeyParameter
struct AsymmetricKeyParameter_t1663727050;
// Org.BouncyCastle.Crypto.ISigner
struct ISigner_t3640387509;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Asymmetr1663727050.h"

// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsSigner::.ctor()
extern "C"  void AbstractTlsSigner__ctor_m3416740826 (AbstractTlsSigner_t463031607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsSigner::Init(Org.BouncyCastle.Crypto.Tls.TlsContext)
extern "C"  void AbstractTlsSigner_Init_m1113410936 (AbstractTlsSigner_t463031607 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.AbstractTlsSigner::GenerateRawSignature(Org.BouncyCastle.Crypto.AsymmetricKeyParameter,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* AbstractTlsSigner_GenerateRawSignature_m1681885517 (AbstractTlsSigner_t463031607 * __this, AsymmetricKeyParameter_t1663727050 * ___privateKey0, ByteU5BU5D_t3397334013* ___md5AndSha11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.AbstractTlsSigner::VerifyRawSignature(System.Byte[],Org.BouncyCastle.Crypto.AsymmetricKeyParameter,System.Byte[])
extern "C"  bool AbstractTlsSigner_VerifyRawSignature_m4232815496 (AbstractTlsSigner_t463031607 * __this, ByteU5BU5D_t3397334013* ___sigBytes0, AsymmetricKeyParameter_t1663727050 * ___publicKey1, ByteU5BU5D_t3397334013* ___md5AndSha12, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.ISigner Org.BouncyCastle.Crypto.Tls.AbstractTlsSigner::CreateSigner(Org.BouncyCastle.Crypto.AsymmetricKeyParameter)
extern "C"  Il2CppObject * AbstractTlsSigner_CreateSigner_m2696114812 (AbstractTlsSigner_t463031607 * __this, AsymmetricKeyParameter_t1663727050 * ___privateKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.ISigner Org.BouncyCastle.Crypto.Tls.AbstractTlsSigner::CreateVerifyer(Org.BouncyCastle.Crypto.AsymmetricKeyParameter)
extern "C"  Il2CppObject * AbstractTlsSigner_CreateVerifyer_m970393700 (AbstractTlsSigner_t463031607 * __this, AsymmetricKeyParameter_t1663727050 * ___publicKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
