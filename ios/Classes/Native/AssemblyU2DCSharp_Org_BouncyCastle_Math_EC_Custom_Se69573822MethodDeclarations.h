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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement
struct SecP224R1FieldElement_t69573822;
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
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Custom_Se69573822.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement::.ctor(Org.BouncyCastle.Math.BigInteger)
extern "C"  void SecP224R1FieldElement__ctor_m271757533 (SecP224R1FieldElement_t69573822 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement::.ctor()
extern "C"  void SecP224R1FieldElement__ctor_m1180306391 (SecP224R1FieldElement_t69573822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement::.ctor(System.UInt32[])
extern "C"  void SecP224R1FieldElement__ctor_m3094321 (SecP224R1FieldElement_t69573822 * __this, UInt32U5BU5D_t59386216* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement::get_IsZero()
extern "C"  bool SecP224R1FieldElement_get_IsZero_m3004960636 (SecP224R1FieldElement_t69573822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement::get_IsOne()
extern "C"  bool SecP224R1FieldElement_get_IsOne_m3792041672 (SecP224R1FieldElement_t69573822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement::TestBitZero()
extern "C"  bool SecP224R1FieldElement_TestBitZero_m2506541390 (SecP224R1FieldElement_t69573822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement::ToBigInteger()
extern "C"  BigInteger_t4268922522 * SecP224R1FieldElement_ToBigInteger_m4068587399 (SecP224R1FieldElement_t69573822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement::get_FieldName()
extern "C"  String_t* SecP224R1FieldElement_get_FieldName_m78029584 (SecP224R1FieldElement_t69573822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement::get_FieldSize()
extern "C"  int32_t SecP224R1FieldElement_get_FieldSize_m3952468895 (SecP224R1FieldElement_t69573822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP224R1FieldElement_Add_m3437594565 (SecP224R1FieldElement_t69573822 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement::AddOne()
extern "C"  ECFieldElement_t1092946118 * SecP224R1FieldElement_AddOne_m3981849551 (SecP224R1FieldElement_t69573822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP224R1FieldElement_Subtract_m3118426348 (SecP224R1FieldElement_t69573822 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP224R1FieldElement_Multiply_m164814820 (SecP224R1FieldElement_t69573822 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP224R1FieldElement_Divide_m4277208139 (SecP224R1FieldElement_t69573822 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement::Negate()
extern "C"  ECFieldElement_t1092946118 * SecP224R1FieldElement_Negate_m3863238408 (SecP224R1FieldElement_t69573822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement::Square()
extern "C"  ECFieldElement_t1092946118 * SecP224R1FieldElement_Square_m2920494351 (SecP224R1FieldElement_t69573822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement::Invert()
extern "C"  ECFieldElement_t1092946118 * SecP224R1FieldElement_Invert_m3111931170 (SecP224R1FieldElement_t69573822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement::Sqrt()
extern "C"  ECFieldElement_t1092946118 * SecP224R1FieldElement_Sqrt_m1905508648 (SecP224R1FieldElement_t69573822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement::Equals(System.Object)
extern "C"  bool SecP224R1FieldElement_Equals_m3345802182 (SecP224R1FieldElement_t69573822 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement::Equals(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  bool SecP224R1FieldElement_Equals_m355380460 (SecP224R1FieldElement_t69573822 * __this, ECFieldElement_t1092946118 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement::Equals(Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement)
extern "C"  bool SecP224R1FieldElement_Equals_m2670304030 (SecP224R1FieldElement_t69573822 * __this, SecP224R1FieldElement_t69573822 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement::GetHashCode()
extern "C"  int32_t SecP224R1FieldElement_GetHashCode_m3037421530 (SecP224R1FieldElement_t69573822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement::IsSquare(System.UInt32[])
extern "C"  bool SecP224R1FieldElement_IsSquare_m1462873478 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement::RM(System.UInt32[],System.UInt32[],System.UInt32[],System.UInt32[],System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void SecP224R1FieldElement_RM_m974024898 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___nc0, UInt32U5BU5D_t59386216* ___d01, UInt32U5BU5D_t59386216* ___e02, UInt32U5BU5D_t59386216* ___d13, UInt32U5BU5D_t59386216* ___e14, UInt32U5BU5D_t59386216* ___f15, UInt32U5BU5D_t59386216* ___t6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement::RP(System.UInt32[],System.UInt32[],System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void SecP224R1FieldElement_RP_m656884711 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___nc0, UInt32U5BU5D_t59386216* ___d11, UInt32U5BU5D_t59386216* ___e12, UInt32U5BU5D_t59386216* ___f13, UInt32U5BU5D_t59386216* ___t4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement::RS(System.UInt32[],System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void SecP224R1FieldElement_RS_m1941892560 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___d0, UInt32U5BU5D_t59386216* ___e1, UInt32U5BU5D_t59386216* ___f2, UInt32U5BU5D_t59386216* ___t3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement::TrySqrt(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  bool SecP224R1FieldElement_TrySqrt_m2516390638 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___nc0, UInt32U5BU5D_t59386216* ___r1, UInt32U5BU5D_t59386216* ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement::.cctor()
extern "C"  void SecP224R1FieldElement__cctor_m3011879096 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
