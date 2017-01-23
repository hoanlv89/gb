#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.MeshGeneration.ArraysMeshGenerator
struct  ArraysMeshGenerator_t818279068  : public Il2CppObject
{
public:
	// System.Boolean Spine.Unity.MeshGeneration.ArraysMeshGenerator::<PremultiplyVertexColors>k__BackingField
	bool ___U3CPremultiplyVertexColorsU3Ek__BackingField_0;
	// System.Boolean Spine.Unity.MeshGeneration.ArraysMeshGenerator::addNormals
	bool ___addNormals_1;
	// System.Boolean Spine.Unity.MeshGeneration.ArraysMeshGenerator::addTangents
	bool ___addTangents_2;
	// System.Single[] Spine.Unity.MeshGeneration.ArraysMeshGenerator::attachmentVertexBuffer
	SingleU5BU5D_t577127397* ___attachmentVertexBuffer_3;
	// UnityEngine.Vector3[] Spine.Unity.MeshGeneration.ArraysMeshGenerator::meshVertices
	Vector3U5BU5D_t1172311765* ___meshVertices_4;
	// UnityEngine.Color32[] Spine.Unity.MeshGeneration.ArraysMeshGenerator::meshColors32
	Color32U5BU5D_t30278651* ___meshColors32_5;
	// UnityEngine.Vector2[] Spine.Unity.MeshGeneration.ArraysMeshGenerator::meshUVs
	Vector2U5BU5D_t686124026* ___meshUVs_6;
	// UnityEngine.Vector3[] Spine.Unity.MeshGeneration.ArraysMeshGenerator::meshNormals
	Vector3U5BU5D_t1172311765* ___meshNormals_7;
	// UnityEngine.Vector4[] Spine.Unity.MeshGeneration.ArraysMeshGenerator::meshTangents
	Vector4U5BU5D_t1658499504* ___meshTangents_8;
	// UnityEngine.Vector2[] Spine.Unity.MeshGeneration.ArraysMeshGenerator::tempTanBuffer
	Vector2U5BU5D_t686124026* ___tempTanBuffer_9;

public:
	inline static int32_t get_offset_of_U3CPremultiplyVertexColorsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ArraysMeshGenerator_t818279068, ___U3CPremultiplyVertexColorsU3Ek__BackingField_0)); }
	inline bool get_U3CPremultiplyVertexColorsU3Ek__BackingField_0() const { return ___U3CPremultiplyVertexColorsU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CPremultiplyVertexColorsU3Ek__BackingField_0() { return &___U3CPremultiplyVertexColorsU3Ek__BackingField_0; }
	inline void set_U3CPremultiplyVertexColorsU3Ek__BackingField_0(bool value)
	{
		___U3CPremultiplyVertexColorsU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_addNormals_1() { return static_cast<int32_t>(offsetof(ArraysMeshGenerator_t818279068, ___addNormals_1)); }
	inline bool get_addNormals_1() const { return ___addNormals_1; }
	inline bool* get_address_of_addNormals_1() { return &___addNormals_1; }
	inline void set_addNormals_1(bool value)
	{
		___addNormals_1 = value;
	}

	inline static int32_t get_offset_of_addTangents_2() { return static_cast<int32_t>(offsetof(ArraysMeshGenerator_t818279068, ___addTangents_2)); }
	inline bool get_addTangents_2() const { return ___addTangents_2; }
	inline bool* get_address_of_addTangents_2() { return &___addTangents_2; }
	inline void set_addTangents_2(bool value)
	{
		___addTangents_2 = value;
	}

	inline static int32_t get_offset_of_attachmentVertexBuffer_3() { return static_cast<int32_t>(offsetof(ArraysMeshGenerator_t818279068, ___attachmentVertexBuffer_3)); }
	inline SingleU5BU5D_t577127397* get_attachmentVertexBuffer_3() const { return ___attachmentVertexBuffer_3; }
	inline SingleU5BU5D_t577127397** get_address_of_attachmentVertexBuffer_3() { return &___attachmentVertexBuffer_3; }
	inline void set_attachmentVertexBuffer_3(SingleU5BU5D_t577127397* value)
	{
		___attachmentVertexBuffer_3 = value;
		Il2CppCodeGenWriteBarrier(&___attachmentVertexBuffer_3, value);
	}

	inline static int32_t get_offset_of_meshVertices_4() { return static_cast<int32_t>(offsetof(ArraysMeshGenerator_t818279068, ___meshVertices_4)); }
	inline Vector3U5BU5D_t1172311765* get_meshVertices_4() const { return ___meshVertices_4; }
	inline Vector3U5BU5D_t1172311765** get_address_of_meshVertices_4() { return &___meshVertices_4; }
	inline void set_meshVertices_4(Vector3U5BU5D_t1172311765* value)
	{
		___meshVertices_4 = value;
		Il2CppCodeGenWriteBarrier(&___meshVertices_4, value);
	}

	inline static int32_t get_offset_of_meshColors32_5() { return static_cast<int32_t>(offsetof(ArraysMeshGenerator_t818279068, ___meshColors32_5)); }
	inline Color32U5BU5D_t30278651* get_meshColors32_5() const { return ___meshColors32_5; }
	inline Color32U5BU5D_t30278651** get_address_of_meshColors32_5() { return &___meshColors32_5; }
	inline void set_meshColors32_5(Color32U5BU5D_t30278651* value)
	{
		___meshColors32_5 = value;
		Il2CppCodeGenWriteBarrier(&___meshColors32_5, value);
	}

	inline static int32_t get_offset_of_meshUVs_6() { return static_cast<int32_t>(offsetof(ArraysMeshGenerator_t818279068, ___meshUVs_6)); }
	inline Vector2U5BU5D_t686124026* get_meshUVs_6() const { return ___meshUVs_6; }
	inline Vector2U5BU5D_t686124026** get_address_of_meshUVs_6() { return &___meshUVs_6; }
	inline void set_meshUVs_6(Vector2U5BU5D_t686124026* value)
	{
		___meshUVs_6 = value;
		Il2CppCodeGenWriteBarrier(&___meshUVs_6, value);
	}

	inline static int32_t get_offset_of_meshNormals_7() { return static_cast<int32_t>(offsetof(ArraysMeshGenerator_t818279068, ___meshNormals_7)); }
	inline Vector3U5BU5D_t1172311765* get_meshNormals_7() const { return ___meshNormals_7; }
	inline Vector3U5BU5D_t1172311765** get_address_of_meshNormals_7() { return &___meshNormals_7; }
	inline void set_meshNormals_7(Vector3U5BU5D_t1172311765* value)
	{
		___meshNormals_7 = value;
		Il2CppCodeGenWriteBarrier(&___meshNormals_7, value);
	}

	inline static int32_t get_offset_of_meshTangents_8() { return static_cast<int32_t>(offsetof(ArraysMeshGenerator_t818279068, ___meshTangents_8)); }
	inline Vector4U5BU5D_t1658499504* get_meshTangents_8() const { return ___meshTangents_8; }
	inline Vector4U5BU5D_t1658499504** get_address_of_meshTangents_8() { return &___meshTangents_8; }
	inline void set_meshTangents_8(Vector4U5BU5D_t1658499504* value)
	{
		___meshTangents_8 = value;
		Il2CppCodeGenWriteBarrier(&___meshTangents_8, value);
	}

	inline static int32_t get_offset_of_tempTanBuffer_9() { return static_cast<int32_t>(offsetof(ArraysMeshGenerator_t818279068, ___tempTanBuffer_9)); }
	inline Vector2U5BU5D_t686124026* get_tempTanBuffer_9() const { return ___tempTanBuffer_9; }
	inline Vector2U5BU5D_t686124026** get_address_of_tempTanBuffer_9() { return &___tempTanBuffer_9; }
	inline void set_tempTanBuffer_9(Vector2U5BU5D_t686124026* value)
	{
		___tempTanBuffer_9 = value;
		Il2CppCodeGenWriteBarrier(&___tempTanBuffer_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
