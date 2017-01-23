#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.SkeletonDataAsset
struct SkeletonDataAsset_t901153269;
// Spine.Unity.Modules.CustomSkin/SkinPair[]
struct SkinPairU5BU5D_t936853340;
// Spine.Skin
struct Skin_t730126667;
// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t2265953470;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Modules.CustomSkin
struct  CustomSkin_t596939342  : public MonoBehaviour_t1158329972
{
public:
	// Spine.Unity.SkeletonDataAsset Spine.Unity.Modules.CustomSkin::skinSource
	SkeletonDataAsset_t901153269 * ___skinSource_2;
	// Spine.Unity.Modules.CustomSkin/SkinPair[] Spine.Unity.Modules.CustomSkin::skinItems
	SkinPairU5BU5D_t936853340* ___skinItems_3;
	// Spine.Skin Spine.Unity.Modules.CustomSkin::customSkin
	Skin_t730126667 * ___customSkin_4;
	// Spine.Unity.SkeletonRenderer Spine.Unity.Modules.CustomSkin::skeletonRenderer
	SkeletonRenderer_t2265953470 * ___skeletonRenderer_5;

public:
	inline static int32_t get_offset_of_skinSource_2() { return static_cast<int32_t>(offsetof(CustomSkin_t596939342, ___skinSource_2)); }
	inline SkeletonDataAsset_t901153269 * get_skinSource_2() const { return ___skinSource_2; }
	inline SkeletonDataAsset_t901153269 ** get_address_of_skinSource_2() { return &___skinSource_2; }
	inline void set_skinSource_2(SkeletonDataAsset_t901153269 * value)
	{
		___skinSource_2 = value;
		Il2CppCodeGenWriteBarrier(&___skinSource_2, value);
	}

	inline static int32_t get_offset_of_skinItems_3() { return static_cast<int32_t>(offsetof(CustomSkin_t596939342, ___skinItems_3)); }
	inline SkinPairU5BU5D_t936853340* get_skinItems_3() const { return ___skinItems_3; }
	inline SkinPairU5BU5D_t936853340** get_address_of_skinItems_3() { return &___skinItems_3; }
	inline void set_skinItems_3(SkinPairU5BU5D_t936853340* value)
	{
		___skinItems_3 = value;
		Il2CppCodeGenWriteBarrier(&___skinItems_3, value);
	}

	inline static int32_t get_offset_of_customSkin_4() { return static_cast<int32_t>(offsetof(CustomSkin_t596939342, ___customSkin_4)); }
	inline Skin_t730126667 * get_customSkin_4() const { return ___customSkin_4; }
	inline Skin_t730126667 ** get_address_of_customSkin_4() { return &___customSkin_4; }
	inline void set_customSkin_4(Skin_t730126667 * value)
	{
		___customSkin_4 = value;
		Il2CppCodeGenWriteBarrier(&___customSkin_4, value);
	}

	inline static int32_t get_offset_of_skeletonRenderer_5() { return static_cast<int32_t>(offsetof(CustomSkin_t596939342, ___skeletonRenderer_5)); }
	inline SkeletonRenderer_t2265953470 * get_skeletonRenderer_5() const { return ___skeletonRenderer_5; }
	inline SkeletonRenderer_t2265953470 ** get_address_of_skeletonRenderer_5() { return &___skeletonRenderer_5; }
	inline void set_skeletonRenderer_5(SkeletonRenderer_t2265953470 * value)
	{
		___skeletonRenderer_5 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonRenderer_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
