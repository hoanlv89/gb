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

// CubeiaClient
struct CubeiaClient_t2232589536;
// LoginInfo
struct LoginInfo_t657176999;
// Styx.ProtocolObject
struct ProtocolObject_t3155305727;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// SimpleJSON.JSONClass
struct JSONClass_t1609506608;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// com.cubeia.firebase.io.protocol.ForcedLogoutPacket
struct ForcedLogoutPacket_t2079334695;
// com.cubeia.firebase.io.protocol.JoinResponsePacket
struct JoinResponsePacket_t3194022675;
// com.cubeia.firebase.io.protocol.LeaveResponsePacket
struct LeaveResponsePacket_t2860481830;
// com.cubeia.firebase.io.protocol.PingPacket
struct PingPacket_t82127102;
// com.cubeia.firebase.io.protocol.TableSnapshotListPacket
struct TableSnapshotListPacket_t166386774;
// com.cubeia.firebase.io.protocol.LoginResponsePacket
struct LoginResponsePacket_t1137457242;
// com.cubeia.firebase.io.protocol.CreateTableResponsePacket
struct CreateTableResponsePacket_t3539513157;
// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param>
struct List_1_t890982683;
// RoomGame
struct RoomGame_t2389026731;
// System.String
struct String_t;
// TableGame
struct TableGame_t1033628486;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_LoginInfo657176999.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONClass1609506608.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_2079334695.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_3194022675.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_2860481830.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_io82127102.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_i166386774.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_1137457242.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_3539513157.h"
#include "AssemblyU2DCSharp_RoomGame2389026731.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_TableGame1033628486.h"

