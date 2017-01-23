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

// Countly.DeviceInfo
struct DeviceInfo_t2438887176;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void Countly.DeviceInfo::.ctor()
extern "C"  void DeviceInfo__ctor_m3904915735 (DeviceInfo_t2438887176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Countly.DeviceInfo::get_UDID()
extern "C"  String_t* DeviceInfo_get_UDID_m3672207347 (DeviceInfo_t2438887176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.DeviceInfo::set_UDID(System.String)
extern "C"  void DeviceInfo_set_UDID_m3460923610 (DeviceInfo_t2438887176 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Countly.DeviceInfo::get_Device()
extern "C"  String_t* DeviceInfo_get_Device_m1765932371 (DeviceInfo_t2438887176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.DeviceInfo::set_Device(System.String)
extern "C"  void DeviceInfo_set_Device_m1319881704 (DeviceInfo_t2438887176 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Countly.DeviceInfo::get_OSName()
extern "C"  String_t* DeviceInfo_get_OSName_m2319639364 (DeviceInfo_t2438887176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.DeviceInfo::set_OSName(System.String)
extern "C"  void DeviceInfo_set_OSName_m2444763723 (DeviceInfo_t2438887176 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Countly.DeviceInfo::get_OSVersion()
extern "C"  String_t* DeviceInfo_get_OSVersion_m1998783441 (DeviceInfo_t2438887176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.DeviceInfo::set_OSVersion(System.String)
extern "C"  void DeviceInfo_set_OSVersion_m316876750 (DeviceInfo_t2438887176 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Countly.DeviceInfo::get_Carrier()
extern "C"  String_t* DeviceInfo_get_Carrier_m3811692583 (DeviceInfo_t2438887176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.DeviceInfo::set_Carrier(System.String)
extern "C"  void DeviceInfo_set_Carrier_m3994175492 (DeviceInfo_t2438887176 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Countly.DeviceInfo::get_Resolution()
extern "C"  String_t* DeviceInfo_get_Resolution_m256600609 (DeviceInfo_t2438887176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.DeviceInfo::set_Resolution(System.String)
extern "C"  void DeviceInfo_set_Resolution_m4127009820 (DeviceInfo_t2438887176 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Countly.DeviceInfo::get_Locale()
extern "C"  String_t* DeviceInfo_get_Locale_m709989067 (DeviceInfo_t2438887176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.DeviceInfo::set_Locale(System.String)
extern "C"  void DeviceInfo_set_Locale_m3258499044 (DeviceInfo_t2438887176 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Countly.DeviceInfo::get_AppVersion()
extern "C"  String_t* DeviceInfo_get_AppVersion_m3597920732 (DeviceInfo_t2438887176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.DeviceInfo::set_AppVersion(System.String)
extern "C"  void DeviceInfo_set_AppVersion_m4237909347 (DeviceInfo_t2438887176 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.DeviceInfo::Update()
extern "C"  void DeviceInfo_Update_m1799309288 (DeviceInfo_t2438887176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.DeviceInfo::JSONSerializeMetrics(System.Text.StringBuilder)
extern "C"  void DeviceInfo_JSONSerializeMetrics_m2787606886 (DeviceInfo_t2438887176 * __this, StringBuilder_t1221177846 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Countly.DeviceInfo::DetectUDID()
extern "C"  String_t* DeviceInfo_DetectUDID_m707580305 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Countly.DeviceInfo::DetectResolution()
extern "C"  String_t* DeviceInfo_DetectResolution_m2035544111 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
