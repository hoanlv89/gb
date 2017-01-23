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

// Org.BouncyCastle.Math.EC.ECFieldElement
struct ECFieldElement_t1092946118;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECField1092946118.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Math.EC.ECFieldElement::.ctor()
extern "C"  void ECFieldElement__ctor_m2532194125 (ECFieldElement_t1092946118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.ECFieldElement::get_BitLength()
extern "C"  int32_t ECFieldElement_get_BitLength_m3133366113 (ECFieldElement_t1092946118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.ECFieldElement::get_IsOne()
extern "C"  bool ECFieldElement_get_IsOne_m1373376426 (ECFieldElement_t1092946118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.ECFieldElement::get_IsZero()
extern "C"  bool ECFieldElement_get_IsZero_m2370593242 (ECFieldElement_t1092946118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.ECFieldElement::MultiplyMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * ECFieldElement_MultiplyMinusProduct_m2120046817 (ECFieldElement_t1092946118 * __this, ECFieldElement_t1092946118 * ___b0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.ECFieldElement::MultiplyPlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * ECFieldElement_MultiplyPlusProduct_m2199566015 (ECFieldElement_t1092946118 * __this, ECFieldElement_t1092946118 * ___b0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.ECFieldElement::SquareMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * ECFieldElement_SquareMinusProduct_m832658126 (ECFieldElement_t1092946118 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.ECFieldElement::SquarePlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * ECFieldElement_SquarePlusProduct_m1935938742 (ECFieldElement_t1092946118 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.ECFieldElement::SquarePow(System.Int32)
extern "C"  ECFieldElement_t1092946118 * ECFieldElement_SquarePow_m3038551960 (ECFieldElement_t1092946118 * __this, int32_t ___pow0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.ECFieldElement::TestBitZero()
extern "C"  bool ECFieldElement_TestBitZero_m475410396 (ECFieldElement_t1092946118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.ECFieldElement::Equals(System.Object)
extern "C"  bool ECFieldElement_Equals_m492718148 (ECFieldElement_t1092946118 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.ECFieldElement::Equals(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  bool ECFieldElement_Equals_m3788257854 (ECFieldElement_t1092946118 * __this, ECFieldElement_t1092946118 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.ECFieldElement::GetHashCode()
extern "C"  int32_t ECFieldElement_GetHashCode_m3096407528 (ECFieldElement_t1092946118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Math.EC.ECFieldElement::ToString()
extern "C"  String_t* ECFieldElement_ToString_m3108582560 (ECFieldElement_t1092946118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Math.EC.ECFieldElement::GetEncoded()
extern "C"  ByteU5BU5D_t3397334013* ECFieldElement_GetEncoded_m3117156765 (ECFieldElement_t1092946118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
