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

// BestHTTP.Logger.DefaultLogger
struct DefaultLogger_t639890009;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_Logger_Loglevels4278436247.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Exception1927440687.h"

// System.Void BestHTTP.Logger.DefaultLogger::.ctor()
extern "C"  void DefaultLogger__ctor_m2119664918 (DefaultLogger_t639890009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.Logger.Loglevels BestHTTP.Logger.DefaultLogger::get_Level()
extern "C"  int32_t DefaultLogger_get_Level_m831338833 (DefaultLogger_t639890009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Logger.DefaultLogger::set_Level(BestHTTP.Logger.Loglevels)
extern "C"  void DefaultLogger_set_Level_m498550894 (DefaultLogger_t639890009 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Logger.DefaultLogger::get_FormatVerbose()
extern "C"  String_t* DefaultLogger_get_FormatVerbose_m2247346945 (DefaultLogger_t639890009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Logger.DefaultLogger::set_FormatVerbose(System.String)
extern "C"  void DefaultLogger_set_FormatVerbose_m3974859472 (DefaultLogger_t639890009 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Logger.DefaultLogger::get_FormatInfo()
extern "C"  String_t* DefaultLogger_get_FormatInfo_m2498737397 (DefaultLogger_t639890009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Logger.DefaultLogger::set_FormatInfo(System.String)
extern "C"  void DefaultLogger_set_FormatInfo_m2394404612 (DefaultLogger_t639890009 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Logger.DefaultLogger::get_FormatWarn()
extern "C"  String_t* DefaultLogger_get_FormatWarn_m1246290837 (DefaultLogger_t639890009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Logger.DefaultLogger::set_FormatWarn(System.String)
extern "C"  void DefaultLogger_set_FormatWarn_m3470988424 (DefaultLogger_t639890009 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Logger.DefaultLogger::get_FormatErr()
extern "C"  String_t* DefaultLogger_get_FormatErr_m3934822694 (DefaultLogger_t639890009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Logger.DefaultLogger::set_FormatErr(System.String)
extern "C"  void DefaultLogger_set_FormatErr_m2873088929 (DefaultLogger_t639890009 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Logger.DefaultLogger::get_FormatEx()
extern "C"  String_t* DefaultLogger_get_FormatEx_m1636991404 (DefaultLogger_t639890009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Logger.DefaultLogger::set_FormatEx(System.String)
extern "C"  void DefaultLogger_set_FormatEx_m684218749 (DefaultLogger_t639890009 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Logger.DefaultLogger::Verbose(System.String,System.String)
extern "C"  void DefaultLogger_Verbose_m744841654 (DefaultLogger_t639890009 * __this, String_t* ___division0, String_t* ___verb1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Logger.DefaultLogger::Information(System.String,System.String)
extern "C"  void DefaultLogger_Information_m67484566 (DefaultLogger_t639890009 * __this, String_t* ___division0, String_t* ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Logger.DefaultLogger::Warning(System.String,System.String)
extern "C"  void DefaultLogger_Warning_m484632060 (DefaultLogger_t639890009 * __this, String_t* ___division0, String_t* ___warn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Logger.DefaultLogger::Error(System.String,System.String)
extern "C"  void DefaultLogger_Error_m2308160758 (DefaultLogger_t639890009 * __this, String_t* ___division0, String_t* ___err1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Logger.DefaultLogger::Exception(System.String,System.String,System.Exception)
extern "C"  void DefaultLogger_Exception_m2881659423 (DefaultLogger_t639890009 * __this, String_t* ___division0, String_t* ___msg1, Exception_t1927440687 * ___ex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
