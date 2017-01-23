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

// BestHTTP.SignalR.Hubs.Hub
struct Hub_t272719679;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// BestHTTP.SignalR.Hubs.OnMethodResultDelegate
struct OnMethodResultDelegate_t3666295392;
// BestHTTP.SignalR.Hubs.OnMethodFailedDelegate
struct OnMethodFailedDelegate_t3007711612;
// BestHTTP.SignalR.Hubs.OnMethodProgressDelegate
struct OnMethodProgressDelegate_t4205605290;
// BestHTTP.SignalR.Messages.ClientMessage
struct ClientMessage_t624279968;
struct ClientMessage_t624279968_marshaled_pinvoke;
struct ClientMessage_t624279968_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Messages_ClientM624279968.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Hubs_Hub272719679.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Hubs_OnMethodRe3666295392.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Hubs_OnMethodFa3007711612.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Hubs_OnMethodPr4205605290.h"

// System.Void BestHTTP.SignalR.Messages.ClientMessage::.ctor(BestHTTP.SignalR.Hubs.Hub,System.String,System.Object[],System.UInt64,BestHTTP.SignalR.Hubs.OnMethodResultDelegate,BestHTTP.SignalR.Hubs.OnMethodFailedDelegate,BestHTTP.SignalR.Hubs.OnMethodProgressDelegate)
extern "C"  void ClientMessage__ctor_m3447826427 (ClientMessage_t624279968 * __this, Hub_t272719679 * ___hub0, String_t* ___method1, ObjectU5BU5D_t3614634134* ___args2, uint64_t ___callIdx3, OnMethodResultDelegate_t3666295392 * ___resultCallback4, OnMethodFailedDelegate_t3007711612 * ___resultErrorCallback5, OnMethodProgressDelegate_t4205605290 * ___progressCallback6, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ClientMessage_t624279968;
struct ClientMessage_t624279968_marshaled_pinvoke;

extern "C" void ClientMessage_t624279968_marshal_pinvoke(const ClientMessage_t624279968& unmarshaled, ClientMessage_t624279968_marshaled_pinvoke& marshaled);
extern "C" void ClientMessage_t624279968_marshal_pinvoke_back(const ClientMessage_t624279968_marshaled_pinvoke& marshaled, ClientMessage_t624279968& unmarshaled);
extern "C" void ClientMessage_t624279968_marshal_pinvoke_cleanup(ClientMessage_t624279968_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ClientMessage_t624279968;
struct ClientMessage_t624279968_marshaled_com;

extern "C" void ClientMessage_t624279968_marshal_com(const ClientMessage_t624279968& unmarshaled, ClientMessage_t624279968_marshaled_com& marshaled);
extern "C" void ClientMessage_t624279968_marshal_com_back(const ClientMessage_t624279968_marshaled_com& marshaled, ClientMessage_t624279968& unmarshaled);
extern "C" void ClientMessage_t624279968_marshal_com_cleanup(ClientMessage_t624279968_marshaled_com& marshaled);
