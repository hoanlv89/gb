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

// LoadBalancer
struct LoadBalancer_t148112434;
// SimpleJSON.JSONClass
struct JSONClass_t1609506608;
// System.Collections.Generic.List`1<IPConfig>
struct List_1_t1781958757;
// IPConfig
struct IPConfig_t2412837625;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONClass1609506608.h"
#include "AssemblyU2DCSharp_LoadBalancer_Channel1072401606.h"
#include "AssemblyU2DCSharp_IPConfig2412837625.h"

// System.Void LoadBalancer::.ctor(SimpleJSON.JSONClass)
extern "C"  void LoadBalancer__ctor_m203093667 (LoadBalancer_t148112434 * __this, JSONClass_t1609506608 * ___balancerjson0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancer::checkConditionLogin(LoadBalancer/Channel,System.Int32,System.Int32)
extern "C"  bool LoadBalancer_checkConditionLogin_m2694873097 (LoadBalancer_t148112434 * __this, int32_t ___channel0, int32_t ___gameID1, int32_t ___currentBalance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<IPConfig> LoadBalancer::getAvailableChannel(System.Int32)
extern "C"  List_1_t1781958757 * LoadBalancer_getAvailableChannel_m1453991468 (LoadBalancer_t148112434 * __this, int32_t ___gameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancer::checkConditionLogin(IPConfig,System.Int32)
extern "C"  bool LoadBalancer_checkConditionLogin_m3532796549 (LoadBalancer_t148112434 * __this, IPConfig_t2412837625 * ___ipconfig0, int32_t ___balance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadBalancer::.cctor()
extern "C"  void LoadBalancer__cctor_m936106148 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
