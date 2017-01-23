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

// IOSInAppPurchaseManager
struct IOSInAppPurchaseManager_t644626385;
// System.Action`1<IOSStoreKitResult>
struct Action_1_t2161206965;
// System.Action`1<IOSStoreKitRestoreResult>
struct Action_1_t3107075537;
// System.Action`1<ISN_Result>
struct Action_1_t2577430992;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// System.Action`1<IOSStoreKitVerificationResponse>
struct Action_1_t4065457964;
// System.String
struct String_t;
// IOSProductTemplate
struct IOSProductTemplate_t1036598382;
// IOSStoreProductView
struct IOSStoreProductView_t607200268;
// System.Collections.Generic.List`1<IOSProductTemplate>
struct List_1_t405719514;
// IOSStoreKitResult
struct IOSStoreKitResult_t2359407583;
// IOSStoreKitRestoreResult
struct IOSStoreKitRestoreResult_t3305276155;
// ISN_Result
struct ISN_Result_t2775631610;
// IOSStoreKitVerificationResponse
struct IOSStoreKitVerificationResponse_t4263658582;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_IOSStoreProductView607200268.h"
#include "AssemblyU2DCSharp_IOSTransactionErrorCode1822631322.h"
#include "AssemblyU2DCSharp_IOSStoreKitResult2359407583.h"
#include "AssemblyU2DCSharp_IOSStoreKitRestoreResult3305276155.h"
#include "AssemblyU2DCSharp_ISN_Result2775631610.h"
#include "AssemblyU2DCSharp_IOSStoreKitVerificationResponse4263658582.h"

