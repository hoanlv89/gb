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

// PaymentItemListView
struct PaymentItemListView_t3650854580;
// SimpleJSON.JSONArray
struct JSONArray_t3986483147;
// SimpleJSON.JSONClass
struct JSONClass_t1609506608;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONArray3986483147.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONClass1609506608.h"
#include "mscorlib_System_String2029220233.h"

// System.Void PaymentItemListView::.ctor()
extern "C"  void PaymentItemListView__ctor_m3936878015 (PaymentItemListView_t3650854580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentItemListView::Start()
extern "C"  void PaymentItemListView_Start_m2643157947 (PaymentItemListView_t3650854580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentItemListView::Update()
extern "C"  void PaymentItemListView_Update_m3924510770 (PaymentItemListView_t3650854580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentItemListView::setContent(SimpleJSON.JSONArray,SimpleJSON.JSONClass,System.String)
extern "C"  void PaymentItemListView_setContent_m870285813 (PaymentItemListView_t3650854580 * __this, JSONArray_t3986483147 * ___items0, JSONClass_t1609506608 * ___format1, String_t* ___selectedProviderName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentItemListView::doPaymentSMS(SimpleJSON.JSONClass)
extern "C"  void PaymentItemListView_doPaymentSMS_m2843467705 (PaymentItemListView_t3650854580 * __this, JSONClass_t1609506608 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
