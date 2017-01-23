#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Attachment
struct Attachment_t2584075367;

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_Spine_Skin_AttachmentKeyTuple2709365911.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Spine.Skin/AttachmentKeyTuple,Spine.Attachment>
struct  KeyValuePair_2_t212822437 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	AttachmentKeyTuple_t2709365911  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Attachment_t2584075367 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t212822437, ___key_0)); }
	inline AttachmentKeyTuple_t2709365911  get_key_0() const { return ___key_0; }
	inline AttachmentKeyTuple_t2709365911 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(AttachmentKeyTuple_t2709365911  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t212822437, ___value_1)); }
	inline Attachment_t2584075367 * get_value_1() const { return ___value_1; }
	inline Attachment_t2584075367 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Attachment_t2584075367 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
