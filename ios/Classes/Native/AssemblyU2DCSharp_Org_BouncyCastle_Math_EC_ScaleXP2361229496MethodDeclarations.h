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

// Org.BouncyCastle.Math.EC.ScaleXPointMap
struct ScaleXPointMap_t2361229496;
// Org.BouncyCastle.Math.EC.ECFieldElement
struct ECFieldElement_t1092946118;
// Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_t626351532;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECField1092946118.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECPoint626351532.h"

// System.Void Org.BouncyCastle.Math.EC.ScaleXPointMap::.ctor(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  void ScaleXPointMap__ctor_m2010004945 (ScaleXPointMap_t2361229496 * __this, ECFieldElement_t1092946118 * ___scale0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ScaleXPointMap::Map(Org.BouncyCastle.Math.EC.ECPoint)
extern "C"  ECPoint_t626351532 * ScaleXPointMap_Map_m3804575260 (ScaleXPointMap_t2361229496 * __this, ECPoint_t626351532 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
