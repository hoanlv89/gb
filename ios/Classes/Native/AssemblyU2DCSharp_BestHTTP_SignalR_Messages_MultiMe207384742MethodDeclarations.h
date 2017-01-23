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

// BestHTTP.SignalR.Messages.MultiMessage
struct MultiMessage_t207384742;
// System.String
struct String_t;
// System.Collections.Generic.List`1<BestHTTP.SignalR.Messages.IServerMessage>
struct List_1_t1753264875;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_MessageTypes615080634.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Nullable_1_gen1693325264.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void BestHTTP.SignalR.Messages.MultiMessage::.ctor()
extern "C"  void MultiMessage__ctor_m3941731463 (MultiMessage_t207384742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SignalR.MessageTypes BestHTTP.SignalR.Messages.MultiMessage::BestHTTP.SignalR.Messages.IServerMessage.get_Type()
extern "C"  int32_t MultiMessage_BestHTTP_SignalR_Messages_IServerMessage_get_Type_m1600587042 (MultiMessage_t207384742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SignalR.Messages.MultiMessage::get_MessageId()
extern "C"  String_t* MultiMessage_get_MessageId_m1851087273 (MultiMessage_t207384742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Messages.MultiMessage::set_MessageId(System.String)
extern "C"  void MultiMessage_set_MessageId_m3582693622 (MultiMessage_t207384742 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SignalR.Messages.MultiMessage::get_IsInitialization()
extern "C"  bool MultiMessage_get_IsInitialization_m2242103858 (MultiMessage_t207384742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Messages.MultiMessage::set_IsInitialization(System.Boolean)
extern "C"  void MultiMessage_set_IsInitialization_m2015619295 (MultiMessage_t207384742 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SignalR.Messages.MultiMessage::get_GroupsToken()
extern "C"  String_t* MultiMessage_get_GroupsToken_m1005730044 (MultiMessage_t207384742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Messages.MultiMessage::set_GroupsToken(System.String)
extern "C"  void MultiMessage_set_GroupsToken_m680513087 (MultiMessage_t207384742 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SignalR.Messages.MultiMessage::get_ShouldReconnect()
extern "C"  bool MultiMessage_get_ShouldReconnect_m1021719648 (MultiMessage_t207384742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Messages.MultiMessage::set_ShouldReconnect(System.Boolean)
extern "C"  void MultiMessage_set_ShouldReconnect_m3755373701 (MultiMessage_t207384742 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.TimeSpan> BestHTTP.SignalR.Messages.MultiMessage::get_PollDelay()
extern "C"  Nullable_1_t1693325264  MultiMessage_get_PollDelay_m1023469632 (MultiMessage_t207384742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Messages.MultiMessage::set_PollDelay(System.Nullable`1<System.TimeSpan>)
extern "C"  void MultiMessage_set_PollDelay_m3318174859 (MultiMessage_t207384742 * __this, Nullable_1_t1693325264  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BestHTTP.SignalR.Messages.IServerMessage> BestHTTP.SignalR.Messages.MultiMessage::get_Data()
extern "C"  List_1_t1753264875 * MultiMessage_get_Data_m390844372 (MultiMessage_t207384742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Messages.MultiMessage::set_Data(System.Collections.Generic.List`1<BestHTTP.SignalR.Messages.IServerMessage>)
extern "C"  void MultiMessage_set_Data_m1490932821 (MultiMessage_t207384742 * __this, List_1_t1753264875 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.Messages.MultiMessage::BestHTTP.SignalR.Messages.IServerMessage.Parse(System.Object)
extern "C"  void MultiMessage_BestHTTP_SignalR_Messages_IServerMessage_Parse_m2047272591 (MultiMessage_t207384742 * __this, Il2CppObject * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
