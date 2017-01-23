#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.Queue`1<System.String>
struct Queue_1_t1848877068;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Countly.Queue
struct  Queue_t1840538479  : public Il2CppObject
{
public:
	// System.String Countly.Queue::_filename
	String_t* ____filename_1;
	// System.Collections.Generic.Queue`1<System.String> Countly.Queue::_queue
	Queue_1_t1848877068 * ____queue_2;
	// System.Int32 Countly.Queue::_maxCapacity
	int32_t ____maxCapacity_3;
	// System.Boolean Countly.Queue::_useStorage
	bool ____useStorage_4;

public:
	inline static int32_t get_offset_of__filename_1() { return static_cast<int32_t>(offsetof(Queue_t1840538479, ____filename_1)); }
	inline String_t* get__filename_1() const { return ____filename_1; }
	inline String_t** get_address_of__filename_1() { return &____filename_1; }
	inline void set__filename_1(String_t* value)
	{
		____filename_1 = value;
		Il2CppCodeGenWriteBarrier(&____filename_1, value);
	}

	inline static int32_t get_offset_of__queue_2() { return static_cast<int32_t>(offsetof(Queue_t1840538479, ____queue_2)); }
	inline Queue_1_t1848877068 * get__queue_2() const { return ____queue_2; }
	inline Queue_1_t1848877068 ** get_address_of__queue_2() { return &____queue_2; }
	inline void set__queue_2(Queue_1_t1848877068 * value)
	{
		____queue_2 = value;
		Il2CppCodeGenWriteBarrier(&____queue_2, value);
	}

	inline static int32_t get_offset_of__maxCapacity_3() { return static_cast<int32_t>(offsetof(Queue_t1840538479, ____maxCapacity_3)); }
	inline int32_t get__maxCapacity_3() const { return ____maxCapacity_3; }
	inline int32_t* get_address_of__maxCapacity_3() { return &____maxCapacity_3; }
	inline void set__maxCapacity_3(int32_t value)
	{
		____maxCapacity_3 = value;
	}

	inline static int32_t get_offset_of__useStorage_4() { return static_cast<int32_t>(offsetof(Queue_t1840538479, ____useStorage_4)); }
	inline bool get__useStorage_4() const { return ____useStorage_4; }
	inline bool* get_address_of__useStorage_4() { return &____useStorage_4; }
	inline void set__useStorage_4(bool value)
	{
		____useStorage_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
