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

// Org.BouncyCastle.Crypto.Tls.TlsProtocol
struct TlsProtocol_t2348540693;
// System.IO.Stream
struct Stream_t3255436806;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3117234712;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// Org.BouncyCastle.Crypto.Tls.Certificate
struct Certificate_t2775016569;
// System.Collections.IList
struct IList_t3321498491;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// Org.BouncyCastle.Crypto.Prng.IRandomGenerator
struct IRandomGenerator_t860704147;
// Org.BouncyCastle.Crypto.Tls.TlsContext
struct TlsContext_t4077776538;
// Org.BouncyCastle.Crypto.Tls.TlsKeyExchange
struct TlsKeyExchange_t520409047;
// Org.BouncyCastle.Crypto.Tls.TlsHandshakeHash
struct TlsHandshakeHash_t1728544356;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Security_Secure3117234712.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_IO_MemoryStream743994179.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Cert2775016569.h"

// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::.ctor(System.IO.Stream,Org.BouncyCastle.Security.SecureRandom)
extern "C"  void TlsProtocol__ctor_m2852868857 (TlsProtocol_t2348540693 * __this, Stream_t3255436806 * ___stream0, SecureRandom_t3117234712 * ___secureRandom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::.ctor(System.IO.Stream,System.IO.Stream,Org.BouncyCastle.Security.SecureRandom)
extern "C"  void TlsProtocol__ctor_m2191813708 (TlsProtocol_t2348540693 * __this, Stream_t3255436806 * ___input0, Stream_t3255436806 * ___output1, SecureRandom_t3117234712 * ___secureRandom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::HandleChangeCipherSpecMessage()
extern "C"  void TlsProtocol_HandleChangeCipherSpecMessage_m685868843 (TlsProtocol_t2348540693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::HandleWarningMessage(System.Byte)
extern "C"  void TlsProtocol_HandleWarningMessage_m419845316 (TlsProtocol_t2348540693 * __this, uint8_t ___description0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::ApplyMaxFragmentLengthExtension()
extern "C"  void TlsProtocol_ApplyMaxFragmentLengthExtension_m766119405 (TlsProtocol_t2348540693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::CheckReceivedChangeCipherSpec(System.Boolean)
extern "C"  void TlsProtocol_CheckReceivedChangeCipherSpec_m3629899052 (TlsProtocol_t2348540693 * __this, bool ___expected0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::CleanupHandshake()
extern "C"  void TlsProtocol_CleanupHandshake_m1471896387 (TlsProtocol_t2348540693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::CompleteHandshake()
extern "C"  void TlsProtocol_CompleteHandshake_m3016579322 (TlsProtocol_t2348540693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::ProcessRecord(System.Byte,System.Byte[],System.Int32,System.Int32)
extern "C"  void TlsProtocol_ProcessRecord_m1516957650 (TlsProtocol_t2348540693 * __this, uint8_t ___protocol0, ByteU5BU5D_t3397334013* ___buf1, int32_t ___offset2, int32_t ___len3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::ProcessHandshake()
extern "C"  void TlsProtocol_ProcessHandshake_m1816778386 (TlsProtocol_t2348540693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::ProcessApplicationData()
extern "C"  void TlsProtocol_ProcessApplicationData_m1949679953 (TlsProtocol_t2348540693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::ProcessAlert()
extern "C"  void TlsProtocol_ProcessAlert_m3351872121 (TlsProtocol_t2348540693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::ProcessChangeCipherSpec(System.Byte[],System.Int32,System.Int32)
extern "C"  void TlsProtocol_ProcessChangeCipherSpec_m1857830780 (TlsProtocol_t2348540693 * __this, ByteU5BU5D_t3397334013* ___buf0, int32_t ___off1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.TlsProtocol::ApplicationDataAvailable()
extern "C"  int32_t TlsProtocol_ApplicationDataAvailable_m3238110261 (TlsProtocol_t2348540693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.TlsProtocol::ReadApplicationData(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t TlsProtocol_ReadApplicationData_m3033883045 (TlsProtocol_t2348540693 * __this, ByteU5BU5D_t3397334013* ___buf0, int32_t ___offset1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::SafeReadRecord()
extern "C"  void TlsProtocol_SafeReadRecord_m2187872328 (TlsProtocol_t2348540693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::SafeWriteRecord(System.Byte,System.Byte[],System.Int32,System.Int32)
extern "C"  void TlsProtocol_SafeWriteRecord_m2190180823 (TlsProtocol_t2348540693 * __this, uint8_t ___type0, ByteU5BU5D_t3397334013* ___buf1, int32_t ___offset2, int32_t ___len3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::WriteData(System.Byte[],System.Int32,System.Int32)
extern "C"  void TlsProtocol_WriteData_m895087542 (TlsProtocol_t2348540693 * __this, ByteU5BU5D_t3397334013* ___buf0, int32_t ___offset1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::WriteHandshakeMessage(System.Byte[],System.Int32,System.Int32)
extern "C"  void TlsProtocol_WriteHandshakeMessage_m2444517762 (TlsProtocol_t2348540693 * __this, ByteU5BU5D_t3397334013* ___buf0, int32_t ___off1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Org.BouncyCastle.Crypto.Tls.TlsProtocol::get_Stream()
extern "C"  Stream_t3255436806 * TlsProtocol_get_Stream_m1576539161 (TlsProtocol_t2348540693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::FailWithError(System.Byte,System.Byte,System.String,System.Exception)
extern "C"  void TlsProtocol_FailWithError_m1447078810 (TlsProtocol_t2348540693 * __this, uint8_t ___alertLevel0, uint8_t ___alertDescription1, String_t* ___message2, Exception_t1927440687 * ___cause3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::InvalidateSession()
extern "C"  void TlsProtocol_InvalidateSession_m649127287 (TlsProtocol_t2348540693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::ProcessFinishedMessage(System.IO.MemoryStream)
extern "C"  void TlsProtocol_ProcessFinishedMessage_m1840374576 (TlsProtocol_t2348540693 * __this, MemoryStream_t743994179 * ___buf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::RaiseAlert(System.Byte,System.Byte,System.String,System.Exception)
extern "C"  void TlsProtocol_RaiseAlert_m2909451300 (TlsProtocol_t2348540693 * __this, uint8_t ___alertLevel0, uint8_t ___alertDescription1, String_t* ___message2, Exception_t1927440687 * ___cause3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::RaiseWarning(System.Byte,System.String)
extern "C"  void TlsProtocol_RaiseWarning_m1353752545 (TlsProtocol_t2348540693 * __this, uint8_t ___alertDescription0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::SendCertificateMessage(Org.BouncyCastle.Crypto.Tls.Certificate)
extern "C"  void TlsProtocol_SendCertificateMessage_m1762749333 (TlsProtocol_t2348540693 * __this, Certificate_t2775016569 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::SendChangeCipherSpecMessage()
extern "C"  void TlsProtocol_SendChangeCipherSpecMessage_m2978899037 (TlsProtocol_t2348540693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::SendFinishedMessage()
extern "C"  void TlsProtocol_SendFinishedMessage_m3920018241 (TlsProtocol_t2348540693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::SendSupplementalDataMessage(System.Collections.IList)
extern "C"  void TlsProtocol_SendSupplementalDataMessage_m3740894620 (TlsProtocol_t2348540693 * __this, Il2CppObject * ___supplementalData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsProtocol::CreateVerifyData(System.Boolean)
extern "C"  ByteU5BU5D_t3397334013* TlsProtocol_CreateVerifyData_m2461484120 (TlsProtocol_t2348540693 * __this, bool ___isServer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::Close()
extern "C"  void TlsProtocol_Close_m474203986 (TlsProtocol_t2348540693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::HandleClose(System.Boolean)
extern "C"  void TlsProtocol_HandleClose_m3192416443 (TlsProtocol_t2348540693 * __this, bool ___user_canceled0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::Flush()
extern "C"  void TlsProtocol_Flush_m2248304684 (TlsProtocol_t2348540693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.TlsProtocol::get_IsClosed()
extern "C"  bool TlsProtocol_get_IsClosed_m4037557825 (TlsProtocol_t2348540693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Org.BouncyCastle.Crypto.Tls.TlsProtocol::ProcessMaxFragmentLengthExtension(System.Collections.IDictionary,System.Collections.IDictionary,System.Byte)
extern "C"  int16_t TlsProtocol_ProcessMaxFragmentLengthExtension_m1120879179 (TlsProtocol_t2348540693 * __this, Il2CppObject * ___clientExtensions0, Il2CppObject * ___serverExtensions1, uint8_t ___alertDescription2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::RefuseRenegotiation()
extern "C"  void TlsProtocol_RefuseRenegotiation_m2243463704 (TlsProtocol_t2348540693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::AssertEmpty(System.IO.MemoryStream)
extern "C"  void TlsProtocol_AssertEmpty_m574796565 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___buf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsProtocol::CreateRandomBlock(System.Boolean,Org.BouncyCastle.Crypto.Prng.IRandomGenerator)
extern "C"  ByteU5BU5D_t3397334013* TlsProtocol_CreateRandomBlock_m2402064176 (Il2CppObject * __this /* static, unused */, bool ___useGmtUnixTime0, Il2CppObject * ___randomGenerator1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsProtocol::CreateRenegotiationInfo(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* TlsProtocol_CreateRenegotiationInfo_m3406140585 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___renegotiated_connection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::EstablishMasterSecret(Org.BouncyCastle.Crypto.Tls.TlsContext,Org.BouncyCastle.Crypto.Tls.TlsKeyExchange)
extern "C"  void TlsProtocol_EstablishMasterSecret_m3634416220 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___context0, Il2CppObject * ___keyExchange1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsProtocol::GetCurrentPrfHash(Org.BouncyCastle.Crypto.Tls.TlsContext,Org.BouncyCastle.Crypto.Tls.TlsHandshakeHash,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* TlsProtocol_GetCurrentPrfHash_m4276732730 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___context0, Il2CppObject * ___handshakeHash1, ByteU5BU5D_t3397334013* ___sslSender2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary Org.BouncyCastle.Crypto.Tls.TlsProtocol::ReadExtensions(System.IO.MemoryStream)
extern "C"  Il2CppObject * TlsProtocol_ReadExtensions_m1268598954 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Org.BouncyCastle.Crypto.Tls.TlsProtocol::ReadSupplementalDataMessage(System.IO.MemoryStream)
extern "C"  Il2CppObject * TlsProtocol_ReadSupplementalDataMessage_m298464603 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::WriteExtensions(System.IO.Stream,System.Collections.IDictionary)
extern "C"  void TlsProtocol_WriteExtensions_m457680817 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___output0, Il2CppObject * ___extensions1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::WriteSupplementalData(System.IO.Stream,System.Collections.IList)
extern "C"  void TlsProtocol_WriteSupplementalData_m1107325569 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___output0, Il2CppObject * ___supplementalData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.TlsProtocol::GetPrfAlgorithm(Org.BouncyCastle.Crypto.Tls.TlsContext,System.Int32)
extern "C"  int32_t TlsProtocol_GetPrfAlgorithm_m1735266870 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___context0, int32_t ___ciphersuite1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsProtocol::.cctor()
extern "C"  void TlsProtocol__cctor_m1563741099 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
