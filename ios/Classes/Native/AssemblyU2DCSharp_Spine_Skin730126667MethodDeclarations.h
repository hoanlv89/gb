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

// Spine.Skin
struct Skin_t730126667;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<Spine.Skin/AttachmentKeyTuple,Spine.Attachment>
struct Dictionary_2_t2455477215;
// Spine.Attachment
struct Attachment_t2584075367;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.List`1<Spine.Attachment>
struct List_1_t1953196499;
// Spine.Skeleton
struct Skeleton_t1387859465;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Spine_Attachment2584075367.h"
#include "AssemblyU2DCSharp_Spine_Skeleton1387859465.h"
#include "AssemblyU2DCSharp_Spine_Skin730126667.h"

// System.Void Spine.Skin::.ctor(System.String)
extern "C"  void Skin__ctor_m1318026957 (Skin_t730126667 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.Skin::get_Name()
extern "C"  String_t* Skin_get_Name_m2397643086 (Skin_t730126667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<Spine.Skin/AttachmentKeyTuple,Spine.Attachment> Spine.Skin::get_Attachments()
extern "C"  Dictionary_2_t2455477215 * Skin_get_Attachments_m1571132243 (Skin_t730126667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skin::AddAttachment(System.Int32,System.String,Spine.Attachment)
extern "C"  void Skin_AddAttachment_m1074966586 (Skin_t730126667 * __this, int32_t ___slotIndex0, String_t* ___name1, Attachment_t2584075367 * ___attachment2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Attachment Spine.Skin::GetAttachment(System.Int32,System.String)
extern "C"  Attachment_t2584075367 * Skin_GetAttachment_m3632268558 (Skin_t730126667 * __this, int32_t ___slotIndex0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skin::FindNamesForSlot(System.Int32,System.Collections.Generic.List`1<System.String>)
extern "C"  void Skin_FindNamesForSlot_m3446070634 (Skin_t730126667 * __this, int32_t ___slotIndex0, List_1_t1398341365 * ___names1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skin::FindAttachmentsForSlot(System.Int32,System.Collections.Generic.List`1<Spine.Attachment>)
extern "C"  void Skin_FindAttachmentsForSlot_m370113548 (Skin_t730126667 * __this, int32_t ___slotIndex0, List_1_t1953196499 * ___attachments1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.Skin::ToString()
extern "C"  String_t* Skin_ToString_m2327122588 (Skin_t730126667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skin::AttachAll(Spine.Skeleton,Spine.Skin)
extern "C"  void Skin_AttachAll_m213866755 (Skin_t730126667 * __this, Skeleton_t1387859465 * ___skeleton0, Skin_t730126667 * ___oldSkin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
