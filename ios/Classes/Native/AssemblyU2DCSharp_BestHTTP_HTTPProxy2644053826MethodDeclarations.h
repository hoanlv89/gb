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

// BestHTTP.HTTPProxy
struct HTTPProxy_t2644053826;
// System.Uri
struct Uri_t19570940;
// BestHTTP.Authentication.Credentials
struct Credentials_t3762395084;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "AssemblyU2DCSharp_BestHTTP_Authentication_Credenti3762395084.h"

// System.Void BestHTTP.HTTPProxy::.ctor(System.Uri)
extern "C"  void HTTPProxy__ctor_m2440770516 (HTTPProxy_t2644053826 * __this, Uri_t19570940 * ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPProxy::.ctor(System.Uri,BestHTTP.Authentication.Credentials)
extern "C"  void HTTPProxy__ctor_m1234864412 (HTTPProxy_t2644053826 * __this, Uri_t19570940 * ___address0, Credentials_t3762395084 * ___credentials1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPProxy::.ctor(System.Uri,BestHTTP.Authentication.Credentials,System.Boolean)
extern "C"  void HTTPProxy__ctor_m1999728127 (HTTPProxy_t2644053826 * __this, Uri_t19570940 * ___address0, Credentials_t3762395084 * ___credentials1, bool ___isTransparent2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPProxy::.ctor(System.Uri,BestHTTP.Authentication.Credentials,System.Boolean,System.Boolean)
extern "C"  void HTTPProxy__ctor_m1389647054 (HTTPProxy_t2644053826 * __this, Uri_t19570940 * ___address0, Credentials_t3762395084 * ___credentials1, bool ___isTransparent2, bool ___sendWholeUri3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPProxy::.ctor(System.Uri,BestHTTP.Authentication.Credentials,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void HTTPProxy__ctor_m1491207499 (HTTPProxy_t2644053826 * __this, Uri_t19570940 * ___address0, Credentials_t3762395084 * ___credentials1, bool ___isTransparent2, bool ___sendWholeUri3, bool ___nonTransparentForHTTPS4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri BestHTTP.HTTPProxy::get_Address()
extern "C"  Uri_t19570940 * HTTPProxy_get_Address_m1994177776 (HTTPProxy_t2644053826 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPProxy::set_Address(System.Uri)
extern "C"  void HTTPProxy_set_Address_m750974691 (HTTPProxy_t2644053826 * __this, Uri_t19570940 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.Authentication.Credentials BestHTTP.HTTPProxy::get_Credentials()
extern "C"  Credentials_t3762395084 * HTTPProxy_get_Credentials_m1367413791 (HTTPProxy_t2644053826 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPProxy::set_Credentials(BestHTTP.Authentication.Credentials)
extern "C"  void HTTPProxy_set_Credentials_m4034490656 (HTTPProxy_t2644053826 * __this, Credentials_t3762395084 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPProxy::get_IsTransparent()
extern "C"  bool HTTPProxy_get_IsTransparent_m3706039060 (HTTPProxy_t2644053826 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPProxy::set_IsTransparent(System.Boolean)
extern "C"  void HTTPProxy_set_IsTransparent_m3262684659 (HTTPProxy_t2644053826 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPProxy::get_SendWholeUri()
extern "C"  bool HTTPProxy_get_SendWholeUri_m4084142667 (HTTPProxy_t2644053826 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPProxy::set_SendWholeUri(System.Boolean)
extern "C"  void HTTPProxy_set_SendWholeUri_m570717078 (HTTPProxy_t2644053826 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPProxy::get_NonTransparentForHTTPS()
extern "C"  bool HTTPProxy_get_NonTransparentForHTTPS_m1670341381 (HTTPProxy_t2644053826 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPProxy::set_NonTransparentForHTTPS(System.Boolean)
extern "C"  void HTTPProxy_set_NonTransparentForHTTPS_m2078190600 (HTTPProxy_t2644053826 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
