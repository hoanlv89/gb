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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1FieldElement
struct SecP192K1FieldElement_t1844544417;
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
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Custom_1844544417.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1FieldElement::.ctor(Org.BouncyCastle.Math.BigInteger)
extern "C"  void SecP192K1FieldElement__ctor_m2320025536 (SecP192K1FieldElement_t1844544417 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1FieldElement::.ctor()
extern "C"  void SecP192K1FieldElement__ctor_m1599604858 (SecP192K1FieldElement_t1844544417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1FieldElement::.ctor(System.UInt32[])
extern "C"  void SecP192K1FieldElement__ctor_m2661636852 (SecP192K1FieldElement_t1844544417 * __this, UInt32U5BU5D_t59386216* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1FieldElement::get_IsZero()
extern "C"  bool SecP192K1FieldElement_get_IsZero_m2822612825 (SecP192K1FieldElement_t1844544417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1FieldElement::get_IsOne()
extern "C"  bool SecP192K1FieldElement_get_IsOne_m1980128171 (SecP192K1FieldElement_t1844544417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1FieldElement::TestBitZero()
extern "C"  bool SecP192K1FieldElement_TestBitZero_m3831041131 (SecP192K1FieldElement_t1844544417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1FieldElement::ToBigInteger()
extern "C"  BigInteger_t4268922522 * SecP192K1FieldElement_ToBigInteger_m3758520206 (SecP192K1FieldElement_t1844544417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1FieldElement::get_FieldName()
extern "C"  String_t* SecP192K1FieldElement_get_FieldName_m1926885233 (SecP192K1FieldElement_t1844544417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1FieldElement::get_FieldSize()
extern "C"  int32_t SecP192K1FieldElement_get_FieldSize_m4220690334 (SecP192K1FieldElement_t1844544417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1FieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP192K1FieldElement_Add_m43641166 (SecP192K1FieldElement_t1844544417 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1FieldElement::AddOne()
extern "C"  ECFieldElement_t1092946118 * SecP192K1FieldElement_AddOne_m1802628210 (SecP192K1FieldElement_t1844544417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1FieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP192K1FieldElement_Subtract_m583600355 (SecP192K1FieldElement_t1844544417 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1FieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP192K1FieldElement_Multiply_m3957108003 (SecP192K1FieldElement_t1844544417 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1FieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP192K1FieldElement_Divide_m3893480940 (SecP192K1FieldElement_t1844544417 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1FieldElement::Negate()
extern "C"  ECFieldElement_t1092946118 * SecP192K1FieldElement_Negate_m1770786277 (SecP192K1FieldElement_t1844544417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1FieldElement::Square()
extern "C"  ECFieldElement_t1092946118 * SecP192K1FieldElement_Square_m1284215012 (SecP192K1FieldElement_t1844544417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1FieldElement::Invert()
extern "C"  ECFieldElement_t1092946118 * SecP192K1FieldElement_Invert_m908148055 (SecP192K1FieldElement_t1844544417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1FieldElement::Sqrt()
extern "C"  ECFieldElement_t1092946118 * SecP192K1FieldElement_Sqrt_m687918141 (SecP192K1FieldElement_t1844544417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1FieldElement::Equals(System.Object)
extern "C"  bool SecP192K1FieldElement_Equals_m1461407661 (SecP192K1FieldElement_t1844544417 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1FieldElement::Equals(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  bool SecP192K1FieldElement_Equals_m881616493 (SecP192K1FieldElement_t1844544417 * __this, ECFieldElement_t1092946118 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1FieldElement::Equals(Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1FieldElement)
extern "C"  bool SecP192K1FieldElement_Equals_m3426807934 (SecP192K1FieldElement_t1844544417 * __this, SecP192K1FieldElement_t1844544417 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1FieldElement::GetHashCode()
extern "C"  int32_t SecP192K1FieldElement_GetHashCode_m1117617559 (SecP192K1FieldElement_t1844544417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1FieldElement::.cctor()
extern "C"  void SecP192K1FieldElement__cctor_m3648279503 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
