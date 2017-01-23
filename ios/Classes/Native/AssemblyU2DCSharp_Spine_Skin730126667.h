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
// System.Collections.Generic.Dictionary`2<Spine.Skin/AttachmentKeyTuple,Spine.Attachment>
struct Dictionary_2_t2455477215;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Skin
struct  Skin_t730126667  : public Il2CppObject
{
public:
	// System.String Spine.Skin::name
	String_t* ___name_0;
	// System.Collections.Generic.Dictionary`2<Spine.Skin/AttachmentKeyTuple,Spine.Attachment> Spine.Skin::attachments
	Dictionary_2_t2455477215 * ___attachments_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Skin_t730126667, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_attachments_1() { return static_cast<int32_t>(offsetof(Skin_t730126667, ___attachments_1)); }
	inline Dictionary_2_t2455477215 * get_attachments_1() const { return ___attachments_1; }
	inline Dictionary_2_t2455477215 ** get_address_of_attachments_1() { return &___attachments_1; }
	inline void set_attachments_1(Dictionary_2_t2455477215 * value)
	{
		___attachments_1 = value;
		Il2CppCodeGenWriteBarrier(&___attachments_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
