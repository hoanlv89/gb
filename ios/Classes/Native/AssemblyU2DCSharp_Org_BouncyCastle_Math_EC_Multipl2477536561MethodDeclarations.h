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

// Org.BouncyCastle.Math.EC.Multiplier.AbstractECMultiplier
struct AbstractECMultiplier_t2477536561;
// Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_t626351532;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECPoint626351532.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Math.EC.Multiplier.AbstractECMultiplier::.ctor()
extern "C"  void AbstractECMultiplier__ctor_m1036136307 (AbstractECMultiplier_t2477536561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Multiplier.AbstractECMultiplier::Multiply(Org.BouncyCastle.Math.EC.ECPoint,Org.BouncyCastle.Math.BigInteger)
extern "C"  ECPoint_t626351532 * AbstractECMultiplier_Multiply_m3678936862 (AbstractECMultiplier_t2477536561 * __this, ECPoint_t626351532 * ___p0, BigInteger_t4268922522 * ___k1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
