#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Slot[]
struct SlotU5BU5D_t1506813815;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.ExposedList`1<Spine.Slot>
struct  ExposedList_1_t3658508406  : public Il2CppObject
{
public:
	// T[] Spine.ExposedList`1::Items
	SlotU5BU5D_t1506813815* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(ExposedList_1_t3658508406, ___Items_0)); }
	inline SlotU5BU5D_t1506813815* get_Items_0() const { return ___Items_0; }
	inline SlotU5BU5D_t1506813815** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(SlotU5BU5D_t1506813815* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier(&___Items_0, value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(ExposedList_1_t3658508406, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(ExposedList_1_t3658508406, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}
};

struct ExposedList_1_t3658508406_StaticFields
{
public:
	// T[] Spine.ExposedList`1::EmptyArray
	SlotU5BU5D_t1506813815* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(ExposedList_1_t3658508406_StaticFields, ___EmptyArray_3)); }
	inline SlotU5BU5D_t1506813815* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline SlotU5BU5D_t1506813815** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(SlotU5BU5D_t1506813815* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyArray_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
