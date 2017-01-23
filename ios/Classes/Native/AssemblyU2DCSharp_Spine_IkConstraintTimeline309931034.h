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

// Spine.IkConstraintTimeline
struct  IkConstraintTimeline_t309931034  : public CurveTimeline_t835389450
{
public:
	// System.Int32 Spine.IkConstraintTimeline::ikConstraintIndex
	int32_t ___ikConstraintIndex_11;
	// System.Single[] Spine.IkConstraintTimeline::frames
	SingleU5BU5D_t577127397* ___frames_12;

public:
	inline static int32_t get_offset_of_ikConstraintIndex_11() { return static_cast<int32_t>(offsetof(IkConstraintTimeline_t309931034, ___ikConstraintIndex_11)); }
	inline int32_t get_ikConstraintIndex_11() const { return ___ikConstraintIndex_11; }
	inline int32_t* get_address_of_ikConstraintIndex_11() { return &___ikConstraintIndex_11; }
	inline void set_ikConstraintIndex_11(int32_t value)
	{
		___ikConstraintIndex_11 = value;
	}

	inline static int32_t get_offset_of_frames_12() { return static_cast<int32_t>(offsetof(IkConstraintTimeline_t309931034, ___frames_12)); }
	inline SingleU5BU5D_t577127397* get_frames_12() const { return ___frames_12; }
	inline SingleU5BU5D_t577127397** get_address_of_frames_12() { return &___frames_12; }
	inline void set_frames_12(SingleU5BU5D_t577127397* value)
	{
		___frames_12 = value;
		Il2CppCodeGenWriteBarrier(&___frames_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
