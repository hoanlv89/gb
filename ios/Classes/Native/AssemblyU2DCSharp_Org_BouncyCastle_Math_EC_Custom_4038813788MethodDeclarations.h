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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1FieldElement
struct SecP521R1FieldElement_t4038813788;
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
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Custom_4038813788.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1FieldElement::.ctor(Org.BouncyCastle.Math.BigInteger)
extern "C"  void SecP521R1FieldElement__ctor_m220344187 (SecP521R1FieldElement_t4038813788 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1FieldElement::.ctor()
extern "C"  void SecP521R1FieldElement__ctor_m3448506489 (SecP521R1FieldElement_t4038813788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1FieldElement::.ctor(System.UInt32[])
extern "C"  void SecP521R1FieldElement__ctor_m1116015951 (SecP521R1FieldElement_t4038813788 * __this, UInt32U5BU5D_t59386216* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1FieldElement::get_IsZero()
extern "C"  bool SecP521R1FieldElement_get_IsZero_m1306786278 (SecP521R1FieldElement_t4038813788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1FieldElement::get_IsOne()
extern "C"  bool SecP521R1FieldElement_get_IsOne_m1701965106 (SecP521R1FieldElement_t4038813788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1FieldElement::TestBitZero()
extern "C"  bool SecP521R1FieldElement_TestBitZero_m2951386020 (SecP521R1FieldElement_t4038813788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1FieldElement::ToBigInteger()
extern "C"  BigInteger_t4268922522 * SecP521R1FieldElement_ToBigInteger_m803412209 (SecP521R1FieldElement_t4038813788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1FieldElement::get_FieldName()
extern "C"  String_t* SecP521R1FieldElement_get_FieldName_m917548402 (SecP521R1FieldElement_t4038813788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1FieldElement::get_FieldSize()
extern "C"  int32_t SecP521R1FieldElement_get_FieldSize_m3213758857 (SecP521R1FieldElement_t4038813788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1FieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP521R1FieldElement_Add_m3139781155 (SecP521R1FieldElement_t4038813788 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1FieldElement::AddOne()
extern "C"  ECFieldElement_t1092946118 * SecP521R1FieldElement_AddOne_m3626628977 (SecP521R1FieldElement_t4038813788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1FieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP521R1FieldElement_Subtract_m1173328078 (SecP521R1FieldElement_t4038813788 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1FieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP521R1FieldElement_Multiply_m538614214 (SecP521R1FieldElement_t4038813788 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1FieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP521R1FieldElement_Divide_m3287671341 (SecP521R1FieldElement_t4038813788 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1FieldElement::Negate()
extern "C"  ECFieldElement_t1092946118 * SecP521R1FieldElement_Negate_m3508078950 (SecP521R1FieldElement_t4038813788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1FieldElement::Square()
extern "C"  ECFieldElement_t1092946118 * SecP521R1FieldElement_Square_m2565334893 (SecP521R1FieldElement_t4038813788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1FieldElement::Invert()
extern "C"  ECFieldElement_t1092946118 * SecP521R1FieldElement_Invert_m2757194244 (SecP521R1FieldElement_t4038813788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1FieldElement::Sqrt()
extern "C"  ECFieldElement_t1092946118 * SecP521R1FieldElement_Sqrt_m1634445318 (SecP521R1FieldElement_t4038813788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1FieldElement::Equals(System.Object)
extern "C"  bool SecP521R1FieldElement_Equals_m1871390768 (SecP521R1FieldElement_t4038813788 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1FieldElement::Equals(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  bool SecP521R1FieldElement_Equals_m4057390978 (SecP521R1FieldElement_t4038813788 * __this, ECFieldElement_t1092946118 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1FieldElement::Equals(Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1FieldElement)
extern "C"  bool SecP521R1FieldElement_Equals_m408464158 (SecP521R1FieldElement_t4038813788 * __this, SecP521R1FieldElement_t4038813788 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1FieldElement::GetHashCode()
extern "C"  int32_t SecP521R1FieldElement_GetHashCode_m460928304 (SecP521R1FieldElement_t4038813788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1FieldElement::.cctor()
extern "C"  void SecP521R1FieldElement__cctor_m553066714 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
