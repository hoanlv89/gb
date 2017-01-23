#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t2265953470;
// System.Collections.Generic.List`1<Spine.Unity.Modules.SkeletonRendererCustomMaterials/SlotMaterialOverride>
struct List_1_t2950629206;
// System.Collections.Generic.List`1<Spine.Unity.Modules.SkeletonRendererCustomMaterials/AtlasMaterialOverride>
struct List_1_t377030319;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Modules.SkeletonRendererCustomMaterials
struct  SkeletonRendererCustomMaterials_t69333241  : public MonoBehaviour_t1158329972
{
public:
	// Spine.Unity.SkeletonRenderer Spine.Unity.Modules.SkeletonRendererCustomMaterials::skeletonRenderer
	SkeletonRenderer_t2265953470 * ___skeletonRenderer_2;
	// System.Collections.Generic.List`1<Spine.Unity.Modules.SkeletonRendererCustomMaterials/SlotMaterialOverride> Spine.Unity.Modules.SkeletonRendererCustomMaterials::customSlotMaterials
	List_1_t2950629206 * ___customSlotMaterials_3;
	// System.Collections.Generic.List`1<Spine.Unity.Modules.SkeletonRendererCustomMaterials/AtlasMaterialOverride> Spine.Unity.Modules.SkeletonRendererCustomMaterials::customMaterialOverrides
	List_1_t377030319 * ___customMaterialOverrides_4;

public:
	inline static int32_t get_offset_of_skeletonRenderer_2() { return static_cast<int32_t>(offsetof(SkeletonRendererCustomMaterials_t69333241, ___skeletonRenderer_2)); }
	inline SkeletonRenderer_t2265953470 * get_skeletonRenderer_2() const { return ___skeletonRenderer_2; }
	inline SkeletonRenderer_t2265953470 ** get_address_of_skeletonRenderer_2() { return &___skeletonRenderer_2; }
	inline void set_skeletonRenderer_2(SkeletonRenderer_t2265953470 * value)
	{
		___skeletonRenderer_2 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonRenderer_2, value);
	}

	inline static int32_t get_offset_of_customSlotMaterials_3() { return static_cast<int32_t>(offsetof(SkeletonRendererCustomMaterials_t69333241, ___customSlotMaterials_3)); }
	inline List_1_t2950629206 * get_customSlotMaterials_3() const { return ___customSlotMaterials_3; }
	inline List_1_t2950629206 ** get_address_of_customSlotMaterials_3() { return &___customSlotMaterials_3; }
	inline void set_customSlotMaterials_3(List_1_t2950629206 * value)
	{
		___customSlotMaterials_3 = value;
		Il2CppCodeGenWriteBarrier(&___customSlotMaterials_3, value);
	}

	inline static int32_t get_offset_of_customMaterialOverrides_4() { return static_cast<int32_t>(offsetof(SkeletonRendererCustomMaterials_t69333241, ___customMaterialOverrides_4)); }
	inline List_1_t377030319 * get_customMaterialOverrides_4() const { return ___customMaterialOverrides_4; }
	inline List_1_t377030319 ** get_address_of_customMaterialOverrides_4() { return &___customMaterialOverrides_4; }
	inline void set_customMaterialOverrides_4(List_1_t377030319 * value)
	{
		___customMaterialOverrides_4 = value;
		Il2CppCodeGenWriteBarrier(&___customMaterialOverrides_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
