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

// Org.BouncyCastle.Math.EC.F2mPoint
struct F2mPoint_t2324796161;
// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t140895757;
// Org.BouncyCastle.Math.EC.ECFieldElement
struct ECFieldElement_t1092946118;
// Org.BouncyCastle.Math.EC.ECFieldElement[]
struct ECFieldElementU5BU5D_t1670892899;
// Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_t626351532;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECCurve140895757.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECField1092946118.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECPoint626351532.h"

// System.Void Org.BouncyCastle.Math.EC.F2mPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  void F2mPoint__ctor_m3909194003 (F2mPoint_t2324796161 * __this, ECCurve_t140895757 * ___curve0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.F2mPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,System.Boolean)
extern "C"  void F2mPoint__ctor_m691247694 (F2mPoint_t2324796161 * __this, ECCurve_t140895757 * ___curve0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, bool ___withCompression3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.F2mPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement[],System.Boolean)
extern "C"  void F2mPoint__ctor_m1849729150 (F2mPoint_t2324796161 * __this, ECCurve_t140895757 * ___curve0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, ECFieldElementU5BU5D_t1670892899* ___zs3, bool ___withCompression4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.F2mPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve)
extern "C"  void F2mPoint__ctor_m2123359827 (F2mPoint_t2324796161 * __this, ECCurve_t140895757 * ___curve0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.F2mPoint::Detach()
extern "C"  ECPoint_t626351532 * F2mPoint_Detach_m1463094076 (F2mPoint_t2324796161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.F2mPoint::get_YCoord()
extern "C"  ECFieldElement_t1092946118 * F2mPoint_get_YCoord_m2049016958 (F2mPoint_t2324796161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.F2mPoint::get_CompressionYTilde()
extern "C"  bool F2mPoint_get_CompressionYTilde_m1321291478 (F2mPoint_t2324796161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.F2mPoint::Add(Org.BouncyCastle.Math.EC.ECPoint)
extern "C"  ECPoint_t626351532 * F2mPoint_Add_m1807973530 (F2mPoint_t2324796161 * __this, ECPoint_t626351532 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.F2mPoint::Twice()
extern "C"  ECPoint_t626351532 * F2mPoint_Twice_m2992515923 (F2mPoint_t2324796161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.F2mPoint::TwicePlus(Org.BouncyCastle.Math.EC.ECPoint)
extern "C"  ECPoint_t626351532 * F2mPoint_TwicePlus_m609037243 (F2mPoint_t2324796161 * __this, ECPoint_t626351532 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.F2mPoint::Negate()
extern "C"  ECPoint_t626351532 * F2mPoint_Negate_m4010429459 (F2mPoint_t2324796161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
