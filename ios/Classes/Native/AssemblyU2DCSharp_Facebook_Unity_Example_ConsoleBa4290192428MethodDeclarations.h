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

// Facebook.Unity.Example.ConsoleBase
struct ConsoleBase_t4290192428;
// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_t3116948387;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void Facebook.Unity.Example.ConsoleBase::.ctor()
extern "C"  void ConsoleBase__ctor_m2763526896 (ConsoleBase_t4290192428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Stack`1<System.String> Facebook.Unity.Example.ConsoleBase::get_MenuStack()
extern "C"  Stack_1_t3116948387 * ConsoleBase_get_MenuStack_m2022459395 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Example.ConsoleBase::set_MenuStack(System.Collections.Generic.Stack`1<System.String>)
extern "C"  void ConsoleBase_set_MenuStack_m820012914 (Il2CppObject * __this /* static, unused */, Stack_1_t3116948387 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Example.ConsoleBase::get_Status()
extern "C"  String_t* ConsoleBase_get_Status_m15166664 (ConsoleBase_t4290192428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Example.ConsoleBase::set_Status(System.String)
extern "C"  void ConsoleBase_set_Status_m2578665855 (ConsoleBase_t4290192428 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D Facebook.Unity.Example.ConsoleBase::get_LastResponseTexture()
extern "C"  Texture2D_t3542995729 * ConsoleBase_get_LastResponseTexture_m4086112206 (ConsoleBase_t4290192428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Example.ConsoleBase::set_LastResponseTexture(UnityEngine.Texture2D)
extern "C"  void ConsoleBase_set_LastResponseTexture_m704700253 (ConsoleBase_t4290192428 * __this, Texture2D_t3542995729 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Example.ConsoleBase::get_LastResponse()
extern "C"  String_t* ConsoleBase_get_LastResponse_m1599769685 (ConsoleBase_t4290192428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Example.ConsoleBase::set_LastResponse(System.String)
extern "C"  void ConsoleBase_set_LastResponse_m510948058 (ConsoleBase_t4290192428 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Facebook.Unity.Example.ConsoleBase::get_ScrollPosition()
extern "C"  Vector2_t2243707579  ConsoleBase_get_ScrollPosition_m3651860150 (ConsoleBase_t4290192428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Example.ConsoleBase::set_ScrollPosition(UnityEngine.Vector2)
extern "C"  void ConsoleBase_set_ScrollPosition_m2281592185 (ConsoleBase_t4290192428 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Facebook.Unity.Example.ConsoleBase::get_ScaleFactor()
extern "C"  float ConsoleBase_get_ScaleFactor_m2222574120 (ConsoleBase_t4290192428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Facebook.Unity.Example.ConsoleBase::get_FontSize()
extern "C"  int32_t ConsoleBase_get_FontSize_m100912945 (ConsoleBase_t4290192428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::get_TextStyle()
extern "C"  GUIStyle_t1799908754 * ConsoleBase_get_TextStyle_m1497590499 (ConsoleBase_t4290192428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::get_ButtonStyle()
extern "C"  GUIStyle_t1799908754 * ConsoleBase_get_ButtonStyle_m304276404 (ConsoleBase_t4290192428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::get_TextInputStyle()
extern "C"  GUIStyle_t1799908754 * ConsoleBase_get_TextInputStyle_m2745986965 (ConsoleBase_t4290192428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::get_LabelStyle()
extern "C"  GUIStyle_t1799908754 * ConsoleBase_get_LabelStyle_m3739078378 (ConsoleBase_t4290192428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Example.ConsoleBase::Awake()
extern "C"  void ConsoleBase_Awake_m354532085 (ConsoleBase_t4290192428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Example.ConsoleBase::Button(System.String)
extern "C"  bool ConsoleBase_Button_m1033918234 (ConsoleBase_t4290192428 * __this, String_t* ___label0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Example.ConsoleBase::LabelAndTextField(System.String,System.String&)
extern "C"  void ConsoleBase_LabelAndTextField_m425453358 (ConsoleBase_t4290192428 * __this, String_t* ___label0, String_t** ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Example.ConsoleBase::IsHorizontalLayout()
extern "C"  bool ConsoleBase_IsHorizontalLayout_m2006263654 (ConsoleBase_t4290192428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Example.ConsoleBase::SwitchMenu(System.Type)
extern "C"  void ConsoleBase_SwitchMenu_m2043949162 (ConsoleBase_t4290192428 * __this, Type_t * ___menuClass0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Example.ConsoleBase::GoBack()
extern "C"  void ConsoleBase_GoBack_m2150591355 (ConsoleBase_t4290192428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Example.ConsoleBase::.cctor()
extern "C"  void ConsoleBase__cctor_m810911295 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
