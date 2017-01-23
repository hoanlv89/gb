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

// BestHTTP.FileConnection
struct FileConnection_t3022110980;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPConnectionStates1509261476.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void BestHTTP.FileConnection::.ctor(System.String)
extern "C"  void FileConnection__ctor_m3352332143 (FileConnection_t3022110980 * __this, String_t* ___serverAddress0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.FileConnection::Abort(BestHTTP.HTTPConnectionStates)
extern "C"  void FileConnection_Abort_m2132102531 (FileConnection_t3022110980 * __this, int32_t ___newState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.FileConnection::ThreadFunc(System.Object)
extern "C"  void FileConnection_ThreadFunc_m1537906087 (FileConnection_t3022110980 * __this, Il2CppObject * ___param0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
