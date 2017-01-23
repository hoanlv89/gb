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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_SocketIOEventT2290781438.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_TransportEvent2410498534.h"
#include "mscorlib_System_String2029220233.h"

// System.String BestHTTP.SocketIO.Events.EventNames::GetNameFor(BestHTTP.SocketIO.SocketIOEventTypes)
extern "C"  String_t* EventNames_GetNameFor_m621621425 (Il2CppObject * __this /* static, unused */, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SocketIO.Events.EventNames::GetNameFor(BestHTTP.SocketIO.TransportEventTypes)
extern "C"  String_t* EventNames_GetNameFor_m317125257 (Il2CppObject * __this /* static, unused */, int32_t ___transEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SocketIO.Events.EventNames::IsBlacklisted(System.String)
extern "C"  bool EventNames_IsBlacklisted_m3011753861 (Il2CppObject * __this /* static, unused */, String_t* ___eventName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Events.EventNames::.cctor()
extern "C"  void EventNames__cctor_m738494212 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
