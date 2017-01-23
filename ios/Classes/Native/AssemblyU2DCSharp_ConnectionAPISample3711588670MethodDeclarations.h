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

// ConnectionAPISample
struct ConnectionAPISample_t3711588670;
// BestHTTP.SignalR.Connection
struct Connection_t2915781690;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Connection2915781690.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_ConnectionStates420400692.h"
#include "mscorlib_System_String2029220233.h"

// System.Void ConnectionAPISample::.ctor()
extern "C"  void ConnectionAPISample__ctor_m1404477643 (ConnectionAPISample_t3711588670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConnectionAPISample::Start()
extern "C"  void ConnectionAPISample_Start_m2290371567 (ConnectionAPISample_t3711588670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConnectionAPISample::OnGUI()
extern "C"  void ConnectionAPISample_OnGUI_m1289863893 (ConnectionAPISample_t3711588670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConnectionAPISample::OnDestroy()
extern "C"  void ConnectionAPISample_OnDestroy_m2871747488 (ConnectionAPISample_t3711588670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConnectionAPISample::signalRConnection_OnGeneralMessage(BestHTTP.SignalR.Connection,System.Object)
extern "C"  void ConnectionAPISample_signalRConnection_OnGeneralMessage_m2746584920 (ConnectionAPISample_t3711588670 * __this, Connection_t2915781690 * ___manager0, Il2CppObject * ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConnectionAPISample::signalRConnection_OnStateChanged(BestHTTP.SignalR.Connection,BestHTTP.SignalR.ConnectionStates,BestHTTP.SignalR.ConnectionStates)
extern "C"  void ConnectionAPISample_signalRConnection_OnStateChanged_m2488307234 (ConnectionAPISample_t3711588670 * __this, Connection_t2915781690 * ___manager0, int32_t ___oldState1, int32_t ___newState2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConnectionAPISample::Broadcast(System.String)
extern "C"  void ConnectionAPISample_Broadcast_m2370965176 (ConnectionAPISample_t3711588670 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConnectionAPISample::BroadcastExceptMe(System.String)
extern "C"  void ConnectionAPISample_BroadcastExceptMe_m3211871581 (ConnectionAPISample_t3711588670 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConnectionAPISample::EnterName(System.String)
extern "C"  void ConnectionAPISample_EnterName_m3196601082 (ConnectionAPISample_t3711588670 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConnectionAPISample::JoinGroup(System.String)
extern "C"  void ConnectionAPISample_JoinGroup_m2341716000 (ConnectionAPISample_t3711588670 * __this, String_t* ___groupName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConnectionAPISample::LeaveGroup(System.String)
extern "C"  void ConnectionAPISample_LeaveGroup_m2815738953 (ConnectionAPISample_t3711588670 * __this, String_t* ___groupName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConnectionAPISample::SendToMe(System.String)
extern "C"  void ConnectionAPISample_SendToMe_m3270660850 (ConnectionAPISample_t3711588670 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConnectionAPISample::SendToUser(System.String,System.String)
extern "C"  void ConnectionAPISample_SendToUser_m1478485069 (ConnectionAPISample_t3711588670 * __this, String_t* ___userOrGroupName0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConnectionAPISample::SendToGroup(System.String,System.String)
extern "C"  void ConnectionAPISample_SendToGroup_m2516371483 (ConnectionAPISample_t3711588670 * __this, String_t* ___userOrGroupName0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConnectionAPISample::<OnGUI>m__0()
extern "C"  void ConnectionAPISample_U3COnGUIU3Em__0_m672627700 (ConnectionAPISample_t3711588670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
