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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2FieldElement
struct SecP160R2FieldElement_t3725019470;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// System.String
struct String_t;
// Org.BouncyCastle.Math.EC.ECFieldElement
struct ECFieldElement_t1092946118;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECField1092946118.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Custom_3725019470.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2FieldElement::.ctor(Org.BouncyCastle.Math.BigInteger)
extern "C"  void SecP160R2FieldElement__ctor_m2519342317 (SecP160R2FieldElement_t3725019470 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2FieldElement::.ctor()
extern "C"  void SecP160R2FieldElement__ctor_m805129919 (SecP160R2FieldElement_t3725019470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2FieldElement::.ctor(System.UInt32[])
extern "C"  void SecP160R2FieldElement__ctor_m167138713 (SecP160R2FieldElement_t3725019470 * __this, UInt32U5BU5D_t59386216* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2FieldElement::get_IsZero()
extern "C"  bool SecP160R2FieldElement_get_IsZero_m2702779148 (SecP160R2FieldElement_t3725019470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2FieldElement::get_IsOne()
extern "C"  bool SecP160R2FieldElement_get_IsOne_m2264026544 (SecP160R2FieldElement_t3725019470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2FieldElement::TestBitZero()
extern "C"  bool SecP160R2FieldElement_TestBitZero_m2546369630 (SecP160R2FieldElement_t3725019470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2FieldElement::ToBigInteger()
extern "C"  BigInteger_t4268922522 * SecP160R2FieldElement_ToBigInteger_m3100494615 (SecP160R2FieldElement_t3725019470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2FieldElement::get_FieldName()
extern "C"  String_t* SecP160R2FieldElement_get_FieldName_m1448862712 (SecP160R2FieldElement_t3725019470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2FieldElement::get_FieldSize()
extern "C"  int32_t SecP160R2FieldElement_get_FieldSize_m276979215 (SecP160R2FieldElement_t3725019470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2FieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP160R2FieldElement_Add_m3991015389 (SecP160R2FieldElement_t3725019470 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2FieldElement::AddOne()
extern "C"  ECFieldElement_t1092946118 * SecP160R2FieldElement_AddOne_m4061212599 (SecP160R2FieldElement_t3725019470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2FieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP160R2FieldElement_Subtract_m2263272572 (SecP160R2FieldElement_t3725019470 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2FieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP160R2FieldElement_Multiply_m4005514324 (SecP160R2FieldElement_t3725019470 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2FieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP160R2FieldElement_Divide_m1444334003 (SecP160R2FieldElement_t3725019470 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2FieldElement::Negate()
extern "C"  ECFieldElement_t1092946118 * SecP160R2FieldElement_Negate_m1833931552 (SecP160R2FieldElement_t3725019470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2FieldElement::Square()
extern "C"  ECFieldElement_t1092946118 * SecP160R2FieldElement_Square_m4129436191 (SecP160R2FieldElement_t3725019470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2FieldElement::Invert()
extern "C"  ECFieldElement_t1092946118 * SecP160R2FieldElement_Invert_m25626930 (SecP160R2FieldElement_t3725019470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2FieldElement::Sqrt()
extern "C"  ECFieldElement_t1092946118 * SecP160R2FieldElement_Sqrt_m3806305040 (SecP160R2FieldElement_t3725019470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2FieldElement::Equals(System.Object)
extern "C"  bool SecP160R2FieldElement_Equals_m1144226518 (SecP160R2FieldElement_t3725019470 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2FieldElement::Equals(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  bool SecP160R2FieldElement_Equals_m3167049212 (SecP160R2FieldElement_t3725019470 * __this, ECFieldElement_t1092946118 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2FieldElement::Equals(Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2FieldElement)
extern "C"  bool SecP160R2FieldElement_Equals_m984784030 (SecP160R2FieldElement_t3725019470 * __this, SecP160R2FieldElement_t3725019470 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2FieldElement::GetHashCode()
extern "C"  int32_t SecP160R2FieldElement_GetHashCode_m1257276530 (SecP160R2FieldElement_t3725019470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2FieldElement::.cctor()
extern "C"  void SecP160R2FieldElement__cctor_m594556960 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
