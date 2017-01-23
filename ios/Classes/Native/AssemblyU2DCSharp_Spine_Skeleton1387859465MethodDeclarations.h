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

// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.SkeletonData
struct SkeletonData_t548167897;
// Spine.ExposedList`1<Spine.Bone>
struct ExposedList_1_t3208170272;
// Spine.ExposedList`1<Spine.IUpdatable>
struct ExposedList_1_t1593079857;
// Spine.ExposedList`1<Spine.Slot>
struct ExposedList_1_t3658508406;
// Spine.ExposedList`1<Spine.IkConstraint>
struct ExposedList_1_t792787477;
// Spine.ExposedList`1<Spine.PathConstraint>
struct ExposedList_1_t1027929986;
// Spine.ExposedList`1<Spine.TransformConstraint>
struct ExposedList_1_t3128659795;
// Spine.Skin
struct Skin_t730126667;
// Spine.Bone
struct Bone_t4151268332;
// Spine.IkConstraint
struct IkConstraint_t1735885537;
// Spine.PathConstraint
struct PathConstraint_t1971028046;
// Spine.TransformConstraint
struct TransformConstraint_t4071757855;
// Spine.Attachment
struct Attachment_t2584075367;
// System.String
struct String_t;
// Spine.Slot
struct Slot_t306639170;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_SkeletonData548167897.h"
#include "AssemblyU2DCSharp_Spine_Skin730126667.h"
#include "AssemblyU2DCSharp_Spine_IkConstraint1735885537.h"
#include "AssemblyU2DCSharp_Spine_PathConstraint1971028046.h"
#include "AssemblyU2DCSharp_Spine_TransformConstraint4071757855.h"
#include "AssemblyU2DCSharp_Spine_Bone4151268332.h"
#include "AssemblyU2DCSharp_Spine_Attachment2584075367.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Spine.Skeleton::.ctor(Spine.SkeletonData)
extern "C"  void Skeleton__ctor_m3264657499 (Skeleton_t1387859465 * __this, SkeletonData_t548167897 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.SkeletonData Spine.Skeleton::get_Data()
extern "C"  SkeletonData_t548167897 * Skeleton_get_Data_m943887909 (Skeleton_t1387859465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.Bone> Spine.Skeleton::get_Bones()
extern "C"  ExposedList_1_t3208170272 * Skeleton_get_Bones_m3934035593 (Skeleton_t1387859465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.IUpdatable> Spine.Skeleton::get_UpdateCacheList()
extern "C"  ExposedList_1_t1593079857 * Skeleton_get_UpdateCacheList_m3477868418 (Skeleton_t1387859465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.Slot> Spine.Skeleton::get_Slots()
extern "C"  ExposedList_1_t3658508406 * Skeleton_get_Slots_m823128713 (Skeleton_t1387859465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.Slot> Spine.Skeleton::get_DrawOrder()
extern "C"  ExposedList_1_t3658508406 * Skeleton_get_DrawOrder_m968000604 (Skeleton_t1387859465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.IkConstraint> Spine.Skeleton::get_IkConstraints()
extern "C"  ExposedList_1_t792787477 * Skeleton_get_IkConstraints_m3748079593 (Skeleton_t1387859465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.PathConstraint> Spine.Skeleton::get_PathConstraints()
extern "C"  ExposedList_1_t1027929986 * Skeleton_get_PathConstraints_m1088760617 (Skeleton_t1387859465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.TransformConstraint> Spine.Skeleton::get_TransformConstraints()
extern "C"  ExposedList_1_t3128659795 * Skeleton_get_TransformConstraints_m3960423689 (Skeleton_t1387859465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Skin Spine.Skeleton::get_Skin()
extern "C"  Skin_t730126667 * Skeleton_get_Skin_m3901558394 (Skeleton_t1387859465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::set_Skin(Spine.Skin)
extern "C"  void Skeleton_set_Skin_m1667461019 (Skeleton_t1387859465 * __this, Skin_t730126667 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Skeleton::get_R()
extern "C"  float Skeleton_get_R_m3644599192 (Skeleton_t1387859465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::set_R(System.Single)
extern "C"  void Skeleton_set_R_m3188721795 (Skeleton_t1387859465 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Skeleton::get_G()
extern "C"  float Skeleton_get_G_m3644599757 (Skeleton_t1387859465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::set_G(System.Single)
extern "C"  void Skeleton_set_G_m1271789902 (Skeleton_t1387859465 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Skeleton::get_B()
extern "C"  float Skeleton_get_B_m3644599720 (Skeleton_t1387859465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::set_B(System.Single)
extern "C"  void Skeleton_set_B_m1318403699 (Skeleton_t1387859465 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Skeleton::get_A()
extern "C"  float Skeleton_get_A_m3644599691 (Skeleton_t1387859465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::set_A(System.Single)
extern "C"  void Skeleton_set_A_m507908884 (Skeleton_t1387859465 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Skeleton::get_Time()
extern "C"  float Skeleton_get_Time_m186135347 (Skeleton_t1387859465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::set_Time(System.Single)
extern "C"  void Skeleton_set_Time_m952763136 (Skeleton_t1387859465 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Skeleton::get_X()
extern "C"  float Skeleton_get_X_m3644599010 (Skeleton_t1387859465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::set_X(System.Single)
extern "C"  void Skeleton_set_X_m2114390973 (Skeleton_t1387859465 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Skeleton::get_Y()
extern "C"  float Skeleton_get_Y_m3644598915 (Skeleton_t1387859465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::set_Y(System.Single)
extern "C"  void Skeleton_set_Y_m733657116 (Skeleton_t1387859465 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Skeleton::get_FlipX()
extern "C"  bool Skeleton_get_FlipX_m1366217527 (Skeleton_t1387859465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::set_FlipX(System.Boolean)
extern "C"  void Skeleton_set_FlipX_m1937949236 (Skeleton_t1387859465 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Skeleton::get_FlipY()
extern "C"  bool Skeleton_get_FlipY_m1507380028 (Skeleton_t1387859465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::set_FlipY(System.Boolean)
extern "C"  void Skeleton_set_FlipY_m257524085 (Skeleton_t1387859465 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Bone Spine.Skeleton::get_RootBone()
extern "C"  Bone_t4151268332 * Skeleton_get_RootBone_m2500935568 (Skeleton_t1387859465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::UpdateCache()
extern "C"  void Skeleton_UpdateCache_m1286159158 (Skeleton_t1387859465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::SortIkConstraint(Spine.IkConstraint)
extern "C"  void Skeleton_SortIkConstraint_m2447126396 (Skeleton_t1387859465 * __this, IkConstraint_t1735885537 * ___constraint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::SortPathConstraint(Spine.PathConstraint)
extern "C"  void Skeleton_SortPathConstraint_m2138877598 (Skeleton_t1387859465 * __this, PathConstraint_t1971028046 * ___constraint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::SortTransformConstraint(Spine.TransformConstraint)
extern "C"  void Skeleton_SortTransformConstraint_m2566260124 (Skeleton_t1387859465 * __this, TransformConstraint_t4071757855 * ___constraint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::SortPathConstraintAttachment(Spine.Skin,System.Int32,Spine.Bone)
extern "C"  void Skeleton_SortPathConstraintAttachment_m3904595708 (Skeleton_t1387859465 * __this, Skin_t730126667 * ___skin0, int32_t ___slotIndex1, Bone_t4151268332 * ___slotBone2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::SortPathConstraintAttachment(Spine.Attachment,Spine.Bone)
extern "C"  void Skeleton_SortPathConstraintAttachment_m369339881 (Skeleton_t1387859465 * __this, Attachment_t2584075367 * ___attachment0, Bone_t4151268332 * ___slotBone1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::SortBone(Spine.Bone)
extern "C"  void Skeleton_SortBone_m3262278018 (Skeleton_t1387859465 * __this, Bone_t4151268332 * ___bone0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::SortReset(Spine.ExposedList`1<Spine.Bone>)
extern "C"  void Skeleton_SortReset_m1572213593 (Skeleton_t1387859465 * __this, ExposedList_1_t3208170272 * ___bones0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::UpdateWorldTransform()
extern "C"  void Skeleton_UpdateWorldTransform_m244292898 (Skeleton_t1387859465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::SetToSetupPose()
extern "C"  void Skeleton_SetToSetupPose_m1353418464 (Skeleton_t1387859465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::SetBonesToSetupPose()
extern "C"  void Skeleton_SetBonesToSetupPose_m1146532887 (Skeleton_t1387859465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::SetSlotsToSetupPose()
extern "C"  void Skeleton_SetSlotsToSetupPose_m1279524409 (Skeleton_t1387859465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Bone Spine.Skeleton::FindBone(System.String)
extern "C"  Bone_t4151268332 * Skeleton_FindBone_m3911447932 (Skeleton_t1387859465 * __this, String_t* ___boneName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.Skeleton::FindBoneIndex(System.String)
extern "C"  int32_t Skeleton_FindBoneIndex_m3481096564 (Skeleton_t1387859465 * __this, String_t* ___boneName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Slot Spine.Skeleton::FindSlot(System.String)
extern "C"  Slot_t306639170 * Skeleton_FindSlot_m3356866436 (Skeleton_t1387859465 * __this, String_t* ___slotName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.Skeleton::FindSlotIndex(System.String)
extern "C"  int32_t Skeleton_FindSlotIndex_m265219794 (Skeleton_t1387859465 * __this, String_t* ___slotName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::SetSkin(System.String)
extern "C"  void Skeleton_SetSkin_m3227715940 (Skeleton_t1387859465 * __this, String_t* ___skinName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::SetSkin(Spine.Skin)
extern "C"  void Skeleton_SetSkin_m4264874852 (Skeleton_t1387859465 * __this, Skin_t730126667 * ___newSkin0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Attachment Spine.Skeleton::GetAttachment(System.String,System.String)
extern "C"  Attachment_t2584075367 * Skeleton_GetAttachment_m4274439615 (Skeleton_t1387859465 * __this, String_t* ___slotName0, String_t* ___attachmentName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Attachment Spine.Skeleton::GetAttachment(System.Int32,System.String)
extern "C"  Attachment_t2584075367 * Skeleton_GetAttachment_m2194364700 (Skeleton_t1387859465 * __this, int32_t ___slotIndex0, String_t* ___attachmentName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::SetAttachment(System.String,System.String)
extern "C"  void Skeleton_SetAttachment_m909629024 (Skeleton_t1387859465 * __this, String_t* ___slotName0, String_t* ___attachmentName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.IkConstraint Spine.Skeleton::FindIkConstraint(System.String)
extern "C"  IkConstraint_t1735885537 * Skeleton_FindIkConstraint_m520784470 (Skeleton_t1387859465 * __this, String_t* ___constraintName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TransformConstraint Spine.Skeleton::FindTransformConstraint(System.String)
extern "C"  TransformConstraint_t4071757855 * Skeleton_FindTransformConstraint_m881165718 (Skeleton_t1387859465 * __this, String_t* ___constraintName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.PathConstraint Spine.Skeleton::FindPathConstraint(System.String)
extern "C"  PathConstraint_t1971028046 * Skeleton_FindPathConstraint_m2779577156 (Skeleton_t1387859465 * __this, String_t* ___constraintName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Skeleton::Update(System.Single)
extern "C"  void Skeleton_Update_m2789123373 (Skeleton_t1387859465 * __this, float ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
