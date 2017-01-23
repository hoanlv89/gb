#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t193706927;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Modules.SkeletonRendererCustomMaterials/AtlasMaterialOverride
struct  AtlasMaterialOverride_t1007909187 
{
public:
	// System.Boolean Spine.Unity.Modules.SkeletonRendererCustomMaterials/AtlasMaterialOverride::overrideDisabled
	bool ___overrideDisabled_0;
	// UnityEngine.Material Spine.Unity.Modules.SkeletonRendererCustomMaterials/AtlasMaterialOverride::originalMaterial
	Material_t193706927 * ___originalMaterial_1;
	// UnityEngine.Material Spine.Unity.Modules.SkeletonRendererCustomMaterials/AtlasMaterialOverride::replacementMaterial
	Material_t193706927 * ___replacementMaterial_2;

public:
	inline static int32_t get_offset_of_overrideDisabled_0() { return static_cast<int32_t>(offsetof(AtlasMaterialOverride_t1007909187, ___overrideDisabled_0)); }
	inline bool get_overrideDisabled_0() const { return ___overrideDisabled_0; }
	inline bool* get_address_of_overrideDisabled_0() { return &___overrideDisabled_0; }
	inline void set_overrideDisabled_0(bool value)
	{
		___overrideDisabled_0 = value;
	}

	inline static int32_t get_offset_of_originalMaterial_1() { return static_cast<int32_t>(offsetof(AtlasMaterialOverride_t1007909187, ___originalMaterial_1)); }
	inline Material_t193706927 * get_originalMaterial_1() const { return ___originalMaterial_1; }
	inline Material_t193706927 ** get_address_of_originalMaterial_1() { return &___originalMaterial_1; }
	inline void set_originalMaterial_1(Material_t193706927 * value)
	{
		___originalMaterial_1 = value;
		Il2CppCodeGenWriteBarrier(&___originalMaterial_1, value);
	}

	inline static int32_t get_offset_of_replacementMaterial_2() { return static_cast<int32_t>(offsetof(AtlasMaterialOverride_t1007909187, ___replacementMaterial_2)); }
	inline Material_t193706927 * get_replacementMaterial_2() const { return ___replacementMaterial_2; }
	inline Material_t193706927 ** get_address_of_replacementMaterial_2() { return &___replacementMaterial_2; }
	inline void set_replacementMaterial_2(Material_t193706927 * value)
	{
		___replacementMaterial_2 = value;
		Il2CppCodeGenWriteBarrier(&___replacementMaterial_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Spine.Unity.Modules.SkeletonRendererCustomMaterials/AtlasMaterialOverride
struct AtlasMaterialOverride_t1007909187_marshaled_pinvoke
{
	int32_t ___overrideDisabled_0;
	Material_t193706927 * ___originalMaterial_1;
	Material_t193706927 * ___replacementMaterial_2;
};
// Native definition for COM marshalling of Spine.Unity.Modules.SkeletonRendererCustomMaterials/AtlasMaterialOverride
struct AtlasMaterialOverride_t1007909187_marshaled_com
{
	int32_t ___overrideDisabled_0;
	Material_t193706927 * ___originalMaterial_1;
	Material_t193706927 * ___replacementMaterial_2;
};
