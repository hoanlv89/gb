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
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Examples.MixAndMatch
struct  MixAndMatch_t352887386  : public MonoBehaviour_t1158329972
{
public:
	// Spine.Unity.AtlasAsset Spine.Unity.Examples.MixAndMatch::handSource
	AtlasAsset_t2757378847 * ___handSource_2;
	// System.String Spine.Unity.Examples.MixAndMatch::handRegion
	String_t* ___handRegion_3;
	// System.String Spine.Unity.Examples.MixAndMatch::handAttachmentName
	String_t* ___handAttachmentName_4;
	// System.String Spine.Unity.Examples.MixAndMatch::handSlot
	String_t* ___handSlot_5;
	// UnityEngine.Vector2 Spine.Unity.Examples.MixAndMatch::newHandOffset
	Vector2_t2243707579  ___newHandOffset_6;
	// System.Single Spine.Unity.Examples.MixAndMatch::newHandRotation
	float ___newHandRotation_7;
	// UnityEngine.Texture2D Spine.Unity.Examples.MixAndMatch::handTexture
	Texture2D_t3542995729 * ___handTexture_8;
	// UnityEngine.Sprite Spine.Unity.Examples.MixAndMatch::dagger
	Sprite_t309593783 * ___dagger_9;
	// System.String Spine.Unity.Examples.MixAndMatch::daggerName
	String_t* ___daggerName_10;
	// System.String Spine.Unity.Examples.MixAndMatch::weaponSlot
	String_t* ___weaponSlot_11;
	// System.Boolean Spine.Unity.Examples.MixAndMatch::applyHeadRegion
	bool ___applyHeadRegion_12;
	// Spine.Unity.AtlasAsset Spine.Unity.Examples.MixAndMatch::headSource
	AtlasAsset_t2757378847 * ___headSource_13;
	// System.String Spine.Unity.Examples.MixAndMatch::headRegion
	String_t* ___headRegion_14;
	// System.String Spine.Unity.Examples.MixAndMatch::headSlot
	String_t* ___headSlot_15;
	// System.String Spine.Unity.Examples.MixAndMatch::headAttachmentName
	String_t* ___headAttachmentName_16;
	// System.Boolean Spine.Unity.Examples.MixAndMatch::repack
	bool ___repack_17;
	// UnityEngine.Shader Spine.Unity.Examples.MixAndMatch::repackedShader
	Shader_t2430389951 * ___repackedShader_18;
	// UnityEngine.Texture2D Spine.Unity.Examples.MixAndMatch::runtimeAtlas
	Texture2D_t3542995729 * ___runtimeAtlas_19;
	// UnityEngine.Material Spine.Unity.Examples.MixAndMatch::runtimeMaterial
	Material_t193706927 * ___runtimeMaterial_20;

public:
	inline static int32_t get_offset_of_handSource_2() { return static_cast<int32_t>(offsetof(MixAndMatch_t352887386, ___handSource_2)); }
	inline AtlasAsset_t2757378847 * get_handSource_2() const { return ___handSource_2; }
	inline AtlasAsset_t2757378847 ** get_address_of_handSource_2() { return &___handSource_2; }
	inline void set_handSource_2(AtlasAsset_t2757378847 * value)
	{
		___handSource_2 = value;
		Il2CppCodeGenWriteBarrier(&___handSource_2, value);
	}

	inline static int32_t get_offset_of_handRegion_3() { return static_cast<int32_t>(offsetof(MixAndMatch_t352887386, ___handRegion_3)); }
	inline String_t* get_handRegion_3() const { return ___handRegion_3; }
	inline String_t** get_address_of_handRegion_3() { return &___handRegion_3; }
	inline void set_handRegion_3(String_t* value)
	{
		___handRegion_3 = value;
		Il2CppCodeGenWriteBarrier(&___handRegion_3, value);
	}

	inline static int32_t get_offset_of_handAttachmentName_4() { return static_cast<int32_t>(offsetof(MixAndMatch_t352887386, ___handAttachmentName_4)); }
	inline String_t* get_handAttachmentName_4() const { return ___handAttachmentName_4; }
	inline String_t** get_address_of_handAttachmentName_4() { return &___handAttachmentName_4; }
	inline void set_handAttachmentName_4(String_t* value)
	{
		___handAttachmentName_4 = value;
		Il2CppCodeGenWriteBarrier(&___handAttachmentName_4, value);
	}

