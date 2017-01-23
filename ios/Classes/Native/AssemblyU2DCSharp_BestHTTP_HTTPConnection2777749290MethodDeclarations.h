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

// BestHTTP.HTTPConnection
struct HTTPConnection_t2777749290;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Uri
struct Uri_t19570940;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t283079845;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t777637347;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPConnectionStates1509261476.h"
#include "mscorlib_System_Security_Cryptography_X509Certifica283079845.h"
#include "System_System_Security_Cryptography_X509Certificate777637347.h"
#include "System_System_Net_Security_SslPolicyErrors1928581431.h"

// System.Void BestHTTP.HTTPConnection::.ctor(System.String)
extern "C"  void HTTPConnection__ctor_m3940242205 (HTTPConnection_t2777749290 * __this, String_t* ___serverAddress0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPConnection::ThreadFunc(System.Object)
extern "C"  void HTTPConnection_ThreadFunc_m351004405 (HTTPConnection_t2777749290 * __this, Il2CppObject * ___param0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPConnection::Connect()
extern "C"  void HTTPConnection_Connect_m1569554337 (HTTPConnection_t2777749290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPConnection::Receive()
extern "C"  bool HTTPConnection_Receive_m2189430184 (HTTPConnection_t2777749290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPConnection::TryLoadAllFromCache()
extern "C"  bool HTTPConnection_TryLoadAllFromCache_m590324173 (HTTPConnection_t2777749290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPConnection::TryStoreInCache()
extern "C"  void HTTPConnection_TryStoreInCache_m2765861342 (HTTPConnection_t2777749290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri BestHTTP.HTTPConnection::GetRedirectUri(System.String)
extern "C"  Uri_t19570940 * HTTPConnection_GetRedirectUri_m655311997 (HTTPConnection_t2777749290 * __this, String_t* ___location0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPConnection::Abort(BestHTTP.HTTPConnectionStates)
extern "C"  void HTTPConnection_Abort_m1709050157 (HTTPConnection_t2777749290 * __this, int32_t ___newState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPConnection::Close()
extern "C"  void HTTPConnection_Close_m1767971005 (HTTPConnection_t2777749290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPConnection::Dispose(System.Boolean)
extern "C"  void HTTPConnection_Dispose_m4188056659 (HTTPConnection_t2777749290 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPConnection::<Connect>m__0(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C"  bool HTTPConnection_U3CConnectU3Em__0_m2861839113 (HTTPConnection_t2777749290 * __this, Il2CppObject * ___sender0, X509Certificate_t283079845 * ___cert1, X509Chain_t777637347 * ___chain2, int32_t ___errors3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
