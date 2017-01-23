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

// Org.BouncyCastle.Asn1.X9.X9IntegerConverter
struct X9IntegerConverter_t1331659747;
// Org.BouncyCastle.Math.EC.ECFieldElement
struct ECFieldElement_t1092946118;
// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t140895757;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECField1092946118.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECCurve140895757.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Asn1.X9.X9IntegerConverter::.ctor()
extern "C"  void X9IntegerConverter__ctor_m3149757454 (X9IntegerConverter_t1331659747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.X9.X9IntegerConverter::GetByteLength(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  int32_t X9IntegerConverter_GetByteLength_m2178657776 (Il2CppObject * __this /* static, unused */, ECFieldElement_t1092946118 * ___fe0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.X9.X9IntegerConverter::GetByteLength(Org.BouncyCastle.Math.EC.ECCurve)
extern "C"  int32_t X9IntegerConverter_GetByteLength_m469827501 (Il2CppObject * __this /* static, unused */, ECCurve_t140895757 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Asn1.X9.X9IntegerConverter::IntegerToBytes(Org.BouncyCastle.Math.BigInteger,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* X9IntegerConverter_IntegerToBytes_m2552887701 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___s0, int32_t ___qLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
