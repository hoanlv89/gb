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

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Skin/AttachmentKeyTuple
struct  AttachmentKeyTuple_t2709365911 
{
public:
	// System.Int32 Spine.Skin/AttachmentKeyTuple::slotIndex
	int32_t ___slotIndex_0;
	// System.String Spine.Skin/AttachmentKeyTuple::name
	String_t* ___name_1;
	// System.Int32 Spine.Skin/AttachmentKeyTuple::nameHashCode
	int32_t ___nameHashCode_2;

public:
	inline static int32_t get_offset_of_slotIndex_0() { return static_cast<int32_t>(offsetof(AttachmentKeyTuple_t2709365911, ___slotIndex_0)); }
	inline int32_t get_slotIndex_0() const { return ___slotIndex_0; }
	inline int32_t* get_address_of_slotIndex_0() { return &___slotIndex_0; }
	inline void set_slotIndex_0(int32_t value)
	{
		___slotIndex_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(AttachmentKeyTuple_t2709365911, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_nameHashCode_2() { return static_cast<int32_t>(offsetof(AttachmentKeyTuple_t2709365911, ___nameHashCode_2)); }
	inline int32_t get_nameHashCode_2() const { return ___nameHashCode_2; }
	inline int32_t* get_address_of_nameHashCode_2() { return &___nameHashCode_2; }
	inline void set_nameHashCode_2(int32_t value)
	{
		___nameHashCode_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Spine.Skin/AttachmentKeyTuple
struct AttachmentKeyTuple_t2709365911_marshaled_pinvoke
{
	int32_t ___slotIndex_0;
	char* ___name_1;
	int32_t ___nameHashCode_2;
};
// Native definition for COM marshalling of Spine.Skin/AttachmentKeyTuple
struct AttachmentKeyTuple_t2709365911_marshaled_com
{
	int32_t ___slotIndex_0;
	Il2CppChar* ___name_1;
	int32_t ___nameHashCode_2;
};
