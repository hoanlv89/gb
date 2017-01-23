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

// Countly.Queue
struct Queue_t1840538479;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Countly.Queue::.ctor(System.Int32,System.Int32,System.Boolean)
extern "C"  void Queue__ctor_m3527827635 (Queue_t1840538479 * __this, int32_t ___capacity0, int32_t ___maxCapacity1, bool ___useStorage2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Countly.Queue::get_Count()
extern "C"  int32_t Queue_get_Count_m3950624536 (Queue_t1840538479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Countly.Queue::Peek()
extern "C"  String_t* Queue_Peek_m341948004 (Queue_t1840538479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Queue::Enqueue(System.String)
extern "C"  void Queue_Enqueue_m3630117050 (Queue_t1840538479 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Queue::Dequeue()
extern "C"  void Queue_Dequeue_m3120025896 (Queue_t1840538479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Queue::EnqueueFromFile()
extern "C"  void Queue_EnqueueFromFile_m2355589478 (Queue_t1840538479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Queue::AppendToFile(System.String)
extern "C"  void Queue_AppendToFile_m270206021 (Queue_t1840538479 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Queue::SaveToFile()
extern "C"  void Queue_SaveToFile_m3991055646 (Queue_t1840538479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Countly.Queue::DeleteFile()
extern "C"  void Queue_DeleteFile_m2605936435 (Queue_t1840538479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
