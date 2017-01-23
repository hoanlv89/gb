#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.AtlasAsset
struct AtlasAsset_t2757378847;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.MaterialsTextureLoader
struct  MaterialsTextureLoader_t2451137492  : public Il2CppObject
{
public:
	// Spine.Unity.AtlasAsset Spine.Unity.MaterialsTextureLoader::atlasAsset
	AtlasAsset_t2757378847 * ___atlasAsset_0;

public:
	inline static int32_t get_offset_of_atlasAsset_0() { return static_cast<int32_t>(offsetof(MaterialsTextureLoader_t2451137492, ___atlasAsset_0)); }
	inline AtlasAsset_t2757378847 * get_atlasAsset_0() const { return ___atlasAsset_0; }
	inline AtlasAsset_t2757378847 ** get_address_of_atlasAsset_0() { return &___atlasAsset_0; }
	inline void set_atlasAsset_0(AtlasAsset_t2757378847 * value)
	{
		___atlasAsset_0 = value;
		Il2CppCodeGenWriteBarrier(&___atlasAsset_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
