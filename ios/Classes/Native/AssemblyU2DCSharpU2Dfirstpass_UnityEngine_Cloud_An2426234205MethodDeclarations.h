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

// UnityEngine.Cloud.Analytics.BasePlatformWrapper
struct BasePlatformWrapper_t2426234205;
// System.String
struct String_t;
// UnityEngine.Cloud.Analytics.IWWW
struct IWWW_t2388823288;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.Cloud.Analytics.BasePlatformWrapper::.ctor()
extern "C"  void BasePlatformWrapper__ctor_m3632882822 (BasePlatformWrapper_t2426234205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Cloud.Analytics.BasePlatformWrapper::get_appVersion()
extern "C"  String_t* BasePlatformWrapper_get_appVersion_m2774290019 (BasePlatformWrapper_t2426234205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Cloud.Analytics.BasePlatformWrapper::get_appBundleIdentifier()
extern "C"  String_t* BasePlatformWrapper_get_appBundleIdentifier_m820056288 (BasePlatformWrapper_t2426234205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Cloud.Analytics.BasePlatformWrapper::get_appInstallMode()
extern "C"  String_t* BasePlatformWrapper_get_appInstallMode_m1658122467 (BasePlatformWrapper_t2426234205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Analytics.BasePlatformWrapper::get_isRootedOrJailbroken()
extern "C"  bool BasePlatformWrapper_get_isRootedOrJailbroken_m1186579790 (BasePlatformWrapper_t2426234205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Cloud.Analytics.BasePlatformWrapper::get_deviceMake()
extern "C"  String_t* BasePlatformWrapper_get_deviceMake_m2843919350 (BasePlatformWrapper_t2426234205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Analytics.BasePlatformWrapper::get_isNetworkReachable()
extern "C"  bool BasePlatformWrapper_get_isNetworkReachable_m4267807710 (BasePlatformWrapper_t2426234205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Analytics.BasePlatformWrapper::get_isWebPlayer()
extern "C"  bool BasePlatformWrapper_get_isWebPlayer_m71100660 (BasePlatformWrapper_t2426234205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Analytics.BasePlatformWrapper::get_isAndroidPlayer()
extern "C"  bool BasePlatformWrapper_get_isAndroidPlayer_m355887151 (BasePlatformWrapper_t2426234205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Analytics.BasePlatformWrapper::get_isIPhonePlayer()
extern "C"  bool BasePlatformWrapper_get_isIPhonePlayer_m3957939805 (BasePlatformWrapper_t2426234205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Analytics.BasePlatformWrapper::get_isWebGLPlayer()
extern "C"  bool BasePlatformWrapper_get_isWebGLPlayer_m1213628651 (BasePlatformWrapper_t2426234205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Analytics.BasePlatformWrapper::get_isEditor()
extern "C"  bool BasePlatformWrapper_get_isEditor_m4058968574 (BasePlatformWrapper_t2426234205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Cloud.Analytics.BasePlatformWrapper::get_levelCount()
extern "C"  int32_t BasePlatformWrapper_get_levelCount_m3553233406 (BasePlatformWrapper_t2426234205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Cloud.Analytics.BasePlatformWrapper::get_loadedLevel()
extern "C"  int32_t BasePlatformWrapper_get_loadedLevel_m2024945170 (BasePlatformWrapper_t2426234205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Cloud.Analytics.BasePlatformWrapper::get_loadedLevelName()
extern "C"  String_t* BasePlatformWrapper_get_loadedLevelName_m4216208922 (BasePlatformWrapper_t2426234205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Cloud.Analytics.BasePlatformWrapper::get_persistentDataPath()
extern "C"  String_t* BasePlatformWrapper_get_persistentDataPath_m4085361920 (BasePlatformWrapper_t2426234205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Cloud.Analytics.BasePlatformWrapper::get_platformName()
extern "C"  String_t* BasePlatformWrapper_get_platformName_m1533580058 (BasePlatformWrapper_t2426234205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Cloud.Analytics.BasePlatformWrapper::get_unityVersion()
extern "C"  String_t* BasePlatformWrapper_get_unityVersion_m697426961 (BasePlatformWrapper_t2426234205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.Cloud.Analytics.BasePlatformWrapper::GetLongRandom()
extern "C"  int64_t BasePlatformWrapper_GetLongRandom_m186645700 (BasePlatformWrapper_t2426234205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Cloud.Analytics.BasePlatformWrapper::get_deviceModel()
extern "C"  String_t* BasePlatformWrapper_get_deviceModel_m1715249307 (BasePlatformWrapper_t2426234205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Cloud.Analytics.BasePlatformWrapper::get_deviceUniqueIdentifier()
extern "C"  String_t* BasePlatformWrapper_get_deviceUniqueIdentifier_m2135293620 (BasePlatformWrapper_t2426234205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Cloud.Analytics.BasePlatformWrapper::get_operatingSystem()
extern "C"  String_t* BasePlatformWrapper_get_operatingSystem_m1607087110 (BasePlatformWrapper_t2426234205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Cloud.Analytics.BasePlatformWrapper::get_processorType()
extern "C"  String_t* BasePlatformWrapper_get_processorType_m144042544 (BasePlatformWrapper_t2426234205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Cloud.Analytics.BasePlatformWrapper::get_systemMemorySize()
extern "C"  int32_t BasePlatformWrapper_get_systemMemorySize_m1766448136 (BasePlatformWrapper_t2426234205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Cloud.Analytics.IWWW UnityEngine.Cloud.Analytics.BasePlatformWrapper::newWWW(System.String,System.Byte[],System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  Il2CppObject * BasePlatformWrapper_newWWW_m1998342932 (BasePlatformWrapper_t2426234205 * __this, String_t* ___url0, ByteU5BU5D_t3397334013* ___body1, Dictionary_2_t3943999495 * ___headers2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
