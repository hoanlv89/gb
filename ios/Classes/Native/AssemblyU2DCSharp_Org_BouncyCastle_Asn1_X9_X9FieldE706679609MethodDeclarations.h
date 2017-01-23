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

// Org.BouncyCastle.Asn1.X9.X9FieldElement
struct X9FieldElement_t706679609;
// Org.BouncyCastle.Math.EC.ECFieldElement
struct ECFieldElement_t1092946118;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Asn1.Asn1OctetString
struct Asn1OctetString_t1486532927;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECField1092946118.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1OctetS1486532927.h"

// System.Void Org.BouncyCastle.Asn1.X9.X9FieldElement::.ctor(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  void X9FieldElement__ctor_m2187993050 (X9FieldElement_t706679609 * __this, ECFieldElement_t1092946118 * ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X9.X9FieldElement::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Asn1.Asn1OctetString)
extern "C"  void X9FieldElement__ctor_m4060131198 (X9FieldElement_t706679609 * __this, BigInteger_t4268922522 * ___p0, Asn1OctetString_t1486532927 * ___s1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X9.X9FieldElement::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Org.BouncyCastle.Asn1.Asn1OctetString)
extern "C"  void X9FieldElement__ctor_m2215745958 (X9FieldElement_t706679609 * __this, int32_t ___m0, int32_t ___k11, int32_t ___k22, int32_t ___k33, Asn1OctetString_t1486532927 * ___s4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Asn1.X9.X9FieldElement::get_Value()
extern "C"  ECFieldElement_t1092946118 * X9FieldElement_get_Value_m632732043 (X9FieldElement_t706679609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X9.X9FieldElement::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * X9FieldElement_ToAsn1Object_m2544935361 (X9FieldElement_t706679609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
