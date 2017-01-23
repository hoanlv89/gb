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

// Org.BouncyCastle.Crypto.Tls.RecordStream
struct RecordStream_t911577901;
// Org.BouncyCastle.Crypto.Tls.TlsProtocol
struct TlsProtocol_t2348540693;
// System.IO.Stream
struct Stream_t3255436806;
// Org.BouncyCastle.Crypto.Tls.TlsContext
struct TlsContext_t4077776538;
// Org.BouncyCastle.Crypto.Tls.ProtocolVersion
struct ProtocolVersion_t3273908466;
// Org.BouncyCastle.Crypto.Tls.TlsCompression
struct TlsCompression_t3250792153;
// Org.BouncyCastle.Crypto.Tls.TlsCipher
struct TlsCipher_t927308168;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Crypto.Tls.TlsHandshakeHash
struct TlsHandshakeHash_t1728544356;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_TlsP2348540693.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Prot3273908466.h"

// System.Void Org.BouncyCastle.Crypto.Tls.RecordStream::.ctor(Org.BouncyCastle.Crypto.Tls.TlsProtocol,System.IO.Stream,System.IO.Stream)
extern "C"  void RecordStream__ctor_m2726843947 (RecordStream_t911577901 * __this, TlsProtocol_t2348540693 * ___handler0, Stream_t3255436806 * ___input1, Stream_t3255436806 * ___output2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.RecordStream::Init(Org.BouncyCastle.Crypto.Tls.TlsContext)
extern "C"  void RecordStream_Init_m4258325976 (RecordStream_t911577901 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.RecordStream::GetPlaintextLimit()
extern "C"  int32_t RecordStream_GetPlaintextLimit_m1641565810 (RecordStream_t911577901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.RecordStream::SetPlaintextLimit(System.Int32)
extern "C"  void RecordStream_SetPlaintextLimit_m1199283597 (RecordStream_t911577901 * __this, int32_t ___plaintextLimit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.ProtocolVersion Org.BouncyCastle.Crypto.Tls.RecordStream::get_ReadVersion()
extern "C"  ProtocolVersion_t3273908466 * RecordStream_get_ReadVersion_m4079436532 (RecordStream_t911577901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.RecordStream::set_ReadVersion(Org.BouncyCastle.Crypto.Tls.ProtocolVersion)
extern "C"  void RecordStream_set_ReadVersion_m3226800715 (RecordStream_t911577901 * __this, ProtocolVersion_t3273908466 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.RecordStream::SetWriteVersion(Org.BouncyCastle.Crypto.Tls.ProtocolVersion)
extern "C"  void RecordStream_SetWriteVersion_m3050229527 (RecordStream_t911577901 * __this, ProtocolVersion_t3273908466 * ___writeVersion0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.RecordStream::SetRestrictReadVersion(System.Boolean)
extern "C"  void RecordStream_SetRestrictReadVersion_m2221574329 (RecordStream_t911577901 * __this, bool ___enabled0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.RecordStream::SetPendingConnectionState(Org.BouncyCastle.Crypto.Tls.TlsCompression,Org.BouncyCastle.Crypto.Tls.TlsCipher)
extern "C"  void RecordStream_SetPendingConnectionState_m1465283871 (RecordStream_t911577901 * __this, Il2CppObject * ___tlsCompression0, Il2CppObject * ___tlsCipher1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.RecordStream::SentWriteCipherSpec()
extern "C"  void RecordStream_SentWriteCipherSpec_m421496477 (RecordStream_t911577901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.RecordStream::ReceivedReadCipherSpec()
extern "C"  void RecordStream_ReceivedReadCipherSpec_m3662889053 (RecordStream_t911577901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.RecordStream::FinaliseHandshake()
extern "C"  void RecordStream_FinaliseHandshake_m4235553574 (RecordStream_t911577901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.RecordStream::ReadRecord()
extern "C"  bool RecordStream_ReadRecord_m4196152299 (RecordStream_t911577901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.RecordStream::DecodeAndVerify(System.Byte,System.IO.Stream,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* RecordStream_DecodeAndVerify_m3718192887 (RecordStream_t911577901 * __this, uint8_t ___type0, Stream_t3255436806 * ___input1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.RecordStream::WriteRecord(System.Byte,System.Byte[],System.Int32,System.Int32)
extern "C"  void RecordStream_WriteRecord_m2490560008 (RecordStream_t911577901 * __this, uint8_t ___type0, ByteU5BU5D_t3397334013* ___plaintext1, int32_t ___plaintextOffset2, int32_t ___plaintextLength3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.RecordStream::NotifyHelloComplete()
extern "C"  void RecordStream_NotifyHelloComplete_m3811465702 (RecordStream_t911577901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsHandshakeHash Org.BouncyCastle.Crypto.Tls.RecordStream::get_HandshakeHash()
extern "C"  Il2CppObject * RecordStream_get_HandshakeHash_m1637199603 (RecordStream_t911577901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsHandshakeHash Org.BouncyCastle.Crypto.Tls.RecordStream::PrepareToFinish()
extern "C"  Il2CppObject * RecordStream_PrepareToFinish_m2669967138 (RecordStream_t911577901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.RecordStream::UpdateHandshakeData(System.Byte[],System.Int32,System.Int32)
extern "C"  void RecordStream_UpdateHandshakeData_m1791143573 (RecordStream_t911577901 * __this, ByteU5BU5D_t3397334013* ___message0, int32_t ___offset1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.RecordStream::SafeClose()
extern "C"  void RecordStream_SafeClose_m2301263951 (RecordStream_t911577901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.RecordStream::Flush()
extern "C"  void RecordStream_Flush_m1197449888 (RecordStream_t911577901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.RecordStream::GetBufferContents()
extern "C"  ByteU5BU5D_t3397334013* RecordStream_GetBufferContents_m157261542 (RecordStream_t911577901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.RecordStream::CheckType(System.Byte,System.Byte)
extern "C"  void RecordStream_CheckType_m2223753736 (Il2CppObject * __this /* static, unused */, uint8_t ___type0, uint8_t ___alertDescription1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.RecordStream::CheckLength(System.Int32,System.Int32,System.Byte)
extern "C"  void RecordStream_CheckLength_m267196899 (Il2CppObject * __this /* static, unused */, int32_t ___length0, int32_t ___limit1, uint8_t ___alertDescription2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
