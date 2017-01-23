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

// IOSStoreKitRestoreResult
struct IOSStoreKitRestoreResult_t3305276155;
// ISN_Error
struct ISN_Error_t553253557;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ISN_Error553253557.h"
#include "AssemblyU2DCSharp_IOSTransactionErrorCode1822631322.h"

// System.Void IOSStoreKitRestoreResult::.ctor(ISN_Error)
extern "C"  void IOSStoreKitRestoreResult__ctor_m957296133 (IOSStoreKitRestoreResult_t3305276155 * __this, ISN_Error_t553253557 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreKitRestoreResult::.ctor(System.Boolean)
extern "C"  void IOSStoreKitRestoreResult__ctor_m2944630037 (IOSStoreKitRestoreResult_t3305276155 * __this, bool ___IsResultSucceeded0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IOSTransactionErrorCode IOSStoreKitRestoreResult::get_TransactionErrorCode()
extern "C"  int32_t IOSStoreKitRestoreResult_get_TransactionErrorCode_m1192121613 (IOSStoreKitRestoreResult_t3305276155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
