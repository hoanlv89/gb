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

// Spine.AtlasAttachmentLoader
struct AtlasAttachmentLoader_t60125181;
// Spine.Atlas[]
struct AtlasU5BU5D_t3222283718;
// Spine.RegionAttachment
struct RegionAttachment_t3278399543;
// Spine.Skin
struct Skin_t730126667;
// System.String
struct String_t;
// Spine.MeshAttachment
struct MeshAttachment_t1666512816;
// Spine.BoundingBoxAttachment
struct BoundingBoxAttachment_t1898929740;
// Spine.PathAttachment
struct PathAttachment_t2721492598;
// Spine.AtlasRegion
struct AtlasRegion_t3803683715;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Skin730126667.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Spine.AtlasAttachmentLoader::.ctor(Spine.Atlas[])
extern "C"  void AtlasAttachmentLoader__ctor_m3279667525 (AtlasAttachmentLoader_t60125181 * __this, AtlasU5BU5D_t3222283718* ___atlasArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.RegionAttachment Spine.AtlasAttachmentLoader::NewRegionAttachment(Spine.Skin,System.String,System.String)
extern "C"  RegionAttachment_t3278399543 * AtlasAttachmentLoader_NewRegionAttachment_m2854700559 (AtlasAttachmentLoader_t60125181 * __this, Skin_t730126667 * ___skin0, String_t* ___name1, String_t* ___path2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.MeshAttachment Spine.AtlasAttachmentLoader::NewMeshAttachment(Spine.Skin,System.String,System.String)
extern "C"  MeshAttachment_t1666512816 * AtlasAttachmentLoader_NewMeshAttachment_m924093171 (AtlasAttachmentLoader_t60125181 * __this, Skin_t730126667 * ___skin0, String_t* ___name1, String_t* ___path2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.BoundingBoxAttachment Spine.AtlasAttachmentLoader::NewBoundingBoxAttachment(Spine.Skin,System.String)
extern "C"  BoundingBoxAttachment_t1898929740 * AtlasAttachmentLoader_NewBoundingBoxAttachment_m1475044769 (AtlasAttachmentLoader_t60125181 * __this, Skin_t730126667 * ___skin0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.PathAttachment Spine.AtlasAttachmentLoader::NewPathAttachment(Spine.Skin,System.String)
extern "C"  PathAttachment_t2721492598 * AtlasAttachmentLoader_NewPathAttachment_m4229368185 (AtlasAttachmentLoader_t60125181 * __this, Skin_t730126667 * ___skin0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AtlasRegion Spine.AtlasAttachmentLoader::FindRegion(System.String)
extern "C"  AtlasRegion_t3803683715 * AtlasAttachmentLoader_FindRegion_m2920795523 (AtlasAttachmentLoader_t60125181 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
