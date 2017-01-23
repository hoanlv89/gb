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

// Org.BouncyCastle.Crypto.Tls.AbstractTlsServer
struct AbstractTlsServer_t3501337442;
// Org.BouncyCastle.Crypto.Tls.TlsCipherFactory
struct TlsCipherFactory_t3073296058;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Crypto.Tls.ProtocolVersion
struct ProtocolVersion_t3273908466;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// Org.BouncyCastle.Crypto.Tls.TlsServerContext
struct TlsServerContext_t1771883469;
// System.Collections.IList
struct IList_t3321498491;
// Org.BouncyCastle.Crypto.Tls.CertificateStatus
struct CertificateStatus_t1829945713;
// Org.BouncyCastle.Crypto.Tls.CertificateRequest
struct CertificateRequest_t4188827490;
// Org.BouncyCastle.Crypto.Tls.Certificate
struct Certificate_t2775016569;
// Org.BouncyCastle.Crypto.Tls.TlsCompression
struct TlsCompression_t3250792153;
// Org.BouncyCastle.Crypto.Tls.TlsCipher
struct TlsCipher_t927308168;
// Org.BouncyCastle.Crypto.Tls.NewSessionTicket
struct NewSessionTicket_t3489773180;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Prot3273908466.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Tls_Cert2775016569.h"

// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::.ctor()
extern "C"  void AbstractTlsServer__ctor_m2625397591 (AbstractTlsServer_t3501337442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::.ctor(Org.BouncyCastle.Crypto.Tls.TlsCipherFactory)
extern "C"  void AbstractTlsServer__ctor_m666377915 (AbstractTlsServer_t3501337442 * __this, Il2CppObject * ___cipherFactory0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::get_AllowEncryptThenMac()
extern "C"  bool AbstractTlsServer_get_AllowEncryptThenMac_m2604106312 (AbstractTlsServer_t3501337442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::get_AllowTruncatedHMac()
extern "C"  bool AbstractTlsServer_get_AllowTruncatedHMac_m3010495744 (AbstractTlsServer_t3501337442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::CheckServerExtensions()
extern "C"  Il2CppObject * AbstractTlsServer_CheckServerExtensions_m1364027198 (AbstractTlsServer_t3501337442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::GetCompressionMethods()
extern "C"  ByteU5BU5D_t3397334013* AbstractTlsServer_GetCompressionMethods_m2186299271 (AbstractTlsServer_t3501337442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.ProtocolVersion Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::get_MaximumVersion()
extern "C"  ProtocolVersion_t3273908466 * AbstractTlsServer_get_MaximumVersion_m2667872289 (AbstractTlsServer_t3501337442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.ProtocolVersion Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::get_MinimumVersion()
extern "C"  ProtocolVersion_t3273908466 * AbstractTlsServer_get_MinimumVersion_m2846545939 (AbstractTlsServer_t3501337442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::SupportsClientEccCapabilities(System.Int32[],System.Byte[])
extern "C"  bool AbstractTlsServer_SupportsClientEccCapabilities_m3446996141 (AbstractTlsServer_t3501337442 * __this, Int32U5BU5D_t3030399641* ___namedCurves0, ByteU5BU5D_t3397334013* ___ecPointFormats1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::Init(Org.BouncyCastle.Crypto.Tls.TlsServerContext)
extern "C"  void AbstractTlsServer_Init_m2922550190 (AbstractTlsServer_t3501337442 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::NotifyClientVersion(Org.BouncyCastle.Crypto.Tls.ProtocolVersion)
extern "C"  void AbstractTlsServer_NotifyClientVersion_m3534584681 (AbstractTlsServer_t3501337442 * __this, ProtocolVersion_t3273908466 * ___clientVersion0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::NotifyFallback(System.Boolean)
extern "C"  void AbstractTlsServer_NotifyFallback_m514273715 (AbstractTlsServer_t3501337442 * __this, bool ___isFallback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::NotifyOfferedCipherSuites(System.Int32[])
extern "C"  void AbstractTlsServer_NotifyOfferedCipherSuites_m220979450 (AbstractTlsServer_t3501337442 * __this, Int32U5BU5D_t3030399641* ___offeredCipherSuites0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::NotifyOfferedCompressionMethods(System.Byte[])
extern "C"  void AbstractTlsServer_NotifyOfferedCompressionMethods_m3910485300 (AbstractTlsServer_t3501337442 * __this, ByteU5BU5D_t3397334013* ___offeredCompressionMethods0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::ProcessClientExtensions(System.Collections.IDictionary)
extern "C"  void AbstractTlsServer_ProcessClientExtensions_m3955565684 (AbstractTlsServer_t3501337442 * __this, Il2CppObject * ___clientExtensions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.ProtocolVersion Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::GetServerVersion()
extern "C"  ProtocolVersion_t3273908466 * AbstractTlsServer_GetServerVersion_m3841492223 (AbstractTlsServer_t3501337442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::GetSelectedCipherSuite()
extern "C"  int32_t AbstractTlsServer_GetSelectedCipherSuite_m1440546445 (AbstractTlsServer_t3501337442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::GetSelectedCompressionMethod()
extern "C"  uint8_t AbstractTlsServer_GetSelectedCompressionMethod_m1534084231 (AbstractTlsServer_t3501337442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::GetServerExtensions()
extern "C"  Il2CppObject * AbstractTlsServer_GetServerExtensions_m2581729394 (AbstractTlsServer_t3501337442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::GetServerSupplementalData()
extern "C"  Il2CppObject * AbstractTlsServer_GetServerSupplementalData_m1237768982 (AbstractTlsServer_t3501337442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.CertificateStatus Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::GetCertificateStatus()
extern "C"  CertificateStatus_t1829945713 * AbstractTlsServer_GetCertificateStatus_m1471098880 (AbstractTlsServer_t3501337442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.CertificateRequest Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::GetCertificateRequest()
extern "C"  CertificateRequest_t4188827490 * AbstractTlsServer_GetCertificateRequest_m3733780468 (AbstractTlsServer_t3501337442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::ProcessClientSupplementalData(System.Collections.IList)
extern "C"  void AbstractTlsServer_ProcessClientSupplementalData_m2559935932 (AbstractTlsServer_t3501337442 * __this, Il2CppObject * ___clientSupplementalData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::NotifyClientCertificate(Org.BouncyCastle.Crypto.Tls.Certificate)
extern "C"  void AbstractTlsServer_NotifyClientCertificate_m1004559911 (AbstractTlsServer_t3501337442 * __this, Certificate_t2775016569 * ___clientCertificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsCompression Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::GetCompression()
extern "C"  Il2CppObject * AbstractTlsServer_GetCompression_m829130323 (AbstractTlsServer_t3501337442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsCipher Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::GetCipher()
extern "C"  Il2CppObject * AbstractTlsServer_GetCipher_m4206732519 (AbstractTlsServer_t3501337442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.NewSessionTicket Org.BouncyCastle.Crypto.Tls.AbstractTlsServer::GetNewSessionTicket()
extern "C"  NewSessionTicket_t3489773180 * AbstractTlsServer_GetNewSessionTicket_m1008643648 (AbstractTlsServer_t3501337442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
