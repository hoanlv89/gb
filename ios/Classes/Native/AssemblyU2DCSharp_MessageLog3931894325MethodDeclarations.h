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

// MessageLog
struct MessageLog_t3931894325;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void MessageLog::.ctor()
extern "C"  void MessageLog__ctor_m2675001362 (MessageLog_t3931894325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MessageLog MessageLog::get_instance()
extern "C"  MessageLog_t3931894325 * MessageLog_get_instance_m4190731176 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageLog::putDebugLog(System.String)
extern "C"  void MessageLog_putDebugLog_m4095833550 (MessageLog_t3931894325 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageLog::putMessage(System.String)
extern "C"  void MessageLog_putMessage_m1911827654 (MessageLog_t3931894325 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
