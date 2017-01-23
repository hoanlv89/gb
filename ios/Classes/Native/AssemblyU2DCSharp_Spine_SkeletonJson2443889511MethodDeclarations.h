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

// Spine.SkeletonJson
struct SkeletonJson_t2443889511;
// Spine.Atlas[]
struct AtlasU5BU5D_t3222283718;
// Spine.AttachmentLoader
struct AttachmentLoader_t459554434;
// Spine.SkeletonData
struct SkeletonData_t548167897;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t1561828458;
// Spine.Attachment
struct Attachment_t2584075367;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// Spine.Skin
struct Skin_t730126667;
// Spine.VertexAttachment
struct VertexAttachment_t2755655897;
// Spine.CurveTimeline
struct CurveTimeline_t835389450;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_TextReader1561828458.h"
#include "AssemblyU2DCSharp_Spine_Skin730126667.h"
#include "AssemblyU2DCSharp_Spine_VertexAttachment2755655897.h"
#include "AssemblyU2DCSharp_Spine_SkeletonData548167897.h"
#include "AssemblyU2DCSharp_Spine_CurveTimeline835389450.h"

// System.Void Spine.SkeletonJson::.ctor(Spine.Atlas[])
extern "C"  void SkeletonJson__ctor_m459727659 (SkeletonJson_t2443889511 * __this, AtlasU5BU5D_t3222283718* ___atlasArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonJson::.ctor(Spine.AttachmentLoader)
extern "C"  void SkeletonJson__ctor_m1200664902 (SkeletonJson_t2443889511 * __this, Il2CppObject * ___attachmentLoader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.SkeletonJson::get_Scale()
extern "C"  float SkeletonJson_get_Scale_m2607658418 (SkeletonJson_t2443889511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonJson::set_Scale(System.Single)
extern "C"  void SkeletonJson_set_Scale_m1735658537 (SkeletonJson_t2443889511 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.SkeletonData Spine.SkeletonJson::ReadSkeletonData(System.String)
extern "C"  SkeletonData_t548167897 * SkeletonJson_ReadSkeletonData_m2808842433 (SkeletonJson_t2443889511 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.SkeletonData Spine.SkeletonJson::ReadSkeletonData(System.IO.TextReader)
extern "C"  SkeletonData_t548167897 * SkeletonJson_ReadSkeletonData_m1571914638 (SkeletonJson_t2443889511 * __this, TextReader_t1561828458 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Attachment Spine.SkeletonJson::ReadAttachment(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Spine.Skin,System.Int32,System.String)
extern "C"  Attachment_t2584075367 * SkeletonJson_ReadAttachment_m3101132591 (SkeletonJson_t2443889511 * __this, Dictionary_2_t309261261 * ___map0, Skin_t730126667 * ___skin1, int32_t ___slotIndex2, String_t* ___name3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonJson::ReadVertices(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Spine.VertexAttachment,System.Int32)
extern "C"  void SkeletonJson_ReadVertices_m2339067152 (SkeletonJson_t2443889511 * __this, Dictionary_2_t309261261 * ___map0, VertexAttachment_t2755655897 * ___attachment1, int32_t ___verticesLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonJson::ReadAnimation(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,Spine.SkeletonData)
extern "C"  void SkeletonJson_ReadAnimation_m764588354 (SkeletonJson_t2443889511 * __this, Dictionary_2_t309261261 * ___map0, String_t* ___name1, SkeletonData_t548167897 * ___skeletonData2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonJson::ReadCurve(System.Collections.Generic.Dictionary`2<System.String,System.Object>,Spine.CurveTimeline,System.Int32)
extern "C"  void SkeletonJson_ReadCurve_m55456225 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___valueMap0, CurveTimeline_t835389450 * ___timeline1, int32_t ___frameIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.SkeletonJson::GetFloatArray(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.Single)
extern "C"  SingleU5BU5D_t577127397* SkeletonJson_GetFloatArray_m2893407100 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___map0, String_t* ___name1, float ___scale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Spine.SkeletonJson::GetIntArray(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  Int32U5BU5D_t3030399641* SkeletonJson_GetIntArray_m3337832226 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___map0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.SkeletonJson::GetFloat(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.Single)
extern "C"  float SkeletonJson_GetFloat_m38410945 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___map0, String_t* ___name1, float ___defaultValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.SkeletonJson::GetInt(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.Int32)
extern "C"  int32_t SkeletonJson_GetInt_m3989604792 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___map0, String_t* ___name1, int32_t ___defaultValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.SkeletonJson::GetBoolean(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.Boolean)
extern "C"  bool SkeletonJson_GetBoolean_m116811585 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___map0, String_t* ___name1, bool ___defaultValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.SkeletonJson::GetString(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.String)
extern "C"  String_t* SkeletonJson_GetString_m2318878044 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___map0, String_t* ___name1, String_t* ___defaultValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.SkeletonJson::ToColor(System.String,System.Int32)
extern "C"  float SkeletonJson_ToColor_m1093182070 (Il2CppObject * __this /* static, unused */, String_t* ___hexString0, int32_t ___colorIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
