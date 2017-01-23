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

// BestHTTP.SignalR.Transports.PostSendTransportBase
struct PostSendTransportBase_t4137891006;
// System.String
struct String_t;
// BestHTTP.SignalR.Connection
struct Connection_t2915781690;
// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;
// BestHTTP.HTTPResponse
struct HTTPResponse_t62748825;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Connection2915781690.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPRequest138485887.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPResponse62748825.h"

// System.Void BestHTTP.SignalR.Transports.PostSendTransportBase::.ctor(System.String,BestHTTP.SignalR.Connection)
extern "C"  void PostSendTransportBase__ctor_m116289419 (PostSendTransportBase_t4137891006 * __this, String_t* ___name0, Connection_t2915781690 * ___con1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.PostSendTransportBase::SendImpl(System.String)
extern "C"  void PostSendTransportBase_SendImpl_m3232224233 (PostSendTransportBase_t4137891006 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Transports.PostSendTransportBase::OnSendRequestFinished(BestHTTP.HTTPRequest,BestHTTP.HTTPResponse)
extern "C"  void PostSendTransportBase_OnSendRequestFinished_m3764274035 (PostSendTransportBase_t4137891006 * __this, HTTPRequest_t138485887 * ___req0, HTTPResponse_t62748825 * ___resp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
