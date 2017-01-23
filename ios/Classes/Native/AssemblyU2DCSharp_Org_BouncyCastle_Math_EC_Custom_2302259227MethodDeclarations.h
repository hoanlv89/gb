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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1FieldElement
struct SecP224K1FieldElement_t2302259227;
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
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Custom_2302259227.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1FieldElement::.ctor(Org.BouncyCastle.Math.BigInteger)
extern "C"  void SecP224K1FieldElement__ctor_m3388359440 (SecP224K1FieldElement_t2302259227 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1FieldElement::.ctor()
extern "C"  void SecP224K1FieldElement__ctor_m3352331386 (SecP224K1FieldElement_t2302259227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1FieldElement::.ctor(System.UInt32[])
extern "C"  void SecP224K1FieldElement__ctor_m4090450708 (SecP224K1FieldElement_t2302259227 * __this, UInt32U5BU5D_t59386216* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1FieldElement::get_IsZero()
extern "C"  bool SecP224K1FieldElement_get_IsZero_m4103245251 (SecP224K1FieldElement_t2302259227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1FieldElement::get_IsOne()
extern "C"  bool SecP224K1FieldElement_get_IsOne_m595331665 (SecP224K1FieldElement_t2302259227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1FieldElement::TestBitZero()
extern "C"  bool SecP224K1FieldElement_TestBitZero_m2595970117 (SecP224K1FieldElement_t2302259227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1FieldElement::ToBigInteger()
extern "C"  BigInteger_t4268922522 * SecP224K1FieldElement_ToBigInteger_m1324052734 (SecP224K1FieldElement_t2302259227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1FieldElement::get_FieldName()
extern "C"  String_t* SecP224K1FieldElement_get_FieldName_m1014285827 (SecP224K1FieldElement_t2302259227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1FieldElement::get_FieldSize()
extern "C"  int32_t SecP224K1FieldElement_get_FieldSize_m2216571654 (SecP224K1FieldElement_t2302259227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1FieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP224K1FieldElement_Add_m4000302850 (SecP224K1FieldElement_t2302259227 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1FieldElement::AddOne()
extern "C"  ECFieldElement_t1092946118 * SecP224K1FieldElement_AddOne_m1356237842 (SecP224K1FieldElement_t2302259227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1FieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP224K1FieldElement_Subtract_m3973816489 (SecP224K1FieldElement_t2302259227 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1FieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP224K1FieldElement_Multiply_m471772257 (SecP224K1FieldElement_t2302259227 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1FieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP224K1FieldElement_Divide_m2340225352 (SecP224K1FieldElement_t2302259227 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1FieldElement::Negate()
extern "C"  ECFieldElement_t1092946118 * SecP224K1FieldElement_Negate_m828712363 (SecP224K1FieldElement_t2302259227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1FieldElement::Square()
extern "C"  ECFieldElement_t1092946118 * SecP224K1FieldElement_Square_m3715955980 (SecP224K1FieldElement_t2302259227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1FieldElement::Invert()
extern "C"  ECFieldElement_t1092946118 * SecP224K1FieldElement_Invert_m3938323813 (SecP224K1FieldElement_t2302259227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1FieldElement::Sqrt()
extern "C"  ECFieldElement_t1092946118 * SecP224K1FieldElement_Sqrt_m2364484635 (SecP224K1FieldElement_t2302259227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1FieldElement::Equals(System.Object)
extern "C"  bool SecP224K1FieldElement_Equals_m2125859631 (SecP224K1FieldElement_t2302259227 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1FieldElement::Equals(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  bool SecP224K1FieldElement_Equals_m2708380035 (SecP224K1FieldElement_t2302259227 * __this, ECFieldElement_t1092946118 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1FieldElement::Equals(Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1FieldElement)
extern "C"  bool SecP224K1FieldElement_Equals_m1706626174 (SecP224K1FieldElement_t2302259227 * __this, SecP224K1FieldElement_t2302259227 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1FieldElement::GetHashCode()
extern "C"  int32_t SecP224K1FieldElement_GetHashCode_m4284439473 (SecP224K1FieldElement_t2302259227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1FieldElement::.cctor()
extern "C"  void SecP224K1FieldElement__cctor_m415948597 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