	inline static int32_t get_offset_of_handSlot_5() { return static_cast<int32_t>(offsetof(MixAndMatch_t352887386, ___handSlot_5)); }
	inline String_t* get_handSlot_5() const { return ___handSlot_5; }
	inline String_t** get_address_of_handSlot_5() { return &___handSlot_5; }
	inline void set_handSlot_5(String_t* value)
	{
		___handSlot_5 = value;
		Il2CppCodeGenWriteBarrier(&___handSlot_5, value);
	}

	inline static int32_t get_offset_of_newHandOffset_6() { return static_cast<int32_t>(offsetof(MixAndMatch_t352887386, ___newHandOffset_6)); }
	inline Vector2_t2243707579  get_newHandOffset_6() const { return ___newHandOffset_6; }
	inline Vector2_t2243707579 * get_address_of_newHandOffset_6() { return &___newHandOffset_6; }
	inline void set_newHandOffset_6(Vector2_t2243707579  value)
	{
		___newHandOffset_6 = value;
	}

	inline static int32_t get_offset_of_newHandRotation_7() { return static_cast<int32_t>(offsetof(MixAndMatch_t352887386, ___newHandRotation_7)); }
	inline float get_newHandRotation_7() const { return ___newHandRotation_7; }
	inline float* get_address_of_newHandRotation_7() { return &___newHandRotation_7; }
	inline void set_newHandRotation_7(float value)
	{
		___newHandRotation_7 = value;
	}

	inline static int32_t get_offset_of_handTexture_8() { return static_cast<int32_t>(offsetof(MixAndMatch_t352887386, ___handTexture_8)); }
	inline Texture2D_t3542995729 * get_handTexture_8() const { return ___handTexture_8; }
	inline Texture2D_t3542995729 ** get_address_of_handTexture_8() { return &___handTexture_8; }
	inline void set_handTexture_8(Texture2D_t3542995729 * value)
	{
		___handTexture_8 = value;
		Il2CppCodeGenWriteBarrier(&___handTexture_8, value);
	}

	inline static int32_t get_offset_of_dagger_9() { return static_cast<int32_t>(offsetof(MixAndMatch_t352887386, ___dagger_9)); }
	inline Sprite_t309593783 * get_dagger_9() const { return ___dagger_9; }
	inline Sprite_t309593783 ** get_address_of_dagger_9() { return &___dagger_9; }
	inline void set_dagger_9(Sprite_t309593783 * value)
	{
		___dagger_9 = value;
		Il2CppCodeGenWriteBarrier(&___dagger_9, value);
	}

	inline static int32_t get_offset_of_daggerName_10() { return static_cast<int32_t>(offsetof(MixAndMatch_t352887386, ___daggerName_10)); }
	inline String_t* get_daggerName_10() const { return ___daggerName_10; }
	inline String_t** get_address_of_daggerName_10() { return &___daggerName_10; }
	inline void set_daggerName_10(String_t* value)
	{
		___daggerName_10 = value;
		Il2CppCodeGenWriteBarrier(&___daggerName_10, value);
	}

	inline static int32_t get_offset_of_weaponSlot_11() { return static_cast<int32_t>(offsetof(MixAndMatch_t352887386, ___weaponSlot_11)); }
	inline String_t* get_weaponSlot_11() const { return ___weaponSlot_11; }
	inline String_t** get_address_of_weaponSlot_11() { return &___weaponSlot_11; }
	inline void set_weaponSlot_11(String_t* value)
	{
		___weaponSlot_11 = value;
		Il2CppCodeGenWriteBarrier(&___weaponSlot_11, value);
	}

	inline static int32_t get_offset_of_applyHeadRegion_12() { return static_cast<int32_t>(offsetof(MixAndMatch_t352887386, ___applyHeadRegion_12)); }
	inline bool get_applyHeadRegion_12() const { return ___applyHeadRegion_12; }
	inline bool* get_address_of_applyHeadRegion_12() { return &___applyHeadRegion_12; }
	inline void set_applyHeadRegion_12(bool value)
	{
		___applyHeadRegion_12 = value;
	}

