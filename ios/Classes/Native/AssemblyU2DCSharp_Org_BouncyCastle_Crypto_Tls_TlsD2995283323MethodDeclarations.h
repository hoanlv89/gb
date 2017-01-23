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

// Org.BouncyCastle.Crypto.Tls.TlsDssSigner
struct TlsDssSigner_t2995283323;
// Org.BouncyCastle.Crypto.AsymmetricKeyParameter
struct AsymmetricKeyParameter_t1663727050;
// Org.BouncyCastle.Crypto.IDsa
struct IDsa_t2214093627;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Asymmetr1663727050.h"

// System.Void Org.BouncyCastle.Crypto.Tls.TlsDssSigner::.ctor()
extern "C"  void TlsDssSigner__ctor_m837984564 (TlsDssSigner_t2995283323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsDssSigner::IsValidPublicKey(Org.BouncyCastle.Crypto.AsymmetricKeyParameter)
extern "C"  bool TlsDssSigner_IsValidPublicKey_m522168807 (TlsDssSigner_t2995283323 * __this, AsymmetricKeyParameter_t1663727050 * ___publicKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IDsa Org.BouncyCastle.Crypto.Tls.TlsDssSigner::CreateDsaImpl(System.Byte)
extern "C"  Il2CppObject * TlsDssSigner_CreateDsaImpl_m1266282340 (TlsDssSigner_t2995283323 * __this, uint8_t ___hashAlgorithm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Tls.TlsDssSigner::get_SignatureAlgorithm()
extern "C"  uint8_t TlsDssSigner_get_SignatureAlgorithm_m3883247844 (TlsDssSigner_t2995283323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
