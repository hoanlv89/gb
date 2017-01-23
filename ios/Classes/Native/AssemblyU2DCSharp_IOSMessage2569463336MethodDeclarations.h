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

// IOSMessage
struct IOSMessage_t2569463336;
// System.Action
struct Action_t3226471752;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"
#include "mscorlib_System_String2029220233.h"

// System.Void IOSMessage::.ctor()
extern "C"  void IOSMessage__ctor_m1383080057 (IOSMessage_t2569463336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSMessage::add_OnComplete(System.Action)
extern "C"  void IOSMessage_add_OnComplete_m2237258724 (IOSMessage_t2569463336 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSMessage::remove_OnComplete(System.Action)
extern "C"  void IOSMessage_remove_OnComplete_m1496777181 (IOSMessage_t2569463336 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IOSMessage IOSMessage::Create(System.String,System.String)
extern "C"  IOSMessage_t2569463336 * IOSMessage_Create_m765555766 (Il2CppObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IOSMessage IOSMessage::Create(System.String,System.String,System.String)
extern "C"  IOSMessage_t2569463336 * IOSMessage_Create_m1036938966 (Il2CppObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, String_t* ___ok2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSMessage::init()
extern "C"  void IOSMessage_init_m1707966995 (IOSMessage_t2569463336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSMessage::onPopUpCallBack(System.String)
extern "C"  void IOSMessage_onPopUpCallBack_m607113905 (IOSMessage_t2569463336 * __this, String_t* ___buttonIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSMessage::<OnComplete>m__0()
extern "C"  void IOSMessage_U3COnCompleteU3Em__0_m4078890280 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
