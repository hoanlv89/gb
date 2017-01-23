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

// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;
// System.Uri
struct Uri_t19570940;
// BestHTTP.OnRequestFinishedDelegate
struct OnRequestFinishedDelegate_t3180754735;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.Stream
struct Stream_t3255436806;
// BestHTTP.HTTPResponse
struct HTTPResponse_t62748825;
// System.Exception
struct Exception_t1927440687;
// System.Object
struct Il2CppObject;
// BestHTTP.Authentication.Credentials
struct Credentials_t3762395084;
// BestHTTP.HTTPProxy
struct HTTPProxy_t2644053826;
// System.Collections.Generic.List`1<BestHTTP.Cookies.Cookie>
struct List_1_t3531925514;
// System.Func`4<BestHTTP.HTTPRequest,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Boolean>
struct Func_4_t3321346088;
// Org.BouncyCastle.Crypto.Tls.ICertificateVerifyer
struct ICertificateVerifyer_t565084154;
// Org.BouncyCastle.Crypto.Tls.IClientCredentialsProvider
struct IClientCredentialsProvider_t3199932449;
// BestHTTP.OnBeforeRedirectionDelegate
struct OnBeforeRedirectionDelegate_t290558967;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t3313120627;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t663144255;
// UnityEngine.WWWForm
struct WWWForm_t3950226929;
// BestHTTP.Forms.HTTPFormBase
struct HTTPFormBase_t1912072923;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// BestHTTP.OnHeaderEnumerationDelegate
struct OnHeaderEnumerationDelegate_t3923304806;
// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t283079845;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t777637347;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "AssemblyU2DCSharp_BestHTTP_OnRequestFinishedDelega3180754735.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPMethods178420096.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPResponse62748825.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_BestHTTP_Authentication_Credenti3762395084.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPProxy2644053826.h"
#include "AssemblyU2DCSharp_BestHTTP_Forms_HTTPFormUsage2139743243.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPRequestStates63938943.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "AssemblyU2DCSharp_BestHTTP_SupportedProtocols1503488249.h"
#include "AssemblyU2DCSharp_BestHTTP_OnBeforeRedirectionDeleg290558967.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Text_Encoding663144255.h"
#include "UnityEngine_UnityEngine_WWWForm3950226929.h"
#include "AssemblyU2DCSharp_BestHTTP_Forms_HTTPFormBase1912072923.h"
#include "AssemblyU2DCSharp_BestHTTP_OnHeaderEnumerationDele3923304806.h"
#include "mscorlib_System_IO_BinaryWriter3179371318.h"
#include "mscorlib_System_Security_Cryptography_X509Certifica283079845.h"
#include "System_System_Security_Cryptography_X509Certificate777637347.h"

