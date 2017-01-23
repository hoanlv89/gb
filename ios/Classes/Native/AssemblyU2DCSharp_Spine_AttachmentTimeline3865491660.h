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
// System.String[]
struct StringU5BU5D_t1642385972;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.AttachmentTimeline
struct  AttachmentTimeline_t3865491660  : public Il2CppObject
{
public:
	// System.Int32 Spine.AttachmentTimeline::slotIndex
	int32_t ___slotIndex_0;
	// System.Single[] Spine.AttachmentTimeline::frames
	SingleU5BU5D_t577127397* ___frames_1;
	// System.String[] Spine.AttachmentTimeline::attachmentNames
	StringU5BU5D_t1642385972* ___attachmentNames_2;

public:
	inline static int32_t get_offset_of_slotIndex_0() { return static_cast<int32_t>(offsetof(AttachmentTimeline_t3865491660, ___slotIndex_0)); }
	inline int32_t get_slotIndex_0() const { return ___slotIndex_0; }
	inline int32_t* get_address_of_slotIndex_0() { return &___slotIndex_0; }
	inline void set_slotIndex_0(int32_t value)
	{
		___slotIndex_0 = value;
	}

	inline static int32_t get_offset_of_frames_1() { return static_cast<int32_t>(offsetof(AttachmentTimeline_t3865491660, ___frames_1)); }
	inline SingleU5BU5D_t577127397* get_frames_1() const { return ___frames_1; }
	inline SingleU5BU5D_t577127397** get_address_of_frames_1() { return &___frames_1; }
	inline void set_frames_1(SingleU5BU5D_t577127397* value)
	{
		___frames_1 = value;
		Il2CppCodeGenWriteBarrier(&___frames_1, value);
	}

	inline static int32_t get_offset_of_attachmentNames_2() { return static_cast<int32_t>(offsetof(AttachmentTimeline_t3865491660, ___attachmentNames_2)); }
	inline StringU5BU5D_t1642385972* get_attachmentNames_2() const { return ___attachmentNames_2; }
	inline StringU5BU5D_t1642385972** get_address_of_attachmentNames_2() { return &___attachmentNames_2; }
	inline void set_attachmentNames_2(StringU5BU5D_t1642385972* value)
	{
		___attachmentNames_2 = value;
		Il2CppCodeGenWriteBarrier(&___attachmentNames_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
