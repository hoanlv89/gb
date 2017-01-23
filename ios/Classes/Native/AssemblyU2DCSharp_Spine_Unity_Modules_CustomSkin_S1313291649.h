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

// Spine.Unity.Modules.CustomSkin/SkinPair
struct  SkinPair_t1313291649  : public Il2CppObject
{
public:
	// System.String Spine.Unity.Modules.CustomSkin/SkinPair::sourceAttachmentPath
	String_t* ___sourceAttachmentPath_0;
	// System.String Spine.Unity.Modules.CustomSkin/SkinPair::targetSlot
	String_t* ___targetSlot_1;
	// System.String Spine.Unity.Modules.CustomSkin/SkinPair::targetAttachment
	String_t* ___targetAttachment_2;

public:
	inline static int32_t get_offset_of_sourceAttachmentPath_0() { return static_cast<int32_t>(offsetof(SkinPair_t1313291649, ___sourceAttachmentPath_0)); }
	inline String_t* get_sourceAttachmentPath_0() const { return ___sourceAttachmentPath_0; }
	inline String_t** get_address_of_sourceAttachmentPath_0() { return &___sourceAttachmentPath_0; }
	inline void set_sourceAttachmentPath_0(String_t* value)
	{
		___sourceAttachmentPath_0 = value;
		Il2CppCodeGenWriteBarrier(&___sourceAttachmentPath_0, value);
	}

	inline static int32_t get_offset_of_targetSlot_1() { return static_cast<int32_t>(offsetof(SkinPair_t1313291649, ___targetSlot_1)); }
	inline String_t* get_targetSlot_1() const { return ___targetSlot_1; }
	inline String_t** get_address_of_targetSlot_1() { return &___targetSlot_1; }
	inline void set_targetSlot_1(String_t* value)
	{
		___targetSlot_1 = value;
		Il2CppCodeGenWriteBarrier(&___targetSlot_1, value);
	}

	inline static int32_t get_offset_of_targetAttachment_2() { return static_cast<int32_t>(offsetof(SkinPair_t1313291649, ___targetAttachment_2)); }
	inline String_t* get_targetAttachment_2() const { return ___targetAttachment_2; }
	inline String_t** get_address_of_targetAttachment_2() { return &___targetAttachment_2; }
	inline void set_targetAttachment_2(String_t* value)
	{
		___targetAttachment_2 = value;
		Il2CppCodeGenWriteBarrier(&___targetAttachment_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
