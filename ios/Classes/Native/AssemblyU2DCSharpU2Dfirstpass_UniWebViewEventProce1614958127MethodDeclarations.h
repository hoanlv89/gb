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

// UniWebViewEventProcessor
struct UniWebViewEventProcessor_t1614958127;
// System.Action
struct Action_t3226471752;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"

// System.Void UniWebViewEventProcessor::.ctor()
extern "C"  void UniWebViewEventProcessor__ctor_m111802086 (UniWebViewEventProcessor_t1614958127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UniWebViewEventProcessor UniWebViewEventProcessor::get_instance()
extern "C"  UniWebViewEventProcessor_t1614958127 * UniWebViewEventProcessor_get_instance_m347354994 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebViewEventProcessor::QueueEvent(System.Action)
extern "C"  void UniWebViewEventProcessor_QueueEvent_m2741049752 (UniWebViewEventProcessor_t1614958127 * __this, Action_t3226471752 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebViewEventProcessor::Update()
extern "C"  void UniWebViewEventProcessor_Update_m320039813 (UniWebViewEventProcessor_t1614958127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebViewEventProcessor::MoveQueuedEventsToExecuting()
extern "C"  void UniWebViewEventProcessor_MoveQueuedEventsToExecuting_m1879339114 (UniWebViewEventProcessor_t1614958127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebViewEventProcessor::.cctor()
extern "C"  void UniWebViewEventProcessor__cctor_m343270227 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
