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

// BestHTTP.Authentication.Credentials
struct Credentials_t3762395084;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BestHTTP_Authentication_Authenti1276453517.h"

// System.Void BestHTTP.Authentication.Credentials::.ctor(System.String,System.String)
extern "C"  void Credentials__ctor_m2599357623 (Credentials_t3762395084 * __this, String_t* ___userName0, String_t* ___password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Authentication.Credentials::.ctor(BestHTTP.Authentication.AuthenticationTypes,System.String,System.String)
extern "C"  void Credentials__ctor_m3399875782 (Credentials_t3762395084 * __this, int32_t ___type0, String_t* ___userName1, String_t* ___password2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.Authentication.AuthenticationTypes BestHTTP.Authentication.Credentials::get_Type()
extern "C"  int32_t Credentials_get_Type_m1089439950 (Credentials_t3762395084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Authentication.Credentials::set_Type(BestHTTP.Authentication.AuthenticationTypes)
extern "C"  void Credentials_set_Type_m4167425425 (Credentials_t3762395084 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Authentication.Credentials::get_UserName()
extern "C"  String_t* Credentials_get_UserName_m385335149 (Credentials_t3762395084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Authentication.Credentials::set_UserName(System.String)
extern "C"  void Credentials_set_UserName_m706433036 (Credentials_t3762395084 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.Authentication.Credentials::get_Password()
extern "C"  String_t* Credentials_get_Password_m4291198880 (Credentials_t3762395084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Authentication.Credentials::set_Password(System.String)
extern "C"  void Credentials_set_Password_m4242011215 (Credentials_t3762395084 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