// System.Void BestHTTP.HTTPRequest::.ctor(System.Uri)
extern "C"  void HTTPRequest__ctor_m2419060681 (HTTPRequest_t138485887 * __this, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::.ctor(System.Uri,BestHTTP.OnRequestFinishedDelegate)
extern "C"  void HTTPRequest__ctor_m1715757146 (HTTPRequest_t138485887 * __this, Uri_t19570940 * ___uri0, OnRequestFinishedDelegate_t3180754735 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::.ctor(System.Uri,System.Boolean,BestHTTP.OnRequestFinishedDelegate)
extern "C"  void HTTPRequest__ctor_m1004935553 (HTTPRequest_t138485887 * __this, Uri_t19570940 * ___uri0, bool ___isKeepAlive1, OnRequestFinishedDelegate_t3180754735 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::.ctor(System.Uri,System.Boolean,System.Boolean,BestHTTP.OnRequestFinishedDelegate)
extern "C"  void HTTPRequest__ctor_m3187084168 (HTTPRequest_t138485887 * __this, Uri_t19570940 * ___uri0, bool ___isKeepAlive1, bool ___disableCache2, OnRequestFinishedDelegate_t3180754735 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::.ctor(System.Uri,BestHTTP.HTTPMethods)
extern "C"  void HTTPRequest__ctor_m3552500927 (HTTPRequest_t138485887 * __this, Uri_t19570940 * ___uri0, uint8_t ___methodType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::.ctor(System.Uri,BestHTTP.HTTPMethods,BestHTTP.OnRequestFinishedDelegate)
extern "C"  void HTTPRequest__ctor_m3874256356 (HTTPRequest_t138485887 * __this, Uri_t19570940 * ___uri0, uint8_t ___methodType1, OnRequestFinishedDelegate_t3180754735 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::.ctor(System.Uri,BestHTTP.HTTPMethods,System.Boolean,BestHTTP.OnRequestFinishedDelegate)
extern "C"  void HTTPRequest__ctor_m3389888087 (HTTPRequest_t138485887 * __this, Uri_t19570940 * ___uri0, uint8_t ___methodType1, bool ___isKeepAlive2, OnRequestFinishedDelegate_t3180754735 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::.ctor(System.Uri,BestHTTP.HTTPMethods,System.Boolean,System.Boolean,BestHTTP.OnRequestFinishedDelegate)
extern "C"  void HTTPRequest__ctor_m234589654 (HTTPRequest_t138485887 * __this, Uri_t19570940 * ___uri0, uint8_t ___methodType1, bool ___isKeepAlive2, bool ___disableCache3, OnRequestFinishedDelegate_t3180754735 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri BestHTTP.HTTPRequest::get_Uri()
extern "C"  Uri_t19570940 * HTTPRequest_get_Uri_m2983861329 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_Uri(System.Uri)
extern "C"  void HTTPRequest_set_Uri_m1351417642 (HTTPRequest_t138485887 * __this, Uri_t19570940 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.HTTPMethods BestHTTP.HTTPRequest::get_MethodType()
extern "C"  uint8_t HTTPRequest_get_MethodType_m1103265739 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_MethodType(BestHTTP.HTTPMethods)
extern "C"  void HTTPRequest_set_MethodType_m1724817632 (HTTPRequest_t138485887 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] BestHTTP.HTTPRequest::get_RawData()
extern "C"  ByteU5BU5D_t3397334013* HTTPRequest_get_RawData_m1773278697 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_RawData(System.Byte[])
extern "C"  void HTTPRequest_set_RawData_m3792581456 (HTTPRequest_t138485887 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream BestHTTP.HTTPRequest::get_UploadStream()
extern "C"  Stream_t3255436806 * HTTPRequest_get_UploadStream_m845868434 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_UploadStream(System.IO.Stream)
extern "C"  void HTTPRequest_set_UploadStream_m3889962925 (HTTPRequest_t138485887 * __this, Stream_t3255436806 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPRequest::get_DisposeUploadStream()
extern "C"  bool HTTPRequest_get_DisposeUploadStream_m589787197 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_DisposeUploadStream(System.Boolean)
extern "C"  void HTTPRequest_set_DisposeUploadStream_m1989073270 (HTTPRequest_t138485887 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPRequest::get_UseUploadStreamLength()
extern "C"  bool HTTPRequest_get_UseUploadStreamLength_m1064683477 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_UseUploadStreamLength(System.Boolean)
extern "C"  void HTTPRequest_set_UseUploadStreamLength_m1609292924 (HTTPRequest_t138485887 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPRequest::get_IsKeepAlive()
extern "C"  bool HTTPRequest_get_IsKeepAlive_m645166827 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_IsKeepAlive(System.Boolean)
extern "C"  void HTTPRequest_set_IsKeepAlive_m2710531268 (HTTPRequest_t138485887 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPRequest::get_DisableCache()
extern "C"  bool HTTPRequest_get_DisableCache_m2551549305 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_DisableCache(System.Boolean)
extern "C"  void HTTPRequest_set_DisableCache_m333166860 (HTTPRequest_t138485887 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPRequest::get_UseStreaming()
extern "C"  bool HTTPRequest_get_UseStreaming_m1890803896 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_UseStreaming(System.Boolean)
extern "C"  void HTTPRequest_set_UseStreaming_m3436640525 (HTTPRequest_t138485887 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.HTTPRequest::get_StreamFragmentSize()
extern "C"  int32_t HTTPRequest_get_StreamFragmentSize_m1520592152 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_StreamFragmentSize(System.Int32)
extern "C"  void HTTPRequest_set_StreamFragmentSize_m749084849 (HTTPRequest_t138485887 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.OnRequestFinishedDelegate BestHTTP.HTTPRequest::get_Callback()
extern "C"  OnRequestFinishedDelegate_t3180754735 * HTTPRequest_get_Callback_m726802034 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_Callback(BestHTTP.OnRequestFinishedDelegate)
extern "C"  void HTTPRequest_set_Callback_m312107023 (HTTPRequest_t138485887 * __this, OnRequestFinishedDelegate_t3180754735 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPRequest::get_DisableRetry()
extern "C"  bool HTTPRequest_get_DisableRetry_m1010764953 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_DisableRetry(System.Boolean)
extern "C"  void HTTPRequest_set_DisableRetry_m3182111680 (HTTPRequest_t138485887 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPRequest::get_IsRedirected()
extern "C"  bool HTTPRequest_get_IsRedirected_m1717261844 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_IsRedirected(System.Boolean)
extern "C"  void HTTPRequest_set_IsRedirected_m2568100119 (HTTPRequest_t138485887 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri BestHTTP.HTTPRequest::get_RedirectUri()
extern "C"  Uri_t19570940 * HTTPRequest_get_RedirectUri_m1823944799 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_RedirectUri(System.Uri)
extern "C"  void HTTPRequest_set_RedirectUri_m3722000802 (HTTPRequest_t138485887 * __this, Uri_t19570940 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri BestHTTP.HTTPRequest::get_CurrentUri()
extern "C"  Uri_t19570940 * HTTPRequest_get_CurrentUri_m4190184434 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.HTTPResponse BestHTTP.HTTPRequest::get_Response()
extern "C"  HTTPResponse_t62748825 * HTTPRequest_get_Response_m1740439732 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_Response(BestHTTP.HTTPResponse)
extern "C"  void HTTPRequest_set_Response_m349100107 (HTTPRequest_t138485887 * __this, HTTPResponse_t62748825 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.HTTPResponse BestHTTP.HTTPRequest::get_ProxyResponse()
extern "C"  HTTPResponse_t62748825 * HTTPRequest_get_ProxyResponse_m851851488 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_ProxyResponse(BestHTTP.HTTPResponse)
extern "C"  void HTTPRequest_set_ProxyResponse_m1753219771 (HTTPRequest_t138485887 * __this, HTTPResponse_t62748825 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception BestHTTP.HTTPRequest::get_Exception()
extern "C"  Exception_t1927440687 * HTTPRequest_get_Exception_m75896849 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_Exception(System.Exception)
extern "C"  void HTTPRequest_set_Exception_m2496246160 (HTTPRequest_t138485887 * __this, Exception_t1927440687 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object BestHTTP.HTTPRequest::get_Tag()
extern "C"  Il2CppObject * HTTPRequest_get_Tag_m2005938294 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_Tag(System.Object)
extern "C"  void HTTPRequest_set_Tag_m4251754601 (HTTPRequest_t138485887 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.Authentication.Credentials BestHTTP.HTTPRequest::get_Credentials()
extern "C"  Credentials_t3762395084 * HTTPRequest_get_Credentials_m434163490 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_Credentials(BestHTTP.Authentication.Credentials)
extern "C"  void HTTPRequest_set_Credentials_m3452045213 (HTTPRequest_t138485887 * __this, Credentials_t3762395084 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPRequest::get_HasProxy()
extern "C"  bool HTTPRequest_get_HasProxy_m1214473091 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.HTTPProxy BestHTTP.HTTPRequest::get_Proxy()
extern "C"  HTTPProxy_t2644053826 * HTTPRequest_get_Proxy_m4043635690 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_Proxy(BestHTTP.HTTPProxy)
extern "C"  void HTTPRequest_set_Proxy_m2961271395 (HTTPRequest_t138485887 * __this, HTTPProxy_t2644053826 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.HTTPRequest::get_MaxRedirects()
extern "C"  int32_t HTTPRequest_get_MaxRedirects_m2881356518 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_MaxRedirects(System.Int32)
extern "C"  void HTTPRequest_set_MaxRedirects_m374941361 (HTTPRequest_t138485887 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPRequest::get_UseAlternateSSL()
extern "C"  bool HTTPRequest_get_UseAlternateSSL_m3899064386 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_UseAlternateSSL(System.Boolean)
extern "C"  void HTTPRequest_set_UseAlternateSSL_m1881560909 (HTTPRequest_t138485887 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPRequest::get_IsCookiesEnabled()
extern "C"  bool HTTPRequest_get_IsCookiesEnabled_m3331417521 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_IsCookiesEnabled(System.Boolean)
extern "C"  void HTTPRequest_set_IsCookiesEnabled_m187540510 (HTTPRequest_t138485887 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BestHTTP.Cookies.Cookie> BestHTTP.HTTPRequest::get_Cookies()
extern "C"  List_1_t3531925514 * HTTPRequest_get_Cookies_m1781321570 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_Cookies(System.Collections.Generic.List`1<BestHTTP.Cookies.Cookie>)
extern "C"  void HTTPRequest_set_Cookies_m2693805427 (HTTPRequest_t138485887 * __this, List_1_t3531925514 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.Forms.HTTPFormUsage BestHTTP.HTTPRequest::get_FormUsage()
extern "C"  int32_t HTTPRequest_get_FormUsage_m122067527 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_FormUsage(BestHTTP.Forms.HTTPFormUsage)
extern "C"  void HTTPRequest_set_FormUsage_m3402110954 (HTTPRequest_t138485887 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.HTTPRequestStates BestHTTP.HTTPRequest::get_State()
extern "C"  int32_t HTTPRequest_get_State_m2690647908 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_State(BestHTTP.HTTPRequestStates)
extern "C"  void HTTPRequest_set_State_m1132146125 (HTTPRequest_t138485887 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.HTTPRequest::get_RedirectCount()
extern "C"  int32_t HTTPRequest_get_RedirectCount_m2322587858 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_RedirectCount(System.Int32)
extern "C"  void HTTPRequest_set_RedirectCount_m3690556497 (HTTPRequest_t138485887 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::add_CustomCertificationValidator(System.Func`4<BestHTTP.HTTPRequest,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Boolean>)
extern "C"  void HTTPRequest_add_CustomCertificationValidator_m2400423838 (HTTPRequest_t138485887 * __this, Func_4_t3321346088 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::remove_CustomCertificationValidator(System.Func`4<BestHTTP.HTTPRequest,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Boolean>)
extern "C"  void HTTPRequest_remove_CustomCertificationValidator_m1153270127 (HTTPRequest_t138485887 * __this, Func_4_t3321346088 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan BestHTTP.HTTPRequest::get_ConnectTimeout()
extern "C"  TimeSpan_t3430258949  HTTPRequest_get_ConnectTimeout_m1431489713 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_ConnectTimeout(System.TimeSpan)
extern "C"  void HTTPRequest_set_ConnectTimeout_m521215516 (HTTPRequest_t138485887 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan BestHTTP.HTTPRequest::get_Timeout()
extern "C"  TimeSpan_t3430258949  HTTPRequest_get_Timeout_m3275367791 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_Timeout(System.TimeSpan)
extern "C"  void HTTPRequest_set_Timeout_m4046589786 (HTTPRequest_t138485887 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPRequest::get_EnableTimoutForStreaming()
extern "C"  bool HTTPRequest_get_EnableTimoutForStreaming_m2575058865 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_EnableTimoutForStreaming(System.Boolean)
extern "C"  void HTTPRequest_set_EnableTimoutForStreaming_m1461269886 (HTTPRequest_t138485887 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.HTTPRequest::get_Priority()
extern "C"  int32_t HTTPRequest_get_Priority_m25888725 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_Priority(System.Int32)
extern "C"  void HTTPRequest_set_Priority_m506835954 (HTTPRequest_t138485887 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.ICertificateVerifyer BestHTTP.HTTPRequest::get_CustomCertificateVerifyer()
extern "C"  Il2CppObject * HTTPRequest_get_CustomCertificateVerifyer_m2111473320 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_CustomCertificateVerifyer(Org.BouncyCastle.Crypto.Tls.ICertificateVerifyer)
extern "C"  void HTTPRequest_set_CustomCertificateVerifyer_m753513361 (HTTPRequest_t138485887 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.IClientCredentialsProvider BestHTTP.HTTPRequest::get_CustomClientCredentialsProvider()
extern "C"  Il2CppObject * HTTPRequest_get_CustomClientCredentialsProvider_m2818525640 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_CustomClientCredentialsProvider(Org.BouncyCastle.Crypto.Tls.IClientCredentialsProvider)
extern "C"  void HTTPRequest_set_CustomClientCredentialsProvider_m3721692341 (HTTPRequest_t138485887 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SupportedProtocols BestHTTP.HTTPRequest::get_ProtocolHandler()
extern "C"  int32_t HTTPRequest_get_ProtocolHandler_m1917230173 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_ProtocolHandler(BestHTTP.SupportedProtocols)
extern "C"  void HTTPRequest_set_ProtocolHandler_m1729354642 (HTTPRequest_t138485887 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::add_OnBeforeRedirection(BestHTTP.OnBeforeRedirectionDelegate)
extern "C"  void HTTPRequest_add_OnBeforeRedirection_m2483751955 (HTTPRequest_t138485887 * __this, OnBeforeRedirectionDelegate_t290558967 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::remove_OnBeforeRedirection(BestHTTP.OnBeforeRedirectionDelegate)
extern "C"  void HTTPRequest_remove_OnBeforeRedirection_m2563953896 (HTTPRequest_t138485887 * __this, OnBeforeRedirectionDelegate_t290558967 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.HTTPRequest::get_Downloaded()
extern "C"  int32_t HTTPRequest_get_Downloaded_m1791547884 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_Downloaded(System.Int32)
extern "C"  void HTTPRequest_set_Downloaded_m3664733137 (HTTPRequest_t138485887 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.HTTPRequest::get_DownloadLength()
extern "C"  int32_t HTTPRequest_get_DownloadLength_m196370267 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_DownloadLength(System.Int32)
extern "C"  void HTTPRequest_set_DownloadLength_m1034878170 (HTTPRequest_t138485887 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPRequest::get_DownloadProgressChanged()
extern "C"  bool HTTPRequest_get_DownloadProgressChanged_m1359144972 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_DownloadProgressChanged(System.Boolean)
extern "C"  void HTTPRequest_set_DownloadProgressChanged_m2713037253 (HTTPRequest_t138485887 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BestHTTP.HTTPRequest::get_UploadStreamLength()
extern "C"  int64_t HTTPRequest_get_UploadStreamLength_m3765882595 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BestHTTP.HTTPRequest::get_Uploaded()
extern "C"  int64_t HTTPRequest_get_Uploaded_m1731444640 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_Uploaded(System.Int64)
extern "C"  void HTTPRequest_set_Uploaded_m3606337237 (HTTPRequest_t138485887 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BestHTTP.HTTPRequest::get_UploadLength()
extern "C"  int64_t HTTPRequest_get_UploadLength_m1477775175 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_UploadLength(System.Int64)
extern "C"  void HTTPRequest_set_UploadLength_m4167384502 (HTTPRequest_t138485887 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPRequest::get_UploadProgressChanged()
extern "C"  bool HTTPRequest_get_UploadProgressChanged_m2075890397 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_UploadProgressChanged(System.Boolean)
extern "C"  void HTTPRequest_set_UploadProgressChanged_m3004224576 (HTTPRequest_t138485887 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> BestHTTP.HTTPRequest::get_Headers()
extern "C"  Dictionary_2_t3313120627 * HTTPRequest_get_Headers_m3633943519 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::set_Headers(System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>)
extern "C"  void HTTPRequest_set_Headers_m4077560374 (HTTPRequest_t138485887 * __this, Dictionary_2_t3313120627 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::AddField(System.String,System.String)
extern "C"  void HTTPRequest_AddField_m1328231191 (HTTPRequest_t138485887 * __this, String_t* ___fieldName0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::AddField(System.String,System.String,System.Text.Encoding)
extern "C"  void HTTPRequest_AddField_m3934655600 (HTTPRequest_t138485887 * __this, String_t* ___fieldName0, String_t* ___value1, Encoding_t663144255 * ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::AddBinaryData(System.String,System.Byte[])
extern "C"  void HTTPRequest_AddBinaryData_m467636307 (HTTPRequest_t138485887 * __this, String_t* ___fieldName0, ByteU5BU5D_t3397334013* ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::AddBinaryData(System.String,System.Byte[],System.String)
extern "C"  void HTTPRequest_AddBinaryData_m138434325 (HTTPRequest_t138485887 * __this, String_t* ___fieldName0, ByteU5BU5D_t3397334013* ___content1, String_t* ___fileName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::AddBinaryData(System.String,System.Byte[],System.String,System.String)
extern "C"  void HTTPRequest_AddBinaryData_m849064979 (HTTPRequest_t138485887 * __this, String_t* ___fieldName0, ByteU5BU5D_t3397334013* ___content1, String_t* ___fileName2, String_t* ___mimeType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::SetFields(UnityEngine.WWWForm)
extern "C"  void HTTPRequest_SetFields_m198971085 (HTTPRequest_t138485887 * __this, WWWForm_t3950226929 * ___wwwForm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::SetForm(BestHTTP.Forms.HTTPFormBase)
extern "C"  void HTTPRequest_SetForm_m197783860 (HTTPRequest_t138485887 * __this, HTTPFormBase_t1912072923 * ___form0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::ClearForm()
extern "C"  void HTTPRequest_ClearForm_m1719373119 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.Forms.HTTPFormBase BestHTTP.HTTPRequest::SelectFormImplementation()
extern "C"  HTTPFormBase_t1912072923 * HTTPRequest_SelectFormImplementation_m243010309 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::AddHeader(System.String,System.String)
extern "C"  void HTTPRequest_AddHeader_m967228588 (HTTPRequest_t138485887 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::SetHeader(System.String,System.String)
extern "C"  void HTTPRequest_SetHeader_m681279945 (HTTPRequest_t138485887 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPRequest::RemoveHeader(System.String)
extern "C"  bool HTTPRequest_RemoveHeader_m829577487 (HTTPRequest_t138485887 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPRequest::HasHeader(System.String)
extern "C"  bool HTTPRequest_HasHeader_m990572219 (HTTPRequest_t138485887 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.HTTPRequest::GetFirstHeaderValue(System.String)
extern "C"  String_t* HTTPRequest_GetFirstHeaderValue_m3792765723 (HTTPRequest_t138485887 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> BestHTTP.HTTPRequest::GetHeaderValues(System.String)
extern "C"  List_1_t1398341365 * HTTPRequest_GetHeaderValues_m2293990732 (HTTPRequest_t138485887 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::RemoveHeaders()
extern "C"  void HTTPRequest_RemoveHeaders_m3591834318 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::SetRangeHeader(System.Int32)
extern "C"  void HTTPRequest_SetRangeHeader_m464230479 (HTTPRequest_t138485887 * __this, int32_t ___firstBytePos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::SetRangeHeader(System.Int32,System.Int32)
extern "C"  void HTTPRequest_SetRangeHeader_m3286517058 (HTTPRequest_t138485887 * __this, int32_t ___firstBytePos0, int32_t ___lastBytePos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::EnumerateHeaders(BestHTTP.OnHeaderEnumerationDelegate)
extern "C"  void HTTPRequest_EnumerateHeaders_m1268814858 (HTTPRequest_t138485887 * __this, OnHeaderEnumerationDelegate_t3923304806 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::SendHeaders(System.IO.BinaryWriter)
extern "C"  void HTTPRequest_SendHeaders_m2505171255 (HTTPRequest_t138485887 * __this, BinaryWriter_t3179371318 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.HTTPRequest::DumpHeaders()
extern "C"  String_t* HTTPRequest_DumpHeaders_m4045734189 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] BestHTTP.HTTPRequest::GetEntityBody()
extern "C"  ByteU5BU5D_t3397334013* HTTPRequest_GetEntityBody_m1891134237 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::SendOutTo(System.IO.Stream)
extern "C"  void HTTPRequest_SendOutTo_m254142416 (HTTPRequest_t138485887 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::UpgradeCallback()
extern "C"  void HTTPRequest_UpgradeCallback_m2094558961 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::CallCallback()
extern "C"  void HTTPRequest_CallCallback_m2439102171 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPRequest::CallOnBeforeRedirection(System.Uri)
extern "C"  bool HTTPRequest_CallOnBeforeRedirection_m2503538125 (HTTPRequest_t138485887 * __this, Uri_t19570940 * ___redirectUri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::FinishStreaming()
extern "C"  void HTTPRequest_FinishStreaming_m4090637107 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::Prepare()
extern "C"  void HTTPRequest_Prepare_m3731468329 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPRequest::CallCustomCertificationValidator(System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain)
extern "C"  bool HTTPRequest_CallCustomCertificationValidator_m2497691603 (HTTPRequest_t138485887 * __this, X509Certificate_t283079845 * ___cert0, X509Chain_t777637347 * ___chain1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.HTTPRequest BestHTTP.HTTPRequest::Send()
extern "C"  HTTPRequest_t138485887 * HTTPRequest_Send_m901223240 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::Abort()
extern "C"  void HTTPRequest_Abort_m75209902 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::Clear()
extern "C"  void HTTPRequest_Clear_m1363422565 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object BestHTTP.HTTPRequest::get_Current()
extern "C"  Il2CppObject * HTTPRequest_get_Current_m4287105309 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPRequest::MoveNext()
extern "C"  bool HTTPRequest_MoveNext_m704945088 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::Reset()
extern "C"  void HTTPRequest_Reset_m2889390709 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.HTTPRequest BestHTTP.HTTPRequest::System.Collections.Generic.IEnumerator<BestHTTP.HTTPRequest>.get_Current()
extern "C"  HTTPRequest_t138485887 * HTTPRequest_System_Collections_Generic_IEnumeratorU3CBestHTTP_HTTPRequestU3E_get_Current_m2223461193 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::Dispose()
extern "C"  void HTTPRequest_Dispose_m48806283 (HTTPRequest_t138485887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPRequest::.cctor()
extern "C"  void HTTPRequest__cctor_m3647036827 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
