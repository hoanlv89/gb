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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecP256R1FieldElement
struct SecP256R1FieldElement_t1196028363;
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
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Custom_1196028363.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP256R1FieldElement::.ctor(Org.BouncyCastle.Math.BigInteger)
extern "C"  void SecP256R1FieldElement__ctor_m3558186816 (SecP256R1FieldElement_t1196028363 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP256R1FieldElement::.ctor()
extern "C"  void SecP256R1FieldElement__ctor_m2537878102 (SecP256R1FieldElement_t1196028363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP256R1FieldElement::.ctor(System.UInt32[])
extern "C"  void SecP256R1FieldElement__ctor_m2283885644 (SecP256R1FieldElement_t1196028363 * __this, UInt32U5BU5D_t59386216* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP256R1FieldElement::get_IsZero()
extern "C"  bool SecP256R1FieldElement_get_IsZero_m1756277247 (SecP256R1FieldElement_t1196028363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP256R1FieldElement::get_IsOne()
extern "C"  bool SecP256R1FieldElement_get_IsOne_m1556589393 (SecP256R1FieldElement_t1196028363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP256R1FieldElement::TestBitZero()
extern "C"  bool SecP256R1FieldElement_TestBitZero_m1409061341 (SecP256R1FieldElement_t1196028363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Custom.Sec.SecP256R1FieldElement::ToBigInteger()
extern "C"  BigInteger_t4268922522 * SecP256R1FieldElement_ToBigInteger_m2714125610 (SecP256R1FieldElement_t1196028363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Math.EC.Custom.Sec.SecP256R1FieldElement::get_FieldName()
extern "C"  String_t* SecP256R1FieldElement_get_FieldName_m4279329103 (SecP256R1FieldElement_t1196028363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecP256R1FieldElement::get_FieldSize()
extern "C"  int32_t SecP256R1FieldElement_get_FieldSize_m3162968426 (SecP256R1FieldElement_t1196028363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP256R1FieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP256R1FieldElement_Add_m1283003442 (SecP256R1FieldElement_t1196028363 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP256R1FieldElement::AddOne()
extern "C"  ECFieldElement_t1092946118 * SecP256R1FieldElement_AddOne_m29995918 (SecP256R1FieldElement_t1196028363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP256R1FieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP256R1FieldElement_Subtract_m515184913 (SecP256R1FieldElement_t1196028363 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP256R1FieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP256R1FieldElement_Multiply_m3799052449 (SecP256R1FieldElement_t1196028363 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP256R1FieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP256R1FieldElement_Divide_m1745430036 (SecP256R1FieldElement_t1196028363 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP256R1FieldElement::Negate()
extern "C"  ECFieldElement_t1092946118 * SecP256R1FieldElement_Negate_m720996287 (SecP256R1FieldElement_t1196028363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP256R1FieldElement::Square()
extern "C"  ECFieldElement_t1092946118 * SecP256R1FieldElement_Square_m341564880 (SecP256R1FieldElement_t1196028363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP256R1FieldElement::Invert()
extern "C"  ECFieldElement_t1092946118 * SecP256R1FieldElement_Invert_m1743089437 (SecP256R1FieldElement_t1196028363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP256R1FieldElement::Sqrt()
extern "C"  ECFieldElement_t1092946118 * SecP256R1FieldElement_Sqrt_m3620158615 (SecP256R1FieldElement_t1196028363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP256R1FieldElement::Equals(System.Object)
extern "C"  bool SecP256R1FieldElement_Equals_m1951261547 (SecP256R1FieldElement_t1196028363 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP256R1FieldElement::Equals(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  bool SecP256R1FieldElement_Equals_m2027270047 (SecP256R1FieldElement_t1196028363 * __this, ECFieldElement_t1092946118 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP256R1FieldElement::Equals(Org.BouncyCastle.Math.EC.Custom.Sec.SecP256R1FieldElement)
extern "C"  bool SecP256R1FieldElement_Equals_m385089854 (SecP256R1FieldElement_t1196028363 * __this, SecP256R1FieldElement_t1196028363 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecP256R1FieldElement::GetHashCode()
extern "C"  int32_t SecP256R1FieldElement_GetHashCode_m591882161 (SecP256R1FieldElement_t1196028363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP256R1FieldElement::.cctor()
extern "C"  void SecP256R1FieldElement__cctor_m375424277 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
