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

// Org.BouncyCastle.Math.EC.FpFieldElement
struct FpFieldElement_t2948427972;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// System.String
struct String_t;
// Org.BouncyCastle.Math.EC.ECFieldElement
struct ECFieldElement_t1092946118;
// Org.BouncyCastle.Math.BigInteger[]
struct BigIntegerU5BU5D_t431507903;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECField1092946118.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_FpField2948427972.h"

// System.Void Org.BouncyCastle.Math.EC.FpFieldElement::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  void FpFieldElement__ctor_m1696087265 (FpFieldElement_t2948427972 * __this, BigInteger_t4268922522 * ___q0, BigInteger_t4268922522 * ___x1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.FpFieldElement::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  void FpFieldElement__ctor_m1116038703 (FpFieldElement_t2948427972 * __this, BigInteger_t4268922522 * ___q0, BigInteger_t4268922522 * ___r1, BigInteger_t4268922522 * ___x2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.FpFieldElement::CalculateResidue(Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * FpFieldElement_CalculateResidue_m574083283 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.FpFieldElement::ToBigInteger()
extern "C"  BigInteger_t4268922522 * FpFieldElement_ToBigInteger_m4126352261 (FpFieldElement_t2948427972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Math.EC.FpFieldElement::get_FieldName()
extern "C"  String_t* FpFieldElement_get_FieldName_m529071372 (FpFieldElement_t2948427972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.FpFieldElement::get_FieldSize()
extern "C"  int32_t FpFieldElement_get_FieldSize_m1946581389 (FpFieldElement_t2948427972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.FpFieldElement::get_Q()
extern "C"  BigInteger_t4268922522 * FpFieldElement_get_Q_m968024136 (FpFieldElement_t2948427972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.FpFieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * FpFieldElement_Add_m1978405607 (FpFieldElement_t2948427972 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.FpFieldElement::AddOne()
extern "C"  ECFieldElement_t1092946118 * FpFieldElement_AddOne_m817510061 (FpFieldElement_t2948427972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.FpFieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * FpFieldElement_Subtract_m1841695668 (FpFieldElement_t2948427972 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.FpFieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * FpFieldElement_Multiply_m3842091452 (FpFieldElement_t2948427972 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.FpFieldElement::MultiplyMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * FpFieldElement_MultiplyMinusProduct_m3056096353 (FpFieldElement_t2948427972 * __this, ECFieldElement_t1092946118 * ___b0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.FpFieldElement::MultiplyPlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * FpFieldElement_MultiplyPlusProduct_m3819999819 (FpFieldElement_t2948427972 * __this, ECFieldElement_t1092946118 * ___b0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.FpFieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * FpFieldElement_Divide_m225271377 (FpFieldElement_t2948427972 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.FpFieldElement::Negate()
extern "C"  ECFieldElement_t1092946118 * FpFieldElement_Negate_m3305925200 (FpFieldElement_t2948427972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.FpFieldElement::Square()
extern "C"  ECFieldElement_t1092946118 * FpFieldElement_Square_m3443633585 (FpFieldElement_t2948427972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.FpFieldElement::SquareMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * FpFieldElement_SquareMinusProduct_m2998730972 (FpFieldElement_t2948427972 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.FpFieldElement::SquarePlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * FpFieldElement_SquarePlusProduct_m2615889132 (FpFieldElement_t2948427972 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.FpFieldElement::Invert()
extern "C"  ECFieldElement_t1092946118 * FpFieldElement_Invert_m2360829886 (FpFieldElement_t2948427972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.FpFieldElement::Sqrt()
extern "C"  ECFieldElement_t1092946118 * FpFieldElement_Sqrt_m2596330688 (FpFieldElement_t2948427972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.FpFieldElement::CheckSqrt(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * FpFieldElement_CheckSqrt_m2369690876 (FpFieldElement_t2948427972 * __this, ECFieldElement_t1092946118 * ___z0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger[] Org.BouncyCastle.Math.EC.FpFieldElement::LucasSequence(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  BigIntegerU5BU5D_t431507903* FpFieldElement_LucasSequence_m740776719 (FpFieldElement_t2948427972 * __this, BigInteger_t4268922522 * ___P0, BigInteger_t4268922522 * ___Q1, BigInteger_t4268922522 * ___k2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.FpFieldElement::ModAdd(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * FpFieldElement_ModAdd_m3773811791 (FpFieldElement_t2948427972 * __this, BigInteger_t4268922522 * ___x10, BigInteger_t4268922522 * ___x21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.FpFieldElement::ModDouble(Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * FpFieldElement_ModDouble_m2438495713 (FpFieldElement_t2948427972 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.FpFieldElement::ModHalf(Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * FpFieldElement_ModHalf_m1471784851 (FpFieldElement_t2948427972 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.FpFieldElement::ModHalfAbs(Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * FpFieldElement_ModHalfAbs_m337356015 (FpFieldElement_t2948427972 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.FpFieldElement::ModInverse(Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * FpFieldElement_ModInverse_m2434482856 (FpFieldElement_t2948427972 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.FpFieldElement::ModMult(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * FpFieldElement_ModMult_m2254449844 (FpFieldElement_t2948427972 * __this, BigInteger_t4268922522 * ___x10, BigInteger_t4268922522 * ___x21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.FpFieldElement::ModReduce(Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * FpFieldElement_ModReduce_m956905452 (FpFieldElement_t2948427972 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.FpFieldElement::ModSubtract(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * FpFieldElement_ModSubtract_m66708066 (FpFieldElement_t2948427972 * __this, BigInteger_t4268922522 * ___x10, BigInteger_t4268922522 * ___x21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.FpFieldElement::Equals(System.Object)
extern "C"  bool FpFieldElement_Equals_m2290102630 (FpFieldElement_t2948427972 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.FpFieldElement::Equals(Org.BouncyCastle.Math.EC.FpFieldElement)
extern "C"  bool FpFieldElement_Equals_m4123142974 (FpFieldElement_t2948427972 * __this, FpFieldElement_t2948427972 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.FpFieldElement::GetHashCode()
extern "C"  int32_t FpFieldElement_GetHashCode_m1753836842 (FpFieldElement_t2948427972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
