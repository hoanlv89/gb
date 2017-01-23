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

// SocketIOChatSample
struct SocketIOChatSample_t99431757;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// BestHTTP.SocketIO.Socket
struct Socket_t2716624701;
// BestHTTP.SocketIO.Packet
struct Packet_t1309324146;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_Socket2716624701.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_Packet1309324146.h"

// System.Void SocketIOChatSample::.ctor()
extern "C"  void SocketIOChatSample__ctor_m1805305416 (SocketIOChatSample_t99431757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOChatSample::Start()
extern "C"  void SocketIOChatSample_Start_m142337720 (SocketIOChatSample_t99431757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOChatSample::OnDestroy()
extern "C"  void SocketIOChatSample_OnDestroy_m1364262331 (SocketIOChatSample_t99431757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOChatSample::Update()
extern "C"  void SocketIOChatSample_Update_m4231897625 (SocketIOChatSample_t99431757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOChatSample::OnGUI()
extern "C"  void SocketIOChatSample_OnGUI_m1709066608 (SocketIOChatSample_t99431757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOChatSample::DrawLoginScreen()
extern "C"  void SocketIOChatSample_DrawLoginScreen_m3970540059 (SocketIOChatSample_t99431757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOChatSample::DrawChatScreen()
extern "C"  void SocketIOChatSample_DrawChatScreen_m1436563594 (SocketIOChatSample_t99431757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOChatSample::SetUserName()
extern "C"  void SocketIOChatSample_SetUserName_m3904702892 (SocketIOChatSample_t99431757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOChatSample::SendMessage()
extern "C"  void SocketIOChatSample_SendMessage_m1073548999 (SocketIOChatSample_t99431757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOChatSample::UpdateTyping()
extern "C"  void SocketIOChatSample_UpdateTyping_m2269753316 (SocketIOChatSample_t99431757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOChatSample::addParticipantsMessage(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void SocketIOChatSample_addParticipantsMessage_m1888982561 (SocketIOChatSample_t99431757 * __this, Dictionary_2_t309261261 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOChatSample::addChatMessage(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void SocketIOChatSample_addChatMessage_m3242322403 (SocketIOChatSample_t99431757 * __this, Dictionary_2_t309261261 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOChatSample::AddChatTyping(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void SocketIOChatSample_AddChatTyping_m1970633853 (SocketIOChatSample_t99431757 * __this, Dictionary_2_t309261261 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOChatSample::RemoveChatTyping(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void SocketIOChatSample_RemoveChatTyping_m3799367300 (SocketIOChatSample_t99431757 * __this, Dictionary_2_t309261261 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOChatSample::OnLogin(BestHTTP.SocketIO.Socket,BestHTTP.SocketIO.Packet,System.Object[])
extern "C"  void SocketIOChatSample_OnLogin_m1424088731 (SocketIOChatSample_t99431757 * __this, Socket_t2716624701 * ___socket0, Packet_t1309324146 * ___packet1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOChatSample::OnNewMessage(BestHTTP.SocketIO.Socket,BestHTTP.SocketIO.Packet,System.Object[])
extern "C"  void SocketIOChatSample_OnNewMessage_m2342625371 (SocketIOChatSample_t99431757 * __this, Socket_t2716624701 * ___socket0, Packet_t1309324146 * ___packet1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOChatSample::OnUserJoined(BestHTTP.SocketIO.Socket,BestHTTP.SocketIO.Packet,System.Object[])
extern "C"  void SocketIOChatSample_OnUserJoined_m1433097524 (SocketIOChatSample_t99431757 * __this, Socket_t2716624701 * ___socket0, Packet_t1309324146 * ___packet1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOChatSample::OnUserLeft(BestHTTP.SocketIO.Socket,BestHTTP.SocketIO.Packet,System.Object[])
extern "C"  void SocketIOChatSample_OnUserLeft_m2199186524 (SocketIOChatSample_t99431757 * __this, Socket_t2716624701 * ___socket0, Packet_t1309324146 * ___packet1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOChatSample::OnTyping(BestHTTP.SocketIO.Socket,BestHTTP.SocketIO.Packet,System.Object[])
extern "C"  void SocketIOChatSample_OnTyping_m737765829 (SocketIOChatSample_t99431757 * __this, Socket_t2716624701 * ___socket0, Packet_t1309324146 * ___packet1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOChatSample::OnStopTyping(BestHTTP.SocketIO.Socket,BestHTTP.SocketIO.Packet,System.Object[])
extern "C"  void SocketIOChatSample_OnStopTyping_m378312117 (SocketIOChatSample_t99431757 * __this, Socket_t2716624701 * ___socket0, Packet_t1309324146 * ___packet1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOChatSample::<Start>m__0(BestHTTP.SocketIO.Socket,BestHTTP.SocketIO.Packet,System.Object[])
extern "C"  void SocketIOChatSample_U3CStartU3Em__0_m706444600 (Il2CppObject * __this /* static, unused */, Socket_t2716624701 * ___socket0, Packet_t1309324146 * ___packet1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOChatSample::<DrawLoginScreen>m__1()
extern "C"  void SocketIOChatSample_U3CDrawLoginScreenU3Em__1_m3665588257 (SocketIOChatSample_t99431757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketIOChatSample::<DrawChatScreen>m__2()
extern "C"  void SocketIOChatSample_U3CDrawChatScreenU3Em__2_m4103877075 (SocketIOChatSample_t99431757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
