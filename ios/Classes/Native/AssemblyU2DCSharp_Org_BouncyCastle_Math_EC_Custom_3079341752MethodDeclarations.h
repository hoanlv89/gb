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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement
struct SecT409FieldElement_t3079341752;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// System.UInt64[]
struct UInt64U5BU5D_t1668688775;
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
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Custom_3079341752.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::.ctor(Org.BouncyCastle.Math.BigInteger)
extern "C"  void SecT409FieldElement__ctor_m1423229575 (SecT409FieldElement_t3079341752 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::.ctor()
extern "C"  void SecT409FieldElement__ctor_m278755037 (SecT409FieldElement_t3079341752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::.ctor(System.UInt64[])
extern "C"  void SecT409FieldElement__ctor_m2008227338 (SecT409FieldElement_t3079341752 * __this, UInt64U5BU5D_t1668688775* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::get_IsOne()
extern "C"  bool SecT409FieldElement_get_IsOne_m1717184838 (SecT409FieldElement_t3079341752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::get_IsZero()
extern "C"  bool SecT409FieldElement_get_IsZero_m1749600378 (SecT409FieldElement_t3079341752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::TestBitZero()
extern "C"  bool SecT409FieldElement_TestBitZero_m986425752 (SecT409FieldElement_t3079341752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::ToBigInteger()
extern "C"  BigInteger_t4268922522 * SecT409FieldElement_ToBigInteger_m2559407861 (SecT409FieldElement_t3079341752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::get_FieldName()
extern "C"  String_t* SecT409FieldElement_get_FieldName_m1598290294 (SecT409FieldElement_t3079341752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::get_FieldSize()
extern "C"  int32_t SecT409FieldElement_get_FieldSize_m1343212213 (SecT409FieldElement_t3079341752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT409FieldElement_Add_m2216266735 (SecT409FieldElement_t3079341752 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::AddOne()
extern "C"  ECFieldElement_t1092946118 * SecT409FieldElement_AddOne_m4173098885 (SecT409FieldElement_t3079341752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT409FieldElement_Subtract_m3632679418 (SecT409FieldElement_t3079341752 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT409FieldElement_Multiply_m3691564026 (SecT409FieldElement_t3079341752 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::MultiplyMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT409FieldElement_MultiplyMinusProduct_m692965585 (SecT409FieldElement_t3079341752 * __this, ECFieldElement_t1092946118 * ___b0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::MultiplyPlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT409FieldElement_MultiplyPlusProduct_m1160414851 (SecT409FieldElement_t3079341752 * __this, ECFieldElement_t1092946118 * ___b0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT409FieldElement_Divide_m3256775537 (SecT409FieldElement_t3079341752 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::Negate()
extern "C"  ECFieldElement_t1092946118 * SecT409FieldElement_Negate_m3627958322 (SecT409FieldElement_t3079341752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::Square()
extern "C"  ECFieldElement_t1092946118 * SecT409FieldElement_Square_m83926617 (SecT409FieldElement_t3079341752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::SquareMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT409FieldElement_SquareMinusProduct_m4103683618 (SecT409FieldElement_t3079341752 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::SquarePlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT409FieldElement_SquarePlusProduct_m3597935230 (SecT409FieldElement_t3079341752 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::SquarePow(System.Int32)
extern "C"  ECFieldElement_t1092946118 * SecT409FieldElement_SquarePow_m853299144 (SecT409FieldElement_t3079341752 * __this, int32_t ___pow0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::Invert()
extern "C"  ECFieldElement_t1092946118 * SecT409FieldElement_Invert_m436527968 (SecT409FieldElement_t3079341752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::Sqrt()
extern "C"  ECFieldElement_t1092946118 * SecT409FieldElement_Sqrt_m2272260234 (SecT409FieldElement_t3079341752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::get_Representation()
extern "C"  int32_t SecT409FieldElement_get_Representation_m3355658259 (SecT409FieldElement_t3079341752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::get_M()
extern "C"  int32_t SecT409FieldElement_get_M_m3143650131 (SecT409FieldElement_t3079341752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::get_K1()
extern "C"  int32_t SecT409FieldElement_get_K1_m961348616 (SecT409FieldElement_t3079341752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::get_K2()
extern "C"  int32_t SecT409FieldElement_get_K2_m820186115 (SecT409FieldElement_t3079341752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::get_K3()
extern "C"  int32_t SecT409FieldElement_get_K3_m679023614 (SecT409FieldElement_t3079341752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::Equals(System.Object)
extern "C"  bool SecT409FieldElement_Equals_m1705095972 (SecT409FieldElement_t3079341752 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::Equals(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  bool SecT409FieldElement_Equals_m1692045686 (SecT409FieldElement_t3079341752 * __this, ECFieldElement_t1092946118 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::Equals(Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement)
extern "C"  bool SecT409FieldElement_Equals_m922039294 (SecT409FieldElement_t3079341752 * __this, SecT409FieldElement_t3079341752 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT409FieldElement::GetHashCode()
extern "C"  int32_t SecT409FieldElement_GetHashCode_m413657420 (SecT409FieldElement_t3079341752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
