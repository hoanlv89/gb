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

// Spine.RotateTimeline
struct  RotateTimeline_t2591156164  : public CurveTimeline_t835389450
{
public:
	// System.Int32 Spine.RotateTimeline::boneIndex
	int32_t ___boneIndex_9;
	// System.Single[] Spine.RotateTimeline::frames
	SingleU5BU5D_t577127397* ___frames_10;

public:
	inline static int32_t get_offset_of_boneIndex_9() { return static_cast<int32_t>(offsetof(RotateTimeline_t2591156164, ___boneIndex_9)); }
	inline int32_t get_boneIndex_9() const { return ___boneIndex_9; }
	inline int32_t* get_address_of_boneIndex_9() { return &___boneIndex_9; }
	inline void set_boneIndex_9(int32_t value)
	{
		___boneIndex_9 = value;
	}

	inline static int32_t get_offset_of_frames_10() { return static_cast<int32_t>(offsetof(RotateTimeline_t2591156164, ___frames_10)); }
	inline SingleU5BU5D_t577127397* get_frames_10() const { return ___frames_10; }
	inline SingleU5BU5D_t577127397** get_address_of_frames_10() { return &___frames_10; }
	inline void set_frames_10(SingleU5BU5D_t577127397* value)
	{
		___frames_10 = value;
		Il2CppCodeGenWriteBarrier(&___frames_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
