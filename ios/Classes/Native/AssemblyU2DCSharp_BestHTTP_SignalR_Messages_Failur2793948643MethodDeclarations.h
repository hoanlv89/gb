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

// BestHTTP.SignalR.Messages.FailureMessage
struct FailureMessage_t2793948643;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_MessageTypes615080634.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void BestHTTP.SignalR.Messages.FailureMessage::.ctor()
extern "C"  void FailureMessage__ctor_m3768476006 (FailureMessage_t2793948643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SignalR.MessageTypes BestHTTP.SignalR.Messages.FailureMessage::BestHTTP.SignalR.Messages.IServerMessage.get_Type()
extern "C"  int32_t FailureMessage_BestHTTP_SignalR_Messages_IServerMessage_get_Type_m3257454459 (FailureMessage_t2793948643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 BestHTTP.SignalR.Messages.FailureMessage::get_InvocationId()
extern "C"  uint64_t FailureMessage_get_InvocationId_m4075582494 (FailureMessage_t2793948643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Messages.FailureMessage::set_InvocationId(System.UInt64)
extern "C"  void FailureMessage_set_InvocationId_m1405908057 (FailureMessage_t2793948643 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SignalR.Messages.FailureMessage::get_IsHubError()
extern "C"  bool FailureMessage_get_IsHubError_m1895002796 (FailureMessage_t2793948643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Messages.FailureMessage::set_IsHubError(System.Boolean)
extern "C"  void FailureMessage_set_IsHubError_m3902291893 (FailureMessage_t2793948643 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SignalR.Messages.FailureMessage::get_ErrorMessage()
extern "C"  String_t* FailureMessage_get_ErrorMessage_m3837197189 (FailureMessage_t2793948643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Messages.FailureMessage::set_ErrorMessage(System.String)
extern "C"  void FailureMessage_set_ErrorMessage_m2266180442 (FailureMessage_t2793948643 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> BestHTTP.SignalR.Messages.FailureMessage::get_AdditionalData()
extern "C"  Il2CppObject* FailureMessage_get_AdditionalData_m2068933167 (FailureMessage_t2793948643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Messages.FailureMessage::set_AdditionalData(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void FailureMessage_set_AdditionalData_m299355912 (FailureMessage_t2793948643 * __this, Il2CppObject* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SignalR.Messages.FailureMessage::get_StackTrace()
extern "C"  String_t* FailureMessage_get_StackTrace_m1602069673 (FailureMessage_t2793948643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Messages.FailureMessage::set_StackTrace(System.String)
extern "C"  void FailureMessage_set_StackTrace_m3040125214 (FailureMessage_t2793948643 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> BestHTTP.SignalR.Messages.FailureMessage::get_State()
extern "C"  Il2CppObject* FailureMessage_get_State_m1389035925 (FailureMessage_t2793948643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Messages.FailureMessage::set_State(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void FailureMessage_set_State_m1629049792 (FailureMessage_t2793948643 * __this, Il2CppObject* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Messages.FailureMessage::BestHTTP.SignalR.Messages.IServerMessage.Parse(System.Object)
extern "C"  void FailureMessage_BestHTTP_SignalR_Messages_IServerMessage_Parse_m1454159944 (FailureMessage_t2793948643 * __this, Il2CppObject * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
