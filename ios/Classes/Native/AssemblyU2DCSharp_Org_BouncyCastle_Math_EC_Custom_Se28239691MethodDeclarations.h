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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecT409R1Point
struct SecT409R1Point_t28239691;
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

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT409R1Point::.ctor(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  void SecT409R1Point__ctor_m2757014195 (SecT409R1Point_t28239691 * __this, ECCurve_t140895757 * ___curve0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT409R1Point::.ctor(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,System.Boolean)
extern "C"  void SecT409R1Point__ctor_m1098336112 (SecT409R1Point_t28239691 * __this, ECCurve_t140895757 * ___curve0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, bool ___withCompression3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT409R1Point::.ctor(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement[],System.Boolean)
extern "C"  void SecT409R1Point__ctor_m1748363896 (SecT409R1Point_t28239691 * __this, ECCurve_t140895757 * ___curve0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, ECFieldElementU5BU5D_t1670892899* ___zs3, bool ___withCompression4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Sec.SecT409R1Point::Detach()
extern "C"  ECPoint_t626351532 * SecT409R1Point_Detach_m338412732 (SecT409R1Point_t28239691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT409R1Point::get_YCoord()
extern "C"  ECFieldElement_t1092946118 * SecT409R1Point_get_YCoord_m3793897350 (SecT409R1Point_t28239691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT409R1Point::get_CompressionYTilde()
extern "C"  bool SecT409R1Point_get_CompressionYTilde_m3241736368 (SecT409R1Point_t28239691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Sec.SecT409R1Point::Add(Org.BouncyCastle.Math.EC.ECPoint)
extern "C"  ECPoint_t626351532 * SecT409R1Point_Add_m2024762794 (SecT409R1Point_t28239691 * __this, ECPoint_t626351532 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Sec.SecT409R1Point::Twice()
extern "C"  ECPoint_t626351532 * SecT409R1Point_Twice_m1508787383 (SecT409R1Point_t28239691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Sec.SecT409R1Point::TwicePlus(Org.BouncyCastle.Math.EC.ECPoint)
extern "C"  ECPoint_t626351532 * SecT409R1Point_TwicePlus_m3398431967 (SecT409R1Point_t28239691 * __this, ECPoint_t626351532 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Sec.SecT409R1Point::Negate()
extern "C"  ECPoint_t626351532 * SecT409R1Point_Negate_m919922167 (SecT409R1Point_t28239691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
