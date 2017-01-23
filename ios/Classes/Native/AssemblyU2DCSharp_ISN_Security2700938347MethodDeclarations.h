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

// ISN_Security
struct ISN_Security_t2700938347;
// System.String
struct String_t;
// ISN_LocalReceiptResult
struct ISN_LocalReceiptResult_t3746327569;
// ISN_DeviceGUID
struct ISN_DeviceGUID_t1787531836;
// ISN_Result
struct ISN_Result_t2775631610;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_ISN_LocalReceiptResult3746327569.h"
#include "AssemblyU2DCSharp_ISN_DeviceGUID1787531836.h"
#include "AssemblyU2DCSharp_ISN_Result2775631610.h"

// System.Void ISN_Security::.ctor()
extern "C"  void ISN_Security__ctor_m1051699456 (ISN_Security_t2700938347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Security::_ISN_RetrieveLocalReceipt()
extern "C"  void ISN_Security__ISN_RetrieveLocalReceipt_m2283169237 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Security::_ISN_RetrieveDeviceGUID()
extern "C"  void ISN_Security__ISN_RetrieveDeviceGUID_m4068899339 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Security::_ISN_ReceiptRefreshRequest()
extern "C"  void ISN_Security__ISN_ReceiptRefreshRequest_m3591898944 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Security::RetrieveLocalReceipt()
extern "C"  void ISN_Security_RetrieveLocalReceipt_m586178997 (ISN_Security_t2700938347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Security::RetrieveDeviceGUID()
extern "C"  void ISN_Security_RetrieveDeviceGUID_m3405701123 (ISN_Security_t2700938347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Security::StartReceiptRefreshRequest()
extern "C"  void ISN_Security_StartReceiptRefreshRequest_m3305337582 (ISN_Security_t2700938347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Security::Event_GUIDLoaded(System.String)
extern "C"  void ISN_Security_Event_GUIDLoaded_m3680898023 (ISN_Security_t2700938347 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Security::Event_ReceiptLoaded(System.String)
extern "C"  void ISN_Security_Event_ReceiptLoaded_m918560064 (ISN_Security_t2700938347 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Security::Event_ReceiptRefreshRequestReceived(System.String)
extern "C"  void ISN_Security_Event_ReceiptRefreshRequestReceived_m694356734 (ISN_Security_t2700938347 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Security::.cctor()
extern "C"  void ISN_Security__cctor_m2669051837 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Security::<OnReceiptLoaded>m__0(ISN_LocalReceiptResult)
extern "C"  void ISN_Security_U3COnReceiptLoadedU3Em__0_m4128200046 (Il2CppObject * __this /* static, unused */, ISN_LocalReceiptResult_t3746327569 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Security::<OnGUIDLoaded>m__1(ISN_DeviceGUID)
extern "C"  void ISN_Security_U3COnGUIDLoadedU3Em__1_m450949273 (Il2CppObject * __this /* static, unused */, ISN_DeviceGUID_t1787531836 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Security::<OnReceiptRefreshComplete>m__2(ISN_Result)
extern "C"  void ISN_Security_U3COnReceiptRefreshCompleteU3Em__2_m3436404960 (Il2CppObject * __this /* static, unused */, ISN_Result_t2775631610 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
