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

// AppsFlyerTrackerCallbacks
struct AppsFlyerTrackerCallbacks_t3562121711;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void AppsFlyerTrackerCallbacks::.ctor()
extern "C"  void AppsFlyerTrackerCallbacks__ctor_m732473703 (AppsFlyerTrackerCallbacks_t3562121711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyerTrackerCallbacks::Start()
extern "C"  void AppsFlyerTrackerCallbacks_Start_m477420851 (AppsFlyerTrackerCallbacks_t3562121711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyerTrackerCallbacks::Update()
extern "C"  void AppsFlyerTrackerCallbacks_Update_m3539977628 (AppsFlyerTrackerCallbacks_t3562121711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyerTrackerCallbacks::didReceiveConversionData(System.String)
extern "C"  void AppsFlyerTrackerCallbacks_didReceiveConversionData_m63578107 (AppsFlyerTrackerCallbacks_t3562121711 * __this, String_t* ___conversionData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyerTrackerCallbacks::didReceiveConversionDataWithError(System.String)
extern "C"  void AppsFlyerTrackerCallbacks_didReceiveConversionDataWithError_m2417937269 (AppsFlyerTrackerCallbacks_t3562121711 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyerTrackerCallbacks::didFinishValidateReceipt(System.String)
extern "C"  void AppsFlyerTrackerCallbacks_didFinishValidateReceipt_m3244162645 (AppsFlyerTrackerCallbacks_t3562121711 * __this, String_t* ___validateResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyerTrackerCallbacks::didFinishValidateReceiptWithError(System.String)
extern "C"  void AppsFlyerTrackerCallbacks_didFinishValidateReceiptWithError_m3879255951 (AppsFlyerTrackerCallbacks_t3562121711 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyerTrackerCallbacks::onAppOpenAttribution(System.String)
extern "C"  void AppsFlyerTrackerCallbacks_onAppOpenAttribution_m1408065330 (AppsFlyerTrackerCallbacks_t3562121711 * __this, String_t* ___validateResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyerTrackerCallbacks::onAppOpenAttributionFailure(System.String)
extern "C"  void AppsFlyerTrackerCallbacks_onAppOpenAttributionFailure_m2322358354 (AppsFlyerTrackerCallbacks_t3562121711 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyerTrackerCallbacks::onInAppBillingSuccess(System.String)
extern "C"  void AppsFlyerTrackerCallbacks_onInAppBillingSuccess_m2356400244 (AppsFlyerTrackerCallbacks_t3562121711 * __this, String_t* ___res0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyerTrackerCallbacks::onInAppBillingFailure(System.String)
extern "C"  void AppsFlyerTrackerCallbacks_onInAppBillingFailure_m4085010177 (AppsFlyerTrackerCallbacks_t3562121711 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
