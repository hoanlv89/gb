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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement
struct SecT163FieldElement_t1728460721;
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
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Custom_1728460721.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::.ctor(Org.BouncyCastle.Math.BigInteger)
extern "C"  void SecT163FieldElement__ctor_m552665808 (SecT163FieldElement_t1728460721 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::.ctor()
extern "C"  void SecT163FieldElement__ctor_m2750955402 (SecT163FieldElement_t1728460721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::.ctor(System.UInt64[])
extern "C"  void SecT163FieldElement__ctor_m4114371805 (SecT163FieldElement_t1728460721 * __this, UInt64U5BU5D_t1668688775* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::get_IsOne()
extern "C"  bool SecT163FieldElement_get_IsOne_m737405083 (SecT163FieldElement_t1728460721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::get_IsZero()
extern "C"  bool SecT163FieldElement_get_IsZero_m2966693065 (SecT163FieldElement_t1728460721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::TestBitZero()
extern "C"  bool SecT163FieldElement_TestBitZero_m2501716347 (SecT163FieldElement_t1728460721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::ToBigInteger()
extern "C"  BigInteger_t4268922522 * SecT163FieldElement_ToBigInteger_m559694366 (SecT163FieldElement_t1728460721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::get_FieldName()
extern "C"  String_t* SecT163FieldElement_get_FieldName_m2823844193 (SecT163FieldElement_t1728460721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::get_FieldSize()
extern "C"  int32_t SecT163FieldElement_get_FieldSize_m788902062 (SecT163FieldElement_t1728460721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT163FieldElement_Add_m784663134 (SecT163FieldElement_t1728460721 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::AddOne()
extern "C"  ECFieldElement_t1092946118 * SecT163FieldElement_AddOne_m3530838786 (SecT163FieldElement_t1728460721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT163FieldElement_Subtract_m1173229363 (SecT163FieldElement_t1728460721 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT163FieldElement_Multiply_m154559891 (SecT163FieldElement_t1728460721 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::MultiplyMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT163FieldElement_MultiplyMinusProduct_m599389958 (SecT163FieldElement_t1728460721 * __this, ECFieldElement_t1092946118 * ___b0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::MultiplyPlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT163FieldElement_MultiplyPlusProduct_m3296590970 (SecT163FieldElement_t1728460721 * __this, ECFieldElement_t1092946118 * ___b0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT163FieldElement_Divide_m1926133148 (SecT163FieldElement_t1728460721 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::Negate()
extern "C"  ECFieldElement_t1092946118 * SecT163FieldElement_Negate_m634178549 (SecT163FieldElement_t1728460721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::Square()
extern "C"  ECFieldElement_t1092946118 * SecT163FieldElement_Square_m1553475732 (SecT163FieldElement_t1728460721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::SquareMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT163FieldElement_SquareMinusProduct_m862977387 (SecT163FieldElement_t1728460721 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::SquarePlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT163FieldElement_SquarePlusProduct_m2421107641 (SecT163FieldElement_t1728460721 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::SquarePow(System.Int32)
extern "C"  ECFieldElement_t1092946118 * SecT163FieldElement_SquarePow_m615924773 (SecT163FieldElement_t1728460721 * __this, int32_t ___pow0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::Invert()
extern "C"  ECFieldElement_t1092946118 * SecT163FieldElement_Invert_m2636359687 (SecT163FieldElement_t1728460721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::Sqrt()
extern "C"  ECFieldElement_t1092946118 * SecT163FieldElement_Sqrt_m4253932301 (SecT163FieldElement_t1728460721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::get_Representation()
extern "C"  int32_t SecT163FieldElement_get_Representation_m1073753902 (SecT163FieldElement_t1728460721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::get_M()
extern "C"  int32_t SecT163FieldElement_get_M_m2696815632 (SecT163FieldElement_t1728460721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::get_K1()
extern "C"  int32_t SecT163FieldElement_get_K1_m599729881 (SecT163FieldElement_t1728460721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::get_K2()
extern "C"  int32_t SecT163FieldElement_get_K2_m3631141214 (SecT163FieldElement_t1728460721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::get_K3()
extern "C"  int32_t SecT163FieldElement_get_K3_m882054883 (SecT163FieldElement_t1728460721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::Equals(System.Object)
extern "C"  bool SecT163FieldElement_Equals_m2564060349 (SecT163FieldElement_t1728460721 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::Equals(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  bool SecT163FieldElement_Equals_m2800025469 (SecT163FieldElement_t1728460721 * __this, ECFieldElement_t1092946118 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::Equals(Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement)
extern "C"  bool SecT163FieldElement_Equals_m728141886 (SecT163FieldElement_t1728460721 * __this, SecT163FieldElement_t1728460721 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT163FieldElement::GetHashCode()
extern "C"  int32_t SecT163FieldElement_GetHashCode_m2703305895 (SecT163FieldElement_t1728460721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
