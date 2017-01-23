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
struct AppsFlyerTrackerCallbacks_t3562121710;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void AppsFlyerTrackerCallbacks::.ctor()
extern "C"  void AppsFlyerTrackerCallbacks__ctor_m1914119225 (AppsFlyerTrackerCallbacks_t3562121710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyerTrackerCallbacks::Start()
extern "C"  void AppsFlyerTrackerCallbacks_Start_m2082414881 (AppsFlyerTrackerCallbacks_t3562121710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyerTrackerCallbacks::Update()
extern "C"  void AppsFlyerTrackerCallbacks_Update_m3628352294 (AppsFlyerTrackerCallbacks_t3562121710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyerTrackerCallbacks::didReceiveConversionData(System.String)
extern "C"  void AppsFlyerTrackerCallbacks_didReceiveConversionData_m3717905989 (AppsFlyerTrackerCallbacks_t3562121710 * __this, String_t* ___conversionData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyerTrackerCallbacks::didReceiveConversionDataWithError(System.String)
extern "C"  void AppsFlyerTrackerCallbacks_didReceiveConversionDataWithError_m3101201123 (AppsFlyerTrackerCallbacks_t3562121710 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyerTrackerCallbacks::didFinishValidateReceipt(System.String)
extern "C"  void AppsFlyerTrackerCallbacks_didFinishValidateReceipt_m1223936711 (AppsFlyerTrackerCallbacks_t3562121710 * __this, String_t* ___validateResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyerTrackerCallbacks::didFinishValidateReceiptWithError(System.String)
extern "C"  void AppsFlyerTrackerCallbacks_didFinishValidateReceiptWithError_m803271077 (AppsFlyerTrackerCallbacks_t3562121710 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyerTrackerCallbacks::onAppOpenAttribution(System.String)
extern "C"  void AppsFlyerTrackerCallbacks_onAppOpenAttribution_m4211417896 (AppsFlyerTrackerCallbacks_t3562121710 * __this, String_t* ___validateResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppsFlyerTrackerCallbacks::onAppOpenAttributionFailure(System.String)
extern "C"  void AppsFlyerTrackerCallbacks_onAppOpenAttributionFailure_m1384204616 (AppsFlyerTrackerCallbacks_t3562121710 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
