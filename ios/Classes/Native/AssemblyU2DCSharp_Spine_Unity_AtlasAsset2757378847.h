#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.TextAsset
struct TextAsset_t3973159845;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;
// Spine.Atlas
struct Atlas_t85765087;

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.AtlasAsset
struct  AtlasAsset_t2757378847  : public ScriptableObject_t1975622470
{
public:
	// UnityEngine.TextAsset Spine.Unity.AtlasAsset::atlasFile
	TextAsset_t3973159845 * ___atlasFile_2;
	// UnityEngine.Material[] Spine.Unity.AtlasAsset::materials
	MaterialU5BU5D_t3123989686* ___materials_3;
	// Spine.Atlas Spine.Unity.AtlasAsset::atlas
	Atlas_t85765087 * ___atlas_4;

public:
	inline static int32_t get_offset_of_atlasFile_2() { return static_cast<int32_t>(offsetof(AtlasAsset_t2757378847, ___atlasFile_2)); }
	inline TextAsset_t3973159845 * get_atlasFile_2() const { return ___atlasFile_2; }
	inline TextAsset_t3973159845 ** get_address_of_atlasFile_2() { return &___atlasFile_2; }
	inline void set_atlasFile_2(TextAsset_t3973159845 * value)
	{
		___atlasFile_2 = value;
		Il2CppCodeGenWriteBarrier(&___atlasFile_2, value);
	}

	inline static int32_t get_offset_of_materials_3() { return static_cast<int32_t>(offsetof(AtlasAsset_t2757378847, ___materials_3)); }
	inline MaterialU5BU5D_t3123989686* get_materials_3() const { return ___materials_3; }
	inline MaterialU5BU5D_t3123989686** get_address_of_materials_3() { return &___materials_3; }
	inline void set_materials_3(MaterialU5BU5D_t3123989686* value)
	{
		___materials_3 = value;
		Il2CppCodeGenWriteBarrier(&___materials_3, value);
	}

	inline static int32_t get_offset_of_atlas_4() { return static_cast<int32_t>(offsetof(AtlasAsset_t2757378847, ___atlas_4)); }
	inline Atlas_t85765087 * get_atlas_4() const { return ___atlas_4; }
	inline Atlas_t85765087 ** get_address_of_atlas_4() { return &___atlas_4; }
	inline void set_atlas_4(Atlas_t85765087 * value)
	{
		___atlas_4 = value;
		Il2CppCodeGenWriteBarrier(&___atlas_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
