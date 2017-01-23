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

// Org.BouncyCastle.Crypto.Tls.ProtocolVersion
struct ProtocolVersion_t3273908466;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Prot3273908466.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Crypto.Tls.ProtocolVersion::.ctor(System.Int32,System.String)
extern "C"  void ProtocolVersion__ctor_m3565664720 (ProtocolVersion_t3273908466 * __this, int32_t ___v0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.ProtocolVersion::get_FullVersion()
extern "C"  int32_t ProtocolVersion_get_FullVersion_m3552355431 (ProtocolVersion_t3273908466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.ProtocolVersion::get_MajorVersion()
extern "C"  int32_t ProtocolVersion_get_MajorVersion_m1590306791 (ProtocolVersion_t3273908466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.ProtocolVersion::get_MinorVersion()
extern "C"  int32_t ProtocolVersion_get_MinorVersion_m2475832891 (ProtocolVersion_t3273908466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.ProtocolVersion::get_IsDtls()
extern "C"  bool ProtocolVersion_get_IsDtls_m866062633 (ProtocolVersion_t3273908466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.ProtocolVersion::get_IsSsl()
extern "C"  bool ProtocolVersion_get_IsSsl_m2723357354 (ProtocolVersion_t3273908466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.ProtocolVersion::get_IsTls()
extern "C"  bool ProtocolVersion_get_IsTls_m1284876713 (ProtocolVersion_t3273908466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.ProtocolVersion Org.BouncyCastle.Crypto.Tls.ProtocolVersion::GetEquivalentTLSVersion()
extern "C"  ProtocolVersion_t3273908466 * ProtocolVersion_GetEquivalentTLSVersion_m1866427923 (ProtocolVersion_t3273908466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.ProtocolVersion::IsEqualOrEarlierVersionOf(Org.BouncyCastle.Crypto.Tls.ProtocolVersion)
extern "C"  bool ProtocolVersion_IsEqualOrEarlierVersionOf_m1854737139 (ProtocolVersion_t3273908466 * __this, ProtocolVersion_t3273908466 * ___version0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.ProtocolVersion::IsLaterVersionOf(Org.BouncyCastle.Crypto.Tls.ProtocolVersion)
extern "C"  bool ProtocolVersion_IsLaterVersionOf_m1639350176 (ProtocolVersion_t3273908466 * __this, ProtocolVersion_t3273908466 * ___version0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.ProtocolVersion::Equals(System.Object)
extern "C"  bool ProtocolVersion_Equals_m1800756894 (ProtocolVersion_t3273908466 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.ProtocolVersion::Equals(Org.BouncyCastle.Crypto.Tls.ProtocolVersion)
extern "C"  bool ProtocolVersion_Equals_m3374916798 (ProtocolVersion_t3273908466 * __this, ProtocolVersion_t3273908466 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.ProtocolVersion::GetHashCode()
extern "C"  int32_t ProtocolVersion_GetHashCode_m1241178386 (ProtocolVersion_t3273908466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.ProtocolVersion Org.BouncyCastle.Crypto.Tls.ProtocolVersion::Get(System.Int32,System.Int32)
extern "C"  ProtocolVersion_t3273908466 * ProtocolVersion_Get_m2451368070 (Il2CppObject * __this /* static, unused */, int32_t ___major0, int32_t ___minor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Tls.ProtocolVersion::ToString()
extern "C"  String_t* ProtocolVersion_ToString_m2383508762 (ProtocolVersion_t3273908466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.ProtocolVersion Org.BouncyCastle.Crypto.Tls.ProtocolVersion::GetUnknownVersion(System.Int32,System.Int32,System.String)
extern "C"  ProtocolVersion_t3273908466 * ProtocolVersion_GetUnknownVersion_m477616700 (Il2CppObject * __this /* static, unused */, int32_t ___major0, int32_t ___minor1, String_t* ___prefix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.ProtocolVersion::.cctor()
extern "C"  void ProtocolVersion__cctor_m2720616024 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
