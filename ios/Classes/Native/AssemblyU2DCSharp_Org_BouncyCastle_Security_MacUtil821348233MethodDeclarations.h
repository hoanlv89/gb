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

// Org.BouncyCastle.Security.MacUtilities
struct MacUtilities_t821348233;
// Org.BouncyCastle.Crypto.IMac
struct IMac_t2321756708;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Org.BouncyCastle.Security.MacUtilities::.ctor()
extern "C"  void MacUtilities__ctor_m442120750 (MacUtilities_t821348233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Security.MacUtilities::.cctor()
extern "C"  void MacUtilities__cctor_m3809046315 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IMac Org.BouncyCastle.Security.MacUtilities::GetMac(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  Il2CppObject * MacUtilities_GetMac_m994658975 (Il2CppObject * __this /* static, unused */, DerObjectIdentifier_t3495876513 * ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IMac Org.BouncyCastle.Security.MacUtilities::GetMac(System.String)
extern "C"  Il2CppObject * MacUtilities_GetMac_m2053672213 (Il2CppObject * __this /* static, unused */, String_t* ___algorithm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Security.MacUtilities::GetAlgorithmName(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  String_t* MacUtilities_GetAlgorithmName_m18331947 (Il2CppObject * __this /* static, unused */, DerObjectIdentifier_t3495876513 * ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Security.MacUtilities::DoFinal(Org.BouncyCastle.Crypto.IMac)
extern "C"  ByteU5BU5D_t3397334013* MacUtilities_DoFinal_m3168660198 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___mac0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Security.MacUtilities::DoFinal(Org.BouncyCastle.Crypto.IMac,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* MacUtilities_DoFinal_m3436785865 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___mac0, ByteU5BU5D_t3397334013* ___input1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
