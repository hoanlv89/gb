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

// System.Type
struct Type_t;
// LitJson.ArrayMetadata
struct ArrayMetadata_t2008834462;
struct ArrayMetadata_t2008834462_marshaled_pinvoke;
struct ArrayMetadata_t2008834462_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_LitJson_ArrayMetadata2008834462.h"
#include "mscorlib_System_Type1303803226.h"

// System.Type LitJson.ArrayMetadata::get_ElementType()
extern "C"  Type_t * ArrayMetadata_get_ElementType_m2390533535 (ArrayMetadata_t2008834462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ArrayMetadata::set_ElementType(System.Type)
extern "C"  void ArrayMetadata_set_ElementType_m2839297904 (ArrayMetadata_t2008834462 * __this, Type_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.ArrayMetadata::get_IsArray()
extern "C"  bool ArrayMetadata_get_IsArray_m1251976656 (ArrayMetadata_t2008834462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ArrayMetadata::set_IsArray(System.Boolean)
extern "C"  void ArrayMetadata_set_IsArray_m3971161181 (ArrayMetadata_t2008834462 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.ArrayMetadata::get_IsList()
extern "C"  bool ArrayMetadata_get_IsList_m1925318997 (ArrayMetadata_t2008834462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ArrayMetadata::set_IsList(System.Boolean)
extern "C"  void ArrayMetadata_set_IsList_m2595093626 (ArrayMetadata_t2008834462 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ArrayMetadata_t2008834462;
struct ArrayMetadata_t2008834462_marshaled_pinvoke;

extern "C" void ArrayMetadata_t2008834462_marshal_pinvoke(const ArrayMetadata_t2008834462& unmarshaled, ArrayMetadata_t2008834462_marshaled_pinvoke& marshaled);
extern "C" void ArrayMetadata_t2008834462_marshal_pinvoke_back(const ArrayMetadata_t2008834462_marshaled_pinvoke& marshaled, ArrayMetadata_t2008834462& unmarshaled);
extern "C" void ArrayMetadata_t2008834462_marshal_pinvoke_cleanup(ArrayMetadata_t2008834462_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ArrayMetadata_t2008834462;
struct ArrayMetadata_t2008834462_marshaled_com;

extern "C" void ArrayMetadata_t2008834462_marshal_com(const ArrayMetadata_t2008834462& unmarshaled, ArrayMetadata_t2008834462_marshaled_com& marshaled);
extern "C" void ArrayMetadata_t2008834462_marshal_com_back(const ArrayMetadata_t2008834462_marshaled_com& marshaled, ArrayMetadata_t2008834462& unmarshaled);
extern "C" void ArrayMetadata_t2008834462_marshal_com_cleanup(ArrayMetadata_t2008834462_marshaled_com& marshaled);
