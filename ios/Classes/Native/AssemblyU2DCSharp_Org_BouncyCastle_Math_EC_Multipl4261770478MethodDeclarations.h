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

// Org.BouncyCastle.Math.EC.Multiplier.FixedPointUtilities
struct FixedPointUtilities_t4261770478;
// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t140895757;
// Org.BouncyCastle.Math.EC.Multiplier.FixedPointPreCompInfo
struct FixedPointPreCompInfo_t404341464;
// Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo
struct PreCompInfo_t1123315090;
// Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_t626351532;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECCurve140895757.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECPoint626351532.h"

// System.Void Org.BouncyCastle.Math.EC.Multiplier.FixedPointUtilities::.ctor()
extern "C"  void FixedPointUtilities__ctor_m3126669224 (FixedPointUtilities_t4261770478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Multiplier.FixedPointUtilities::GetCombSize(Org.BouncyCastle.Math.EC.ECCurve)
extern "C"  int32_t FixedPointUtilities_GetCombSize_m1138203101 (Il2CppObject * __this /* static, unused */, ECCurve_t140895757 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Multiplier.FixedPointPreCompInfo Org.BouncyCastle.Math.EC.Multiplier.FixedPointUtilities::GetFixedPointPreCompInfo(Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo)
extern "C"  FixedPointPreCompInfo_t404341464 * FixedPointUtilities_GetFixedPointPreCompInfo_m599263527 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___preCompInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Multiplier.FixedPointPreCompInfo Org.BouncyCastle.Math.EC.Multiplier.FixedPointUtilities::Precompute(Org.BouncyCastle.Math.EC.ECPoint,System.Int32)
extern "C"  FixedPointPreCompInfo_t404341464 * FixedPointUtilities_Precompute_m1888636399 (Il2CppObject * __this /* static, unused */, ECPoint_t626351532 * ___p0, int32_t ___minWidth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Multiplier.FixedPointUtilities::.cctor()
extern "C"  void FixedPointUtilities__cctor_m875070377 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
