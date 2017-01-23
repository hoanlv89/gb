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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Modules.AtlasRegionAttacher/SlotRegionPair
struct  SlotRegionPair_t3146429473  : public Il2CppObject
{
public:
	// System.String Spine.Unity.Modules.AtlasRegionAttacher/SlotRegionPair::slot
	String_t* ___slot_0;
	// System.String Spine.Unity.Modules.AtlasRegionAttacher/SlotRegionPair::region
	String_t* ___region_1;

public:
	inline static int32_t get_offset_of_slot_0() { return static_cast<int32_t>(offsetof(SlotRegionPair_t3146429473, ___slot_0)); }
	inline String_t* get_slot_0() const { return ___slot_0; }
	inline String_t** get_address_of_slot_0() { return &___slot_0; }
	inline void set_slot_0(String_t* value)
	{
		___slot_0 = value;
		Il2CppCodeGenWriteBarrier(&___slot_0, value);
	}

	inline static int32_t get_offset_of_region_1() { return static_cast<int32_t>(offsetof(SlotRegionPair_t3146429473, ___region_1)); }
	inline String_t* get_region_1() const { return ___region_1; }
	inline String_t** get_address_of_region_1() { return &___region_1; }
	inline void set_region_1(String_t* value)
	{
		___region_1 = value;
		Il2CppCodeGenWriteBarrier(&___region_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
