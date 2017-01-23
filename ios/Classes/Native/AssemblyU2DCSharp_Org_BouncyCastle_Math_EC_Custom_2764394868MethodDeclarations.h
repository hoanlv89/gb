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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement
struct SecT113FieldElement_t2764394868;
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
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Custom_2764394868.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::.ctor(Org.BouncyCastle.Math.BigInteger)
extern "C"  void SecT113FieldElement__ctor_m1647311785 (SecT113FieldElement_t2764394868 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::.ctor()
extern "C"  void SecT113FieldElement__ctor_m3657540731 (SecT113FieldElement_t2764394868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::.ctor(System.UInt64[])
extern "C"  void SecT113FieldElement__ctor_m645189506 (SecT113FieldElement_t2764394868 * __this, UInt64U5BU5D_t1668688775* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::get_IsOne()
extern "C"  bool SecT113FieldElement_get_IsOne_m2415289718 (SecT113FieldElement_t2764394868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::get_IsZero()
extern "C"  bool SecT113FieldElement_get_IsZero_m349595878 (SecT113FieldElement_t2764394868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::TestBitZero()
extern "C"  bool SecT113FieldElement_TestBitZero_m2554903032 (SecT113FieldElement_t2764394868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::ToBigInteger()
extern "C"  BigInteger_t4268922522 * SecT113FieldElement_ToBigInteger_m1854109723 (SecT113FieldElement_t2764394868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::get_FieldName()
extern "C"  String_t* SecT113FieldElement_get_FieldName_m2526186578 (SecT113FieldElement_t2764394868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::get_FieldSize()
extern "C"  int32_t SecT113FieldElement_get_FieldSize_m2436274259 (SecT113FieldElement_t2764394868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT113FieldElement_Add_m3828466881 (SecT113FieldElement_t2764394868 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::AddOne()
extern "C"  ECFieldElement_t1092946118 * SecT113FieldElement_AddOne_m2263541811 (SecT113FieldElement_t2764394868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT113FieldElement_Subtract_m1707312610 (SecT113FieldElement_t2764394868 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT113FieldElement_Multiply_m896087002 (SecT113FieldElement_t2764394868 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::MultiplyMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT113FieldElement_MultiplyMinusProduct_m843222251 (SecT113FieldElement_t2764394868 * __this, ECFieldElement_t1092946118 * ___b0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::MultiplyPlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT113FieldElement_MultiplyPlusProduct_m106778825 (SecT113FieldElement_t2764394868 * __this, ECFieldElement_t1092946118 * ___b0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT113FieldElement_Divide_m271889687 (SecT113FieldElement_t2764394868 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::Negate()
extern "C"  ECFieldElement_t1092946118 * SecT113FieldElement_Negate_m2229777786 (SecT113FieldElement_t2764394868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::Square()
extern "C"  ECFieldElement_t1092946118 * SecT113FieldElement_Square_m4085531043 (SecT113FieldElement_t2764394868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::SquareMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT113FieldElement_SquareMinusProduct_m2379403002 (SecT113FieldElement_t2764394868 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::SquarePlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT113FieldElement_SquarePlusProduct_m610006322 (SecT113FieldElement_t2764394868 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::SquarePow(System.Int32)
extern "C"  ECFieldElement_t1092946118 * SecT113FieldElement_SquarePow_m76966772 (SecT113FieldElement_t2764394868 * __this, int32_t ___pow0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::Invert()
extern "C"  ECFieldElement_t1092946118 * SecT113FieldElement_Invert_m2822643660 (SecT113FieldElement_t2764394868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::Sqrt()
extern "C"  ECFieldElement_t1092946118 * SecT113FieldElement_Sqrt_m478660554 (SecT113FieldElement_t2764394868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::get_Representation()
extern "C"  int32_t SecT113FieldElement_get_Representation_m597313801 (SecT113FieldElement_t2764394868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::get_M()
extern "C"  int32_t SecT113FieldElement_get_M_m3098245673 (SecT113FieldElement_t2764394868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::get_K1()
extern "C"  int32_t SecT113FieldElement_get_K1_m1001160320 (SecT113FieldElement_t2764394868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::get_K2()
extern "C"  int32_t SecT113FieldElement_get_K2_m4032571653 (SecT113FieldElement_t2764394868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::get_K3()
extern "C"  int32_t SecT113FieldElement_get_K3_m1283485322 (SecT113FieldElement_t2764394868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::Equals(System.Object)
extern "C"  bool SecT113FieldElement_Equals_m3483337788 (SecT113FieldElement_t2764394868 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::Equals(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  bool SecT113FieldElement_Equals_m3526422358 (SecT113FieldElement_t2764394868 * __this, ECFieldElement_t1092946118 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::Equals(Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement)
extern "C"  bool SecT113FieldElement_Equals_m2534678142 (SecT113FieldElement_t2764394868 * __this, SecT113FieldElement_t2764394868 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement::GetHashCode()
extern "C"  int32_t SecT113FieldElement_GetHashCode_m3542418924 (SecT113FieldElement_t2764394868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
