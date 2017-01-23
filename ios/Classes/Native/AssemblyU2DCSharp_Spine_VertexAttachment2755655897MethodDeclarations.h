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

// Spine.VertexAttachment
struct VertexAttachment_t2755655897;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Single[]
struct SingleU5BU5D_t577127397;
// Spine.Slot
struct Slot_t306639170;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Spine_Slot306639170.h"
#include "AssemblyU2DCSharp_Spine_VertexAttachment2755655897.h"

// System.Void Spine.VertexAttachment::.ctor(System.String)
extern "C"  void VertexAttachment__ctor_m1435589263 (VertexAttachment_t2755655897 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Spine.VertexAttachment::get_Bones()
extern "C"  Int32U5BU5D_t3030399641* VertexAttachment_get_Bones_m4212209405 (VertexAttachment_t2755655897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.VertexAttachment::set_Bones(System.Int32[])
extern "C"  void VertexAttachment_set_Bones_m2321184202 (VertexAttachment_t2755655897 * __this, Int32U5BU5D_t3030399641* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.VertexAttachment::get_Vertices()
extern "C"  SingleU5BU5D_t577127397* VertexAttachment_get_Vertices_m1376237781 (VertexAttachment_t2755655897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.VertexAttachment::set_Vertices(System.Single[])
extern "C"  void VertexAttachment_set_Vertices_m3490217958 (VertexAttachment_t2755655897 * __this, SingleU5BU5D_t577127397* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.VertexAttachment::get_WorldVerticesLength()
extern "C"  int32_t VertexAttachment_get_WorldVerticesLength_m828444817 (VertexAttachment_t2755655897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.VertexAttachment::set_WorldVerticesLength(System.Int32)
extern "C"  void VertexAttachment_set_WorldVerticesLength_m209610910 (VertexAttachment_t2755655897 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.VertexAttachment::ComputeWorldVertices(Spine.Slot,System.Single[])
extern "C"  void VertexAttachment_ComputeWorldVertices_m1888852687 (VertexAttachment_t2755655897 * __this, Slot_t306639170 * ___slot0, SingleU5BU5D_t577127397* ___worldVertices1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.VertexAttachment::ComputeWorldVertices(Spine.Slot,System.Int32,System.Int32,System.Single[],System.Int32)
extern "C"  void VertexAttachment_ComputeWorldVertices_m4046249974 (VertexAttachment_t2755655897 * __this, Slot_t306639170 * ___slot0, int32_t ___start1, int32_t ___count2, SingleU5BU5D_t577127397* ___worldVertices3, int32_t ___offset4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.VertexAttachment::ApplyDeform(Spine.VertexAttachment)
extern "C"  bool VertexAttachment_ApplyDeform_m1422420404 (VertexAttachment_t2755655897 * __this, VertexAttachment_t2755655897 * ___sourceAttachment0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
