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

// Org.BouncyCastle.Crypto.Parameters.MqvPrivateParameters
struct MqvPrivateParameters_t2816354209;
// Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters
struct ECPrivateKeyParameters_t3632960452;
// Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters
struct ECPublicKeyParameters_t572706344;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete3632960452.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Parameter572706344.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.MqvPrivateParameters::.ctor(Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters,Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters)
extern "C"  void MqvPrivateParameters__ctor_m3311132869 (MqvPrivateParameters_t2816354209 * __this, ECPrivateKeyParameters_t3632960452 * ___staticPrivateKey0, ECPrivateKeyParameters_t3632960452 * ___ephemeralPrivateKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.MqvPrivateParameters::.ctor(Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters,Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters,Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters)
extern "C"  void MqvPrivateParameters__ctor_m1597864504 (MqvPrivateParameters_t2816354209 * __this, ECPrivateKeyParameters_t3632960452 * ___staticPrivateKey0, ECPrivateKeyParameters_t3632960452 * ___ephemeralPrivateKey1, ECPublicKeyParameters_t572706344 * ___ephemeralPublicKey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters Org.BouncyCastle.Crypto.Parameters.MqvPrivateParameters::get_StaticPrivateKey()
extern "C"  ECPrivateKeyParameters_t3632960452 * MqvPrivateParameters_get_StaticPrivateKey_m390705836 (MqvPrivateParameters_t2816354209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters Org.BouncyCastle.Crypto.Parameters.MqvPrivateParameters::get_EphemeralPrivateKey()
extern "C"  ECPrivateKeyParameters_t3632960452 * MqvPrivateParameters_get_EphemeralPrivateKey_m34120763 (MqvPrivateParameters_t2816354209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters Org.BouncyCastle.Crypto.Parameters.MqvPrivateParameters::get_EphemeralPublicKey()
extern "C"  ECPublicKeyParameters_t572706344 * MqvPrivateParameters_get_EphemeralPublicKey_m1575624827 (MqvPrivateParameters_t2816354209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
