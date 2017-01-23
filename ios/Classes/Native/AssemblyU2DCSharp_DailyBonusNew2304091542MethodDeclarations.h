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

// DailyBonusNew
struct DailyBonusNew_t2304091542;
// System.Action
struct Action_t3226471752;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"

// System.Void DailyBonusNew::.ctor()
extern "C"  void DailyBonusNew__ctor_m3571742131 (DailyBonusNew_t2304091542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyBonusNew::Start()
extern "C"  void DailyBonusNew_Start_m4014302855 (DailyBonusNew_t2304091542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyBonusNew::initView()
extern "C"  void DailyBonusNew_initView_m1150430186 (DailyBonusNew_t2304091542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyBonusNew::doSpin(System.Int32,System.Action)
extern "C"  void DailyBonusNew_doSpin_m4263290796 (DailyBonusNew_t2304091542 * __this, int32_t ___gold0, Action_t3226471752 * ___onFinish1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyBonusNew::result(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void DailyBonusNew_result_m3580800619 (DailyBonusNew_t2304091542 * __this, int32_t ___wheel0, int32_t ___friends1, int32_t ___daily2, int32_t ___status3, int32_t ___total4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyBonusNew::setTextValue(UnityEngine.UI.Text,System.Int32,System.Action)
extern "C"  void DailyBonusNew_setTextValue_m3003889063 (DailyBonusNew_t2304091542 * __this, Text_t356221433 * ___text0, int32_t ___intvalue1, Action_t3226471752 * ___onFinish2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DailyBonusNew::getWheelPos(System.Int32)
extern "C"  int32_t DailyBonusNew_getWheelPos_m1835518553 (DailyBonusNew_t2304091542 * __this, int32_t ___gold0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyBonusNew::<Start>m__0()
extern "C"  void DailyBonusNew_U3CStartU3Em__0_m3369358892 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
