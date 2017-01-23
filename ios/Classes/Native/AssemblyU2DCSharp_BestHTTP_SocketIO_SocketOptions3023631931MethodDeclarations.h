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

// BestHTTP.SocketIO.SocketOptions
struct SocketOptions_t3023631931;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan3430258949.h"

// System.Void BestHTTP.SocketIO.SocketOptions::.ctor()
extern "C"  void SocketOptions__ctor_m4001265769 (SocketOptions_t3023631931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SocketIO.SocketOptions::get_Reconnection()
extern "C"  bool SocketOptions_get_Reconnection_m82558137 (SocketOptions_t3023631931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketOptions::set_Reconnection(System.Boolean)
extern "C"  void SocketOptions_set_Reconnection_m2734363332 (SocketOptions_t3023631931 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.SocketIO.SocketOptions::get_ReconnectionAttempts()
extern "C"  int32_t SocketOptions_get_ReconnectionAttempts_m2836455545 (SocketOptions_t3023631931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketOptions::set_ReconnectionAttempts(System.Int32)
extern "C"  void SocketOptions_set_ReconnectionAttempts_m1171818086 (SocketOptions_t3023631931 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan BestHTTP.SocketIO.SocketOptions::get_ReconnectionDelay()
extern "C"  TimeSpan_t3430258949  SocketOptions_get_ReconnectionDelay_m477995677 (SocketOptions_t3023631931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketOptions::set_ReconnectionDelay(System.TimeSpan)
extern "C"  void SocketOptions_set_ReconnectionDelay_m2966350964 (SocketOptions_t3023631931 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan BestHTTP.SocketIO.SocketOptions::get_ReconnectionDelayMax()
extern "C"  TimeSpan_t3430258949  SocketOptions_get_ReconnectionDelayMax_m266418513 (SocketOptions_t3023631931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketOptions::set_ReconnectionDelayMax(System.TimeSpan)
extern "C"  void SocketOptions_set_ReconnectionDelayMax_m1993869088 (SocketOptions_t3023631931 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single BestHTTP.SocketIO.SocketOptions::get_RandomizationFactor()
extern "C"  float SocketOptions_get_RandomizationFactor_m606058514 (SocketOptions_t3023631931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketOptions::set_RandomizationFactor(System.Single)
extern "C"  void SocketOptions_set_RandomizationFactor_m3428695285 (SocketOptions_t3023631931 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan BestHTTP.SocketIO.SocketOptions::get_Timeout()
extern "C"  TimeSpan_t3430258949  SocketOptions_get_Timeout_m1028922576 (SocketOptions_t3023631931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketOptions::set_Timeout(System.TimeSpan)
extern "C"  void SocketOptions_set_Timeout_m1201615253 (SocketOptions_t3023631931 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SocketIO.SocketOptions::get_AutoConnect()
extern "C"  bool SocketOptions_get_AutoConnect_m1534253685 (SocketOptions_t3023631931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketOptions::set_AutoConnect(System.Boolean)
extern "C"  void SocketOptions_set_AutoConnect_m4273236204 (SocketOptions_t3023631931 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> BestHTTP.SocketIO.SocketOptions::get_AdditionalQueryParams()
extern "C"  Dictionary_2_t3943999495 * SocketOptions_get_AdditionalQueryParams_m2820782423 (SocketOptions_t3023631931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketOptions::set_AdditionalQueryParams(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void SocketOptions_set_AdditionalQueryParams_m3518727622 (SocketOptions_t3023631931 * __this, Dictionary_2_t3943999495 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.SocketIO.SocketOptions::get_QueryParamsOnlyForHandshake()
extern "C"  bool SocketOptions_get_QueryParamsOnlyForHandshake_m1939438392 (SocketOptions_t3023631931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.SocketOptions::set_QueryParamsOnlyForHandshake(System.Boolean)
extern "C"  void SocketOptions_set_QueryParamsOnlyForHandshake_m766018437 (SocketOptions_t3023631931 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SocketIO.SocketOptions::BuildQueryParams()
extern "C"  String_t* SocketOptions_BuildQueryParams_m4118094088 (SocketOptions_t3023631931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
