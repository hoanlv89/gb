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

// Org.BouncyCastle.Crypto.Parameters.RsaBlindingParameters
struct RsaBlindingParameters_t2682613251;
// Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters
struct RsaKeyParameters_t3425534311;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete3425534311.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.RsaBlindingParameters::.ctor(Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters,Org.BouncyCastle.Math.BigInteger)
extern "C"  void RsaBlindingParameters__ctor_m2922366879 (RsaBlindingParameters_t2682613251 * __this, RsaKeyParameters_t3425534311 * ___publicKey0, BigInteger_t4268922522 * ___blindingFactor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters Org.BouncyCastle.Crypto.Parameters.RsaBlindingParameters::get_PublicKey()
extern "C"  RsaKeyParameters_t3425534311 * RsaBlindingParameters_get_PublicKey_m1793997529 (RsaBlindingParameters_t2682613251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaBlindingParameters::get_BlindingFactor()
extern "C"  BigInteger_t4268922522 * RsaBlindingParameters_get_BlindingFactor_m671150747 (RsaBlindingParameters_t2682613251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
