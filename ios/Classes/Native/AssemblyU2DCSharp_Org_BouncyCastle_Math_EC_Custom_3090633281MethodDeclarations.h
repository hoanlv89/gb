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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecP128R1FieldElement
struct SecP128R1FieldElement_t3090633281;
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
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Custom_3090633281.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP128R1FieldElement::.ctor(Org.BouncyCastle.Math.BigInteger)
extern "C"  void SecP128R1FieldElement__ctor_m2550046928 (SecP128R1FieldElement_t3090633281 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP128R1FieldElement::.ctor()
extern "C"  void SecP128R1FieldElement__ctor_m387895182 (SecP128R1FieldElement_t3090633281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP128R1FieldElement::.ctor(System.UInt32[])
extern "C"  void SecP128R1FieldElement__ctor_m3578777716 (SecP128R1FieldElement_t3090633281 * __this, UInt32U5BU5D_t59386216* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP128R1FieldElement::get_IsZero()
extern "C"  bool SecP128R1FieldElement_get_IsZero_m1728158637 (SecP128R1FieldElement_t3090633281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP128R1FieldElement::get_IsOne()
extern "C"  bool SecP128R1FieldElement_get_IsOne_m1025709499 (SecP128R1FieldElement_t3090633281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP128R1FieldElement::TestBitZero()
extern "C"  bool SecP128R1FieldElement_TestBitZero_m3971202987 (SecP128R1FieldElement_t3090633281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Custom.Sec.SecP128R1FieldElement::ToBigInteger()
extern "C"  BigInteger_t4268922522 * SecP128R1FieldElement_ToBigInteger_m3039789746 (SecP128R1FieldElement_t3090633281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Math.EC.Custom.Sec.SecP128R1FieldElement::get_FieldName()
extern "C"  String_t* SecP128R1FieldElement_get_FieldName_m658769605 (SecP128R1FieldElement_t3090633281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecP128R1FieldElement::get_FieldSize()
extern "C"  int32_t SecP128R1FieldElement_get_FieldSize_m48181730 (SecP128R1FieldElement_t3090633281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP128R1FieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP128R1FieldElement_Add_m269718622 (SecP128R1FieldElement_t3090633281 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP128R1FieldElement::AddOne()
extern "C"  ECFieldElement_t1092946118 * SecP128R1FieldElement_AddOne_m3149983414 (SecP128R1FieldElement_t3090633281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP128R1FieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP128R1FieldElement_Subtract_m233785987 (SecP128R1FieldElement_t3090633281 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP128R1FieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP128R1FieldElement_Multiply_m591219923 (SecP128R1FieldElement_t3090633281 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP128R1FieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP128R1FieldElement_Divide_m4206690240 (SecP128R1FieldElement_t3090633281 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP128R1FieldElement::Negate()
extern "C"  ECFieldElement_t1092946118 * SecP128R1FieldElement_Negate_m3031379297 (SecP128R1FieldElement_t3090633281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP128R1FieldElement::Square()
extern "C"  ECFieldElement_t1092946118 * SecP128R1FieldElement_Square_m2088922208 (SecP128R1FieldElement_t3090633281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP128R1FieldElement::Invert()
extern "C"  ECFieldElement_t1092946118 * SecP128R1FieldElement_Invert_m2279991175 (SecP128R1FieldElement_t3090633281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP128R1FieldElement::Sqrt()
extern "C"  ECFieldElement_t1092946118 * SecP128R1FieldElement_Sqrt_m2140610201 (SecP128R1FieldElement_t3090633281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP128R1FieldElement::Equals(System.Object)
extern "C"  bool SecP128R1FieldElement_Equals_m1442935681 (SecP128R1FieldElement_t3090633281 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP128R1FieldElement::Equals(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  bool SecP128R1FieldElement_Equals_m2295619497 (SecP128R1FieldElement_t3090633281 * __this, ECFieldElement_t1092946118 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP128R1FieldElement::Equals(Org.BouncyCastle.Math.EC.Custom.Sec.SecP128R1FieldElement)
extern "C"  bool SecP128R1FieldElement_Equals_m510769534 (SecP128R1FieldElement_t3090633281 * __this, SecP128R1FieldElement_t3090633281 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecP128R1FieldElement::GetHashCode()
extern "C"  int32_t SecP128R1FieldElement_GetHashCode_m235619383 (SecP128R1FieldElement_t3090633281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP128R1FieldElement::.cctor()
extern "C"  void SecP128R1FieldElement__cctor_m2632089631 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
