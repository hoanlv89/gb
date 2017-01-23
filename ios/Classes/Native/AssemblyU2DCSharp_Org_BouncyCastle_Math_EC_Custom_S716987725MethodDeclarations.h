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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R1FieldElement
struct SecP160R1FieldElement_t716987725;
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
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Custom_S716987725.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R1FieldElement::.ctor(Org.BouncyCastle.Math.BigInteger)
extern "C"  void SecP160R1FieldElement__ctor_m1532916844 (SecP160R1FieldElement_t716987725 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R1FieldElement::.ctor()
extern "C"  void SecP160R1FieldElement__ctor_m959410946 (SecP160R1FieldElement_t716987725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R1FieldElement::.ctor(System.UInt32[])
extern "C"  void SecP160R1FieldElement__ctor_m2657718616 (SecP160R1FieldElement_t716987725 * __this, UInt32U5BU5D_t59386216* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R1FieldElement::get_IsZero()
extern "C"  bool SecP160R1FieldElement_get_IsZero_m541352401 (SecP160R1FieldElement_t716987725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R1FieldElement::get_IsOne()
extern "C"  bool SecP160R1FieldElement_get_IsOne_m3782359007 (SecP160R1FieldElement_t716987725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R1FieldElement::TestBitZero()
extern "C"  bool SecP160R1FieldElement_TestBitZero_m3965097039 (SecP160R1FieldElement_t716987725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R1FieldElement::ToBigInteger()
extern "C"  BigInteger_t4268922522 * SecP160R1FieldElement_ToBigInteger_m931611910 (SecP160R1FieldElement_t716987725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R1FieldElement::get_FieldName()
extern "C"  String_t* SecP160R1FieldElement_get_FieldName_m1002393401 (SecP160R1FieldElement_t716987725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R1FieldElement::get_FieldSize()
extern "C"  int32_t SecP160R1FieldElement_get_FieldSize_m3958275774 (SecP160R1FieldElement_t716987725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R1FieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP160R1FieldElement_Add_m938747130 (SecP160R1FieldElement_t716987725 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R1FieldElement::AddOne()
extern "C"  ECFieldElement_t1092946118 * SecP160R1FieldElement_AddOne_m2453003546 (SecP160R1FieldElement_t716987725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R1FieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP160R1FieldElement_Subtract_m977732255 (SecP160R1FieldElement_t716987725 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R1FieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP160R1FieldElement_Multiply_m4040703927 (SecP160R1FieldElement_t716987725 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R1FieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP160R1FieldElement_Divide_m927702068 (SecP160R1FieldElement_t716987725 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R1FieldElement::Negate()
extern "C"  ECFieldElement_t1092946118 * SecP160R1FieldElement_Negate_m225720317 (SecP160R1FieldElement_t716987725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R1FieldElement::Square()
extern "C"  ECFieldElement_t1092946118 * SecP160R1FieldElement_Square_m2521224956 (SecP160R1FieldElement_t716987725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R1FieldElement::Invert()
extern "C"  ECFieldElement_t1092946118 * SecP160R1FieldElement_Invert_m2712868883 (SecP160R1FieldElement_t716987725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R1FieldElement::Sqrt()
extern "C"  ECFieldElement_t1092946118 * SecP160R1FieldElement_Sqrt_m2325915533 (SecP160R1FieldElement_t716987725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R1FieldElement::Equals(System.Object)
extern "C"  bool SecP160R1FieldElement_Equals_m792545061 (SecP160R1FieldElement_t716987725 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R1FieldElement::Equals(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  bool SecP160R1FieldElement_Equals_m885078733 (SecP160R1FieldElement_t716987725 * __this, ECFieldElement_t1092946118 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R1FieldElement::Equals(Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R1FieldElement)
extern "C"  bool SecP160R1FieldElement_Equals_m3230585342 (SecP160R1FieldElement_t716987725 * __this, SecP160R1FieldElement_t716987725 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R1FieldElement::GetHashCode()
extern "C"  int32_t SecP160R1FieldElement_GetHashCode_m3782519267 (SecP160R1FieldElement_t716987725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R1FieldElement::.cctor()
extern "C"  void SecP160R1FieldElement__cctor_m1390857091 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
