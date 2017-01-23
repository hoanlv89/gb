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

// Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement
struct Curve25519FieldElement_t2608249339;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
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
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Custom_2608249339.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement::.ctor(Org.BouncyCastle.Math.BigInteger)
extern "C"  void Curve25519FieldElement__ctor_m234176183 (Curve25519FieldElement_t2608249339 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement::.ctor()
extern "C"  void Curve25519FieldElement__ctor_m2904659625 (Curve25519FieldElement_t2608249339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement::.ctor(System.UInt32[])
extern "C"  void Curve25519FieldElement__ctor_m2209191643 (Curve25519FieldElement_t2608249339 * __this, UInt32U5BU5D_t59386216* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement::get_IsZero()
extern "C"  bool Curve25519FieldElement_get_IsZero_m3983136952 (Curve25519FieldElement_t2608249339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement::get_IsOne()
extern "C"  bool Curve25519FieldElement_get_IsOne_m3342894948 (Curve25519FieldElement_t2608249339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement::TestBitZero()
extern "C"  bool Curve25519FieldElement_TestBitZero_m828887570 (Curve25519FieldElement_t2608249339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement::ToBigInteger()
extern "C"  BigInteger_t4268922522 * Curve25519FieldElement_ToBigInteger_m1587954317 (Curve25519FieldElement_t2608249339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement::get_FieldName()
extern "C"  String_t* Curve25519FieldElement_get_FieldName_m2167128178 (Curve25519FieldElement_t2608249339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement::get_FieldSize()
extern "C"  int32_t Curve25519FieldElement_get_FieldSize_m1999058829 (Curve25519FieldElement_t2608249339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * Curve25519FieldElement_Add_m2985366075 (Curve25519FieldElement_t2608249339 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement::AddOne()
extern "C"  ECFieldElement_t1092946118 * Curve25519FieldElement_AddOne_m3531184813 (Curve25519FieldElement_t2608249339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * Curve25519FieldElement_Subtract_m305130058 (Curve25519FieldElement_t2608249339 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * Curve25519FieldElement_Multiply_m18595722 (Curve25519FieldElement_t2608249339 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * Curve25519FieldElement_Divide_m410411633 (Curve25519FieldElement_t2608249339 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement::Negate()
extern "C"  ECFieldElement_t1092946118 * Curve25519FieldElement_Negate_m2029841606 (Curve25519FieldElement_t2608249339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement::Square()
extern "C"  ECFieldElement_t1092946118 * Curve25519FieldElement_Square_m224171545 (Curve25519FieldElement_t2608249339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement::Invert()
extern "C"  ECFieldElement_t1092946118 * Curve25519FieldElement_Invert_m1161248736 (Curve25519FieldElement_t2608249339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement::Sqrt()
extern "C"  ECFieldElement_t1092946118 * Curve25519FieldElement_Sqrt_m2341743230 (Curve25519FieldElement_t2608249339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement::Equals(System.Object)
extern "C"  bool Curve25519FieldElement_Equals_m333849454 (Curve25519FieldElement_t2608249339 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement::Equals(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  bool Curve25519FieldElement_Equals_m2963202684 (Curve25519FieldElement_t2608249339 * __this, ECFieldElement_t1092946118 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement::Equals(Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement)
extern "C"  bool Curve25519FieldElement_Equals_m3044044104 (Curve25519FieldElement_t2608249339 * __this, Curve25519FieldElement_t2608249339 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement::GetHashCode()
extern "C"  int32_t Curve25519FieldElement_GetHashCode_m1525894502 (Curve25519FieldElement_t2608249339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement::.cctor()
extern "C"  void Curve25519FieldElement__cctor_m335125116 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
