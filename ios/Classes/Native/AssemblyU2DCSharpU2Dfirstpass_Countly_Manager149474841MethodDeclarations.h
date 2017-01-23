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

// Countly.Manager
struct Manager_t149474841;
// Countly.Queue
struct Queue_t1840538479;
// System.Collections.Generic.List`1<Countly.Event>
struct List_1_t161184814;
// System.String
struct String_t;
// Countly.Event
struct Event_t792063682;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// Countly.DeviceInfo
struct DeviceInfo_t2438887176;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Countly_Event792063682.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Countly_DeviceInfo2438887176.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void Countly.Manager::.ctor()
extern "C"  void Manager__ctor_m3993020850 (Manager_t149474841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Countly.Queue Countly.Manager::get_ConnectionQueue()
extern "C"  Queue_t1840538479 * Manager_get_ConnectionQueue_m2557739364 (Manager_t149474841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Countly.Event> Countly.Manager::get_EventQueue()
extern "C"  List_1_t161184814 * Manager_get_EventQueue_m3595882179 (Manager_t149474841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Manager::Init(System.String)
extern "C"  void Manager_Init_m1086271304 (Manager_t149474841 * __this, String_t* ___appKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Manager::RecordEvent(Countly.Event)
extern "C"  void Manager_RecordEvent_m2747053959 (Manager_t149474841 * __this, Event_t792063682 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Manager::Start()
extern "C"  void Manager_Start_m260308798 (Manager_t149474841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Manager::OnApplicationPause(System.Boolean)
extern "C"  void Manager_OnApplicationPause_m2383167532 (Manager_t149474841 * __this, bool ___pause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Manager::OnApplicationQuit()
extern "C"  void Manager_OnApplicationQuit_m2010571864 (Manager_t149474841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Manager::BeginSession()
extern "C"  void Manager_BeginSession_m3379022555 (Manager_t149474841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Manager::UpdateSession(System.Int64)
extern "C"  void Manager_UpdateSession_m2523117703 (Manager_t149474841 * __this, int64_t ___duration0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Manager::EndSession(System.Int64)
extern "C"  void Manager_EndSession_m2262060049 (Manager_t149474841 * __this, int64_t ___duration0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Manager::RecordEvents(System.Collections.Generic.List`1<Countly.Event>)
extern "C"  void Manager_RecordEvents_m1382238486 (Manager_t149474841 * __this, List_1_t161184814 * ___events0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Countly.Manager::RunTimer()
extern "C"  Il2CppObject * Manager_RunTimer_m1383453970 (Manager_t149474841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Manager::Resume()
extern "C"  void Manager_Resume_m3320773667 (Manager_t149474841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Manager::Suspend()
extern "C"  void Manager_Suspend_m4008970262 (Manager_t149474841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Manager::ProcessConnectionQueue()
extern "C"  void Manager_ProcessConnectionQueue_m1213994424 (Manager_t149474841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Countly.Manager::_ProcessConnectionQueue()
extern "C"  Il2CppObject * Manager__ProcessConnectionQueue_m3981361027 (Manager_t149474841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Countly.DeviceInfo Countly.Manager::GetDeviceInfo()
extern "C"  DeviceInfo_t2438887176 * Manager_GetDeviceInfo_m2090287355 (Manager_t149474841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Countly.DeviceInfo Countly.Manager::UpdateDeviceInfo()
extern "C"  DeviceInfo_t2438887176 * Manager_UpdateDeviceInfo_m3300939326 (Manager_t149474841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Manager::FlushEvents(System.Int32)
extern "C"  void Manager_FlushEvents_m1791407612 (Manager_t149474841 * __this, int32_t ___threshold0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Countly.Manager::TrackSessionLength()
extern "C"  int64_t Manager_TrackSessionLength_m3209060756 (Manager_t149474841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder Countly.Manager::InitConnectionDataStringBuilder()
extern "C"  StringBuilder_t1221177846 * Manager_InitConnectionDataStringBuilder_m1020243493 (Manager_t149474841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder Countly.Manager::InitConnectionData(Countly.DeviceInfo)
extern "C"  StringBuilder_t1221177846 * Manager_InitConnectionData_m4248459215 (Manager_t149474841 * __this, DeviceInfo_t2438887176 * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Manager::AppendConnectionData(System.Text.StringBuilder,System.String)
extern "C"  void Manager_AppendConnectionData_m3755948542 (Manager_t149474841 * __this, StringBuilder_t1221177846 * ___builder0, String_t* ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder Countly.Manager::InitEventStringBuilder()
extern "C"  StringBuilder_t1221177846 * Manager_InitEventStringBuilder_m3039131431 (Manager_t149474841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Countly.Manager::JSONSerializeEvents(System.Collections.Generic.List`1<Countly.Event>)
extern "C"  String_t* Manager_JSONSerializeEvents_m4078573280 (Manager_t149474841 * __this, List_1_t161184814 * ___events0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Manager::Log(System.String)
extern "C"  void Manager_Log_m2166169306 (Manager_t149474841 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
