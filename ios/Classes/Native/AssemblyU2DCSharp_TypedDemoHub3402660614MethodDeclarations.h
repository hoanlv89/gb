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

// TypedDemoHub
struct TypedDemoHub_t3402660614;
// BestHTTP.SignalR.Hubs.Hub
struct Hub_t272719679;
// BestHTTP.SignalR.Messages.MethodCallMessage
struct MethodCallMessage_t1119839878;
// System.String
struct String_t;
// BestHTTP.SignalR.Messages.ResultMessage
struct ResultMessage_t3036240250;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Hubs_Hub272719679.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Messages_Method1119839878.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Messages_ClientM624279968.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Messages_Result3036240250.h"

// System.Void TypedDemoHub::.ctor()
extern "C"  void TypedDemoHub__ctor_m3926433615 (TypedDemoHub_t3402660614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TypedDemoHub::Echo(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.MethodCallMessage)
extern "C"  void TypedDemoHub_Echo_m2688719991 (TypedDemoHub_t3402660614 * __this, Hub_t272719679 * ___hub0, MethodCallMessage_t1119839878 * ___methodCall1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TypedDemoHub::Echo(System.String)
extern "C"  void TypedDemoHub_Echo_m1476183022 (TypedDemoHub_t3402660614 * __this, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TypedDemoHub::OnEcho_Done(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.ClientMessage,BestHTTP.SignalR.Messages.ResultMessage)
extern "C"  void TypedDemoHub_OnEcho_Done_m1163758809 (TypedDemoHub_t3402660614 * __this, Hub_t272719679 * ___hub0, ClientMessage_t624279968  ___originalMessage1, ResultMessage_t3036240250 * ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TypedDemoHub::Draw()
extern "C"  void TypedDemoHub_Draw_m2771186587 (TypedDemoHub_t3402660614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
