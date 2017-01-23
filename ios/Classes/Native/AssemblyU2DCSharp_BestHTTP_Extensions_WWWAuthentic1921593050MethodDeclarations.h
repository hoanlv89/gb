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

// BestHTTP.Extensions.WWWAuthenticateHeaderParser
struct WWWAuthenticateHeaderParser_t1921593050;
// System.String
struct String_t;
// System.Collections.Generic.List`1<BestHTTP.Extensions.KeyValuePair>
struct List_1_t3552012726;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void BestHTTP.Extensions.WWWAuthenticateHeaderParser::.ctor(System.String)
extern "C"  void WWWAuthenticateHeaderParser__ctor_m4066263009 (WWWAuthenticateHeaderParser_t1921593050 * __this, String_t* ___headerValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BestHTTP.Extensions.KeyValuePair> BestHTTP.Extensions.WWWAuthenticateHeaderParser::ParseQuotedHeader(System.String)
extern "C"  List_1_t3552012726 * WWWAuthenticateHeaderParser_ParseQuotedHeader_m1963995826 (WWWAuthenticateHeaderParser_t1921593050 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Extensions.WWWAuthenticateHeaderParser::<ParseQuotedHeader>m__0(System.Char)
extern "C"  bool WWWAuthenticateHeaderParser_U3CParseQuotedHeaderU3Em__0_m3213263507 (Il2CppObject * __this /* static, unused */, Il2CppChar ___ch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
