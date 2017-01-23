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

// Org.BouncyCastle.Crypto.Parameters.MqvPublicParameters
struct MqvPublicParameters_t4146726485;
// Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters
struct ECPublicKeyParameters_t572706344;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Parameter572706344.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.MqvPublicParameters::.ctor(Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters,Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters)
extern "C"  void MqvPublicParameters__ctor_m2710951417 (MqvPublicParameters_t4146726485 * __this, ECPublicKeyParameters_t572706344 * ___staticPublicKey0, ECPublicKeyParameters_t572706344 * ___ephemeralPublicKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters Org.BouncyCastle.Crypto.Parameters.MqvPublicParameters::get_StaticPublicKey()
extern "C"  ECPublicKeyParameters_t572706344 * MqvPublicParameters_get_StaticPublicKey_m1154975590 (MqvPublicParameters_t4146726485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters Org.BouncyCastle.Crypto.Parameters.MqvPublicParameters::get_EphemeralPublicKey()
extern "C"  ECPublicKeyParameters_t572706344 * MqvPublicParameters_get_EphemeralPublicKey_m2001930499 (MqvPublicParameters_t4146726485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
