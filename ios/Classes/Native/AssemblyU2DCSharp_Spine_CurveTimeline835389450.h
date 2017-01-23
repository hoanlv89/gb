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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.CurveTimeline
struct  CurveTimeline_t835389450  : public Il2CppObject
{
public:
	// System.Single[] Spine.CurveTimeline::curves
	SingleU5BU5D_t577127397* ___curves_4;

public:
	inline static int32_t get_offset_of_curves_4() { return static_cast<int32_t>(offsetof(CurveTimeline_t835389450, ___curves_4)); }
	inline SingleU5BU5D_t577127397* get_curves_4() const { return ___curves_4; }
	inline SingleU5BU5D_t577127397** get_address_of_curves_4() { return &___curves_4; }
	inline void set_curves_4(SingleU5BU5D_t577127397* value)
	{
		___curves_4 = value;
		Il2CppCodeGenWriteBarrier(&___curves_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
