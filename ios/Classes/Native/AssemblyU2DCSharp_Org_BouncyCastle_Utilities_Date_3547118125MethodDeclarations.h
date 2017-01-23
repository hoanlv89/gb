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

// Org.BouncyCastle.Utilities.Date.DateTimeUtilities
struct DateTimeUtilities_t3547118125;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime693205669.h"

// System.Void Org.BouncyCastle.Utilities.Date.DateTimeUtilities::.ctor()
extern "C"  void DateTimeUtilities__ctor_m634678688 (DateTimeUtilities_t3547118125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Utilities.Date.DateTimeUtilities::DateTimeToUnixMs(System.DateTime)
extern "C"  int64_t DateTimeUtilities_DateTimeToUnixMs_m1843651777 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Org.BouncyCastle.Utilities.Date.DateTimeUtilities::UnixMsToDateTime(System.Int64)
extern "C"  DateTime_t693205669  DateTimeUtilities_UnixMsToDateTime_m2679253449 (Il2CppObject * __this /* static, unused */, int64_t ___unixMs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Utilities.Date.DateTimeUtilities::CurrentUnixMs()
extern "C"  int64_t DateTimeUtilities_CurrentUnixMs_m3401136612 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.Date.DateTimeUtilities::.cctor()
extern "C"  void DateTimeUtilities__cctor_m980959279 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
