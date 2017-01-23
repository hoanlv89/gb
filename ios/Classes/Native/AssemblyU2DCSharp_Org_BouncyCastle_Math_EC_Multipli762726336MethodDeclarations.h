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

// Org.BouncyCastle.Math.EC.Multiplier.FixedPointCombMultiplier
struct FixedPointCombMultiplier_t762726336;
// Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_t626351532;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECPoint626351532.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Math.EC.Multiplier.FixedPointCombMultiplier::.ctor()
extern "C"  void FixedPointCombMultiplier__ctor_m3589211276 (FixedPointCombMultiplier_t762726336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Multiplier.FixedPointCombMultiplier::MultiplyPositive(Org.BouncyCastle.Math.EC.ECPoint,Org.BouncyCastle.Math.BigInteger)
extern "C"  ECPoint_t626351532 * FixedPointCombMultiplier_MultiplyPositive_m3410147466 (FixedPointCombMultiplier_t762726336 * __this, ECPoint_t626351532 * ___p0, BigInteger_t4268922522 * ___k1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Multiplier.FixedPointCombMultiplier::GetWidthForCombSize(System.Int32)
extern "C"  int32_t FixedPointCombMultiplier_GetWidthForCombSize_m2642068144 (FixedPointCombMultiplier_t762726336 * __this, int32_t ___combSize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
