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

// Org.BouncyCastle.Crypto.Tls.TlsECDsaSigner
struct TlsECDsaSigner_t294737663;
// Org.BouncyCastle.Crypto.AsymmetricKeyParameter
struct AsymmetricKeyParameter_t1663727050;
// Org.BouncyCastle.Crypto.IDsa
struct IDsa_t2214093627;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Asymmetr1663727050.h"

// System.Void Org.BouncyCastle.Crypto.Tls.TlsECDsaSigner::.ctor()
extern "C"  void TlsECDsaSigner__ctor_m544033746 (TlsECDsaSigner_t294737663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsECDsaSigner::IsValidPublicKey(Org.BouncyCastle.Crypto.AsymmetricKeyParameter)
extern "C"  bool TlsECDsaSigner_IsValidPublicKey_m1463520943 (TlsECDsaSigner_t294737663 * __this, AsymmetricKeyParameter_t1663727050 * ___publicKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IDsa Org.BouncyCastle.Crypto.Tls.TlsECDsaSigner::CreateDsaImpl(System.Byte)
extern "C"  Il2CppObject * TlsECDsaSigner_CreateDsaImpl_m315560746 (TlsECDsaSigner_t294737663 * __this, uint8_t ___hashAlgorithm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Tls.TlsECDsaSigner::get_SignatureAlgorithm()
extern "C"  uint8_t TlsECDsaSigner_get_SignatureAlgorithm_m3514264626 (TlsECDsaSigner_t294737663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
