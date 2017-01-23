#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate
struct SkeletonRendererDelegate_t2855702160;
// Spine.Unity.SkeletonDataAsset
struct SkeletonDataAsset_t901153269;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.Generic.List`1<Spine.Slot>
struct List_1_t3970727598;
// Spine.Unity.SkeletonRenderer/InstructionDelegate
struct InstructionDelegate_t3836706226;
// System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material>
struct Dictionary_2_t3590089903;
// System.Collections.Generic.Dictionary`2<Spine.Slot,UnityEngine.Material>
struct Dictionary_2_t1972914032;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;
// UnityEngine.MeshFilter
struct MeshFilter_t3026937449;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.Unity.DoubleBuffered`1<Spine.Unity.SkeletonRenderer/SmartMesh>
struct DoubleBuffered_1_t4048809515;
// Spine.Unity.SkeletonRenderer/SmartMesh/Instruction
struct Instruction_t3058234646;
// Spine.ExposedList`1<Spine.Unity.MeshGeneration.ArraysMeshGenerator/SubmeshTriangleBuffer>
struct ExposedList_1_t4097365855;
// Spine.ExposedList`1<UnityEngine.Material>
struct ExposedList_1_t3545576163;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;
// System.Single[]
struct SingleU5BU5D_t577127397;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t1658499504;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.SkeletonRenderer
struct  SkeletonRenderer_t2265953470  : public MonoBehaviour_t1158329972
{
public:
	// Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate Spine.Unity.SkeletonRenderer::OnRebuild
	SkeletonRendererDelegate_t2855702160 * ___OnRebuild_2;
	// Spine.Unity.SkeletonDataAsset Spine.Unity.SkeletonRenderer::skeletonDataAsset
	SkeletonDataAsset_t901153269 * ___skeletonDataAsset_3;
	// System.String Spine.Unity.SkeletonRenderer::initialSkinName
	String_t* ___initialSkinName_4;
	// System.String[] Spine.Unity.SkeletonRenderer::separatorSlotNames
	StringU5BU5D_t1642385972* ___separatorSlotNames_5;
	// System.Collections.Generic.List`1<Spine.Slot> Spine.Unity.SkeletonRenderer::separatorSlots
	List_1_t3970727598 * ___separatorSlots_6;
	// System.Single Spine.Unity.SkeletonRenderer::zSpacing
	float ___zSpacing_7;
	// System.Boolean Spine.Unity.SkeletonRenderer::renderMeshes
	bool ___renderMeshes_8;
	// System.Boolean Spine.Unity.SkeletonRenderer::immutableTriangles
	bool ___immutableTriangles_9;
	// System.Boolean Spine.Unity.SkeletonRenderer::pmaVertexColors
	bool ___pmaVertexColors_10;
	// System.Boolean Spine.Unity.SkeletonRenderer::clearStateOnDisable
	bool ___clearStateOnDisable_11;
	// System.Boolean Spine.Unity.SkeletonRenderer::calculateNormals
	bool ___calculateNormals_12;
	// System.Boolean Spine.Unity.SkeletonRenderer::calculateTangents
	bool ___calculateTangents_13;
	// System.Boolean Spine.Unity.SkeletonRenderer::logErrors
	bool ___logErrors_14;
	// System.Boolean Spine.Unity.SkeletonRenderer::disableRenderingOnOverride
	bool ___disableRenderingOnOverride_15;
	// Spine.Unity.SkeletonRenderer/InstructionDelegate Spine.Unity.SkeletonRenderer::generateMeshOverride
	InstructionDelegate_t3836706226 * ___generateMeshOverride_16;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material> Spine.Unity.SkeletonRenderer::customMaterialOverride
	Dictionary_2_t3590089903 * ___customMaterialOverride_17;
	// System.Collections.Generic.Dictionary`2<Spine.Slot,UnityEngine.Material> Spine.Unity.SkeletonRenderer::customSlotMaterials
	Dictionary_2_t1972914032 * ___customSlotMaterials_18;
	// UnityEngine.MeshRenderer Spine.Unity.SkeletonRenderer::meshRenderer
	MeshRenderer_t1268241104 * ___meshRenderer_19;
	// UnityEngine.MeshFilter Spine.Unity.SkeletonRenderer::meshFilter
	MeshFilter_t3026937449 * ___meshFilter_20;
	// System.Boolean Spine.Unity.SkeletonRenderer::valid
	bool ___valid_21;
	// Spine.Skeleton Spine.Unity.SkeletonRenderer::skeleton
	Skeleton_t1387859465 * ___skeleton_22;
	// Spine.Unity.DoubleBuffered`1<Spine.Unity.SkeletonRenderer/SmartMesh> Spine.Unity.SkeletonRenderer::doubleBufferedMesh
	DoubleBuffered_1_t4048809515 * ___doubleBufferedMesh_23;
	// Spine.Unity.SkeletonRenderer/SmartMesh/Instruction Spine.Unity.SkeletonRenderer::currentInstructions
	Instruction_t3058234646 * ___currentInstructions_24;
	// Spine.ExposedList`1<Spine.Unity.MeshGeneration.ArraysMeshGenerator/SubmeshTriangleBuffer> Spine.Unity.SkeletonRenderer::submeshes
	ExposedList_1_t4097365855 * ___submeshes_25;
	// Spine.ExposedList`1<UnityEngine.Material> Spine.Unity.SkeletonRenderer::submeshMaterials
	ExposedList_1_t3545576163 * ___submeshMaterials_26;
	// UnityEngine.Material[] Spine.Unity.SkeletonRenderer::sharedMaterials
	MaterialU5BU5D_t3123989686* ___sharedMaterials_27;
	// System.Single[] Spine.Unity.SkeletonRenderer::tempVertices
	SingleU5BU5D_t577127397* ___tempVertices_28;
	// UnityEngine.Vector3[] Spine.Unity.SkeletonRenderer::vertices
	Vector3U5BU5D_t1172311765* ___vertices_29;
	// UnityEngine.Color32[] Spine.Unity.SkeletonRenderer::colors
	Color32U5BU5D_t30278651* ___colors_30;
	// UnityEngine.Vector2[] Spine.Unity.SkeletonRenderer::uvs
	Vector2U5BU5D_t686124026* ___uvs_31;
	// UnityEngine.Vector3[] Spine.Unity.SkeletonRenderer::normals
	Vector3U5BU5D_t1172311765* ___normals_32;
	// UnityEngine.Vector4[] Spine.Unity.SkeletonRenderer::tangents
	Vector4U5BU5D_t1658499504* ___tangents_33;
	// UnityEngine.Vector2[] Spine.Unity.SkeletonRenderer::tempTanBuffer
	Vector2U5BU5D_t686124026* ___tempTanBuffer_34;

public:
	inline static int32_t get_offset_of_OnRebuild_2() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___OnRebuild_2)); }
	inline SkeletonRendererDelegate_t2855702160 * get_OnRebuild_2() const { return ___OnRebuild_2; }
	inline SkeletonRendererDelegate_t2855702160 ** get_address_of_OnRebuild_2() { return &___OnRebuild_2; }
	inline void set_OnRebuild_2(SkeletonRendererDelegate_t2855702160 * value)
	{
		___OnRebuild_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnRebuild_2, value);
	}

	inline static int32_t get_offset_of_skeletonDataAsset_3() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___skeletonDataAsset_3)); }
	inline SkeletonDataAsset_t901153269 * get_skeletonDataAsset_3() const { return ___skeletonDataAsset_3; }
	inline SkeletonDataAsset_t901153269 ** get_address_of_skeletonDataAsset_3() { return &___skeletonDataAsset_3; }
	inline void set_skeletonDataAsset_3(SkeletonDataAsset_t901153269 * value)
	{
		___skeletonDataAsset_3 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonDataAsset_3, value);
	}

	inline static int32_t get_offset_of_initialSkinName_4() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___initialSkinName_4)); }
	inline String_t* get_initialSkinName_4() const { return ___initialSkinName_4; }
	inline String_t** get_address_of_initialSkinName_4() { return &___initialSkinName_4; }
	inline void set_initialSkinName_4(String_t* value)
	{
		___initialSkinName_4 = value;
		Il2CppCodeGenWriteBarrier(&___initialSkinName_4, value);
	}

	inline static int32_t get_offset_of_separatorSlotNames_5() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___separatorSlotNames_5)); }
	inline StringU5BU5D_t1642385972* get_separatorSlotNames_5() const { return ___separatorSlotNames_5; }
	inline StringU5BU5D_t1642385972** get_address_of_separatorSlotNames_5() { return &___separatorSlotNames_5; }
	inline void set_separatorSlotNames_5(StringU5BU5D_t1642385972* value)
	{
		___separatorSlotNames_5 = value;
		Il2CppCodeGenWriteBarrier(&___separatorSlotNames_5, value);
	}

	inline static int32_t get_offset_of_separatorSlots_6() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___separatorSlots_6)); }
	inline List_1_t3970727598 * get_separatorSlots_6() const { return ___separatorSlots_6; }
	inline List_1_t3970727598 ** get_address_of_separatorSlots_6() { return &___separatorSlots_6; }
	inline void set_separatorSlots_6(List_1_t3970727598 * value)
	{
		___separatorSlots_6 = value;
		Il2CppCodeGenWriteBarrier(&___separatorSlots_6, value);
	}

	inline static int32_t get_offset_of_zSpacing_7() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___zSpacing_7)); }
	inline float get_zSpacing_7() const { return ___zSpacing_7; }
	inline float* get_address_of_zSpacing_7() { return &___zSpacing_7; }
	inline void set_zSpacing_7(float value)
	{
		___zSpacing_7 = value;
	}

	inline static int32_t get_offset_of_renderMeshes_8() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___renderMeshes_8)); }
	inline bool get_renderMeshes_8() const { return ___renderMeshes_8; }
	inline bool* get_address_of_renderMeshes_8() { return &___renderMeshes_8; }
	inline void set_renderMeshes_8(bool value)
	{
		___renderMeshes_8 = value;
	}

	inline static int32_t get_offset_of_immutableTriangles_9() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___immutableTriangles_9)); }
	inline bool get_immutableTriangles_9() const { return ___immutableTriangles_9; }
	inline bool* get_address_of_immutableTriangles_9() { return &___immutableTriangles_9; }
	inline void set_immutableTriangles_9(bool value)
	{
		___immutableTriangles_9 = value;
	}

	inline static int32_t get_offset_of_pmaVertexColors_10() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___pmaVertexColors_10)); }
	inline bool get_pmaVertexColors_10() const { return ___pmaVertexColors_10; }
	inline bool* get_address_of_pmaVertexColors_10() { return &___pmaVertexColors_10; }
	inline void set_pmaVertexColors_10(bool value)
	{
		___pmaVertexColors_10 = value;
	}

	inline static int32_t get_offset_of_clearStateOnDisable_11() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___clearStateOnDisable_11)); }
	inline bool get_clearStateOnDisable_11() const { return ___clearStateOnDisable_11; }
	inline bool* get_address_of_clearStateOnDisable_11() { return &___clearStateOnDisable_11; }
	inline void set_clearStateOnDisable_11(bool value)
	{
		___clearStateOnDisable_11 = value;
	}

	inline static int32_t get_offset_of_calculateNormals_12() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___calculateNormals_12)); }
	inline bool get_calculateNormals_12() const { return ___calculateNormals_12; }
	inline bool* get_address_of_calculateNormals_12() { return &___calculateNormals_12; }
	inline void set_calculateNormals_12(bool value)
	{
		___calculateNormals_12 = value;
	}

	inline static int32_t get_offset_of_calculateTangents_13() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___calculateTangents_13)); }
	inline bool get_calculateTangents_13() const { return ___calculateTangents_13; }
	inline bool* get_address_of_calculateTangents_13() { return &___calculateTangents_13; }
	inline void set_calculateTangents_13(bool value)
	{
		___calculateTangents_13 = value;
	}

	inline static int32_t get_offset_of_logErrors_14() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___logErrors_14)); }
	inline bool get_logErrors_14() const { return ___logErrors_14; }
	inline bool* get_address_of_logErrors_14() { return &___logErrors_14; }
	inline void set_logErrors_14(bool value)
	{
		___logErrors_14 = value;
	}

	inline static int32_t get_offset_of_disableRenderingOnOverride_15() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___disableRenderingOnOverride_15)); }
	inline bool get_disableRenderingOnOverride_15() const { return ___disableRenderingOnOverride_15; }
	inline bool* get_address_of_disableRenderingOnOverride_15() { return &___disableRenderingOnOverride_15; }
	inline void set_disableRenderingOnOverride_15(bool value)
	{
		___disableRenderingOnOverride_15 = value;
	}

	inline static int32_t get_offset_of_generateMeshOverride_16() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___generateMeshOverride_16)); }
	inline InstructionDelegate_t3836706226 * get_generateMeshOverride_16() const { return ___generateMeshOverride_16; }
	inline InstructionDelegate_t3836706226 ** get_address_of_generateMeshOverride_16() { return &___generateMeshOverride_16; }
	inline void set_generateMeshOverride_16(InstructionDelegate_t3836706226 * value)
	{
		___generateMeshOverride_16 = value;
		Il2CppCodeGenWriteBarrier(&___generateMeshOverride_16, value);
	}

	inline static int32_t get_offset_of_customMaterialOverride_17() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___customMaterialOverride_17)); }
	inline Dictionary_2_t3590089903 * get_customMaterialOverride_17() const { return ___customMaterialOverride_17; }
	inline Dictionary_2_t3590089903 ** get_address_of_customMaterialOverride_17() { return &___customMaterialOverride_17; }
	inline void set_customMaterialOverride_17(Dictionary_2_t3590089903 * value)
	{
		___customMaterialOverride_17 = value;
		Il2CppCodeGenWriteBarrier(&___customMaterialOverride_17, value);
	}

	inline static int32_t get_offset_of_customSlotMaterials_18() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___customSlotMaterials_18)); }
	inline Dictionary_2_t1972914032 * get_customSlotMaterials_18() const { return ___customSlotMaterials_18; }
	inline Dictionary_2_t1972914032 ** get_address_of_customSlotMaterials_18() { return &___customSlotMaterials_18; }
	inline void set_customSlotMaterials_18(Dictionary_2_t1972914032 * value)
	{
		___customSlotMaterials_18 = value;
		Il2CppCodeGenWriteBarrier(&___customSlotMaterials_18, value);
	}

	inline static int32_t get_offset_of_meshRenderer_19() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___meshRenderer_19)); }
	inline MeshRenderer_t1268241104 * get_meshRenderer_19() const { return ___meshRenderer_19; }
	inline MeshRenderer_t1268241104 ** get_address_of_meshRenderer_19() { return &___meshRenderer_19; }
	inline void set_meshRenderer_19(MeshRenderer_t1268241104 * value)
	{
		___meshRenderer_19 = value;
		Il2CppCodeGenWriteBarrier(&___meshRenderer_19, value);
	}

	inline static int32_t get_offset_of_meshFilter_20() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___meshFilter_20)); }
	inline MeshFilter_t3026937449 * get_meshFilter_20() const { return ___meshFilter_20; }
	inline MeshFilter_t3026937449 ** get_address_of_meshFilter_20() { return &___meshFilter_20; }
	inline void set_meshFilter_20(MeshFilter_t3026937449 * value)
	{
		___meshFilter_20 = value;
		Il2CppCodeGenWriteBarrier(&___meshFilter_20, value);
	}

	inline static int32_t get_offset_of_valid_21() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___valid_21)); }
	inline bool get_valid_21() const { return ___valid_21; }
	inline bool* get_address_of_valid_21() { return &___valid_21; }
	inline void set_valid_21(bool value)
	{
		___valid_21 = value;
	}

	inline static int32_t get_offset_of_skeleton_22() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___skeleton_22)); }
	inline Skeleton_t1387859465 * get_skeleton_22() const { return ___skeleton_22; }
	inline Skeleton_t1387859465 ** get_address_of_skeleton_22() { return &___skeleton_22; }
	inline void set_skeleton_22(Skeleton_t1387859465 * value)
	{
		___skeleton_22 = value;
		Il2CppCodeGenWriteBarrier(&___skeleton_22, value);
	}

	inline static int32_t get_offset_of_doubleBufferedMesh_23() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___doubleBufferedMesh_23)); }
	inline DoubleBuffered_1_t4048809515 * get_doubleBufferedMesh_23() const { return ___doubleBufferedMesh_23; }
	inline DoubleBuffered_1_t4048809515 ** get_address_of_doubleBufferedMesh_23() { return &___doubleBufferedMesh_23; }
	inline void set_doubleBufferedMesh_23(DoubleBuffered_1_t4048809515 * value)
	{
		___doubleBufferedMesh_23 = value;
		Il2CppCodeGenWriteBarrier(&___doubleBufferedMesh_23, value);
	}

	inline static int32_t get_offset_of_currentInstructions_24() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___currentInstructions_24)); }
	inline Instruction_t3058234646 * get_currentInstructions_24() const { return ___currentInstructions_24; }
	inline Instruction_t3058234646 ** get_address_of_currentInstructions_24() { return &___currentInstructions_24; }
	inline void set_currentInstructions_24(Instruction_t3058234646 * value)
	{
		___currentInstructions_24 = value;
		Il2CppCodeGenWriteBarrier(&___currentInstructions_24, value);
	}

	inline static int32_t get_offset_of_submeshes_25() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___submeshes_25)); }
	inline ExposedList_1_t4097365855 * get_submeshes_25() const { return ___submeshes_25; }
	inline ExposedList_1_t4097365855 ** get_address_of_submeshes_25() { return &___submeshes_25; }
	inline void set_submeshes_25(ExposedList_1_t4097365855 * value)
	{
		___submeshes_25 = value;
		Il2CppCodeGenWriteBarrier(&___submeshes_25, value);
	}

	inline static int32_t get_offset_of_submeshMaterials_26() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___submeshMaterials_26)); }
	inline ExposedList_1_t3545576163 * get_submeshMaterials_26() const { return ___submeshMaterials_26; }
	inline ExposedList_1_t3545576163 ** get_address_of_submeshMaterials_26() { return &___submeshMaterials_26; }
	inline void set_submeshMaterials_26(ExposedList_1_t3545576163 * value)
	{
		___submeshMaterials_26 = value;
		Il2CppCodeGenWriteBarrier(&___submeshMaterials_26, value);
	}

	inline static int32_t get_offset_of_sharedMaterials_27() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___sharedMaterials_27)); }
	inline MaterialU5BU5D_t3123989686* get_sharedMaterials_27() const { return ___sharedMaterials_27; }
	inline MaterialU5BU5D_t3123989686** get_address_of_sharedMaterials_27() { return &___sharedMaterials_27; }
	inline void set_sharedMaterials_27(MaterialU5BU5D_t3123989686* value)
	{
		___sharedMaterials_27 = value;
		Il2CppCodeGenWriteBarrier(&___sharedMaterials_27, value);
	}

	inline static int32_t get_offset_of_tempVertices_28() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___tempVertices_28)); }
	inline SingleU5BU5D_t577127397* get_tempVertices_28() const { return ___tempVertices_28; }
	inline SingleU5BU5D_t577127397** get_address_of_tempVertices_28() { return &___tempVertices_28; }
	inline void set_tempVertices_28(SingleU5BU5D_t577127397* value)
	{
		___tempVertices_28 = value;
		Il2CppCodeGenWriteBarrier(&___tempVertices_28, value);
	}

	inline static int32_t get_offset_of_vertices_29() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___vertices_29)); }
	inline Vector3U5BU5D_t1172311765* get_vertices_29() const { return ___vertices_29; }
	inline Vector3U5BU5D_t1172311765** get_address_of_vertices_29() { return &___vertices_29; }
	inline void set_vertices_29(Vector3U5BU5D_t1172311765* value)
	{
		___vertices_29 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_29, value);
	}

	inline static int32_t get_offset_of_colors_30() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___colors_30)); }
	inline Color32U5BU5D_t30278651* get_colors_30() const { return ___colors_30; }
	inline Color32U5BU5D_t30278651** get_address_of_colors_30() { return &___colors_30; }
	inline void set_colors_30(Color32U5BU5D_t30278651* value)
	{
		___colors_30 = value;
		Il2CppCodeGenWriteBarrier(&___colors_30, value);
	}

	inline static int32_t get_offset_of_uvs_31() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___uvs_31)); }
	inline Vector2U5BU5D_t686124026* get_uvs_31() const { return ___uvs_31; }
	inline Vector2U5BU5D_t686124026** get_address_of_uvs_31() { return &___uvs_31; }
	inline void set_uvs_31(Vector2U5BU5D_t686124026* value)
	{
		___uvs_31 = value;
		Il2CppCodeGenWriteBarrier(&___uvs_31, value);
	}

	inline static int32_t get_offset_of_normals_32() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___normals_32)); }
	inline Vector3U5BU5D_t1172311765* get_normals_32() const { return ___normals_32; }
	inline Vector3U5BU5D_t1172311765** get_address_of_normals_32() { return &___normals_32; }
	inline void set_normals_32(Vector3U5BU5D_t1172311765* value)
	{
		___normals_32 = value;
		Il2CppCodeGenWriteBarrier(&___normals_32, value);
	}

	inline static int32_t get_offset_of_tangents_33() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___tangents_33)); }
	inline Vector4U5BU5D_t1658499504* get_tangents_33() const { return ___tangents_33; }
	inline Vector4U5BU5D_t1658499504** get_address_of_tangents_33() { return &___tangents_33; }
	inline void set_tangents_33(Vector4U5BU5D_t1658499504* value)
	{
		___tangents_33 = value;
		Il2CppCodeGenWriteBarrier(&___tangents_33, value);
	}

	inline static int32_t get_offset_of_tempTanBuffer_34() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t2265953470, ___tempTanBuffer_34)); }
	inline Vector2U5BU5D_t686124026* get_tempTanBuffer_34() const { return ___tempTanBuffer_34; }
	inline Vector2U5BU5D_t686124026** get_address_of_tempTanBuffer_34() { return &___tempTanBuffer_34; }
	inline void set_tempTanBuffer_34(Vector2U5BU5D_t686124026* value)
	{
		___tempTanBuffer_34 = value;
		Il2CppCodeGenWriteBarrier(&___tempTanBuffer_34, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
