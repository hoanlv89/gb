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

// ISN_LocalNotification
struct ISN_LocalNotification_t273186689;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_String2029220233.h"

// System.Void ISN_LocalNotification::.ctor(System.DateTime,System.String,System.Boolean)
extern "C"  void ISN_LocalNotification__ctor_m704509163 (ISN_LocalNotification_t273186689 * __this, DateTime_t693205669  ___time0, String_t* ___message1, bool ___useSound2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_LocalNotification::SetId(System.Int32)
extern "C"  void ISN_LocalNotification_SetId_m3701617740 (ISN_LocalNotification_t273186689 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_LocalNotification::SetData(System.String)
extern "C"  void ISN_LocalNotification_SetData_m500201786 (ISN_LocalNotification_t273186689 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_LocalNotification::SetBadgesNumber(System.Int32)
extern "C"  void ISN_LocalNotification_SetBadgesNumber_m2828654276 (ISN_LocalNotification_t273186689 * __this, int32_t ___badges0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_LocalNotification::Schedule()
extern "C"  void ISN_LocalNotification_Schedule_m3362792029 (ISN_LocalNotification_t273186689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ISN_LocalNotification::get_Id()
extern "C"  int32_t ISN_LocalNotification_get_Id_m4223279224 (ISN_LocalNotification_t273186689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime ISN_LocalNotification::get_Date()
extern "C"  DateTime_t693205669  ISN_LocalNotification_get_Date_m1641856012 (ISN_LocalNotification_t273186689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ISN_LocalNotification::get_Message()
extern "C"  String_t* ISN_LocalNotification_get_Message_m41404367 (ISN_LocalNotification_t273186689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ISN_LocalNotification::get_UseSound()
extern "C"  bool ISN_LocalNotification_get_UseSound_m1435313705 (ISN_LocalNotification_t273186689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ISN_LocalNotification::get_Badges()
extern "C"  int32_t ISN_LocalNotification_get_Badges_m3192142109 (ISN_LocalNotification_t273186689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ISN_LocalNotification::get_Data()
extern "C"  String_t* ISN_LocalNotification_get_Data_m2366119240 (ISN_LocalNotification_t273186689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
