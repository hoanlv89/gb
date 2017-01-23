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

// BestHTTP.ServerSentEvents.Message
struct Message_t1650395211;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_TimeSpan3430258949.h"

// System.Void BestHTTP.ServerSentEvents.Message::.ctor()
extern "C"  void Message__ctor_m3351780088 (Message_t1650395211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.ServerSentEvents.Message::get_Id()
extern "C"  String_t* Message_get_Id_m3684843339 (Message_t1650395211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.Message::set_Id(System.String)
extern "C"  void Message_set_Id_m2208052684 (Message_t1650395211 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.ServerSentEvents.Message::get_Event()
extern "C"  String_t* Message_get_Event_m290063362 (Message_t1650395211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.Message::set_Event(System.String)
extern "C"  void Message_set_Event_m2644866465 (Message_t1650395211 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.ServerSentEvents.Message::get_Data()
extern "C"  String_t* Message_get_Data_m2337848820 (Message_t1650395211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.Message::set_Data(System.String)
extern "C"  void Message_set_Data_m2132301941 (Message_t1650395211 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan BestHTTP.ServerSentEvents.Message::get_Retry()
extern "C"  TimeSpan_t3430258949  Message_get_Retry_m820488304 (Message_t1650395211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.Message::set_Retry(System.TimeSpan)
extern "C"  void Message_set_Retry_m44732761 (Message_t1650395211 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.ServerSentEvents.Message::ToString()
extern "C"  String_t* Message_ToString_m1153392389 (Message_t1650395211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
