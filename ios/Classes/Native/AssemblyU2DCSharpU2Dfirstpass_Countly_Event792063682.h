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
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Countly.Event
struct  Event_t792063682  : public Il2CppObject
{
public:
	// System.String Countly.Event::<Key>k__BackingField
	String_t* ___U3CKeyU3Ek__BackingField_0;
	// System.Int64 Countly.Event::<Count>k__BackingField
	int64_t ___U3CCountU3Ek__BackingField_1;
	// System.Int64 Countly.Event::<Timestamp>k__BackingField
	int64_t ___U3CTimestampU3Ek__BackingField_2;
	// System.Boolean Countly.Event::_usesSum
	bool ____usesSum_3;
	// System.Double Countly.Event::_sum
	double ____sum_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Countly.Event::<Segmentation>k__BackingField
	Dictionary_2_t3943999495 * ___U3CSegmentationU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CKeyU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Event_t792063682, ___U3CKeyU3Ek__BackingField_0)); }
	inline String_t* get_U3CKeyU3Ek__BackingField_0() const { return ___U3CKeyU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CKeyU3Ek__BackingField_0() { return &___U3CKeyU3Ek__BackingField_0; }
	inline void set_U3CKeyU3Ek__BackingField_0(String_t* value)
	{
		___U3CKeyU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CKeyU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Event_t792063682, ___U3CCountU3Ek__BackingField_1)); }
	inline int64_t get_U3CCountU3Ek__BackingField_1() const { return ___U3CCountU3Ek__BackingField_1; }
	inline int64_t* get_address_of_U3CCountU3Ek__BackingField_1() { return &___U3CCountU3Ek__BackingField_1; }
	inline void set_U3CCountU3Ek__BackingField_1(int64_t value)
	{
		___U3CCountU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTimestampU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Event_t792063682, ___U3CTimestampU3Ek__BackingField_2)); }
	inline int64_t get_U3CTimestampU3Ek__BackingField_2() const { return ___U3CTimestampU3Ek__BackingField_2; }
	inline int64_t* get_address_of_U3CTimestampU3Ek__BackingField_2() { return &___U3CTimestampU3Ek__BackingField_2; }
	inline void set_U3CTimestampU3Ek__BackingField_2(int64_t value)
	{
		___U3CTimestampU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of__usesSum_3() { return static_cast<int32_t>(offsetof(Event_t792063682, ____usesSum_3)); }
	inline bool get__usesSum_3() const { return ____usesSum_3; }
	inline bool* get_address_of__usesSum_3() { return &____usesSum_3; }
	inline void set__usesSum_3(bool value)
	{
		____usesSum_3 = value;
	}

	inline static int32_t get_offset_of__sum_4() { return static_cast<int32_t>(offsetof(Event_t792063682, ____sum_4)); }
	inline double get__sum_4() const { return ____sum_4; }
	inline double* get_address_of__sum_4() { return &____sum_4; }
	inline void set__sum_4(double value)
	{
		____sum_4 = value;
	}

	inline static int32_t get_offset_of_U3CSegmentationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Event_t792063682, ___U3CSegmentationU3Ek__BackingField_5)); }
	inline Dictionary_2_t3943999495 * get_U3CSegmentationU3Ek__BackingField_5() const { return ___U3CSegmentationU3Ek__BackingField_5; }
	inline Dictionary_2_t3943999495 ** get_address_of_U3CSegmentationU3Ek__BackingField_5() { return &___U3CSegmentationU3Ek__BackingField_5; }
	inline void set_U3CSegmentationU3Ek__BackingField_5(Dictionary_2_t3943999495 * value)
	{
		___U3CSegmentationU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSegmentationU3Ek__BackingField_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
