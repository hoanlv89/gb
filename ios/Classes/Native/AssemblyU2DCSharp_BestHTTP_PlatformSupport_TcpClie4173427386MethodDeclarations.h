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

// BestHTTP.PlatformSupport.TcpClient.General.TcpClient
struct TcpClient_t4173427386;
// System.Net.IPEndPoint
struct IPEndPoint_t2615413766;
// System.String
struct String_t;
// System.Net.Sockets.Socket
struct Socket_t3821512045;
// System.Net.Sockets.LingerOption
struct LingerOption_t1165263720;
// System.Net.IPAddress
struct IPAddress_t1399971723;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t4087230954;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Object
struct Il2CppObject;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily303362630.h"
#include "System_System_Net_IPEndPoint2615413766.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_Sockets_Socket3821512045.h"
#include "System_System_Net_Sockets_LingerOption1165263720.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "System_System_Net_IPAddress1399971723.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void BestHTTP.PlatformSupport.TcpClient.General.TcpClient::.ctor()
extern "C"  void TcpClient__ctor_m534318821 (TcpClient_t4173427386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.PlatformSupport.TcpClient.General.TcpClient::.ctor(System.Net.Sockets.AddressFamily)
extern "C"  void TcpClient__ctor_m4194627955 (TcpClient_t4173427386 * __this, int32_t ___family0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.PlatformSupport.TcpClient.General.TcpClient::.ctor(System.Net.IPEndPoint)
extern "C"  void TcpClient__ctor_m2688721337 (TcpClient_t4173427386 * __this, IPEndPoint_t2615413766 * ___localEP0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.PlatformSupport.TcpClient.General.TcpClient::.ctor(System.String,System.Int32)
extern "C"  void TcpClient__ctor_m3385758114 (TcpClient_t4173427386 * __this, String_t* ___hostname0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.PlatformSupport.TcpClient.General.TcpClient::Init(System.Net.Sockets.AddressFamily)
extern "C"  void TcpClient_Init_m3137320793 (TcpClient_t4173427386 * __this, int32_t ___family0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.PlatformSupport.TcpClient.General.TcpClient::get_Active()
extern "C"  bool TcpClient_get_Active_m3074834606 (TcpClient_t4173427386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.PlatformSupport.TcpClient.General.TcpClient::set_Active(System.Boolean)
extern "C"  void TcpClient_set_Active_m2252595535 (TcpClient_t4173427386 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket BestHTTP.PlatformSupport.TcpClient.General.TcpClient::get_Client()
extern "C"  Socket_t3821512045 * TcpClient_get_Client_m3897469121 (TcpClient_t4173427386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.PlatformSupport.TcpClient.General.TcpClient::set_Client(System.Net.Sockets.Socket)
extern "C"  void TcpClient_set_Client_m2131562044 (TcpClient_t4173427386 * __this, Socket_t3821512045 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.PlatformSupport.TcpClient.General.TcpClient::get_Available()
extern "C"  int32_t TcpClient_get_Available_m2525221391 (TcpClient_t4173427386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.PlatformSupport.TcpClient.General.TcpClient::get_Connected()
extern "C"  bool TcpClient_get_Connected_m1867108647 (TcpClient_t4173427386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.PlatformSupport.TcpClient.General.TcpClient::IsConnected()
extern "C"  bool TcpClient_IsConnected_m3334721102 (TcpClient_t4173427386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.PlatformSupport.TcpClient.General.TcpClient::get_ExclusiveAddressUse()
extern "C"  bool TcpClient_get_ExclusiveAddressUse_m107089635 (TcpClient_t4173427386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.PlatformSupport.TcpClient.General.TcpClient::set_ExclusiveAddressUse(System.Boolean)
extern "C"  void TcpClient_set_ExclusiveAddressUse_m85475110 (TcpClient_t4173427386 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.PlatformSupport.TcpClient.General.TcpClient::SetTcpClient(System.Net.Sockets.Socket)
extern "C"  void TcpClient_SetTcpClient_m3371556054 (TcpClient_t4173427386 * __this, Socket_t3821512045 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.LingerOption BestHTTP.PlatformSupport.TcpClient.General.TcpClient::get_LingerState()
extern "C"  LingerOption_t1165263720 * TcpClient_get_LingerState_m842776093 (TcpClient_t4173427386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.PlatformSupport.TcpClient.General.TcpClient::set_LingerState(System.Net.Sockets.LingerOption)
extern "C"  void TcpClient_set_LingerState_m4179768446 (TcpClient_t4173427386 * __this, LingerOption_t1165263720 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.PlatformSupport.TcpClient.General.TcpClient::get_NoDelay()
extern "C"  bool TcpClient_get_NoDelay_m466202440 (TcpClient_t4173427386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.PlatformSupport.TcpClient.General.TcpClient::set_NoDelay(System.Boolean)
extern "C"  void TcpClient_set_NoDelay_m99954399 (TcpClient_t4173427386 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.PlatformSupport.TcpClient.General.TcpClient::get_ReceiveBufferSize()
extern "C"  int32_t TcpClient_get_ReceiveBufferSize_m1522288872 (TcpClient_t4173427386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.PlatformSupport.TcpClient.General.TcpClient::set_ReceiveBufferSize(System.Int32)
extern "C"  void TcpClient_set_ReceiveBufferSize_m3113480843 (TcpClient_t4173427386 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.PlatformSupport.TcpClient.General.TcpClient::get_ReceiveTimeout()
extern "C"  int32_t TcpClient_get_ReceiveTimeout_m2163994504 (TcpClient_t4173427386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.PlatformSupport.TcpClient.General.TcpClient::set_ReceiveTimeout(System.Int32)
extern "C"  void TcpClient_set_ReceiveTimeout_m2456355729 (TcpClient_t4173427386 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.PlatformSupport.TcpClient.General.TcpClient::get_SendBufferSize()
extern "C"  int32_t TcpClient_get_SendBufferSize_m1378493803 (TcpClient_t4173427386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.PlatformSupport.TcpClient.General.TcpClient::set_SendBufferSize(System.Int32)
extern "C"  void TcpClient_set_SendBufferSize_m3022986234 (TcpClient_t4173427386 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.PlatformSupport.TcpClient.General.TcpClient::get_SendTimeout()
extern "C"  int32_t TcpClient_get_SendTimeout_m3027176601 (TcpClient_t4173427386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.PlatformSupport.TcpClient.General.TcpClient::set_SendTimeout(System.Int32)
extern "C"  void TcpClient_set_SendTimeout_m587940332 (TcpClient_t4173427386 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan BestHTTP.PlatformSupport.TcpClient.General.TcpClient::get_ConnectTimeout()
extern "C"  TimeSpan_t3430258949  TcpClient_get_ConnectTimeout_m777651554 (TcpClient_t4173427386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.PlatformSupport.TcpClient.General.TcpClient::set_ConnectTimeout(System.TimeSpan)
extern "C"  void TcpClient_set_ConnectTimeout_m719527019 (TcpClient_t4173427386 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.PlatformSupport.TcpClient.General.TcpClient::Close()
extern "C"  void TcpClient_Close_m3097396175 (TcpClient_t4173427386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.PlatformSupport.TcpClient.General.TcpClient::Connect(System.Net.IPEndPoint)
extern "C"  void TcpClient_Connect_m1018096675 (TcpClient_t4173427386 * __this, IPEndPoint_t2615413766 * ___remoteEP0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.PlatformSupport.TcpClient.General.TcpClient::Connect(System.Net.IPAddress,System.Int32)
extern "C"  void TcpClient_Connect_m1816700015 (TcpClient_t4173427386 * __this, IPAddress_t1399971723 * ___address0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.PlatformSupport.TcpClient.General.TcpClient::SetOptions()
extern "C"  void TcpClient_SetOptions_m2711851427 (TcpClient_t4173427386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.PlatformSupport.TcpClient.General.TcpClient::Connect(System.String,System.Int32)
extern "C"  void TcpClient_Connect_m1624909160 (TcpClient_t4173427386 * __this, String_t* ___hostname0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.PlatformSupport.TcpClient.General.TcpClient::Connect(System.Net.IPAddress[],System.Int32)
extern "C"  void TcpClient_Connect_m690043601 (TcpClient_t4173427386 * __this, IPAddressU5BU5D_t4087230954* ___ipAddresses0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.PlatformSupport.TcpClient.General.TcpClient::EndConnect(System.IAsyncResult)
extern "C"  void TcpClient_EndConnect_m2196110497 (TcpClient_t4173427386 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.PlatformSupport.TcpClient.General.TcpClient::BeginConnect(System.Net.IPAddress,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TcpClient_BeginConnect_m999841538 (TcpClient_t4173427386 * __this, IPAddress_t1399971723 * ___address0, int32_t ___port1, AsyncCallback_t163412349 * ___requestCallback2, Il2CppObject * ___state3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.PlatformSupport.TcpClient.General.TcpClient::BeginConnect(System.Net.IPAddress[],System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TcpClient_BeginConnect_m3777152138 (TcpClient_t4173427386 * __this, IPAddressU5BU5D_t4087230954* ___addresses0, int32_t ___port1, AsyncCallback_t163412349 * ___requestCallback2, Il2CppObject * ___state3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.PlatformSupport.TcpClient.General.TcpClient::BeginConnect(System.String,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TcpClient_BeginConnect_m2818322131 (TcpClient_t4173427386 * __this, String_t* ___host0, int32_t ___port1, AsyncCallback_t163412349 * ___requestCallback2, Il2CppObject * ___state3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.PlatformSupport.TcpClient.General.TcpClient::System.IDisposable.Dispose()
extern "C"  void TcpClient_System_IDisposable_Dispose_m676361014 (TcpClient_t4173427386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.PlatformSupport.TcpClient.General.TcpClient::Dispose(System.Boolean)
extern "C"  void TcpClient_Dispose_m2825611633 (TcpClient_t4173427386 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.PlatformSupport.TcpClient.General.TcpClient::Finalize()
extern "C"  void TcpClient_Finalize_m1296769443 (TcpClient_t4173427386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream BestHTTP.PlatformSupport.TcpClient.General.TcpClient::GetStream()
extern "C"  Stream_t3255436806 * TcpClient_GetStream_m1728003183 (TcpClient_t4173427386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.PlatformSupport.TcpClient.General.TcpClient::CheckDisposed()
extern "C"  void TcpClient_CheckDisposed_m2762941160 (TcpClient_t4173427386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
