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

// PaymentManagerExample
struct PaymentManagerExample_t3283960187;
// System.String
struct String_t;
// IOSStoreKitResult
struct IOSStoreKitResult_t2359407583;
// IOSStoreKitRestoreResult
struct IOSStoreKitRestoreResult_t3305276155;
// IOSStoreKitVerificationResponse
struct IOSStoreKitVerificationResponse_t4263658582;
// ISN_Result
struct ISN_Result_t2775631610;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_IOSStoreKitResult2359407583.h"
#include "AssemblyU2DCSharp_IOSStoreKitRestoreResult3305276155.h"
#include "AssemblyU2DCSharp_IOSStoreKitVerificationResponse4263658582.h"
#include "AssemblyU2DCSharp_ISN_Result2775631610.h"

// System.Void PaymentManagerExample::.ctor()
extern "C"  void PaymentManagerExample__ctor_m147203900 (PaymentManagerExample_t3283960187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentManagerExample::init()
extern "C"  void PaymentManagerExample_init_m1006799792 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentManagerExample::buyItem(System.String)
extern "C"  void PaymentManagerExample_buyItem_m1972912707 (Il2CppObject * __this /* static, unused */, String_t* ___productId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentManagerExample::UnlockProducts(System.String)
extern "C"  void PaymentManagerExample_UnlockProducts_m2735516960 (Il2CppObject * __this /* static, unused */, String_t* ___productIdentifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentManagerExample::OnTransactionComplete(IOSStoreKitResult)
extern "C"  void PaymentManagerExample_OnTransactionComplete_m3687947871 (Il2CppObject * __this /* static, unused */, IOSStoreKitResult_t2359407583 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentManagerExample::OnRestoreComplete(IOSStoreKitRestoreResult)
extern "C"  void PaymentManagerExample_OnRestoreComplete_m1314122283 (Il2CppObject * __this /* static, unused */, IOSStoreKitRestoreResult_t3305276155 * ___res0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentManagerExample::HandleOnVerificationComplete(IOSStoreKitVerificationResponse)
extern "C"  void PaymentManagerExample_HandleOnVerificationComplete_m3312055695 (Il2CppObject * __this /* static, unused */, IOSStoreKitVerificationResponse_t4263658582 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentManagerExample::OnStoreKitInitComplete(ISN_Result)
extern "C"  void PaymentManagerExample_OnStoreKitInitComplete_m3972907383 (Il2CppObject * __this /* static, unused */, ISN_Result_t2775631610 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentManagerExample::.cctor()
extern "C"  void PaymentManagerExample__cctor_m1145921329 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
