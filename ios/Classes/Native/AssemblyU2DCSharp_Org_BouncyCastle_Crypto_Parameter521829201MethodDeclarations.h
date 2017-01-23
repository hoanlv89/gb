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

// Org.BouncyCastle.Crypto.Parameters.Gost3410PublicKeyParameters
struct Gost3410PublicKeyParameters_t521829201;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters
struct Gost3410Parameters_t602285121;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Parameter602285121.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.Gost3410PublicKeyParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters)
extern "C"  void Gost3410PublicKeyParameters__ctor_m2324379931 (Gost3410PublicKeyParameters_t521829201 * __this, BigInteger_t4268922522 * ___y0, Gost3410Parameters_t602285121 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.Gost3410PublicKeyParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  void Gost3410PublicKeyParameters__ctor_m3285565715 (Gost3410PublicKeyParameters_t521829201 * __this, BigInteger_t4268922522 * ___y0, DerObjectIdentifier_t3495876513 * ___publicKeyParamSet1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.Gost3410PublicKeyParameters::get_Y()
extern "C"  BigInteger_t4268922522 * Gost3410PublicKeyParameters_get_Y_m1103696768 (Gost3410PublicKeyParameters_t521829201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
