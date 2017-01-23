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
// UnityEngine.Shader
struct Shader_t2430389951;
// Spine.Unity.Modules.SkeletonGhostRenderer[]
struct SkeletonGhostRendererU5BU5D_t2784663846;
// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t2265953470;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;
// UnityEngine.MeshFilter
struct MeshFilter_t3026937449;
// System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material>
struct Dictionary_2_t3590089903;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_HideFlags1434274199.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Modules.SkeletonGhost
struct  SkeletonGhost_t1761125852  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Spine.Unity.Modules.SkeletonGhost::ghostingEnabled
	bool ___ghostingEnabled_4;
	// System.Single Spine.Unity.Modules.SkeletonGhost::spawnRate
	float ___spawnRate_5;
	// UnityEngine.Color32 Spine.Unity.Modules.SkeletonGhost::color
	Color32_t874517518  ___color_6;
	// System.Boolean Spine.Unity.Modules.SkeletonGhost::additive
	bool ___additive_7;
	// System.Int32 Spine.Unity.Modules.SkeletonGhost::maximumGhosts
	int32_t ___maximumGhosts_8;
	// System.Single Spine.Unity.Modules.SkeletonGhost::fadeSpeed
	float ___fadeSpeed_9;
	// UnityEngine.Shader Spine.Unity.Modules.SkeletonGhost::ghostShader
	Shader_t2430389951 * ___ghostShader_10;
	// System.Single Spine.Unity.Modules.SkeletonGhost::textureFade
	float ___textureFade_11;
	// System.Boolean Spine.Unity.Modules.SkeletonGhost::sortWithDistanceOnly
	bool ___sortWithDistanceOnly_12;
	// System.Single Spine.Unity.Modules.SkeletonGhost::zOffset
	float ___zOffset_13;
	// System.Single Spine.Unity.Modules.SkeletonGhost::nextSpawnTime
	float ___nextSpawnTime_14;
	// Spine.Unity.Modules.SkeletonGhostRenderer[] Spine.Unity.Modules.SkeletonGhost::pool
	SkeletonGhostRendererU5BU5D_t2784663846* ___pool_15;
	// System.Int32 Spine.Unity.Modules.SkeletonGhost::poolIndex
	int32_t ___poolIndex_16;
	// Spine.Unity.SkeletonRenderer Spine.Unity.Modules.SkeletonGhost::skeletonRenderer
	SkeletonRenderer_t2265953470 * ___skeletonRenderer_17;
	// UnityEngine.MeshRenderer Spine.Unity.Modules.SkeletonGhost::meshRenderer
	MeshRenderer_t1268241104 * ___meshRenderer_18;
	// UnityEngine.MeshFilter Spine.Unity.Modules.SkeletonGhost::meshFilter
	MeshFilter_t3026937449 * ___meshFilter_19;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material> Spine.Unity.Modules.SkeletonGhost::materialTable
	Dictionary_2_t3590089903 * ___materialTable_20;

