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
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t3750818532;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.DrawOrderTimeline
struct  DrawOrderTimeline_t3899080909  : public Il2CppObject
{
public:
	// System.Single[] Spine.DrawOrderTimeline::frames
	SingleU5BU5D_t577127397* ___frames_0;
	// System.Int32[][] Spine.DrawOrderTimeline::drawOrders
	Int32U5BU5DU5BU5D_t3750818532* ___drawOrders_1;

public:
	inline static int32_t get_offset_of_frames_0() { return static_cast<int32_t>(offsetof(DrawOrderTimeline_t3899080909, ___frames_0)); }
	inline SingleU5BU5D_t577127397* get_frames_0() const { return ___frames_0; }
	inline SingleU5BU5D_t577127397** get_address_of_frames_0() { return &___frames_0; }
	inline void set_frames_0(SingleU5BU5D_t577127397* value)
	{
		___frames_0 = value;
		Il2CppCodeGenWriteBarrier(&___frames_0, value);
	}

	inline static int32_t get_offset_of_drawOrders_1() { return static_cast<int32_t>(offsetof(DrawOrderTimeline_t3899080909, ___drawOrders_1)); }
	inline Int32U5BU5DU5BU5D_t3750818532* get_drawOrders_1() const { return ___drawOrders_1; }
	inline Int32U5BU5DU5BU5D_t3750818532** get_address_of_drawOrders_1() { return &___drawOrders_1; }
	inline void set_drawOrders_1(Int32U5BU5DU5BU5D_t3750818532* value)
	{
		___drawOrders_1 = value;
		Il2CppCodeGenWriteBarrier(&___drawOrders_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
