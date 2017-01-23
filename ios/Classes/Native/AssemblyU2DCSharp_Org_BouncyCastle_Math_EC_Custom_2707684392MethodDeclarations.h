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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement
struct SecT131FieldElement_t2707684392;
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
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Custom_2707684392.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::.ctor(Org.BouncyCastle.Math.BigInteger)
extern "C"  void SecT131FieldElement__ctor_m4027112093 (SecT131FieldElement_t2707684392 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::.ctor()
extern "C"  void SecT131FieldElement__ctor_m1728796019 (SecT131FieldElement_t2707684392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::.ctor(System.UInt64[])
extern "C"  void SecT131FieldElement__ctor_m1124044106 (SecT131FieldElement_t2707684392 * __this, UInt64U5BU5D_t1668688775* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::get_IsOne()
extern "C"  bool SecT131FieldElement_get_IsOne_m3794990978 (SecT131FieldElement_t2707684392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::get_IsZero()
extern "C"  bool SecT131FieldElement_get_IsZero_m3901829422 (SecT131FieldElement_t2707684392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::TestBitZero()
extern "C"  bool SecT131FieldElement_TestBitZero_m3589349868 (SecT131FieldElement_t2707684392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::ToBigInteger()
extern "C"  BigInteger_t4268922522 * SecT131FieldElement_ToBigInteger_m1944064739 (SecT131FieldElement_t2707684392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::get_FieldName()
extern "C"  String_t* SecT131FieldElement_get_FieldName_m3626684234 (SecT131FieldElement_t2707684392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::get_FieldSize()
extern "C"  int32_t SecT131FieldElement_get_FieldSize_m1758686299 (SecT131FieldElement_t2707684392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT131FieldElement_Add_m3324100085 (SecT131FieldElement_t2707684392 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::AddOne()
extern "C"  ECFieldElement_t1092946118 * SecT131FieldElement_AddOne_m2123487083 (SecT131FieldElement_t2707684392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT131FieldElement_Subtract_m834445550 (SecT131FieldElement_t2707684392 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT131FieldElement_Multiply_m3291228134 (SecT131FieldElement_t2707684392 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::MultiplyMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT131FieldElement_MultiplyMinusProduct_m4125768819 (SecT131FieldElement_t2707684392 * __this, ECFieldElement_t1092946118 * ___b0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::MultiplyPlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT131FieldElement_MultiplyPlusProduct_m2890133 (SecT131FieldElement_t2707684392 * __this, ECFieldElement_t1092946118 * ___b0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT131FieldElement_Divide_m1414060815 (SecT131FieldElement_t2707684392 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::Negate()
extern "C"  ECFieldElement_t1092946118 * SecT131FieldElement_Negate_m1924318786 (SecT131FieldElement_t2707684392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::Square()
extern "C"  ECFieldElement_t1092946118 * SecT131FieldElement_Square_m2891141099 (SecT131FieldElement_t2707684392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::SquareMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT131FieldElement_SquareMinusProduct_m3953821702 (SecT131FieldElement_t2707684392 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::SquarePlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT131FieldElement_SquarePlusProduct_m3475431402 (SecT131FieldElement_t2707684392 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::SquarePow(System.Int32)
extern "C"  ECFieldElement_t1092946118 * SecT131FieldElement_SquarePow_m878872188 (SecT131FieldElement_t2707684392 * __this, int32_t ___pow0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::Invert()
extern "C"  ECFieldElement_t1092946118 * SecT131FieldElement_Invert_m2358168600 (SecT131FieldElement_t2707684392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::Sqrt()
extern "C"  ECFieldElement_t1092946118 * SecT131FieldElement_Sqrt_m1901059986 (SecT131FieldElement_t2707684392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::get_Representation()
extern "C"  int32_t SecT131FieldElement_get_Representation_m3311391829 (SecT131FieldElement_t2707684392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::get_M()
extern "C"  int32_t SecT131FieldElement_get_M_m2295188533 (SecT131FieldElement_t2707684392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::get_K1()
extern "C"  int32_t SecT131FieldElement_get_K1_m2520930632 (SecT131FieldElement_t2707684392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::get_K2()
extern "C"  int32_t SecT131FieldElement_get_K2_m692724665 (SecT131FieldElement_t2707684392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::get_K3()
extern "C"  int32_t SecT131FieldElement_get_K3_m2238605630 (SecT131FieldElement_t2707684392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::Equals(System.Object)
extern "C"  bool SecT131FieldElement_Equals_m92089540 (SecT131FieldElement_t2707684392 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::Equals(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  bool SecT131FieldElement_Equals_m1813463118 (SecT131FieldElement_t2707684392 * __this, ECFieldElement_t1092946118 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::Equals(Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement)
extern "C"  bool SecT131FieldElement_Equals_m2957181566 (SecT131FieldElement_t2707684392 * __this, SecT131FieldElement_t2707684392 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT131FieldElement::GetHashCode()
extern "C"  int32_t SecT131FieldElement_GetHashCode_m2391820512 (SecT131FieldElement_t2707684392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
