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

#include "UnityEngine_UnityEngine_PropertyAttribute2606999759.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.SpineAtlasRegion
struct  SpineAtlasRegion_t2158131404  : public PropertyAttribute_t2606999759
{
public:
	// System.String Spine.Unity.SpineAtlasRegion::atlasAssetField
	String_t* ___atlasAssetField_0;

public:
	inline static int32_t get_offset_of_atlasAssetField_0() { return static_cast<int32_t>(offsetof(SpineAtlasRegion_t2158131404, ___atlasAssetField_0)); }
	inline String_t* get_atlasAssetField_0() const { return ___atlasAssetField_0; }
	inline String_t** get_address_of_atlasAssetField_0() { return &___atlasAssetField_0; }
	inline void set_atlasAssetField_0(String_t* value)
	{
		___atlasAssetField_0 = value;
		Il2CppCodeGenWriteBarrier(&___atlasAssetField_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
