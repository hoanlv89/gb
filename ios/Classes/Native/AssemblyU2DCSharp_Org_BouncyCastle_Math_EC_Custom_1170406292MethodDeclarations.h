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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement
struct SecT283FieldElement_t1170406292;
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
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Custom_1170406292.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::.ctor(Org.BouncyCastle.Math.BigInteger)
extern "C"  void SecT283FieldElement__ctor_m1655267187 (SecT283FieldElement_t1170406292 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::.ctor()
extern "C"  void SecT283FieldElement__ctor_m3445674361 (SecT283FieldElement_t1170406292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::.ctor(System.UInt64[])
extern "C"  void SecT283FieldElement__ctor_m432075166 (SecT283FieldElement_t1170406292 * __this, UInt64U5BU5D_t1668688775* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::get_IsOne()
extern "C"  bool SecT283FieldElement_get_IsOne_m2129630738 (SecT283FieldElement_t1170406292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::get_IsZero()
extern "C"  bool SecT283FieldElement_get_IsZero_m2599940718 (SecT283FieldElement_t1170406292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::TestBitZero()
extern "C"  bool SecT283FieldElement_TestBitZero_m659457436 (SecT283FieldElement_t1170406292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::ToBigInteger()
extern "C"  BigInteger_t4268922522 * SecT283FieldElement_ToBigInteger_m910948521 (SecT283FieldElement_t1170406292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::get_FieldName()
extern "C"  String_t* SecT283FieldElement_get_FieldName_m595786338 (SecT283FieldElement_t1170406292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::get_FieldSize()
extern "C"  int32_t SecT283FieldElement_get_FieldSize_m148820273 (SecT283FieldElement_t1170406292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT283FieldElement_Add_m532973283 (SecT283FieldElement_t1170406292 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::AddOne()
extern "C"  ECFieldElement_t1092946118 * SecT283FieldElement_AddOne_m4020746129 (SecT283FieldElement_t1170406292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT283FieldElement_Subtract_m4074316518 (SecT283FieldElement_t1170406292 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT283FieldElement_Multiply_m224953822 (SecT283FieldElement_t1170406292 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::MultiplyMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT283FieldElement_MultiplyMinusProduct_m1280349109 (SecT283FieldElement_t1170406292 * __this, ECFieldElement_t1092946118 * ___b0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::MultiplyPlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT283FieldElement_MultiplyPlusProduct_m4028419871 (SecT283FieldElement_t1170406292 * __this, ECFieldElement_t1092946118 * ___b0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT283FieldElement_Divide_m2229806173 (SecT283FieldElement_t1170406292 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::Negate()
extern "C"  ECFieldElement_t1092946118 * SecT283FieldElement_Negate_m4111382870 (SecT283FieldElement_t1170406292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::Square()
extern "C"  ECFieldElement_t1092946118 * SecT283FieldElement_Square_m543559877 (SecT283FieldElement_t1170406292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::SquareMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT283FieldElement_SquareMinusProduct_m431956734 (SecT283FieldElement_t1170406292 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::SquarePlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT283FieldElement_SquarePlusProduct_m3095478754 (SecT283FieldElement_t1170406292 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::SquarePow(System.Int32)
extern "C"  ECFieldElement_t1092946118 * SecT283FieldElement_SquarePow_m3879276724 (SecT283FieldElement_t1170406292 * __this, int32_t ___pow0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::Invert()
extern "C"  ECFieldElement_t1092946118 * SecT283FieldElement_Invert_m920544108 (SecT283FieldElement_t1170406292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::Sqrt()
extern "C"  ECFieldElement_t1092946118 * SecT283FieldElement_Sqrt_m2766672118 (SecT283FieldElement_t1170406292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::get_Representation()
extern "C"  int32_t SecT283FieldElement_get_Representation_m4107350671 (SecT283FieldElement_t1170406292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::get_M()
extern "C"  int32_t SecT283FieldElement_get_M_m3410202439 (SecT283FieldElement_t1170406292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::get_K1()
extern "C"  int32_t SecT283FieldElement_get_K1_m1921949052 (SecT283FieldElement_t1170406292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::get_K2()
extern "C"  int32_t SecT283FieldElement_get_K2_m1780786551 (SecT283FieldElement_t1170406292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::get_K3()
extern "C"  int32_t SecT283FieldElement_get_K3_m1639624050 (SecT283FieldElement_t1170406292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::Equals(System.Object)
extern "C"  bool SecT283FieldElement_Equals_m2653621784 (SecT283FieldElement_t1170406292 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::Equals(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  bool SecT283FieldElement_Equals_m1270138106 (SecT283FieldElement_t1170406292 * __this, ECFieldElement_t1092946118 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::Equals(Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement)
extern "C"  bool SecT283FieldElement_Equals_m1718533118 (SecT283FieldElement_t1170406292 * __this, SecT283FieldElement_t1170406292 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT283FieldElement::GetHashCode()
extern "C"  int32_t SecT283FieldElement_GetHashCode_m1181275216 (SecT283FieldElement_t1170406292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