// System.Void IOSInAppPurchaseManager::.ctor()
extern "C"  void IOSInAppPurchaseManager__ctor_m1169473228 (IOSInAppPurchaseManager_t644626385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::add_OnTransactionComplete(System.Action`1<IOSStoreKitResult>)
extern "C"  void IOSInAppPurchaseManager_add_OnTransactionComplete_m3023858701 (Il2CppObject * __this /* static, unused */, Action_1_t2161206965 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::remove_OnTransactionComplete(System.Action`1<IOSStoreKitResult>)
extern "C"  void IOSInAppPurchaseManager_remove_OnTransactionComplete_m2166749436 (Il2CppObject * __this /* static, unused */, Action_1_t2161206965 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::add_OnRestoreComplete(System.Action`1<IOSStoreKitRestoreResult>)
extern "C"  void IOSInAppPurchaseManager_add_OnRestoreComplete_m1672779289 (Il2CppObject * __this /* static, unused */, Action_1_t3107075537 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::remove_OnRestoreComplete(System.Action`1<IOSStoreKitRestoreResult>)
extern "C"  void IOSInAppPurchaseManager_remove_OnRestoreComplete_m4095046072 (Il2CppObject * __this /* static, unused */, Action_1_t3107075537 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::add_OnStoreKitInitComplete(System.Action`1<ISN_Result>)
extern "C"  void IOSInAppPurchaseManager_add_OnStoreKitInitComplete_m434975573 (Il2CppObject * __this /* static, unused */, Action_1_t2577430992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::remove_OnStoreKitInitComplete(System.Action`1<ISN_Result>)
extern "C"  void IOSInAppPurchaseManager_remove_OnStoreKitInitComplete_m856715212 (Il2CppObject * __this /* static, unused */, Action_1_t2577430992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::add_OnPurchasesStateSettingsLoaded(System.Action`1<System.Boolean>)
extern "C"  void IOSInAppPurchaseManager_add_OnPurchasesStateSettingsLoaded_m3882691367 (Il2CppObject * __this /* static, unused */, Action_1_t3627374100 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::remove_OnPurchasesStateSettingsLoaded(System.Action`1<System.Boolean>)
extern "C"  void IOSInAppPurchaseManager_remove_OnPurchasesStateSettingsLoaded_m1517391232 (Il2CppObject * __this /* static, unused */, Action_1_t3627374100 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::add_OnVerificationComplete(System.Action`1<IOSStoreKitVerificationResponse>)
extern "C"  void IOSInAppPurchaseManager_add_OnVerificationComplete_m1779016707 (Il2CppObject * __this /* static, unused */, Action_1_t4065457964 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::remove_OnVerificationComplete(System.Action`1<IOSStoreKitVerificationResponse>)
extern "C"  void IOSInAppPurchaseManager_remove_OnVerificationComplete_m1582466936 (Il2CppObject * __this /* static, unused */, Action_1_t4065457964 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::Awake()
extern "C"  void IOSInAppPurchaseManager_Awake_m728279501 (IOSInAppPurchaseManager_t644626385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::loadStore()
extern "C"  void IOSInAppPurchaseManager_loadStore_m2301575177 (IOSInAppPurchaseManager_t644626385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::RequestInAppSettingState()
extern "C"  void IOSInAppPurchaseManager_RequestInAppSettingState_m3391090446 (IOSInAppPurchaseManager_t644626385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::buyProduct(System.String)
extern "C"  void IOSInAppPurchaseManager_buyProduct_m630097255 (IOSInAppPurchaseManager_t644626385 * __this, String_t* ___productId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::addProductId(System.String)
extern "C"  void IOSInAppPurchaseManager_addProductId_m3734468261 (IOSInAppPurchaseManager_t644626385 * __this, String_t* ___productId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IOSProductTemplate IOSInAppPurchaseManager::GetProductById(System.String)
extern "C"  IOSProductTemplate_t1036598382 * IOSInAppPurchaseManager_GetProductById_m244587224 (IOSInAppPurchaseManager_t644626385 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::restorePurchases()
extern "C"  void IOSInAppPurchaseManager_restorePurchases_m2029669048 (IOSInAppPurchaseManager_t644626385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::verifyLastPurchase(System.String)
extern "C"  void IOSInAppPurchaseManager_verifyLastPurchase_m2958022130 (IOSInAppPurchaseManager_t644626385 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::VerifyLastPurchase(System.String)
extern "C"  void IOSInAppPurchaseManager_VerifyLastPurchase_m2386444434 (IOSInAppPurchaseManager_t644626385 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::RegisterProductView(IOSStoreProductView)
extern "C"  void IOSInAppPurchaseManager_RegisterProductView_m3355014571 (IOSInAppPurchaseManager_t644626385 * __this, IOSStoreProductView_t607200268 * ___view0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<IOSProductTemplate> IOSInAppPurchaseManager::get_products()
extern "C"  List_1_t405719514 * IOSInAppPurchaseManager_get_products_m946512798 (IOSInAppPurchaseManager_t644626385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean IOSInAppPurchaseManager::get_IsStoreLoaded()
extern "C"  bool IOSInAppPurchaseManager_get_IsStoreLoaded_m3811618283 (IOSInAppPurchaseManager_t644626385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean IOSInAppPurchaseManager::get_IsInAppPurchasesEnabled()
extern "C"  bool IOSInAppPurchaseManager_get_IsInAppPurchasesEnabled_m3381933626 (IOSInAppPurchaseManager_t644626385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean IOSInAppPurchaseManager::get_IsWaitingLoadResult()
extern "C"  bool IOSInAppPurchaseManager_get_IsWaitingLoadResult_m1640646835 (IOSInAppPurchaseManager_t644626385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 IOSInAppPurchaseManager::get_nextId()
extern "C"  int32_t IOSInAppPurchaseManager_get_nextId_m857341981 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::onStoreKitStart(System.String)
extern "C"  void IOSInAppPurchaseManager_onStoreKitStart_m3679063940 (IOSInAppPurchaseManager_t644626385 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::OnStoreKitInitFailed(System.String)
extern "C"  void IOSInAppPurchaseManager_OnStoreKitInitFailed_m2068004431 (IOSInAppPurchaseManager_t644626385 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::onStoreDataReceived(System.String)
extern "C"  void IOSInAppPurchaseManager_onStoreDataReceived_m3120330807 (IOSInAppPurchaseManager_t644626385 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::onProductBought(System.String)
extern "C"  void IOSInAppPurchaseManager_onProductBought_m308685875 (IOSInAppPurchaseManager_t644626385 * __this, String_t* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::onProductStateDeferred(System.String)
extern "C"  void IOSInAppPurchaseManager_onProductStateDeferred_m4228607322 (IOSInAppPurchaseManager_t644626385 * __this, String_t* ___productIdentifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::onTransactionFailed(System.String)
extern "C"  void IOSInAppPurchaseManager_onTransactionFailed_m1773997240 (IOSInAppPurchaseManager_t644626385 * __this, String_t* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::onVerificationResult(System.String)
extern "C"  void IOSInAppPurchaseManager_onVerificationResult_m3579832179 (IOSInAppPurchaseManager_t644626385 * __this, String_t* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::onRestoreTransactionFailed(System.String)
extern "C"  void IOSInAppPurchaseManager_onRestoreTransactionFailed_m1147645890 (IOSInAppPurchaseManager_t644626385 * __this, String_t* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::onRestoreTransactionComplete(System.String)
extern "C"  void IOSInAppPurchaseManager_onRestoreTransactionComplete_m460896576 (IOSInAppPurchaseManager_t644626385 * __this, String_t* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::OnProductViewLoaded(System.String)
extern "C"  void IOSInAppPurchaseManager_OnProductViewLoaded_m61580006 (IOSInAppPurchaseManager_t644626385 * __this, String_t* ___viewId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::OnProductViewLoadedFailed(System.String)
extern "C"  void IOSInAppPurchaseManager_OnProductViewLoadedFailed_m3269617433 (IOSInAppPurchaseManager_t644626385 * __this, String_t* ___viewId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::OnProductViewDismissed(System.String)
extern "C"  void IOSInAppPurchaseManager_OnProductViewDismissed_m3337811570 (IOSInAppPurchaseManager_t644626385 * __this, String_t* ___viewId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::FireSuccessInitEvent()
extern "C"  void IOSInAppPurchaseManager_FireSuccessInitEvent_m552864905 (IOSInAppPurchaseManager_t644626385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::FireRestoreCompleteEvent()
extern "C"  void IOSInAppPurchaseManager_FireRestoreCompleteEvent_m2260826529 (IOSInAppPurchaseManager_t644626385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::FireProductBoughtEvent(System.String,System.String,System.String,System.String,System.Boolean)
extern "C"  void IOSInAppPurchaseManager_FireProductBoughtEvent_m3587038079 (IOSInAppPurchaseManager_t644626385 * __this, String_t* ___productIdentifier0, String_t* ___applicationUsername1, String_t* ___receipt2, String_t* ___transactionIdentifier3, bool ___IsRestored4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::SendTransactionFailEvent(System.String,System.String,IOSTransactionErrorCode)
extern "C"  void IOSInAppPurchaseManager_SendTransactionFailEvent_m3660563928 (IOSInAppPurchaseManager_t644626385 * __this, String_t* ___productIdentifier0, String_t* ___errorDescribtion1, int32_t ___errorCode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::EditorFakeInitEvent()
extern "C"  void IOSInAppPurchaseManager_EditorFakeInitEvent_m2515970670 (IOSInAppPurchaseManager_t644626385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::.cctor()
extern "C"  void IOSInAppPurchaseManager__cctor_m1033748187 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::<OnTransactionComplete>m__0(IOSStoreKitResult)
extern "C"  void IOSInAppPurchaseManager_U3COnTransactionCompleteU3Em__0_m876950180 (Il2CppObject * __this /* static, unused */, IOSStoreKitResult_t2359407583 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::<OnRestoreComplete>m__1(IOSStoreKitRestoreResult)
extern "C"  void IOSInAppPurchaseManager_U3COnRestoreCompleteU3Em__1_m2745267443 (Il2CppObject * __this /* static, unused */, IOSStoreKitRestoreResult_t3305276155 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::<OnStoreKitInitComplete>m__2(ISN_Result)
extern "C"  void IOSInAppPurchaseManager_U3COnStoreKitInitCompleteU3Em__2_m1366557346 (Il2CppObject * __this /* static, unused */, ISN_Result_t2775631610 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::<OnPurchasesStateSettingsLoaded>m__3(System.Boolean)
extern "C"  void IOSInAppPurchaseManager_U3COnPurchasesStateSettingsLoadedU3Em__3_m2593033627 (Il2CppObject * __this /* static, unused */, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::<OnVerificationComplete>m__4(IOSStoreKitVerificationResponse)
extern "C"  void IOSInAppPurchaseManager_U3COnVerificationCompleteU3Em__4_m3630206628 (Il2CppObject * __this /* static, unused */, IOSStoreKitVerificationResponse_t4263658582 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
