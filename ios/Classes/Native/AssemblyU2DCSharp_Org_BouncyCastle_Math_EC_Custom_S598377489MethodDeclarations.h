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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement
struct SecT239FieldElement_t598377489;
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
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Custom_S598377489.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::.ctor(Org.BouncyCastle.Math.BigInteger)
extern "C"  void SecT239FieldElement__ctor_m1598183926 (SecT239FieldElement_t598377489 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::.ctor()
extern "C"  void SecT239FieldElement__ctor_m933874952 (SecT239FieldElement_t598377489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::.ctor(System.UInt64[])
extern "C"  void SecT239FieldElement__ctor_m1756077301 (SecT239FieldElement_t598377489 * __this, UInt64U5BU5D_t1668688775* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::get_IsOne()
extern "C"  bool SecT239FieldElement_get_IsOne_m1811244043 (SecT239FieldElement_t598377489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::get_IsZero()
extern "C"  bool SecT239FieldElement_get_IsZero_m3337554913 (SecT239FieldElement_t598377489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::TestBitZero()
extern "C"  bool SecT239FieldElement_TestBitZero_m3681576051 (SecT239FieldElement_t598377489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::ToBigInteger()
extern "C"  BigInteger_t4268922522 * SecT239FieldElement_ToBigInteger_m2515690108 (SecT239FieldElement_t598377489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::get_FieldName()
extern "C"  String_t* SecT239FieldElement_get_FieldName_m3003697313 (SecT239FieldElement_t598377489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::get_FieldSize()
extern "C"  int32_t SecT239FieldElement_get_FieldSize_m1413536052 (SecT239FieldElement_t598377489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT239FieldElement_Add_m3824342064 (SecT239FieldElement_t598377489 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::AddOne()
extern "C"  ECFieldElement_t1092946118 * SecT239FieldElement_AddOne_m4175241264 (SecT239FieldElement_t598377489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT239FieldElement_Subtract_m3197694755 (SecT239FieldElement_t598377489 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT239FieldElement_Multiply_m2204187883 (SecT239FieldElement_t598377489 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::MultiplyMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT239FieldElement_MultiplyMinusProduct_m3391737660 (SecT239FieldElement_t598377489 * __this, ECFieldElement_t1092946118 * ___b0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::MultiplyPlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT239FieldElement_MultiplyPlusProduct_m1951070924 (SecT239FieldElement_t598377489 * __this, ECFieldElement_t1092946118 * ___b0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT239FieldElement_Divide_m149766054 (SecT239FieldElement_t598377489 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::Negate()
extern "C"  ECFieldElement_t1092946118 * SecT239FieldElement_Negate_m3975887677 (SecT239FieldElement_t598377489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::Square()
extern "C"  ECFieldElement_t1092946118 * SecT239FieldElement_Square_m647742694 (SecT239FieldElement_t598377489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::SquareMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT239FieldElement_SquareMinusProduct_m763305579 (SecT239FieldElement_t598377489 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::SquarePlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT239FieldElement_SquarePlusProduct_m3910646033 (SecT239FieldElement_t598377489 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::SquarePow(System.Int32)
extern "C"  ECFieldElement_t1092946118 * SecT239FieldElement_SquarePow_m4116607573 (SecT239FieldElement_t598377489 * __this, int32_t ___pow0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::Invert()
extern "C"  ECFieldElement_t1092946118 * SecT239FieldElement_Invert_m114258463 (SecT239FieldElement_t598377489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::Sqrt()
extern "C"  ECFieldElement_t1092946118 * SecT239FieldElement_Sqrt_m141121453 (SecT239FieldElement_t598377489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::get_Representation()
extern "C"  int32_t SecT239FieldElement_get_Representation_m311895832 (SecT239FieldElement_t598377489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::get_M()
extern "C"  int32_t SecT239FieldElement_get_M_m1562960126 (SecT239FieldElement_t598377489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::get_K1()
extern "C"  int32_t SecT239FieldElement_get_K1_m4248414833 (SecT239FieldElement_t598377489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::get_K2()
extern "C"  int32_t SecT239FieldElement_get_K2_m376935040 (SecT239FieldElement_t598377489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::get_K3()
extern "C"  int32_t SecT239FieldElement_get_K3_m235772539 (SecT239FieldElement_t598377489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::Equals(System.Object)
extern "C"  bool SecT239FieldElement_Equals_m1499805165 (SecT239FieldElement_t598377489 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::Equals(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  bool SecT239FieldElement_Equals_m3115285877 (SecT239FieldElement_t598377489 * __this, ECFieldElement_t1092946118 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::Equals(Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement)
extern "C"  bool SecT239FieldElement_Equals_m4273513534 (SecT239FieldElement_t598377489 * __this, SecT239FieldElement_t598377489 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT239FieldElement::GetHashCode()
extern "C"  int32_t SecT239FieldElement_GetHashCode_m1575418855 (SecT239FieldElement_t598377489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
