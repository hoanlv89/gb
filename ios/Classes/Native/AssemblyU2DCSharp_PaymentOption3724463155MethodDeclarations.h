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

// PaymentOption
struct PaymentOption_t3724463155;
// SimpleJSON.JSONArray
struct JSONArray_t3986483147;
// SimpleJSON.JSONClass
struct JSONClass_t1609506608;
// PaymentItemListView
struct PaymentItemListView_t3650854580;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArray3986483147.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONClass1609506608.h"
#include "AssemblyU2DCSharp_PaymentItemListView3650854580.h"

// System.Void PaymentOption::.ctor()
extern "C"  void PaymentOption__ctor_m2044932374 (PaymentOption_t3724463155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentOption::Start()
extern "C"  void PaymentOption_Start_m3691629690 (PaymentOption_t3724463155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentOption::Update()
extern "C"  void PaymentOption_Update_m3669834387 (PaymentOption_t3724463155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentOption::active(System.Int32)
extern "C"  void PaymentOption_active_m3212661787 (PaymentOption_t3724463155 * __this, int32_t ___providerindex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentOption::deactive()
extern "C"  void PaymentOption_deactive_m1469780951 (PaymentOption_t3724463155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentOption::setData(SimpleJSON.JSONArray,SimpleJSON.JSONClass,PaymentItemListView)
extern "C"  void PaymentOption_setData_m1799059023 (PaymentOption_t3724463155 * __this, JSONArray_t3986483147 * ___jsondata0, JSONClass_t1609506608 * ___format1, PaymentItemListView_t3650854580 * ___view2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentOption::activeProvider(System.Int32)
extern "C"  void PaymentOption_activeProvider_m1106974894 (PaymentOption_t3724463155 * __this, int32_t ___providerindex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
