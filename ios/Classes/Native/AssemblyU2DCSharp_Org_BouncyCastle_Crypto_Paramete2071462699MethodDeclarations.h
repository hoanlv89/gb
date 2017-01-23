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

// Org.BouncyCastle.Crypto.Parameters.Gost3410PrivateKeyParameters
struct Gost3410PrivateKeyParameters_t2071462699;
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

// System.Void Org.BouncyCastle.Crypto.Parameters.Gost3410PrivateKeyParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters)
extern "C"  void Gost3410PrivateKeyParameters__ctor_m3817315679 (Gost3410PrivateKeyParameters_t2071462699 * __this, BigInteger_t4268922522 * ___x0, Gost3410Parameters_t602285121 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.Gost3410PrivateKeyParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  void Gost3410PrivateKeyParameters__ctor_m2835930639 (Gost3410PrivateKeyParameters_t2071462699 * __this, BigInteger_t4268922522 * ___x0, DerObjectIdentifier_t3495876513 * ___publicKeyParamSet1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.Gost3410PrivateKeyParameters::get_X()
extern "C"  BigInteger_t4268922522 * Gost3410PrivateKeyParameters_get_X_m4233730689 (Gost3410PrivateKeyParameters_t2071462699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
