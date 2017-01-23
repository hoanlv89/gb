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

// Org.BouncyCastle.Security.DigestUtilities
struct DigestUtilities_t7273606;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;
// System.String
struct String_t;
// System.Collections.ICollection
struct ICollection_t91669223;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1344033143;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"

// System.Void Org.BouncyCastle.Security.DigestUtilities::.ctor()
extern "C"  void DigestUtilities__ctor_m1463683431 (DigestUtilities_t7273606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Security.DigestUtilities::.cctor()
extern "C"  void DigestUtilities__cctor_m1856451820 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Security.DigestUtilities::GetObjectIdentifier(System.String)
extern "C"  DerObjectIdentifier_t3495876513 * DigestUtilities_GetObjectIdentifier_m1436094344 (Il2CppObject * __this /* static, unused */, String_t* ___mechanism0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection Org.BouncyCastle.Security.DigestUtilities::get_Algorithms()
extern "C"  Il2CppObject * DigestUtilities_get_Algorithms_m2451858976 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Security.DigestUtilities::GetDigest(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  Il2CppObject * DigestUtilities_GetDigest_m3273812538 (Il2CppObject * __this /* static, unused */, DerObjectIdentifier_t3495876513 * ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Security.DigestUtilities::GetDigest(System.String)
extern "C"  Il2CppObject * DigestUtilities_GetDigest_m38780220 (Il2CppObject * __this /* static, unused */, String_t* ___algorithm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Security.DigestUtilities::GetAlgorithmName(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  String_t* DigestUtilities_GetAlgorithmName_m3540512952 (Il2CppObject * __this /* static, unused */, DerObjectIdentifier_t3495876513 * ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Security.DigestUtilities::CalculateDigest(System.String,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* DigestUtilities_CalculateDigest_m1127188092 (Il2CppObject * __this /* static, unused */, String_t* ___algorithm0, ByteU5BU5D_t3397334013* ___input1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Security.DigestUtilities::DoFinal(Org.BouncyCastle.Crypto.IDigest)
extern "C"  ByteU5BU5D_t3397334013* DigestUtilities_DoFinal_m1968880534 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___digest0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Security.DigestUtilities::DoFinal(Org.BouncyCastle.Crypto.IDigest,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* DigestUtilities_DoFinal_m3839612361 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___digest0, ByteU5BU5D_t3397334013* ___input1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
