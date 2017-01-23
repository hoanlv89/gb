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

// Spine.Atlas
struct Atlas_t85765087;
// System.IO.TextReader
struct TextReader_t1561828458;
// System.String
struct String_t;
// Spine.TextureLoader
struct TextureLoader_t2199164816;
// System.Collections.Generic.List`1<Spine.AtlasPage>
struct List_1_t410630874;
// System.Collections.Generic.List`1<Spine.AtlasRegion>
struct List_1_t3172804847;
// System.String[]
struct StringU5BU5D_t1642385972;
// Spine.AtlasRegion
struct AtlasRegion_t3803683715;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextReader1561828458.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Spine.Atlas::.ctor(System.IO.TextReader,System.String,Spine.TextureLoader)
extern "C"  void Atlas__ctor_m2208990915 (Atlas_t85765087 * __this, TextReader_t1561828458 * ___reader0, String_t* ___dir1, Il2CppObject * ___textureLoader2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Atlas::.ctor(System.Collections.Generic.List`1<Spine.AtlasPage>,System.Collections.Generic.List`1<Spine.AtlasRegion>)
extern "C"  void Atlas__ctor_m3676324964 (Atlas_t85765087 * __this, List_1_t410630874 * ___pages0, List_1_t3172804847 * ___regions1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Atlas::Load(System.IO.TextReader,System.String,Spine.TextureLoader)
extern "C"  void Atlas_Load_m1185001925 (Atlas_t85765087 * __this, TextReader_t1561828458 * ___reader0, String_t* ___imagesDir1, Il2CppObject * ___textureLoader2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.Atlas::ReadValue(System.IO.TextReader)
extern "C"  String_t* Atlas_ReadValue_m2051606342 (Il2CppObject * __this /* static, unused */, TextReader_t1561828458 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.Atlas::ReadTuple(System.IO.TextReader,System.String[])
extern "C"  int32_t Atlas_ReadTuple_m3254408842 (Il2CppObject * __this /* static, unused */, TextReader_t1561828458 * ___reader0, StringU5BU5D_t1642385972* ___tuple1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Atlas::FlipV()
extern "C"  void Atlas_FlipV_m1910582346 (Atlas_t85765087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AtlasRegion Spine.Atlas::FindRegion(System.String)
extern "C"  AtlasRegion_t3803683715 * Atlas_FindRegion_m361390407 (Atlas_t85765087 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Atlas::Dispose()
extern "C"  void Atlas_Dispose_m4067896832 (Atlas_t85765087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
