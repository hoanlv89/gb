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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement
struct SecT571FieldElement_t3353873688;
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
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Custom_3353873688.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::.ctor(Org.BouncyCastle.Math.BigInteger)
extern "C"  void SecT571FieldElement__ctor_m3027433229 (SecT571FieldElement_t3353873688 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::.ctor()
extern "C"  void SecT571FieldElement__ctor_m3670579979 (SecT571FieldElement_t3353873688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::.ctor(System.UInt64[])
extern "C"  void SecT571FieldElement__ctor_m952807218 (SecT571FieldElement_t3353873688 * __this, UInt64U5BU5D_t1668688775* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::get_IsOne()
extern "C"  bool SecT571FieldElement_get_IsOne_m2563676442 (SecT571FieldElement_t3353873688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::get_IsZero()
extern "C"  bool SecT571FieldElement_get_IsZero_m3400873502 (SecT571FieldElement_t3353873688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::TestBitZero()
extern "C"  bool SecT571FieldElement_TestBitZero_m2685955932 (SecT571FieldElement_t3353873688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::ToBigInteger()
extern "C"  BigInteger_t4268922522 * SecT571FieldElement_ToBigInteger_m3376802003 (SecT571FieldElement_t3353873688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::get_FieldName()
extern "C"  String_t* SecT571FieldElement_get_FieldName_m866004962 (SecT571FieldElement_t3353873688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::get_FieldSize()
extern "C"  int32_t SecT571FieldElement_get_FieldSize_m1453830379 (SecT571FieldElement_t3353873688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT571FieldElement_Add_m2323171293 (SecT571FieldElement_t3353873688 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::AddOne()
extern "C"  ECFieldElement_t1092946118 * SecT571FieldElement_AddOne_m3107581315 (SecT571FieldElement_t3353873688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT571FieldElement_Subtract_m2898853726 (SecT571FieldElement_t3353873688 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT571FieldElement_Multiply_m659783030 (SecT571FieldElement_t3353873688 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::MultiplyMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT571FieldElement_MultiplyMinusProduct_m1500019931 (SecT571FieldElement_t3353873688 * __this, ECFieldElement_t1092946118 * ___b0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::MultiplyPlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT571FieldElement_MultiplyPlusProduct_m3371737221 (SecT571FieldElement_t3353873688 * __this, ECFieldElement_t1092946118 * ___b0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT571FieldElement_Divide_m3502675879 (SecT571FieldElement_t3353873688 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::Negate()
extern "C"  ECFieldElement_t1092946118 * SecT571FieldElement_Negate_m722115626 (SecT571FieldElement_t3353873688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::Square()
extern "C"  ECFieldElement_t1092946118 * SecT571FieldElement_Square_m2745656539 (SecT571FieldElement_t3353873688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::SquareMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT571FieldElement_SquareMinusProduct_m2396374646 (SecT571FieldElement_t3353873688 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::SquarePlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT571FieldElement_SquarePlusProduct_m3899741394 (SecT571FieldElement_t3353873688 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::SquarePow(System.Int32)
extern "C"  ECFieldElement_t1092946118 * SecT571FieldElement_SquarePow_m3364358636 (SecT571FieldElement_t3353873688 * __this, int32_t ___pow0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::Invert()
extern "C"  ECFieldElement_t1092946118 * SecT571FieldElement_Invert_m2212962824 (SecT571FieldElement_t3353873688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::Sqrt()
extern "C"  ECFieldElement_t1092946118 * SecT571FieldElement_Sqrt_m1984747434 (SecT571FieldElement_t3353873688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::get_Representation()
extern "C"  int32_t SecT571FieldElement_get_Representation_m4201452909 (SecT571FieldElement_t3353873688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::get_M()
extern "C"  int32_t SecT571FieldElement_get_M_m4074852517 (SecT571FieldElement_t3353873688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::get_K1()
extern "C"  int32_t SecT571FieldElement_get_K1_m2316859952 (SecT571FieldElement_t3353873688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::get_K2()
extern "C"  int32_t SecT571FieldElement_get_K2_m488653985 (SecT571FieldElement_t3353873688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::get_K3()
extern "C"  int32_t SecT571FieldElement_get_K3_m2034534950 (SecT571FieldElement_t3353873688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::Equals(System.Object)
extern "C"  bool SecT571FieldElement_Equals_m3666728500 (SecT571FieldElement_t3353873688 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::Equals(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  bool SecT571FieldElement_Equals_m3423186878 (SecT571FieldElement_t3353873688 * __this, ECFieldElement_t1092946118 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::Equals(Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement)
extern "C"  bool SecT571FieldElement_Equals_m4091739262 (SecT571FieldElement_t3353873688 * __this, SecT571FieldElement_t3353873688 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement::GetHashCode()
extern "C"  int32_t SecT571FieldElement_GetHashCode_m1188037448 (SecT571FieldElement_t3353873688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
