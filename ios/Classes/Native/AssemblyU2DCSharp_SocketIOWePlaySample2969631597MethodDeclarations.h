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

// SocketIOWePlaySample
struct SocketIOWePlaySample_t2969631597;
// System.String
struct String_t;
// BestHTTP.SocketIO.Socket
struct Socket_t2716624701;
// BestHTTP.SocketIO.Packet
struct Packet_t1309324146;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_Socket2716624701.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_Packet1309324146.h"

// System.Void SocketIOWePlaySample::.ctor()
extern "C"  void SocketIOWePlaySample__ctor_m2319229776 (SocketIOWePlaySample_t2969631597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOWePlaySample::Start()
extern "C"  void SocketIOWePlaySample_Start_m155042456 (SocketIOWePlaySample_t2969631597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOWePlaySample::OnDestroy()
extern "C"  void SocketIOWePlaySample_OnDestroy_m1989858923 (SocketIOWePlaySample_t2969631597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOWePlaySample::Update()
extern "C"  void SocketIOWePlaySample_Update_m3680264121 (SocketIOWePlaySample_t2969631597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOWePlaySample::OnGUI()
extern "C"  void SocketIOWePlaySample_OnGUI_m575456912 (SocketIOWePlaySample_t2969631597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOWePlaySample::DrawLoginScreen()
extern "C"  void SocketIOWePlaySample_DrawLoginScreen_m3716764659 (SocketIOWePlaySample_t2969631597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOWePlaySample::DrawControls()
extern "C"  void SocketIOWePlaySample_DrawControls_m265194138 (SocketIOWePlaySample_t2969631597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOWePlaySample::DrawChat(System.Boolean)
extern "C"  void SocketIOWePlaySample_DrawChat_m2015027073 (SocketIOWePlaySample_t2969631597 * __this, bool ___withInput0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOWePlaySample::AddMessage(System.String)
extern "C"  void SocketIOWePlaySample_AddMessage_m3804707498 (SocketIOWePlaySample_t2969631597 * __this, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOWePlaySample::SendMessage()
extern "C"  void SocketIOWePlaySample_SendMessage_m3002652095 (SocketIOWePlaySample_t2969631597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOWePlaySample::Join()
extern "C"  void SocketIOWePlaySample_Join_m2868418378 (SocketIOWePlaySample_t2969631597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOWePlaySample::Reload()
extern "C"  void SocketIOWePlaySample_Reload_m1181165213 (SocketIOWePlaySample_t2969631597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOWePlaySample::OnConnected(BestHTTP.SocketIO.Socket,BestHTTP.SocketIO.Packet,System.Object[])
extern "C"  void SocketIOWePlaySample_OnConnected_m119835995 (SocketIOWePlaySample_t2969631597 * __this, Socket_t2716624701 * ___socket0, Packet_t1309324146 * ___packet1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOWePlaySample::OnJoined(BestHTTP.SocketIO.Socket,BestHTTP.SocketIO.Packet,System.Object[])
extern "C"  void SocketIOWePlaySample_OnJoined_m749079111 (SocketIOWePlaySample_t2969631597 * __this, Socket_t2716624701 * ___socket0, Packet_t1309324146 * ___packet1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOWePlaySample::OnReload(BestHTTP.SocketIO.Socket,BestHTTP.SocketIO.Packet,System.Object[])
extern "C"  void SocketIOWePlaySample_OnReload_m1604664213 (SocketIOWePlaySample_t2969631597 * __this, Socket_t2716624701 * ___socket0, Packet_t1309324146 * ___packet1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOWePlaySample::OnMessage(BestHTTP.SocketIO.Socket,BestHTTP.SocketIO.Packet,System.Object[])
extern "C"  void SocketIOWePlaySample_OnMessage_m563217871 (SocketIOWePlaySample_t2969631597 * __this, Socket_t2716624701 * ___socket0, Packet_t1309324146 * ___packet1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOWePlaySample::OnMove(BestHTTP.SocketIO.Socket,BestHTTP.SocketIO.Packet,System.Object[])
extern "C"  void SocketIOWePlaySample_OnMove_m3112102149 (SocketIOWePlaySample_t2969631597 * __this, Socket_t2716624701 * ___socket0, Packet_t1309324146 * ___packet1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOWePlaySample::OnJoin(BestHTTP.SocketIO.Socket,BestHTTP.SocketIO.Packet,System.Object[])
extern "C"  void SocketIOWePlaySample_OnJoin_m229240022 (SocketIOWePlaySample_t2969631597 * __this, Socket_t2716624701 * ___socket0, Packet_t1309324146 * ___packet1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOWePlaySample::OnConnections(BestHTTP.SocketIO.Socket,BestHTTP.SocketIO.Packet,System.Object[])
extern "C"  void SocketIOWePlaySample_OnConnections_m166059865 (SocketIOWePlaySample_t2969631597 * __this, Socket_t2716624701 * ___socket0, Packet_t1309324146 * ___packet1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOWePlaySample::OnFrame(BestHTTP.SocketIO.Socket,BestHTTP.SocketIO.Packet,System.Object[])
extern "C"  void SocketIOWePlaySample_OnFrame_m2295747677 (SocketIOWePlaySample_t2969631597 * __this, Socket_t2716624701 * ___socket0, Packet_t1309324146 * ___packet1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOWePlaySample::OnError(BestHTTP.SocketIO.Socket,BestHTTP.SocketIO.Packet,System.Object[])
extern "C"  void SocketIOWePlaySample_OnError_m3679814796 (SocketIOWePlaySample_t2969631597 * __this, Socket_t2716624701 * ___socket0, Packet_t1309324146 * ___packet1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOWePlaySample::<OnGUI>m__0()
extern "C"  void SocketIOWePlaySample_U3COnGUIU3Em__0_m4007200553 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOWePlaySample::<OnGUI>m__1()
extern "C"  void SocketIOWePlaySample_U3COnGUIU3Em__1_m4007200586 (SocketIOWePlaySample_t2969631597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOWePlaySample::<OnGUI>m__2()
extern "C"  void SocketIOWePlaySample_U3COnGUIU3Em__2_m4007200619 (SocketIOWePlaySample_t2969631597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
