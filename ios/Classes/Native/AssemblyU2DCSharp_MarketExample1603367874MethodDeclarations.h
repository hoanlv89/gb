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

// MarketExample
struct MarketExample_t1603367874;
// ISN_DeviceGUID
struct ISN_DeviceGUID_t1787531836;
// ISN_LocalReceiptResult
struct ISN_LocalReceiptResult_t3746327569;
// ISN_Result
struct ISN_Result_t2775631610;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ISN_DeviceGUID1787531836.h"
#include "AssemblyU2DCSharp_ISN_LocalReceiptResult3746327569.h"
#include "AssemblyU2DCSharp_IOSDialogResult3739241316.h"
#include "AssemblyU2DCSharp_ISN_Result2775631610.h"

// System.Void MarketExample::.ctor()
extern "C"  void MarketExample__ctor_m1626354319 (MarketExample_t1603367874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MarketExample::Awake()
extern "C"  void MarketExample_Awake_m1836618846 (MarketExample_t1603367874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MarketExample::OnGUI()
extern "C"  void MarketExample_OnGUI_m2350697745 (MarketExample_t1603367874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MarketExample::StoreProductViewDisnissed()
extern "C"  void MarketExample_StoreProductViewDisnissed_m3599512020 (MarketExample_t1603367874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MarketExample::OnGUIDLoaded(ISN_DeviceGUID)
extern "C"  void MarketExample_OnGUIDLoaded_m3148954120 (MarketExample_t1603367874 * __this, ISN_DeviceGUID_t1787531836 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MarketExample::OnPurchasesStateSettingsLoaded(System.Boolean)
extern "C"  void MarketExample_OnPurchasesStateSettingsLoaded_m21100348 (MarketExample_t1603367874 * __this, bool ___IsInAppPurchasesEnabled0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MarketExample::OnReceiptLoaded(ISN_LocalReceiptResult)
extern "C"  void MarketExample_OnReceiptLoaded_m2565174638 (MarketExample_t1603367874 * __this, ISN_LocalReceiptResult_t3746327569 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MarketExample::OnComplete(IOSDialogResult)
extern "C"  void MarketExample_OnComplete_m1718114179 (MarketExample_t1603367874 * __this, int32_t ___res0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MarketExample::OnReceiptRefreshComplete(ISN_Result)
extern "C"  void MarketExample_OnReceiptRefreshComplete_m202700502 (MarketExample_t1603367874 * __this, ISN_Result_t2775631610 * ___res0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MarketExample::Dialog_RetrieveLocalReceipt(IOSDialogResult)
extern "C"  void MarketExample_Dialog_RetrieveLocalReceipt_m1485933851 (MarketExample_t1603367874 * __this, int32_t ___res0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
