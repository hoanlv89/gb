#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Spine.Unity.MeshGeneration.ArraysMeshGenerator
struct ArraysMeshGenerator_t818279068;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;
// Spine.ExposedList`1<Spine.Unity.MeshGeneration.ArraysMeshGenerator/SubmeshTriangleBuffer>
struct ExposedList_1_t4097365855;
// Spine.Unity.MeshGeneration.SubmeshInstruction[]
struct SubmeshInstructionU5BU5D_t1588248162;
// Spine.Skeleton
struct Skeleton_t1387859465;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t1658499504;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Mesh1356156583.h"
#include "AssemblyU2DCSharp_Spine_Skeleton1387859465.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"

// System.Void Spine.Unity.MeshGeneration.ArraysMeshGenerator::.ctor()
extern "C"  void ArraysMeshGenerator__ctor_m2545741146 (ArraysMeshGenerator_t818279068 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.MeshGeneration.ArraysMeshGenerator::get_PremultiplyVertexColors()
extern "C"  bool ArraysMeshGenerator_get_PremultiplyVertexColors_m3997913424 (ArraysMeshGenerator_t818279068 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysMeshGenerator::set_PremultiplyVertexColors(System.Boolean)
extern "C"  void ArraysMeshGenerator_set_PremultiplyVertexColors_m2729532855 (ArraysMeshGenerator_t818279068 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.MeshGeneration.ArraysMeshGenerator::get_AddNormals()
extern "C"  bool ArraysMeshGenerator_get_AddNormals_m1872530186 (ArraysMeshGenerator_t818279068 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysMeshGenerator::set_AddNormals(System.Boolean)
extern "C"  void ArraysMeshGenerator_set_AddNormals_m2341608027 (ArraysMeshGenerator_t818279068 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.MeshGeneration.ArraysMeshGenerator::get_AddTangents()
extern "C"  bool ArraysMeshGenerator_get_AddTangents_m1906173802 (ArraysMeshGenerator_t818279068 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysMeshGenerator::set_AddTangents(System.Boolean)
extern "C"  void ArraysMeshGenerator_set_AddTangents_m3250908735 (ArraysMeshGenerator_t818279068 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysMeshGenerator::TryAddNormalsTo(UnityEngine.Mesh,System.Int32)
extern "C"  void ArraysMeshGenerator_TryAddNormalsTo_m2357797968 (ArraysMeshGenerator_t818279068 * __this, Mesh_t1356156583 * ___mesh0, int32_t ___targetVertexCount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.MeshGeneration.ArraysMeshGenerator::EnsureSize(System.Int32,UnityEngine.Vector3[]&,UnityEngine.Vector2[]&,UnityEngine.Color32[]&)
extern "C"  bool ArraysMeshGenerator_EnsureSize_m1449566832 (Il2CppObject * __this /* static, unused */, int32_t ___targetVertexCount0, Vector3U5BU5D_t1172311765** ___vertices1, Vector2U5BU5D_t686124026** ___uvs2, Color32U5BU5D_t30278651** ___colors3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.MeshGeneration.ArraysMeshGenerator::EnsureTriangleBuffersSize(Spine.ExposedList`1<Spine.Unity.MeshGeneration.ArraysMeshGenerator/SubmeshTriangleBuffer>,System.Int32,Spine.Unity.MeshGeneration.SubmeshInstruction[])
extern "C"  bool ArraysMeshGenerator_EnsureTriangleBuffersSize_m1556299582 (Il2CppObject * __this /* static, unused */, ExposedList_1_t4097365855 * ___submeshBuffers0, int32_t ___targetSubmeshCount1, SubmeshInstructionU5BU5D_t1588248162* ___instructionItems2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysMeshGenerator::FillVerts(Spine.Skeleton,System.Int32,System.Int32,System.Single,System.Boolean,UnityEngine.Vector3[],UnityEngine.Vector2[],UnityEngine.Color32[],System.Int32&,System.Single[]&,UnityEngine.Vector3&,UnityEngine.Vector3&,System.Boolean)
extern "C"  void ArraysMeshGenerator_FillVerts_m2052249020 (Il2CppObject * __this /* static, unused */, Skeleton_t1387859465 * ___skeleton0, int32_t ___startSlot1, int32_t ___endSlot2, float ___zSpacing3, bool ___pmaColors4, Vector3U5BU5D_t1172311765* ___verts5, Vector2U5BU5D_t686124026* ___uvs6, Color32U5BU5D_t30278651* ___colors7, int32_t* ___vertexIndex8, SingleU5BU5D_t577127397** ___tempVertBuffer9, Vector3_t2243707580 * ___boundsMin10, Vector3_t2243707580 * ___boundsMax11, bool ___renderMeshes12, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysMeshGenerator::FillTriangles(System.Int32[]&,Spine.Skeleton,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  void ArraysMeshGenerator_FillTriangles_m3887733958 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641** ___triangleBuffer0, Skeleton_t1387859465 * ___skeleton1, int32_t ___triangleCount2, int32_t ___firstVertex3, int32_t ___startSlot4, int32_t ___endSlot5, bool ___isLastSubmesh6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysMeshGenerator::FillTrianglesQuads(System.Int32[]&,System.Int32&,System.Int32&,System.Int32,System.Int32,System.Boolean)
extern "C"  void ArraysMeshGenerator_FillTrianglesQuads_m2452521326 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641** ___triangleBuffer0, int32_t* ___storedTriangleCount1, int32_t* ___storedFirstVertex2, int32_t ___instructionsFirstVertex3, int32_t ___instructionTriangleCount4, bool ___isLastSubmesh5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds Spine.Unity.MeshGeneration.ArraysMeshGenerator::ToBounds(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Bounds_t3033363703  ArraysMeshGenerator_ToBounds_m1492719743 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___boundsMin0, Vector3_t2243707580  ___boundsMax1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysMeshGenerator::SolveTangents2DEnsureSize(UnityEngine.Vector4[]&,UnityEngine.Vector2[]&,System.Int32)
extern "C"  void ArraysMeshGenerator_SolveTangents2DEnsureSize_m4284513797 (Il2CppObject * __this /* static, unused */, Vector4U5BU5D_t1658499504** ___tangentBuffer0, Vector2U5BU5D_t686124026** ___tempTanBuffer1, int32_t ___vertexCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysMeshGenerator::SolveTangents2DTriangles(UnityEngine.Vector2[],System.Int32[],System.Int32,UnityEngine.Vector3[],UnityEngine.Vector2[],System.Int32)
extern "C"  void ArraysMeshGenerator_SolveTangents2DTriangles_m1181270650 (Il2CppObject * __this /* static, unused */, Vector2U5BU5D_t686124026* ___tempTanBuffer0, Int32U5BU5D_t3030399641* ___triangles1, int32_t ___triangleCount2, Vector3U5BU5D_t1172311765* ___vertices3, Vector2U5BU5D_t686124026* ___uvs4, int32_t ___vertexCount5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGeneration.ArraysMeshGenerator::SolveTangents2DBuffer(UnityEngine.Vector4[],UnityEngine.Vector2[],System.Int32)
extern "C"  void ArraysMeshGenerator_SolveTangents2DBuffer_m3672466508 (Il2CppObject * __this /* static, unused */, Vector4U5BU5D_t1658499504* ___tangents0, Vector2U5BU5D_t686124026* ___tempTanBuffer1, int32_t ___vertexCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
