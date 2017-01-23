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

// IOSStoreKitResult
struct IOSStoreKitResult_t2359407583;
// System.String
struct String_t;
// ISN_Error
struct ISN_Error_t553253557;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_ISN_Error553253557.h"
#include "AssemblyU2DCSharp_InAppPurchaseState3414001346.h"
#include "AssemblyU2DCSharp_IOSTransactionErrorCode1822631322.h"

// System.Void IOSStoreKitResult::.ctor(System.String,ISN_Error)
extern "C"  void IOSStoreKitResult__ctor_m1093106419 (IOSStoreKitResult_t2359407583 * __this, String_t* ___productIdentifier0, ISN_Error_t553253557 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreKitResult::.ctor(System.String,InAppPurchaseState,System.String,System.String,System.String)
extern "C"  void IOSStoreKitResult__ctor_m2735797076 (IOSStoreKitResult_t2359407583 * __this, String_t* ___productIdentifier0, int32_t ___state1, String_t* ___applicationUsername2, String_t* ___receipt3, String_t* ___transactionIdentifier4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IOSTransactionErrorCode IOSStoreKitResult::get_TransactionErrorCode()
extern "C"  int32_t IOSStoreKitResult_get_TransactionErrorCode_m1029827189 (IOSStoreKitResult_t2359407583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InAppPurchaseState IOSStoreKitResult::get_State()
extern "C"  int32_t IOSStoreKitResult_get_State_m3315267005 (IOSStoreKitResult_t2359407583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String IOSStoreKitResult::get_ProductIdentifier()
extern "C"  String_t* IOSStoreKitResult_get_ProductIdentifier_m3238599700 (IOSStoreKitResult_t2359407583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String IOSStoreKitResult::get_ApplicationUsername()
extern "C"  String_t* IOSStoreKitResult_get_ApplicationUsername_m2715308138 (IOSStoreKitResult_t2359407583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String IOSStoreKitResult::get_Receipt()
extern "C"  String_t* IOSStoreKitResult_get_Receipt_m484686480 (IOSStoreKitResult_t2359407583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String IOSStoreKitResult::get_TransactionIdentifier()
extern "C"  String_t* IOSStoreKitResult_get_TransactionIdentifier_m236981577 (IOSStoreKitResult_t2359407583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
