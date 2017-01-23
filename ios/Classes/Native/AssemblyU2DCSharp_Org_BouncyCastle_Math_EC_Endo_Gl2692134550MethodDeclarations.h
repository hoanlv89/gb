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

// Org.BouncyCastle.Math.EC.Endo.GlvTypeBEndomorphism
struct GlvTypeBEndomorphism_t2692134550;
// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t140895757;
// Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters
struct GlvTypeBParameters_t500309695;
// Org.BouncyCastle.Math.BigInteger[]
struct BigIntegerU5BU5D_t431507903;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Math.EC.ECPointMap
struct ECPointMap_t4206089746;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECCurve140895757.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Endo_Glv500309695.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Math.EC.Endo.GlvTypeBEndomorphism::.ctor(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters)
extern "C"  void GlvTypeBEndomorphism__ctor_m1724478303 (GlvTypeBEndomorphism_t2692134550 * __this, ECCurve_t140895757 * ___curve0, GlvTypeBParameters_t500309695 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger[] Org.BouncyCastle.Math.EC.Endo.GlvTypeBEndomorphism::DecomposeScalar(Org.BouncyCastle.Math.BigInteger)
extern "C"  BigIntegerU5BU5D_t431507903* GlvTypeBEndomorphism_DecomposeScalar_m1822628855 (GlvTypeBEndomorphism_t2692134550 * __this, BigInteger_t4268922522 * ___k0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPointMap Org.BouncyCastle.Math.EC.Endo.GlvTypeBEndomorphism::get_PointMap()
extern "C"  Il2CppObject * GlvTypeBEndomorphism_get_PointMap_m3663495573 (GlvTypeBEndomorphism_t2692134550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Endo.GlvTypeBEndomorphism::get_HasEfficientPointMap()
extern "C"  bool GlvTypeBEndomorphism_get_HasEfficientPointMap_m3411465687 (GlvTypeBEndomorphism_t2692134550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Endo.GlvTypeBEndomorphism::CalculateB(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,System.Int32)
extern "C"  BigInteger_t4268922522 * GlvTypeBEndomorphism_CalculateB_m440508175 (GlvTypeBEndomorphism_t2692134550 * __this, BigInteger_t4268922522 * ___k0, BigInteger_t4268922522 * ___g1, int32_t ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
