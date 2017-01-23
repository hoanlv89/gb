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

// PaymentManager
struct PaymentManager_t2844975479;
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

// System.Void PaymentManager::.ctor()
extern "C"  void PaymentManager__ctor_m162205204 (PaymentManager_t2844975479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentManager::init()
extern "C"  void PaymentManager_init_m2596048804 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentManager::buyItem(System.String)
extern "C"  void PaymentManager_buyItem_m680112439 (Il2CppObject * __this /* static, unused */, String_t* ___productId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentManager::UnlockProducts(System.String)
extern "C"  void PaymentManager_UnlockProducts_m526547580 (Il2CppObject * __this /* static, unused */, String_t* ___productIdentifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentManager::OnTransactionComplete(IOSStoreKitResult)
extern "C"  void PaymentManager_OnTransactionComplete_m2552910675 (Il2CppObject * __this /* static, unused */, IOSStoreKitResult_t2359407583 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentManager::validateReceipt(System.String)
extern "C"  void PaymentManager_validateReceipt_m4144809612 (Il2CppObject * __this /* static, unused */, String_t* ___receipt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentManager::OnRestoreComplete(IOSStoreKitRestoreResult)
extern "C"  void PaymentManager_OnRestoreComplete_m3417992639 (Il2CppObject * __this /* static, unused */, IOSStoreKitRestoreResult_t3305276155 * ___res0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentManager::HandleOnVerificationComplete(IOSStoreKitVerificationResponse)
extern "C"  void PaymentManager_HandleOnVerificationComplete_m2687357627 (Il2CppObject * __this /* static, unused */, IOSStoreKitVerificationResponse_t4263658582 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentManager::OnStoreKitInitComplete(ISN_Result)
extern "C"  void PaymentManager_OnStoreKitInitComplete_m1732614715 (Il2CppObject * __this /* static, unused */, ISN_Result_t2775631610 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentManager::.cctor()
extern "C"  void PaymentManager__cctor_m2747611345 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
