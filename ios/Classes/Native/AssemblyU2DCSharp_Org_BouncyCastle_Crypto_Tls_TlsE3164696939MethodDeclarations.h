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

// Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities
struct TlsExtensionsUtilities_t3164696939;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// Org.BouncyCastle.Crypto.Tls.HeartbeatExtension
struct HeartbeatExtension_t950151469;
// Org.BouncyCastle.Crypto.Tls.ServerNameList
struct ServerNameList_t405134486;
// Org.BouncyCastle.Crypto.Tls.CertificateStatusRequest
struct CertificateStatusRequest_t2118695048;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Heart950151469.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Serve405134486.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Cert2118695048.h"

// System.Void Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::.ctor()
extern "C"  void TlsExtensionsUtilities__ctor_m1075962354 (TlsExtensionsUtilities_t3164696939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::EnsureExtensionsInitialised(System.Collections.IDictionary)
extern "C"  Il2CppObject * TlsExtensionsUtilities_EnsureExtensionsInitialised_m457779164 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___extensions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::AddEncryptThenMacExtension(System.Collections.IDictionary)
extern "C"  void TlsExtensionsUtilities_AddEncryptThenMacExtension_m1606372430 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___extensions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::AddExtendedMasterSecretExtension(System.Collections.IDictionary)
extern "C"  void TlsExtensionsUtilities_AddExtendedMasterSecretExtension_m2127024528 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___extensions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::AddHeartbeatExtension(System.Collections.IDictionary,Org.BouncyCastle.Crypto.Tls.HeartbeatExtension)
extern "C"  void TlsExtensionsUtilities_AddHeartbeatExtension_m596122320 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___extensions0, HeartbeatExtension_t950151469 * ___heartbeatExtension1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::AddMaxFragmentLengthExtension(System.Collections.IDictionary,System.Byte)
extern "C"  void TlsExtensionsUtilities_AddMaxFragmentLengthExtension_m3971543090 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___extensions0, uint8_t ___maxFragmentLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::AddServerNameExtension(System.Collections.IDictionary,Org.BouncyCastle.Crypto.Tls.ServerNameList)
extern "C"  void TlsExtensionsUtilities_AddServerNameExtension_m3461171887 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___extensions0, ServerNameList_t405134486 * ___serverNameList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::AddStatusRequestExtension(System.Collections.IDictionary,Org.BouncyCastle.Crypto.Tls.CertificateStatusRequest)
extern "C"  void TlsExtensionsUtilities_AddStatusRequestExtension_m2809423562 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___extensions0, CertificateStatusRequest_t2118695048 * ___statusRequest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::AddTruncatedHMacExtension(System.Collections.IDictionary)
extern "C"  void TlsExtensionsUtilities_AddTruncatedHMacExtension_m1569523434 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___extensions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.HeartbeatExtension Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::GetHeartbeatExtension(System.Collections.IDictionary)
extern "C"  HeartbeatExtension_t950151469 * TlsExtensionsUtilities_GetHeartbeatExtension_m2354210248 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___extensions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::GetMaxFragmentLengthExtension(System.Collections.IDictionary)
extern "C"  int16_t TlsExtensionsUtilities_GetMaxFragmentLengthExtension_m835015576 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___extensions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.ServerNameList Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::GetServerNameExtension(System.Collections.IDictionary)
extern "C"  ServerNameList_t405134486 * TlsExtensionsUtilities_GetServerNameExtension_m3902271855 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___extensions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.CertificateStatusRequest Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::GetStatusRequestExtension(System.Collections.IDictionary)
extern "C"  CertificateStatusRequest_t2118695048 * TlsExtensionsUtilities_GetStatusRequestExtension_m3667846634 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___extensions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::HasEncryptThenMacExtension(System.Collections.IDictionary)
extern "C"  bool TlsExtensionsUtilities_HasEncryptThenMacExtension_m807699371 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___extensions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::HasExtendedMasterSecretExtension(System.Collections.IDictionary)
extern "C"  bool TlsExtensionsUtilities_HasExtendedMasterSecretExtension_m305794661 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___extensions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::HasTruncatedHMacExtension(System.Collections.IDictionary)
extern "C"  bool TlsExtensionsUtilities_HasTruncatedHMacExtension_m165799977 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___extensions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::CreateEmptyExtensionData()
extern "C"  ByteU5BU5D_t3397334013* TlsExtensionsUtilities_CreateEmptyExtensionData_m926524966 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::CreateEncryptThenMacExtension()
extern "C"  ByteU5BU5D_t3397334013* TlsExtensionsUtilities_CreateEncryptThenMacExtension_m1415764280 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::CreateExtendedMasterSecretExtension()
extern "C"  ByteU5BU5D_t3397334013* TlsExtensionsUtilities_CreateExtendedMasterSecretExtension_m3153440510 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::CreateHeartbeatExtension(Org.BouncyCastle.Crypto.Tls.HeartbeatExtension)
extern "C"  ByteU5BU5D_t3397334013* TlsExtensionsUtilities_CreateHeartbeatExtension_m4139973200 (Il2CppObject * __this /* static, unused */, HeartbeatExtension_t950151469 * ___heartbeatExtension0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::CreateMaxFragmentLengthExtension(System.Byte)
extern "C"  ByteU5BU5D_t3397334013* TlsExtensionsUtilities_CreateMaxFragmentLengthExtension_m1025354322 (Il2CppObject * __this /* static, unused */, uint8_t ___maxFragmentLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::CreateServerNameExtension(Org.BouncyCastle.Crypto.Tls.ServerNameList)
extern "C"  ByteU5BU5D_t3397334013* TlsExtensionsUtilities_CreateServerNameExtension_m105230571 (Il2CppObject * __this /* static, unused */, ServerNameList_t405134486 * ___serverNameList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::CreateStatusRequestExtension(Org.BouncyCastle.Crypto.Tls.CertificateStatusRequest)
extern "C"  ByteU5BU5D_t3397334013* TlsExtensionsUtilities_CreateStatusRequestExtension_m715646900 (Il2CppObject * __this /* static, unused */, CertificateStatusRequest_t2118695048 * ___statusRequest0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::CreateTruncatedHMacExtension()
extern "C"  ByteU5BU5D_t3397334013* TlsExtensionsUtilities_CreateTruncatedHMacExtension_m3185864574 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::ReadEmptyExtensionData(System.Byte[])
extern "C"  bool TlsExtensionsUtilities_ReadEmptyExtensionData_m2189191447 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___extensionData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::ReadEncryptThenMacExtension(System.Byte[])
extern "C"  bool TlsExtensionsUtilities_ReadEncryptThenMacExtension_m603227177 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___extensionData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::ReadExtendedMasterSecretExtension(System.Byte[])
extern "C"  bool TlsExtensionsUtilities_ReadExtendedMasterSecretExtension_m3251700907 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___extensionData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.HeartbeatExtension Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::ReadHeartbeatExtension(System.Byte[])
extern "C"  HeartbeatExtension_t950151469 * TlsExtensionsUtilities_ReadHeartbeatExtension_m3475053766 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___extensionData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::ReadMaxFragmentLengthExtension(System.Byte[])
extern "C"  int16_t TlsExtensionsUtilities_ReadMaxFragmentLengthExtension_m2915665714 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___extensionData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.ServerNameList Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::ReadServerNameExtension(System.Byte[])
extern "C"  ServerNameList_t405134486 * TlsExtensionsUtilities_ReadServerNameExtension_m1376285009 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___extensionData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.CertificateStatusRequest Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::ReadStatusRequestExtension(System.Byte[])
extern "C"  CertificateStatusRequest_t2118695048 * TlsExtensionsUtilities_ReadStatusRequestExtension_m1201475202 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___extensionData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsExtensionsUtilities::ReadTruncatedHMacExtension(System.Byte[])
extern "C"  bool TlsExtensionsUtilities_ReadTruncatedHMacExtension_m3935970335 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___extensionData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