public:
	inline static int32_t get_offset_of_ghostingEnabled_4() { return static_cast<int32_t>(offsetof(SkeletonGhost_t1761125852, ___ghostingEnabled_4)); }
	inline bool get_ghostingEnabled_4() const { return ___ghostingEnabled_4; }
	inline bool* get_address_of_ghostingEnabled_4() { return &___ghostingEnabled_4; }
	inline void set_ghostingEnabled_4(bool value)
	{
		___ghostingEnabled_4 = value;
	}

	inline static int32_t get_offset_of_spawnRate_5() { return static_cast<int32_t>(offsetof(SkeletonGhost_t1761125852, ___spawnRate_5)); }
	inline float get_spawnRate_5() const { return ___spawnRate_5; }
	inline float* get_address_of_spawnRate_5() { return &___spawnRate_5; }
	inline void set_spawnRate_5(float value)
	{
		___spawnRate_5 = value;
	}

	inline static int32_t get_offset_of_color_6() { return static_cast<int32_t>(offsetof(SkeletonGhost_t1761125852, ___color_6)); }
	inline Color32_t874517518  get_color_6() const { return ___color_6; }
	inline Color32_t874517518 * get_address_of_color_6() { return &___color_6; }
	inline void set_color_6(Color32_t874517518  value)
	{
		___color_6 = value;
	}

	inline static int32_t get_offset_of_additive_7() { return static_cast<int32_t>(offsetof(SkeletonGhost_t1761125852, ___additive_7)); }
	inline bool get_additive_7() const { return ___additive_7; }
	inline bool* get_address_of_additive_7() { return &___additive_7; }
	inline void set_additive_7(bool value)
	{
		___additive_7 = value;
	}

	inline static int32_t get_offset_of_maximumGhosts_8() { return static_cast<int32_t>(offsetof(SkeletonGhost_t1761125852, ___maximumGhosts_8)); }
	inline int32_t get_maximumGhosts_8() const { return ___maximumGhosts_8; }
	inline int32_t* get_address_of_maximumGhosts_8() { return &___maximumGhosts_8; }
	inline void set_maximumGhosts_8(int32_t value)
	{
		___maximumGhosts_8 = value;
	}

	inline static int32_t get_offset_of_fadeSpeed_9() { return static_cast<int32_t>(offsetof(SkeletonGhost_t1761125852, ___fadeSpeed_9)); }
	inline float get_fadeSpeed_9() const { return ___fadeSpeed_9; }
	inline float* get_address_of_fadeSpeed_9() { return &___fadeSpeed_9; }
	inline void set_fadeSpeed_9(float value)
	{
		___fadeSpeed_9 = value;
	}

	inline static int32_t get_offset_of_ghostShader_10() { return static_cast<int32_t>(offsetof(SkeletonGhost_t1761125852, ___ghostShader_10)); }
	inline Shader_t2430389951 * get_ghostShader_10() const { return ___ghostShader_10; }
	inline Shader_t2430389951 ** get_address_of_ghostShader_10() { return &___ghostShader_10; }
	inline void set_ghostShader_10(Shader_t2430389951 * value)
	{
		___ghostShader_10 = value;
		Il2CppCodeGenWriteBarrier(&___ghostShader_10, value);
	}

	inline static int32_t get_offset_of_textureFade_11() { return static_cast<int32_t>(offsetof(SkeletonGhost_t1761125852, ___textureFade_11)); }
	inline float get_textureFade_11() const { return ___textureFade_11; }
	inline float* get_address_of_textureFade_11() { return &___textureFade_11; }
	inline void set_textureFade_11(float value)
	{
		___textureFade_11 = value;
	}

	inline static int32_t get_offset_of_sortWithDistanceOnly_12() { return static_cast<int32_t>(offsetof(SkeletonGhost_t1761125852, ___sortWithDistanceOnly_12)); }
	inline bool get_sortWithDistanceOnly_12() const { return ___sortWithDistanceOnly_12; }
	inline bool* get_address_of_sortWithDistanceOnly_12() { return &___sortWithDistanceOnly_12; }
	inline void set_sortWithDistanceOnly_12(bool value)
	{
		___sortWithDistanceOnly_12 = value;
	}

	inline static int32_t get_offset_of_zOffset_13() { return static_cast<int32_t>(offsetof(SkeletonGhost_t1761125852, ___zOffset_13)); }
	inline float get_zOffset_13() const { return ___zOffset_13; }
	inline float* get_address_of_zOffset_13() { return &___zOffset_13; }
	inline void set_zOffset_13(float value)
	{
		___zOffset_13 = value;
	}

	inline static int32_t get_offset_of_nextSpawnTime_14() { return static_cast<int32_t>(offsetof(SkeletonGhost_t1761125852, ___nextSpawnTime_14)); }
	inline float get_nextSpawnTime_14() const { return ___nextSpawnTime_14; }
	inline float* get_address_of_nextSpawnTime_14() { return &___nextSpawnTime_14; }
	inline void set_nextSpawnTime_14(float value)
	{
		___nextSpawnTime_14 = value;
	}

	inline static int32_t get_offset_of_pool_15() { return static_cast<int32_t>(offsetof(SkeletonGhost_t1761125852, ___pool_15)); }
	inline SkeletonGhostRendererU5BU5D_t2784663846* get_pool_15() const { return ___pool_15; }
	inline SkeletonGhostRendererU5BU5D_t2784663846** get_address_of_pool_15() { return &___pool_15; }
	inline void set_pool_15(SkeletonGhostRendererU5BU5D_t2784663846* value)
	{
		___pool_15 = value;
		Il2CppCodeGenWriteBarrier(&___pool_15, value);
	}

	inline static int32_t get_offset_of_poolIndex_16() { return static_cast<int32_t>(offsetof(SkeletonGhost_t1761125852, ___poolIndex_16)); }
	inline int32_t get_poolIndex_16() const { return ___poolIndex_16; }
	inline int32_t* get_address_of_poolIndex_16() { return &___poolIndex_16; }
	inline void set_poolIndex_16(int32_t value)
	{
		___poolIndex_16 = value;
	}

	inline static int32_t get_offset_of_skeletonRenderer_17() { return static_cast<int32_t>(offsetof(SkeletonGhost_t1761125852, ___skeletonRenderer_17)); }
	inline SkeletonRenderer_t2265953470 * get_skeletonRenderer_17() const { return ___skeletonRenderer_17; }
	inline SkeletonRenderer_t2265953470 ** get_address_of_skeletonRenderer_17() { return &___skeletonRenderer_17; }
	inline void set_skeletonRenderer_17(SkeletonRenderer_t2265953470 * value)
	{
		___skeletonRenderer_17 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonRenderer_17, value);
	}

	inline static int32_t get_offset_of_meshRenderer_18() { return static_cast<int32_t>(offsetof(SkeletonGhost_t1761125852, ___meshRenderer_18)); }
	inline MeshRenderer_t1268241104 * get_meshRenderer_18() const { return ___meshRenderer_18; }
	inline MeshRenderer_t1268241104 ** get_address_of_meshRenderer_18() { return &___meshRenderer_18; }
	inline void set_meshRenderer_18(MeshRenderer_t1268241104 * value)
	{
		___meshRenderer_18 = value;
		Il2CppCodeGenWriteBarrier(&___meshRenderer_18, value);
	}

	inline static int32_t get_offset_of_meshFilter_19() { return static_cast<int32_t>(offsetof(SkeletonGhost_t1761125852, ___meshFilter_19)); }
	inline MeshFilter_t3026937449 * get_meshFilter_19() const { return ___meshFilter_19; }
	inline MeshFilter_t3026937449 ** get_address_of_meshFilter_19() { return &___meshFilter_19; }
	inline void set_meshFilter_19(MeshFilter_t3026937449 * value)
	{
		___meshFilter_19 = value;
		Il2CppCodeGenWriteBarrier(&___meshFilter_19, value);
	}

	inline static int32_t get_offset_of_materialTable_20() { return static_cast<int32_t>(offsetof(SkeletonGhost_t1761125852, ___materialTable_20)); }
	inline Dictionary_2_t3590089903 * get_materialTable_20() const { return ___materialTable_20; }
	inline Dictionary_2_t3590089903 ** get_address_of_materialTable_20() { return &___materialTable_20; }
	inline void set_materialTable_20(Dictionary_2_t3590089903 * value)
	{
		___materialTable_20 = value;
		Il2CppCodeGenWriteBarrier(&___materialTable_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