	inline static int32_t get_offset_of_headSource_13() { return static_cast<int32_t>(offsetof(MixAndMatch_t352887386, ___headSource_13)); }
	inline AtlasAsset_t2757378847 * get_headSource_13() const { return ___headSource_13; }
	inline AtlasAsset_t2757378847 ** get_address_of_headSource_13() { return &___headSource_13; }
	inline void set_headSource_13(AtlasAsset_t2757378847 * value)
	{
		___headSource_13 = value;
		Il2CppCodeGenWriteBarrier(&___headSource_13, value);
	}

	inline static int32_t get_offset_of_headRegion_14() { return static_cast<int32_t>(offsetof(MixAndMatch_t352887386, ___headRegion_14)); }
	inline String_t* get_headRegion_14() const { return ___headRegion_14; }
	inline String_t** get_address_of_headRegion_14() { return &___headRegion_14; }
	inline void set_headRegion_14(String_t* value)
	{
		___headRegion_14 = value;
		Il2CppCodeGenWriteBarrier(&___headRegion_14, value);
	}

	inline static int32_t get_offset_of_headSlot_15() { return static_cast<int32_t>(offsetof(MixAndMatch_t352887386, ___headSlot_15)); }
	inline String_t* get_headSlot_15() const { return ___headSlot_15; }
	inline String_t** get_address_of_headSlot_15() { return &___headSlot_15; }
	inline void set_headSlot_15(String_t* value)
	{
		___headSlot_15 = value;
		Il2CppCodeGenWriteBarrier(&___headSlot_15, value);
	}

	inline static int32_t get_offset_of_headAttachmentName_16() { return static_cast<int32_t>(offsetof(MixAndMatch_t352887386, ___headAttachmentName_16)); }
	inline String_t* get_headAttachmentName_16() const { return ___headAttachmentName_16; }
	inline String_t** get_address_of_headAttachmentName_16() { return &___headAttachmentName_16; }
	inline void set_headAttachmentName_16(String_t* value)
	{
		___headAttachmentName_16 = value;
		Il2CppCodeGenWriteBarrier(&___headAttachmentName_16, value);
	}

	inline static int32_t get_offset_of_repack_17() { return static_cast<int32_t>(offsetof(MixAndMatch_t352887386, ___repack_17)); }
	inline bool get_repack_17() const { return ___repack_17; }
	inline bool* get_address_of_repack_17() { return &___repack_17; }
	inline void set_repack_17(bool value)
	{
		___repack_17 = value;
	}

	inline static int32_t get_offset_of_repackedShader_18() { return static_cast<int32_t>(offsetof(MixAndMatch_t352887386, ___repackedShader_18)); }
	inline Shader_t2430389951 * get_repackedShader_18() const { return ___repackedShader_18; }
	inline Shader_t2430389951 ** get_address_of_repackedShader_18() { return &___repackedShader_18; }
	inline void set_repackedShader_18(Shader_t2430389951 * value)
	{
		___repackedShader_18 = value;
		Il2CppCodeGenWriteBarrier(&___repackedShader_18, value);
	}

	inline static int32_t get_offset_of_runtimeAtlas_19() { return static_cast<int32_t>(offsetof(MixAndMatch_t352887386, ___runtimeAtlas_19)); }
	inline Texture2D_t3542995729 * get_runtimeAtlas_19() const { return ___runtimeAtlas_19; }
	inline Texture2D_t3542995729 ** get_address_of_runtimeAtlas_19() { return &___runtimeAtlas_19; }
	inline void set_runtimeAtlas_19(Texture2D_t3542995729 * value)
	{
		___runtimeAtlas_19 = value;
		Il2CppCodeGenWriteBarrier(&___runtimeAtlas_19, value);
	}

	inline static int32_t get_offset_of_runtimeMaterial_20() { return static_cast<int32_t>(offsetof(MixAndMatch_t352887386, ___runtimeMaterial_20)); }
	inline Material_t193706927 * get_runtimeMaterial_20() const { return ___runtimeMaterial_20; }
	inline Material_t193706927 ** get_address_of_runtimeMaterial_20() { return &___runtimeMaterial_20; }
	inline void set_runtimeMaterial_20(Material_t193706927 * value)
	{
		___runtimeMaterial_20 = value;
		Il2CppCodeGenWriteBarrier(&___runtimeMaterial_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
