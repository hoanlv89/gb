#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t577127397;

#include "AssemblyU2DCSharp_Spine_CurveTimeline835389450.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.ColorTimeline
struct  ColorTimeline_t1670912424  : public CurveTimeline_t835389450
{
public:
	// System.Int32 Spine.ColorTimeline::slotIndex
	int32_t ___slotIndex_15;
	// System.Single[] Spine.ColorTimeline::frames
	SingleU5BU5D_t577127397* ___frames_16;

public:
	inline static int32_t get_offset_of_slotIndex_15() { return static_cast<int32_t>(offsetof(ColorTimeline_t1670912424, ___slotIndex_15)); }
	inline int32_t get_slotIndex_15() const { return ___slotIndex_15; }
	inline int32_t* get_address_of_slotIndex_15() { return &___slotIndex_15; }
	inline void set_slotIndex_15(int32_t value)
	{
		___slotIndex_15 = value;
	}

	inline static int32_t get_offset_of_frames_16() { return static_cast<int32_t>(offsetof(ColorTimeline_t1670912424, ___frames_16)); }
	inline SingleU5BU5D_t577127397* get_frames_16() const { return ___frames_16; }
	inline SingleU5BU5D_t577127397** get_address_of_frames_16() { return &___frames_16; }
	inline void set_frames_16(SingleU5BU5D_t577127397* value)
	{
		___frames_16 = value;
		Il2CppCodeGenWriteBarrier(&___frames_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
