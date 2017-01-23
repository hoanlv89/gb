#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Atlas[]
struct AtlasU5BU5D_t3222283718;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.AtlasAttachmentLoader
struct  AtlasAttachmentLoader_t60125181  : public Il2CppObject
{
public:
	// Spine.Atlas[] Spine.AtlasAttachmentLoader::atlasArray
	AtlasU5BU5D_t3222283718* ___atlasArray_0;

public:
	inline static int32_t get_offset_of_atlasArray_0() { return static_cast<int32_t>(offsetof(AtlasAttachmentLoader_t60125181, ___atlasArray_0)); }
	inline AtlasU5BU5D_t3222283718* get_atlasArray_0() const { return ___atlasArray_0; }
	inline AtlasU5BU5D_t3222283718** get_address_of_atlasArray_0() { return &___atlasArray_0; }
	inline void set_atlasArray_0(AtlasU5BU5D_t3222283718* value)
	{
		___atlasArray_0 = value;
		Il2CppCodeGenWriteBarrier(&___atlasArray_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
