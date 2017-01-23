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

// Org.BouncyCastle.Crypto.Tls.TlsClientProtocol
struct TlsClientProtocol_t400461164;
// System.IO.Stream
struct Stream_t3255436806;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3117234712;
// Org.BouncyCastle.Crypto.Tls.TlsClient
struct TlsClient_t1962488424;
// Org.BouncyCastle.Crypto.Tls.TlsContext
struct TlsContext_t4077776538;
// Org.BouncyCastle.Crypto.Tls.AbstractTlsContext
struct AbstractTlsContext_t1662285836;
// Org.BouncyCastle.Crypto.Tls.TlsPeer
struct TlsPeer_t928921833;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.IList
struct IList_t3321498491;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// Org.BouncyCastle.Crypto.Tls.DigitallySigned
struct DigitallySigned_t2312486481;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Security_Secure3117234712.h"
#include "mscorlib_System_IO_MemoryStream743994179.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Digi2312486481.h"

// System.Void Org.BouncyCastle.Crypto.Tls.TlsClientProtocol::.ctor(System.IO.Stream,Org.BouncyCastle.Security.SecureRandom)
extern "C"  void TlsClientProtocol__ctor_m4189610610 (TlsClientProtocol_t400461164 * __this, Stream_t3255436806 * ___stream0, SecureRandom_t3117234712 * ___secureRandom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsClientProtocol::.ctor(System.IO.Stream,System.IO.Stream,Org.BouncyCastle.Security.SecureRandom)
extern "C"  void TlsClientProtocol__ctor_m3285268467 (TlsClientProtocol_t400461164 * __this, Stream_t3255436806 * ___input0, Stream_t3255436806 * ___output1, SecureRandom_t3117234712 * ___secureRandom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsClientProtocol::Connect(Org.BouncyCastle.Crypto.Tls.TlsClient)
extern "C"  void TlsClientProtocol_Connect_m3266865651 (TlsClientProtocol_t400461164 * __this, Il2CppObject * ___tlsClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsClientProtocol::CleanupHandshake()
extern "C"  void TlsClientProtocol_CleanupHandshake_m2387586034 (TlsClientProtocol_t400461164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsContext Org.BouncyCastle.Crypto.Tls.TlsClientProtocol::get_Context()
extern "C"  Il2CppObject * TlsClientProtocol_get_Context_m2021424090 (TlsClientProtocol_t400461164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.AbstractTlsContext Org.BouncyCastle.Crypto.Tls.TlsClientProtocol::get_ContextAdmin()
extern "C"  AbstractTlsContext_t1662285836 * TlsClientProtocol_get_ContextAdmin_m3229462385 (TlsClientProtocol_t400461164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsPeer Org.BouncyCastle.Crypto.Tls.TlsClientProtocol::get_Peer()
extern "C"  Il2CppObject * TlsClientProtocol_get_Peer_m3549798650 (TlsClientProtocol_t400461164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsClientProtocol::HandleHandshakeMessage(System.Byte,System.Byte[])
extern "C"  void TlsClientProtocol_HandleHandshakeMessage_m2802894465 (TlsClientProtocol_t400461164 * __this, uint8_t ___type0, ByteU5BU5D_t3397334013* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsClientProtocol::HandleSupplementalData(System.Collections.IList)
extern "C"  void TlsClientProtocol_HandleSupplementalData_m2809918490 (TlsClientProtocol_t400461164 * __this, Il2CppObject * ___serverSupplementalData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsClientProtocol::ReceiveNewSessionTicketMessage(System.IO.MemoryStream)
extern "C"  void TlsClientProtocol_ReceiveNewSessionTicketMessage_m2657145613 (TlsClientProtocol_t400461164 * __this, MemoryStream_t743994179 * ___buf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsClientProtocol::ReceiveServerHelloMessage(System.IO.MemoryStream)
extern "C"  void TlsClientProtocol_ReceiveServerHelloMessage_m1242149100 (TlsClientProtocol_t400461164 * __this, MemoryStream_t743994179 * ___buf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsClientProtocol::SendCertificateVerifyMessage(Org.BouncyCastle.Crypto.Tls.DigitallySigned)
extern "C"  void TlsClientProtocol_SendCertificateVerifyMessage_m1724517771 (TlsClientProtocol_t400461164 * __this, DigitallySigned_t2312486481 * ___certificateVerify0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsClientProtocol::SendClientHelloMessage()
extern "C"  void TlsClientProtocol_SendClientHelloMessage_m81745545 (TlsClientProtocol_t400461164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsClientProtocol::SendClientKeyExchangeMessage()
extern "C"  void TlsClientProtocol_SendClientKeyExchangeMessage_m2658313467 (TlsClientProtocol_t400461164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
