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

// BestHTTP.Authentication.Digest
struct Digest_t59399582;
// System.Uri
struct Uri_t19570940;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;
// BestHTTP.Authentication.Credentials
struct Credentials_t3762395084;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "AssemblyU2DCSharp_BestHTTP_Authentication_Authenti1276453517.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPRequest138485887.h"
#include "AssemblyU2DCSharp_BestHTTP_Authentication_Credenti3762395084.h"

// System.Void BestHTTP.Authentication.Digest::.ctor(System.Uri)
extern "C"  void Digest__ctor_m2076449218 (Digest_t59399582 * __this, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri BestHTTP.Authentication.Digest::get_Uri()
extern "C"  Uri_t19570940 * Digest_get_Uri_m2393566588 (Digest_t59399582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Authentication.Digest::set_Uri(System.Uri)
extern "C"  void Digest_set_Uri_m4047423905 (Digest_t59399582 * __this, Uri_t19570940 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.Authentication.AuthenticationTypes BestHTTP.Authentication.Digest::get_Type()
extern "C"  int32_t Digest_get_Type_m2038474228 (Digest_t59399582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Authentication.Digest::set_Type(BestHTTP.Authentication.AuthenticationTypes)
extern "C"  void Digest_set_Type_m1445172661 (Digest_t59399582 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Authentication.Digest::get_Realm()
extern "C"  String_t* Digest_get_Realm_m1043936066 (Digest_t59399582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Authentication.Digest::set_Realm(System.String)
extern "C"  void Digest_set_Realm_m1749211651 (Digest_t59399582 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Authentication.Digest::get_Stale()
extern "C"  bool Digest_get_Stale_m523647217 (Digest_t59399582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Authentication.Digest::set_Stale(System.Boolean)
extern "C"  void Digest_set_Stale_m1584766934 (Digest_t59399582 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Authentication.Digest::get_Nonce()
extern "C"  String_t* Digest_get_Nonce_m2743064162 (Digest_t59399582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Authentication.Digest::set_Nonce(System.String)
extern "C"  void Digest_set_Nonce_m85318333 (Digest_t59399582 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Authentication.Digest::get_Opaque()
extern "C"  String_t* Digest_get_Opaque_m2412204906 (Digest_t59399582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Authentication.Digest::set_Opaque(System.String)
extern "C"  void Digest_set_Opaque_m1722913363 (Digest_t59399582 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Authentication.Digest::get_Algorithm()
extern "C"  String_t* Digest_get_Algorithm_m2025975984 (Digest_t59399582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Authentication.Digest::set_Algorithm(System.String)
extern "C"  void Digest_set_Algorithm_m2223099935 (Digest_t59399582 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> BestHTTP.Authentication.Digest::get_ProtectedUris()
extern "C"  List_1_t1398341365 * Digest_get_ProtectedUris_m3316018690 (Digest_t59399582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Authentication.Digest::set_ProtectedUris(System.Collections.Generic.List`1<System.String>)
extern "C"  void Digest_set_ProtectedUris_m3563444713 (Digest_t59399582 * __this, List_1_t1398341365 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Authentication.Digest::get_QualityOfProtections()
extern "C"  String_t* Digest_get_QualityOfProtections_m1562496835 (Digest_t59399582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Authentication.Digest::set_QualityOfProtections(System.String)
extern "C"  void Digest_set_QualityOfProtections_m3737259626 (Digest_t59399582 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.Authentication.Digest::get_NonceCount()
extern "C"  int32_t Digest_get_NonceCount_m797800620 (Digest_t59399582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Authentication.Digest::set_NonceCount(System.Int32)
extern "C"  void Digest_set_NonceCount_m3251273969 (Digest_t59399582 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Authentication.Digest::get_HA1Sess()
extern "C"  String_t* Digest_get_HA1Sess_m2909124201 (Digest_t59399582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Authentication.Digest::set_HA1Sess(System.String)
extern "C"  void Digest_set_HA1Sess_m2653661612 (Digest_t59399582 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Authentication.Digest::ParseChallange(System.String)
extern "C"  void Digest_ParseChallange_m2916746975 (Digest_t59399582 * __this, String_t* ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Authentication.Digest::GenerateResponseHeader(BestHTTP.HTTPRequest,BestHTTP.Authentication.Credentials)
extern "C"  String_t* Digest_GenerateResponseHeader_m2924195302 (Digest_t59399582 * __this, HTTPRequest_t138485887 * ___request0, Credentials_t3762395084 * ___credentials1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Authentication.Digest::IsUriProtected(System.Uri)
extern "C"  bool Digest_IsUriProtected_m3341908732 (Digest_t59399582 * __this, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
