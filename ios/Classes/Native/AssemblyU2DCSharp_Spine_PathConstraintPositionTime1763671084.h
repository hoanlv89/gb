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

// Spine.PathConstraintPositionTimeline
struct  PathConstraintPositionTimeline_t1763671084  : public CurveTimeline_t835389450
{
public:
	// System.Int32 Spine.PathConstraintPositionTimeline::pathConstraintIndex
	int32_t ___pathConstraintIndex_9;
	// System.Single[] Spine.PathConstraintPositionTimeline::frames
	SingleU5BU5D_t577127397* ___frames_10;

public:
	inline static int32_t get_offset_of_pathConstraintIndex_9() { return static_cast<int32_t>(offsetof(PathConstraintPositionTimeline_t1763671084, ___pathConstraintIndex_9)); }
	inline int32_t get_pathConstraintIndex_9() const { return ___pathConstraintIndex_9; }
	inline int32_t* get_address_of_pathConstraintIndex_9() { return &___pathConstraintIndex_9; }
	inline void set_pathConstraintIndex_9(int32_t value)
	{
		___pathConstraintIndex_9 = value;
	}

	inline static int32_t get_offset_of_frames_10() { return static_cast<int32_t>(offsetof(PathConstraintPositionTimeline_t1763671084, ___frames_10)); }
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
