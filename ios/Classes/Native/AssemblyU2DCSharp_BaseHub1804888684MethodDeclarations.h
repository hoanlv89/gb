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

// BaseHub
struct BaseHub_t1804888684;
// System.String
struct String_t;
// BestHTTP.SignalR.Hubs.Hub
struct Hub_t272719679;
// BestHTTP.SignalR.Messages.MethodCallMessage
struct MethodCallMessage_t1119839878;
// BestHTTP.SignalR.Messages.ResultMessage
struct ResultMessage_t3036240250;
// BestHTTP.SignalR.Messages.FailureMessage
struct FailureMessage_t2793948643;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Hubs_Hub272719679.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Messages_Method1119839878.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Messages_ClientM624279968.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Messages_Result3036240250.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Messages_Failur2793948643.h"

// System.Void BaseHub::.ctor(System.String,System.String)
extern "C"  void BaseHub__ctor_m783876513 (BaseHub_t1804888684 * __this, String_t* ___name0, String_t* ___title1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseHub::Joined(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.MethodCallMessage)
extern "C"  void BaseHub_Joined_m698768167 (BaseHub_t1804888684 * __this, Hub_t272719679 * ___hub0, MethodCallMessage_t1119839878 * ___methodCall1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseHub::Rejoined(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.MethodCallMessage)
extern "C"  void BaseHub_Rejoined_m2415752754 (BaseHub_t1804888684 * __this, Hub_t272719679 * ___hub0, MethodCallMessage_t1119839878 * ___methodCall1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseHub::Left(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.MethodCallMessage)
extern "C"  void BaseHub_Left_m1086677335 (BaseHub_t1804888684 * __this, Hub_t272719679 * ___hub0, MethodCallMessage_t1119839878 * ___methodCall1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseHub::Invoked(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.MethodCallMessage)
extern "C"  void BaseHub_Invoked_m1078175842 (BaseHub_t1804888684 * __this, Hub_t272719679 * ___hub0, MethodCallMessage_t1119839878 * ___methodCall1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseHub::InvokedFromClient()
extern "C"  void BaseHub_InvokedFromClient_m3978866528 (BaseHub_t1804888684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseHub::OnInvoked(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.ClientMessage,BestHTTP.SignalR.Messages.ResultMessage)
extern "C"  void BaseHub_OnInvoked_m2621415733 (BaseHub_t1804888684 * __this, Hub_t272719679 * ___hub0, ClientMessage_t624279968  ___originalMessage1, ResultMessage_t3036240250 * ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseHub::OnInvokeFailed(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.ClientMessage,BestHTTP.SignalR.Messages.FailureMessage)
extern "C"  void BaseHub_OnInvokeFailed_m2537928759 (BaseHub_t1804888684 * __this, Hub_t272719679 * ___hub0, ClientMessage_t624279968  ___originalMessage1, FailureMessage_t2793948643 * ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseHub::Draw()
extern "C"  void BaseHub_Draw_m1537135845 (BaseHub_t1804888684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
