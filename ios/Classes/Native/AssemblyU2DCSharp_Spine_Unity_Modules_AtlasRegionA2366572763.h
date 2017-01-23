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
// Spine.Unity.Modules.AtlasRegionAttacher/SlotRegionPair[]
struct SlotRegionPairU5BU5D_t3118398012;
// Spine.Atlas
struct Atlas_t85765087;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Modules.AtlasRegionAttacher
struct  AtlasRegionAttacher_t2366572763  : public MonoBehaviour_t1158329972
{
public:
	// Spine.Unity.AtlasAsset Spine.Unity.Modules.AtlasRegionAttacher::atlasAsset
	AtlasAsset_t2757378847 * ___atlasAsset_2;
	// Spine.Unity.Modules.AtlasRegionAttacher/SlotRegionPair[] Spine.Unity.Modules.AtlasRegionAttacher::attachments
	SlotRegionPairU5BU5D_t3118398012* ___attachments_3;
	// Spine.Atlas Spine.Unity.Modules.AtlasRegionAttacher::atlas
	Atlas_t85765087 * ___atlas_4;

public:
	inline static int32_t get_offset_of_atlasAsset_2() { return static_cast<int32_t>(offsetof(AtlasRegionAttacher_t2366572763, ___atlasAsset_2)); }
	inline AtlasAsset_t2757378847 * get_atlasAsset_2() const { return ___atlasAsset_2; }
	inline AtlasAsset_t2757378847 ** get_address_of_atlasAsset_2() { return &___atlasAsset_2; }
	inline void set_atlasAsset_2(AtlasAsset_t2757378847 * value)
	{
		___atlasAsset_2 = value;
		Il2CppCodeGenWriteBarrier(&___atlasAsset_2, value);
	}

	inline static int32_t get_offset_of_attachments_3() { return static_cast<int32_t>(offsetof(AtlasRegionAttacher_t2366572763, ___attachments_3)); }
	inline SlotRegionPairU5BU5D_t3118398012* get_attachments_3() const { return ___attachments_3; }
	inline SlotRegionPairU5BU5D_t3118398012** get_address_of_attachments_3() { return &___attachments_3; }
	inline void set_attachments_3(SlotRegionPairU5BU5D_t3118398012* value)
	{
		___attachments_3 = value;
		Il2CppCodeGenWriteBarrier(&___attachments_3, value);
	}

	inline static int32_t get_offset_of_atlas_4() { return static_cast<int32_t>(offsetof(AtlasRegionAttacher_t2366572763, ___atlas_4)); }
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
