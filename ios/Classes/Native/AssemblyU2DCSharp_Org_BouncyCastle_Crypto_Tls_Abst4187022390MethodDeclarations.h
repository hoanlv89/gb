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

// Org.BouncyCastle.Crypto.Tls.AbstractTlsClient
struct AbstractTlsClient_t4187022390;
// Org.BouncyCastle.Crypto.Tls.TlsCipherFactory
struct TlsCipherFactory_t3073296058;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// Org.BouncyCastle.Crypto.Tls.TlsClientContext
struct TlsClientContext_t2883849761;
// Org.BouncyCastle.Crypto.Tls.TlsSession
struct TlsSession_t3695793821;
// Org.BouncyCastle.Crypto.Tls.ProtocolVersion
struct ProtocolVersion_t3273908466;
// System.Collections.IList
struct IList_t3321498491;
// Org.BouncyCastle.Crypto.Tls.TlsCompression
struct TlsCompression_t3250792153;
// Org.BouncyCastle.Crypto.Tls.TlsCipher
struct TlsCipher_t927308168;
// Org.BouncyCastle.Crypto.Tls.NewSessionTicket
struct NewSessionTicket_t3489773180;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Prot3273908466.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_NewS3489773180.h"

// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::.ctor()
extern "C"  void AbstractTlsClient__ctor_m3099869403 (AbstractTlsClient_t4187022390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::.ctor(Org.BouncyCastle.Crypto.Tls.TlsCipherFactory)
extern "C"  void AbstractTlsClient__ctor_m2584731191 (AbstractTlsClient_t4187022390 * __this, Il2CppObject * ___cipherFactory0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::get_HostNames()
extern "C"  List_1_t1398341365 * AbstractTlsClient_get_HostNames_m688596229 (AbstractTlsClient_t4187022390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::set_HostNames(System.Collections.Generic.List`1<System.String>)
extern "C"  void AbstractTlsClient_set_HostNames_m989914528 (AbstractTlsClient_t4187022390 * __this, List_1_t1398341365 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::AllowUnexpectedServerExtension(System.Int32,System.Byte[])
extern "C"  bool AbstractTlsClient_AllowUnexpectedServerExtension_m2871321245 (AbstractTlsClient_t4187022390 * __this, int32_t ___extensionType0, ByteU5BU5D_t3397334013* ___extensionData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::CheckForUnexpectedServerExtension(System.Collections.IDictionary,System.Int32)
extern "C"  void AbstractTlsClient_CheckForUnexpectedServerExtension_m3522669623 (AbstractTlsClient_t4187022390 * __this, Il2CppObject * ___serverExtensions0, int32_t ___extensionType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::Init(Org.BouncyCastle.Crypto.Tls.TlsClientContext)
extern "C"  void AbstractTlsClient_Init_m197034414 (AbstractTlsClient_t4187022390 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsSession Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::GetSessionToResume()
extern "C"  Il2CppObject * AbstractTlsClient_GetSessionToResume_m3041818073 (AbstractTlsClient_t4187022390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.ProtocolVersion Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::get_ClientHelloRecordLayerVersion()
extern "C"  ProtocolVersion_t3273908466 * AbstractTlsClient_get_ClientHelloRecordLayerVersion_m3205343946 (AbstractTlsClient_t4187022390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.ProtocolVersion Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::get_ClientVersion()
extern "C"  ProtocolVersion_t3273908466 * AbstractTlsClient_get_ClientVersion_m3323589000 (AbstractTlsClient_t4187022390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::get_IsFallback()
extern "C"  bool AbstractTlsClient_get_IsFallback_m1359512632 (AbstractTlsClient_t4187022390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::GetClientExtensions()
extern "C"  Il2CppObject * AbstractTlsClient_GetClientExtensions_m2553801562 (AbstractTlsClient_t4187022390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.ProtocolVersion Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::get_MinimumVersion()
extern "C"  ProtocolVersion_t3273908466 * AbstractTlsClient_get_MinimumVersion_m4235056455 (AbstractTlsClient_t4187022390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::NotifyServerVersion(Org.BouncyCastle.Crypto.Tls.ProtocolVersion)
extern "C"  void AbstractTlsClient_NotifyServerVersion_m4266865385 (AbstractTlsClient_t4187022390 * __this, ProtocolVersion_t3273908466 * ___serverVersion0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::GetCompressionMethods()
extern "C"  ByteU5BU5D_t3397334013* AbstractTlsClient_GetCompressionMethods_m2094945611 (AbstractTlsClient_t4187022390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::NotifySessionID(System.Byte[])
extern "C"  void AbstractTlsClient_NotifySessionID_m3066130426 (AbstractTlsClient_t4187022390 * __this, ByteU5BU5D_t3397334013* ___sessionID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::NotifySelectedCipherSuite(System.Int32)
extern "C"  void AbstractTlsClient_NotifySelectedCipherSuite_m78705455 (AbstractTlsClient_t4187022390 * __this, int32_t ___selectedCipherSuite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::NotifySelectedCompressionMethod(System.Byte)
extern "C"  void AbstractTlsClient_NotifySelectedCompressionMethod_m836236193 (AbstractTlsClient_t4187022390 * __this, uint8_t ___selectedCompressionMethod0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::ProcessServerExtensions(System.Collections.IDictionary)
extern "C"  void AbstractTlsClient_ProcessServerExtensions_m3162044884 (AbstractTlsClient_t4187022390 * __this, Il2CppObject * ___serverExtensions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::ProcessServerSupplementalData(System.Collections.IList)
extern "C"  void AbstractTlsClient_ProcessServerSupplementalData_m641619004 (AbstractTlsClient_t4187022390 * __this, Il2CppObject * ___serverSupplementalData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::GetClientSupplementalData()
extern "C"  Il2CppObject * AbstractTlsClient_GetClientSupplementalData_m1064151262 (AbstractTlsClient_t4187022390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsCompression Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::GetCompression()
extern "C"  Il2CppObject * AbstractTlsClient_GetCompression_m1669166367 (AbstractTlsClient_t4187022390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsCipher Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::GetCipher()
extern "C"  Il2CppObject * AbstractTlsClient_GetCipher_m2670473283 (AbstractTlsClient_t4187022390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsClient::NotifyNewSessionTicket(Org.BouncyCastle.Crypto.Tls.NewSessionTicket)
extern "C"  void AbstractTlsClient_NotifyNewSessionTicket_m3051814994 (AbstractTlsClient_t4187022390 * __this, NewSessionTicket_t3489773180 * ___newSessionTicket0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
