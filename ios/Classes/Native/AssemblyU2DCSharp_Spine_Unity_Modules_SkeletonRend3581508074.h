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
// UnityEngine.Material
struct Material_t193706927;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Modules.SkeletonRendererCustomMaterials/SlotMaterialOverride
struct  SlotMaterialOverride_t3581508074 
{
public:
	// System.Boolean Spine.Unity.Modules.SkeletonRendererCustomMaterials/SlotMaterialOverride::overrideDisabled
	bool ___overrideDisabled_0;
	// System.String Spine.Unity.Modules.SkeletonRendererCustomMaterials/SlotMaterialOverride::slotName
	String_t* ___slotName_1;
	// UnityEngine.Material Spine.Unity.Modules.SkeletonRendererCustomMaterials/SlotMaterialOverride::material
	Material_t193706927 * ___material_2;

public:
	inline static int32_t get_offset_of_overrideDisabled_0() { return static_cast<int32_t>(offsetof(SlotMaterialOverride_t3581508074, ___overrideDisabled_0)); }
	inline bool get_overrideDisabled_0() const { return ___overrideDisabled_0; }
	inline bool* get_address_of_overrideDisabled_0() { return &___overrideDisabled_0; }
	inline void set_overrideDisabled_0(bool value)
	{
		___overrideDisabled_0 = value;
	}

	inline static int32_t get_offset_of_slotName_1() { return static_cast<int32_t>(offsetof(SlotMaterialOverride_t3581508074, ___slotName_1)); }
	inline String_t* get_slotName_1() const { return ___slotName_1; }
	inline String_t** get_address_of_slotName_1() { return &___slotName_1; }
	inline void set_slotName_1(String_t* value)
	{
		___slotName_1 = value;
		Il2CppCodeGenWriteBarrier(&___slotName_1, value);
	}

	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(SlotMaterialOverride_t3581508074, ___material_2)); }
	inline Material_t193706927 * get_material_2() const { return ___material_2; }
	inline Material_t193706927 ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_t193706927 * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier(&___material_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Spine.Unity.Modules.SkeletonRendererCustomMaterials/SlotMaterialOverride
struct SlotMaterialOverride_t3581508074_marshaled_pinvoke
{
	int32_t ___overrideDisabled_0;
	char* ___slotName_1;
	Material_t193706927 * ___material_2;
};
// Native definition for COM marshalling of Spine.Unity.Modules.SkeletonRendererCustomMaterials/SlotMaterialOverride
struct SlotMaterialOverride_t3581508074_marshaled_com
{
	int32_t ___overrideDisabled_0;
	Il2CppChar* ___slotName_1;
	Material_t193706927 * ___material_2;
};
