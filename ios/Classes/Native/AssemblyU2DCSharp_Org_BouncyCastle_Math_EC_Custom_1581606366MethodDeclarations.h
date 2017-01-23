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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1FieldElement
struct SecP192R1FieldElement_t1581606366;
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
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Custom_1581606366.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1FieldElement::.ctor(Org.BouncyCastle.Math.BigInteger)
extern "C"  void SecP192R1FieldElement__ctor_m3334181203 (SecP192R1FieldElement_t1581606366 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1FieldElement::.ctor()
extern "C"  void SecP192R1FieldElement__ctor_m2644514045 (SecP192R1FieldElement_t1581606366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1FieldElement::.ctor(System.UInt32[])
extern "C"  void SecP192R1FieldElement__ctor_m1842038519 (SecP192R1FieldElement_t1581606366 * __this, UInt32U5BU5D_t59386216* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1FieldElement::get_IsZero()
extern "C"  bool SecP192R1FieldElement_get_IsZero_m529138368 (SecP192R1FieldElement_t1581606366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1FieldElement::get_IsOne()
extern "C"  bool SecP192R1FieldElement_get_IsOne_m3981661012 (SecP192R1FieldElement_t1581606366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1FieldElement::TestBitZero()
extern "C"  bool SecP192R1FieldElement_TestBitZero_m3711229826 (SecP192R1FieldElement_t1581606366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1FieldElement::ToBigInteger()
extern "C"  BigInteger_t4268922522 * SecP192R1FieldElement_ToBigInteger_m755109285 (SecP192R1FieldElement_t1581606366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1FieldElement::get_FieldName()
extern "C"  String_t* SecP192R1FieldElement_get_FieldName_m3971883844 (SecP192R1FieldElement_t1581606366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1FieldElement::get_FieldSize()
extern "C"  int32_t SecP192R1FieldElement_get_FieldSize_m1043881573 (SecP192R1FieldElement_t1581606366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1FieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP192R1FieldElement_Add_m2302126443 (SecP192R1FieldElement_t1581606366 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1FieldElement::AddOne()
extern "C"  ECFieldElement_t1092946118 * SecP192R1FieldElement_AddOne_m3213610709 (SecP192R1FieldElement_t1581606366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1FieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP192R1FieldElement_Subtract_m3082808512 (SecP192R1FieldElement_t1581606366 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1FieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP192R1FieldElement_Multiply_m2624551616 (SecP192R1FieldElement_t1581606366 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1FieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP192R1FieldElement_Divide_m1368564425 (SecP192R1FieldElement_t1581606366 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1FieldElement::Negate()
extern "C"  ECFieldElement_t1092946118 * SecP192R1FieldElement_Negate_m2353819496 (SecP192R1FieldElement_t1581606366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1FieldElement::Square()
extern "C"  ECFieldElement_t1092946118 * SecP192R1FieldElement_Square_m3007602369 (SecP192R1FieldElement_t1581606366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1FieldElement::Invert()
extern "C"  ECFieldElement_t1092946118 * SecP192R1FieldElement_Invert_m138174394 (SecP192R1FieldElement_t1581606366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1FieldElement::Sqrt()
extern "C"  ECFieldElement_t1092946118 * SecP192R1FieldElement_Sqrt_m3358473424 (SecP192R1FieldElement_t1581606366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1FieldElement::Equals(System.Object)
extern "C"  bool SecP192R1FieldElement_Equals_m3491588406 (SecP192R1FieldElement_t1581606366 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1FieldElement::Equals(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  bool SecP192R1FieldElement_Equals_m1427023780 (SecP192R1FieldElement_t1581606366 * __this, ECFieldElement_t1092946118 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1FieldElement::Equals(Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1FieldElement)
extern "C"  bool SecP192R1FieldElement_Equals_m185421854 (SecP192R1FieldElement_t1581606366 * __this, SecP192R1FieldElement_t1581606366 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1FieldElement::GetHashCode()
extern "C"  int32_t SecP192R1FieldElement_GetHashCode_m3761827150 (SecP192R1FieldElement_t1581606366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1FieldElement::.cctor()
extern "C"  void SecP192R1FieldElement__cctor_m3174538796 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
