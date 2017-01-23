#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.EventData
struct EventData_t937912058;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Event
struct  Event_t1819867114  : public Il2CppObject
{
public:
	// Spine.EventData Spine.Event::data
	EventData_t937912058 * ___data_0;
	// System.Single Spine.Event::time
	float ___time_1;
	// System.Int32 Spine.Event::intValue
	int32_t ___intValue_2;
	// System.Single Spine.Event::floatValue
	float ___floatValue_3;
	// System.String Spine.Event::stringValue
	String_t* ___stringValue_4;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(Event_t1819867114, ___data_0)); }
	inline EventData_t937912058 * get_data_0() const { return ___data_0; }
	inline EventData_t937912058 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(EventData_t937912058 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier(&___data_0, value);
	}

	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(Event_t1819867114, ___time_1)); }
	inline float get_time_1() const { return ___time_1; }
	inline float* get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(float value)
	{
		___time_1 = value;
	}

	inline static int32_t get_offset_of_intValue_2() { return static_cast<int32_t>(offsetof(Event_t1819867114, ___intValue_2)); }
	inline int32_t get_intValue_2() const { return ___intValue_2; }
	inline int32_t* get_address_of_intValue_2() { return &___intValue_2; }
	inline void set_intValue_2(int32_t value)
	{
		___intValue_2 = value;
	}

	inline static int32_t get_offset_of_floatValue_3() { return static_cast<int32_t>(offsetof(Event_t1819867114, ___floatValue_3)); }
	inline float get_floatValue_3() const { return ___floatValue_3; }
	inline float* get_address_of_floatValue_3() { return &___floatValue_3; }
	inline void set_floatValue_3(float value)
	{
		___floatValue_3 = value;
	}

	inline static int32_t get_offset_of_stringValue_4() { return static_cast<int32_t>(offsetof(Event_t1819867114, ___stringValue_4)); }
	inline String_t* get_stringValue_4() const { return ___stringValue_4; }
	inline String_t** get_address_of_stringValue_4() { return &___stringValue_4; }
	inline void set_stringValue_4(String_t* value)
	{
		___stringValue_4 = value;
		Il2CppCodeGenWriteBarrier(&___stringValue_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
