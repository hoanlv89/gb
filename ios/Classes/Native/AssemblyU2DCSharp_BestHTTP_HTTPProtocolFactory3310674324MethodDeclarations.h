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

// BestHTTP.HTTPResponse
struct HTTPResponse_t62748825;
// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;
// System.IO.Stream
struct Stream_t3255436806;
// System.Uri
struct Uri_t19570940;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_SupportedProtocols1503488249.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPRequest138485887.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "System_System_Uri19570940.h"

// BestHTTP.HTTPResponse BestHTTP.HTTPProtocolFactory::Get(BestHTTP.SupportedProtocols,BestHTTP.HTTPRequest,System.IO.Stream,System.Boolean,System.Boolean)
extern "C"  HTTPResponse_t62748825 * HTTPProtocolFactory_Get_m4126852932 (Il2CppObject * __this /* static, unused */, int32_t ___protocol0, HTTPRequest_t138485887 * ___request1, Stream_t3255436806 * ___stream2, bool ___isStreamed3, bool ___isFromCache4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SupportedProtocols BestHTTP.HTTPProtocolFactory::GetProtocolFromUri(System.Uri)
extern "C"  int32_t HTTPProtocolFactory_GetProtocolFromUri_m4080941688 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.HTTPProtocolFactory::IsSecureProtocol(System.Uri)
extern "C"  bool HTTPProtocolFactory_IsSecureProtocol_m2020626421 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
