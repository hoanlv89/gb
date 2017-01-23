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

// Org.BouncyCastle.Math.EC.F2mFieldElement
struct F2mFieldElement_t1860364149;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// Org.BouncyCastle.Math.EC.LongArray
struct LongArray_t194261203;
// System.String
struct String_t;
// Org.BouncyCastle.Math.EC.ECFieldElement
struct ECFieldElement_t1092946118;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_LongArra194261203.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECField1092946118.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_F2mFiel1860364149.h"

// System.Void Org.BouncyCastle.Math.EC.F2mFieldElement::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Org.BouncyCastle.Math.BigInteger)
extern "C"  void F2mFieldElement__ctor_m679296736 (F2mFieldElement_t1860364149 * __this, int32_t ___m0, int32_t ___k11, int32_t ___k22, int32_t ___k33, BigInteger_t4268922522 * ___x4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.F2mFieldElement::.ctor(System.Int32,System.Int32,Org.BouncyCastle.Math.BigInteger)
extern "C"  void F2mFieldElement__ctor_m1735021342 (F2mFieldElement_t1860364149 * __this, int32_t ___m0, int32_t ___k1, BigInteger_t4268922522 * ___x2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.F2mFieldElement::.ctor(System.Int32,System.Int32[],Org.BouncyCastle.Math.EC.LongArray)
extern "C"  void F2mFieldElement__ctor_m2079709127 (F2mFieldElement_t1860364149 * __this, int32_t ___m0, Int32U5BU5D_t3030399641* ___ks1, LongArray_t194261203 * ___x2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.F2mFieldElement::get_BitLength()
extern "C"  int32_t F2mFieldElement_get_BitLength_m965054716 (F2mFieldElement_t1860364149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.F2mFieldElement::get_IsOne()
extern "C"  bool F2mFieldElement_get_IsOne_m1356048813 (F2mFieldElement_t1860364149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.F2mFieldElement::get_IsZero()
extern "C"  bool F2mFieldElement_get_IsZero_m3994841827 (F2mFieldElement_t1860364149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.F2mFieldElement::TestBitZero()
extern "C"  bool F2mFieldElement_TestBitZero_m1724161705 (F2mFieldElement_t1860364149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.F2mFieldElement::ToBigInteger()
extern "C"  BigInteger_t4268922522 * F2mFieldElement_ToBigInteger_m1827371240 (F2mFieldElement_t1860364149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Math.EC.F2mFieldElement::get_FieldName()
extern "C"  String_t* F2mFieldElement_get_FieldName_m895821519 (F2mFieldElement_t1860364149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.F2mFieldElement::get_FieldSize()
extern "C"  int32_t F2mFieldElement_get_FieldSize_m3563131346 (F2mFieldElement_t1860364149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.F2mFieldElement::CheckFieldElements(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  void F2mFieldElement_CheckFieldElements_m2172528839 (Il2CppObject * __this /* static, unused */, ECFieldElement_t1092946118 * ___a0, ECFieldElement_t1092946118 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.F2mFieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * F2mFieldElement_Add_m1618236596 (F2mFieldElement_t1860364149 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.F2mFieldElement::AddOne()
extern "C"  ECFieldElement_t1092946118 * F2mFieldElement_AddOne_m2039991348 (F2mFieldElement_t1860364149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.F2mFieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * F2mFieldElement_Subtract_m2834880289 (F2mFieldElement_t1860364149 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.F2mFieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * F2mFieldElement_Multiply_m977217953 (F2mFieldElement_t1860364149 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.F2mFieldElement::MultiplyMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * F2mFieldElement_MultiplyMinusProduct_m161344436 (F2mFieldElement_t1860364149 * __this, ECFieldElement_t1092946118 * ___b0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.F2mFieldElement::MultiplyPlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * F2mFieldElement_MultiplyPlusProduct_m1993027924 (F2mFieldElement_t1860364149 * __this, ECFieldElement_t1092946118 * ___b0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.F2mFieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * F2mFieldElement_Divide_m2619743326 (F2mFieldElement_t1860364149 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.F2mFieldElement::Negate()
extern "C"  ECFieldElement_t1092946118 * F2mFieldElement_Negate_m1407981039 (F2mFieldElement_t1860364149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.F2mFieldElement::Square()
extern "C"  ECFieldElement_t1092946118 * F2mFieldElement_Square_m3896703314 (F2mFieldElement_t1860364149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.F2mFieldElement::SquareMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * F2mFieldElement_SquareMinusProduct_m3074087417 (F2mFieldElement_t1860364149 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.F2mFieldElement::SquarePlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * F2mFieldElement_SquarePlusProduct_m1843526743 (F2mFieldElement_t1860364149 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.F2mFieldElement::SquarePow(System.Int32)
extern "C"  ECFieldElement_t1092946118 * F2mFieldElement_SquarePow_m2578359495 (F2mFieldElement_t1860364149 * __this, int32_t ___pow0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.F2mFieldElement::Invert()
extern "C"  ECFieldElement_t1092946118 * F2mFieldElement_Invert_m3172081309 (F2mFieldElement_t1860364149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.F2mFieldElement::Sqrt()
extern "C"  ECFieldElement_t1092946118 * F2mFieldElement_Sqrt_m1007907671 (F2mFieldElement_t1860364149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.F2mFieldElement::get_Representation()
extern "C"  int32_t F2mFieldElement_get_Representation_m1672874458 (F2mFieldElement_t1860364149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.F2mFieldElement::get_M()
extern "C"  int32_t F2mFieldElement_get_M_m467332360 (F2mFieldElement_t1860364149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.F2mFieldElement::get_K1()
extern "C"  int32_t F2mFieldElement_get_K1_m2145897915 (F2mFieldElement_t1860364149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.F2mFieldElement::get_K2()
extern "C"  int32_t F2mFieldElement_get_K2_m2145897886 (F2mFieldElement_t1860364149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.F2mFieldElement::get_K3()
extern "C"  int32_t F2mFieldElement_get_K3_m2145897981 (F2mFieldElement_t1860364149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.F2mFieldElement::Equals(System.Object)
extern "C"  bool F2mFieldElement_Equals_m3757183063 (F2mFieldElement_t1860364149 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.F2mFieldElement::Equals(Org.BouncyCastle.Math.EC.F2mFieldElement)
extern "C"  bool F2mFieldElement_Equals_m2368575106 (F2mFieldElement_t1860364149 * __this, F2mFieldElement_t1860364149 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.F2mFieldElement::GetHashCode()
extern "C"  int32_t F2mFieldElement_GetHashCode_m28770177 (F2mFieldElement_t1860364149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
