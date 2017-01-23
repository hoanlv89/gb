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

// ReplayController
struct ReplayController_t4058236085;
// GameLog
struct GameLog_t998209044;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "AssemblyU2DCSharp_GameLog998209044.h"
#include "mscorlib_System_String2029220233.h"

// System.Void ReplayController::.ctor()
extern "C"  void ReplayController__ctor_m2281940690 (ReplayController_t4058236085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReplayController::Start()
extern "C"  void ReplayController_Start_m1448657858 (ReplayController_t4058236085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan ReplayController::getDuration(GameLog,GameLog)
extern "C"  TimeSpan_t3430258949  ReplayController_getDuration_m1386567409 (ReplayController_t4058236085 * __this, GameLog_t998209044 * ___gl10, GameLog_t998209044 * ___gl21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ReplayController::durationToString(System.TimeSpan)
extern "C"  String_t* ReplayController_durationToString_m2954377919 (ReplayController_t4058236085 * __this, TimeSpan_t3430258949  ___timespan0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReplayController::effectPlayPauseButton()
extern "C"  void ReplayController_effectPlayPauseButton_m1724717443 (ReplayController_t4058236085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReplayController::reportErr()
extern "C"  void ReplayController_reportErr_m1343254179 (ReplayController_t4058236085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReplayController::handleNextEvent(System.Boolean)
extern "C"  void ReplayController_handleNextEvent_m4183918810 (ReplayController_t4058236085 * __this, bool ___auto0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReplayController::Update()
extern "C"  void ReplayController_Update_m1539481017 (ReplayController_t4058236085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReplayController::<Start>m__0()
extern "C"  void ReplayController_U3CStartU3Em__0_m3369850567 (ReplayController_t4058236085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReplayController::<Start>m__1()
extern "C"  void ReplayController_U3CStartU3Em__1_m3369850600 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReplayController::<Start>m__2()
extern "C"  void ReplayController_U3CStartU3Em__2_m3369850633 (ReplayController_t4058236085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReplayController::<Start>m__3()
extern "C"  void ReplayController_U3CStartU3Em__3_m3369850666 (ReplayController_t4058236085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReplayController::<reportErr>m__4(System.String)
extern "C"  void ReplayController_U3CreportErrU3Em__4_m2932305202 (ReplayController_t4058236085 * __this, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReplayController::<reportErr>m__5()
extern "C"  void ReplayController_U3CreportErrU3Em__5_m4070321401 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