// System.Void CubeiaClient::.ctor()
extern "C"  void CubeiaClient__ctor_m1876745803 (CubeiaClient_t2232589536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CubeiaClient::isConnected()
extern "C"  bool CubeiaClient_isConnected_m4289788838 (CubeiaClient_t2232589536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CubeiaClient::isOnConnecting()
extern "C"  bool CubeiaClient_isOnConnecting_m1247407094 (CubeiaClient_t2232589536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::processEvents()
extern "C"  void CubeiaClient_processEvents_m2697353043 (CubeiaClient_t2232589536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::ignoreAllEvents()
extern "C"  void CubeiaClient_ignoreAllEvents_m2529454517 (CubeiaClient_t2232589536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::lockProcessing()
extern "C"  void CubeiaClient_lockProcessing_m2322199867 (CubeiaClient_t2232589536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::unLockProcessing()
extern "C"  void CubeiaClient_unLockProcessing_m836965508 (CubeiaClient_t2232589536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::login(LoginInfo,System.Boolean)
extern "C"  void CubeiaClient_login_m3764739982 (CubeiaClient_t2232589536 * __this, LoginInfo_t657176999 * ___loginInfo0, bool ___reg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::sendPacket(Styx.ProtocolObject)
extern "C"  void CubeiaClient_sendPacket_m206650220 (CubeiaClient_t2232589536 * __this, Il2CppObject * ___protocolObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::onConnect(System.IAsyncResult)
extern "C"  void CubeiaClient_onConnect_m3500580757 (CubeiaClient_t2232589536 * __this, Il2CppObject * ___ar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CubeiaClient::sendService(SimpleJSON.JSONClass)
extern "C"  bool CubeiaClient_sendService_m2737964952 (CubeiaClient_t2232589536 * __this, JSONClass_t1609506608 * ___ojbect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::sendDataGame(SimpleJSON.JSONClass)
extern "C"  void CubeiaClient_sendDataGame_m1888861527 (CubeiaClient_t2232589536 * __this, JSONClass_t1609506608 * ___ojbect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::Read_Callback(System.IAsyncResult)
extern "C"  void CubeiaClient_Read_Callback_m3667393042 (CubeiaClient_t2232589536 * __this, Il2CppObject * ___ar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::handlePacketBuffer(System.Byte[])
extern "C"  void CubeiaClient_handlePacketBuffer_m845265190 (CubeiaClient_t2232589536 * __this, ByteU5BU5D_t3397334013* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::handlePacket(Styx.ProtocolObject)
extern "C"  void CubeiaClient_handlePacket_m2180854888 (CubeiaClient_t2232589536 * __this, Il2CppObject * ___protocolObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::handleForcedLogoutPacket(com.cubeia.firebase.io.protocol.ForcedLogoutPacket)
extern "C"  void CubeiaClient_handleForcedLogoutPacket_m237075832 (CubeiaClient_t2232589536 * __this, ForcedLogoutPacket_t2079334695 * ___forcedLogoutPacket0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::handleJoinResponsePacket(com.cubeia.firebase.io.protocol.JoinResponsePacket)
extern "C"  void CubeiaClient_handleJoinResponsePacket_m2448203456 (CubeiaClient_t2232589536 * __this, JoinResponsePacket_t3194022675 * ___joinResponsePacket0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::handleLeaveResponsePacket(com.cubeia.firebase.io.protocol.LeaveResponsePacket)
extern "C"  void CubeiaClient_handleLeaveResponsePacket_m725249128 (CubeiaClient_t2232589536 * __this, LeaveResponsePacket_t2860481830 * ___leaveResponsePacket0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::handlePingPacket(com.cubeia.firebase.io.protocol.PingPacket)
extern "C"  void CubeiaClient_handlePingPacket_m2142353914 (CubeiaClient_t2232589536 * __this, PingPacket_t82127102 * ___pingPacket0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::handleTableSnapshotListPacket(com.cubeia.firebase.io.protocol.TableSnapshotListPacket)
extern "C"  void CubeiaClient_handleTableSnapshotListPacket_m215972712 (CubeiaClient_t2232589536 * __this, TableSnapshotListPacket_t166386774 * ___tableSnapshotListPacket0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::handleLoginResponsePacket(com.cubeia.firebase.io.protocol.LoginResponsePacket)
extern "C"  void CubeiaClient_handleLoginResponsePacket_m3080945128 (CubeiaClient_t2232589536 * __this, LoginResponsePacket_t1137457242 * ___loginResponsePacket0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::handleCreateTableResponsePacket(com.cubeia.firebase.io.protocol.CreateTableResponsePacket)
extern "C"  void CubeiaClient_handleCreateTableResponsePacket_m171354024 (CubeiaClient_t2232589536 * __this, CreateTableResponsePacket_t3539513157 * ___createTableResponsePacket0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::disconnect()
extern "C"  void CubeiaClient_disconnect_m1551828055 (CubeiaClient_t2232589536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::sendUAG()
extern "C"  void CubeiaClient_sendUAG_m2755692386 (CubeiaClient_t2232589536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::sendSelectGame()
extern "C"  void CubeiaClient_sendSelectGame_m882993301 (CubeiaClient_t2232589536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::sendSelectGame(System.Int32)
extern "C"  void CubeiaClient_sendSelectGame_m853128386 (CubeiaClient_t2232589536 * __this, int32_t ___gid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::sendCreateGame(System.Int32,System.Int32,System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param>)
extern "C"  void CubeiaClient_sendCreateGame_m235682663 (CubeiaClient_t2232589536 * __this, int32_t ___stake0, int32_t ___capacity1, List_1_t890982683 * ___adparams2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::sendSelectR(RoomGame)
extern "C"  void CubeiaClient_sendSelectR_m2301787488 (CubeiaClient_t2232589536 * __this, RoomGame_t2389026731 * ___room0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::unsubcribeRoom(RoomGame)
extern "C"  void CubeiaClient_unsubcribeRoom_m2076477601 (CubeiaClient_t2232589536 * __this, RoomGame_t2389026731 * ___room0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::subcribeRoom(RoomGame)
extern "C"  void CubeiaClient_subcribeRoom_m2881112484 (CubeiaClient_t2232589536 * __this, RoomGame_t2389026731 * ___room0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::sendJoinTable(System.Int32)
extern "C"  void CubeiaClient_sendJoinTable_m1019169984 (CubeiaClient_t2232589536 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::sendQueryEmails()
extern "C"  void CubeiaClient_sendQueryEmails_m3596673784 (CubeiaClient_t2232589536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::sendQueryEmails(System.Int32,System.Int32)
extern "C"  void CubeiaClient_sendQueryEmails_m2543472564 (CubeiaClient_t2232589536 * __this, int32_t ___t0, int32_t ___p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::sendLeaveTable()
extern "C"  void CubeiaClient_sendLeaveTable_m3004724632 (CubeiaClient_t2232589536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::sendReadyGame()
extern "C"  void CubeiaClient_sendReadyGame_m603613216 (CubeiaClient_t2232589536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::sendStartGame()
extern "C"  void CubeiaClient_sendStartGame_m553047185 (CubeiaClient_t2232589536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::sendKickPlayer(System.String)
extern "C"  void CubeiaClient_sendKickPlayer_m1346425272 (CubeiaClient_t2232589536 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::sendChatInGame(System.String,System.String,System.String,System.String)
extern "C"  void CubeiaClient_sendChatInGame_m1568644336 (CubeiaClient_t2232589536 * __this, String_t* ___thisPlayerName0, String_t* ___content1, String_t* ___type2, String_t* ___nname3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::.cctor()
extern "C"  void CubeiaClient__cctor_m1488270554 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CubeiaClient::<handleTableSnapshotListPacket>m__0(TableGame,TableGame)
extern "C"  int32_t CubeiaClient_U3ChandleTableSnapshotListPacketU3Em__0_m2101708336 (Il2CppObject * __this /* static, unused */, TableGame_t1033628486 * ___x0, TableGame_t1033628486 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubeiaClient::<handleLoginResponsePacket>m__1()
extern "C"  void CubeiaClient_U3ChandleLoginResponsePacketU3Em__1_m1357037727 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
