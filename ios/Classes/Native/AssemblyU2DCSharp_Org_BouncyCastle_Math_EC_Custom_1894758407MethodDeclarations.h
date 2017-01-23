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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement
struct SecT233FieldElement_t1894758407;
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
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Custom_1894758407.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::.ctor(Org.BouncyCastle.Math.BigInteger)
extern "C"  void SecT233FieldElement__ctor_m168019196 (SecT233FieldElement_t1894758407 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::.ctor()
extern "C"  void SecT233FieldElement__ctor_m1270800530 (SecT233FieldElement_t1894758407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::.ctor(System.UInt64[])
extern "C"  void SecT233FieldElement__ctor_m1973121387 (SecT233FieldElement_t1894758407 * __this, UInt64U5BU5D_t1668688775* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::get_IsOne()
extern "C"  bool SecT233FieldElement_get_IsOne_m2056187645 (SecT233FieldElement_t1894758407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::get_IsZero()
extern "C"  bool SecT233FieldElement_get_IsZero_m2526491283 (SecT233FieldElement_t1894758407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::TestBitZero()
extern "C"  bool SecT233FieldElement_TestBitZero_m1298321937 (SecT233FieldElement_t1894758407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::ToBigInteger()
extern "C"  BigInteger_t4268922522 * SecT233FieldElement_ToBigInteger_m3080809118 (SecT233FieldElement_t1894758407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::get_FieldName()
extern "C"  String_t* SecT233FieldElement_get_FieldName_m2537909291 (SecT233FieldElement_t1894758407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::get_FieldSize()
extern "C"  int32_t SecT233FieldElement_get_FieldSize_m681942486 (SecT233FieldElement_t1894758407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT233FieldElement_Add_m1657885430 (SecT233FieldElement_t1894758407 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::AddOne()
extern "C"  ECFieldElement_t1092946118 * SecT233FieldElement_AddOne_m897732586 (SecT233FieldElement_t1894758407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT233FieldElement_Subtract_m1195971949 (SecT233FieldElement_t1894758407 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT233FieldElement_Multiply_m225120037 (SecT233FieldElement_t1894758407 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::MultiplyMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT233FieldElement_MultiplyMinusProduct_m2081121906 (SecT233FieldElement_t1894758407 * __this, ECFieldElement_t1092946118 * ___b0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::MultiplyPlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT233FieldElement_MultiplyPlusProduct_m1996183958 (SecT233FieldElement_t1894758407 * __this, ECFieldElement_t1092946118 * ___b0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT233FieldElement_Divide_m2866539184 (SecT233FieldElement_t1894758407 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::Negate()
extern "C"  ECFieldElement_t1092946118 * SecT233FieldElement_Negate_m698636035 (SecT233FieldElement_t1894758407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::Square()
extern "C"  ECFieldElement_t1092946118 * SecT233FieldElement_Square_m1665458348 (SecT233FieldElement_t1894758407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::SquareMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT233FieldElement_SquareMinusProduct_m2816417381 (SecT233FieldElement_t1894758407 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::SquarePlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT233FieldElement_SquarePlusProduct_m2362865163 (SecT233FieldElement_t1894758407 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::SquarePow(System.Int32)
extern "C"  ECFieldElement_t1092946118 * SecT233FieldElement_SquarePow_m3808649947 (SecT233FieldElement_t1894758407 * __this, int32_t ___pow0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::Invert()
extern "C"  ECFieldElement_t1092946118 * SecT233FieldElement_Invert_m1132692825 (SecT233FieldElement_t1894758407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::Sqrt()
extern "C"  ECFieldElement_t1092946118 * SecT233FieldElement_Sqrt_m2514670771 (SecT233FieldElement_t1894758407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::get_Representation()
extern "C"  int32_t SecT233FieldElement_get_Representation_m1500452218 (SecT233FieldElement_t1894758407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::get_M()
extern "C"  int32_t SecT233FieldElement_get_M_m3672861040 (SecT233FieldElement_t1894758407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::get_K1()
extern "C"  int32_t SecT233FieldElement_get_K1_m2184607523 (SecT233FieldElement_t1894758407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::get_K2()
extern "C"  int32_t SecT233FieldElement_get_K2_m2043445022 (SecT233FieldElement_t1894758407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::get_K3()
extern "C"  int32_t SecT233FieldElement_get_K3_m1902282521 (SecT233FieldElement_t1894758407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::Equals(System.Object)
extern "C"  bool SecT233FieldElement_Equals_m3345039007 (SecT233FieldElement_t1894758407 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::Equals(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  bool SecT233FieldElement_Equals_m113447123 (SecT233FieldElement_t1894758407 * __this, ECFieldElement_t1092946118 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::Equals(Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement)
extern "C"  bool SecT233FieldElement_Equals_m1531258942 (SecT233FieldElement_t1894758407 * __this, SecT233FieldElement_t1894758407 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement::GetHashCode()
extern "C"  int32_t SecT233FieldElement_GetHashCode_m18616709 (SecT233FieldElement_t1894758407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
