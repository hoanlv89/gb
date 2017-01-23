#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.MeshGeneration.ISubmeshSetMeshGenerator
struct ISubmeshSetMeshGenerator_t3291161234;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;
// UnityEngine.MeshFilter
struct MeshFilter_t3026937449;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Modules.SkeletonPartsRenderer
struct  SkeletonPartsRenderer_t2858800350  : public MonoBehaviour_t1158329972
{
public:
	// Spine.Unity.MeshGeneration.ISubmeshSetMeshGenerator Spine.Unity.Modules.SkeletonPartsRenderer::meshGenerator
	Il2CppObject * ___meshGenerator_2;
	// UnityEngine.MeshRenderer Spine.Unity.Modules.SkeletonPartsRenderer::meshRenderer
	MeshRenderer_t1268241104 * ___meshRenderer_3;
	// UnityEngine.MeshFilter Spine.Unity.Modules.SkeletonPartsRenderer::meshFilter
	MeshFilter_t3026937449 * ___meshFilter_4;

public:
	inline static int32_t get_offset_of_meshGenerator_2() { return static_cast<int32_t>(offsetof(SkeletonPartsRenderer_t2858800350, ___meshGenerator_2)); }
	inline Il2CppObject * get_meshGenerator_2() const { return ___meshGenerator_2; }
	inline Il2CppObject ** get_address_of_meshGenerator_2() { return &___meshGenerator_2; }
	inline void set_meshGenerator_2(Il2CppObject * value)
	{
		___meshGenerator_2 = value;
		Il2CppCodeGenWriteBarrier(&___meshGenerator_2, value);
	}

	inline static int32_t get_offset_of_meshRenderer_3() { return static_cast<int32_t>(offsetof(SkeletonPartsRenderer_t2858800350, ___meshRenderer_3)); }
	inline MeshRenderer_t1268241104 * get_meshRenderer_3() const { return ___meshRenderer_3; }
	inline MeshRenderer_t1268241104 ** get_address_of_meshRenderer_3() { return &___meshRenderer_3; }
	inline void set_meshRenderer_3(MeshRenderer_t1268241104 * value)
	{
		___meshRenderer_3 = value;
		Il2CppCodeGenWriteBarrier(&___meshRenderer_3, value);
	}

	inline static int32_t get_offset_of_meshFilter_4() { return static_cast<int32_t>(offsetof(SkeletonPartsRenderer_t2858800350, ___meshFilter_4)); }
	inline MeshFilter_t3026937449 * get_meshFilter_4() const { return ___meshFilter_4; }
	inline MeshFilter_t3026937449 ** get_address_of_meshFilter_4() { return &___meshFilter_4; }
	inline void set_meshFilter_4(MeshFilter_t3026937449 * value)
	{
		___meshFilter_4 = value;
		Il2CppCodeGenWriteBarrier(&___meshFilter_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
