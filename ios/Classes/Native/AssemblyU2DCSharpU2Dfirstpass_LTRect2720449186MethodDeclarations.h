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

// LTRect
struct LTRect_t2720449186;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_GUIStyle1799908754.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "mscorlib_System_String2029220233.h"

// System.Void LTRect::.ctor()
extern "C"  void LTRect__ctor_m532557009 (LTRect_t2720449186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::.ctor(UnityEngine.Rect)
extern "C"  void LTRect__ctor_m515676380 (LTRect_t2720449186 * __this, Rect_t3681755626  ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void LTRect__ctor_m2606682505 (LTRect_t2720449186 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::.ctor(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void LTRect__ctor_m1062294176 (LTRect_t2720449186 * __this, float ___x0, float ___y1, float ___width2, float ___height3, float ___alpha4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::.ctor(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void LTRect__ctor_m3965237481 (LTRect_t2720449186 * __this, float ___x0, float ___y1, float ___width2, float ___height3, float ___alpha4, float ___rotation5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LTRect::get_hasInitiliazed()
extern "C"  bool LTRect_get_hasInitiliazed_m3972236272 (LTRect_t2720449186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LTRect::get_id()
extern "C"  int32_t LTRect_get_id_m1449054119 (LTRect_t2720449186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::setId(System.Int32,System.Int32)
extern "C"  void LTRect_setId_m2506350222 (LTRect_t2720449186 * __this, int32_t ___id0, int32_t ___counter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::reset()
extern "C"  void LTRect_reset_m3141014632 (LTRect_t2720449186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::resetForRotation()
extern "C"  void LTRect_resetForRotation_m3253671591 (LTRect_t2720449186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LTRect::get_x()
extern "C"  float LTRect_get_x_m747756826 (LTRect_t2720449186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::set_x(System.Single)
extern "C"  void LTRect_set_x_m2754709365 (LTRect_t2720449186 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LTRect::get_y()
extern "C"  float LTRect_get_y_m747756859 (LTRect_t2720449186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::set_y(System.Single)
extern "C"  void LTRect_set_y_m3265925460 (LTRect_t2720449186 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LTRect::get_width()
extern "C"  float LTRect_get_width_m4123786562 (LTRect_t2720449186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::set_width(System.Single)
extern "C"  void LTRect_set_width_m989132803 (LTRect_t2720449186 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LTRect::get_height()
extern "C"  float LTRect_get_height_m2422984533 (LTRect_t2720449186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::set_height(System.Single)
extern "C"  void LTRect_set_height_m2270964990 (LTRect_t2720449186 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect LTRect::get_rect()
extern "C"  Rect_t3681755626  LTRect_get_rect_m86923828 (LTRect_t2720449186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTRect::set_rect(UnityEngine.Rect)
extern "C"  void LTRect_set_rect_m1876014767 (LTRect_t2720449186 * __this, Rect_t3681755626  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTRect::setStyle(UnityEngine.GUIStyle)
extern "C"  LTRect_t2720449186 * LTRect_setStyle_m784169406 (LTRect_t2720449186 * __this, GUIStyle_t1799908754 * ___style0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTRect::setFontScaleToFit(System.Boolean)
extern "C"  LTRect_t2720449186 * LTRect_setFontScaleToFit_m168792542 (LTRect_t2720449186 * __this, bool ___fontScaleToFit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTRect::setColor(UnityEngine.Color)
extern "C"  LTRect_t2720449186 * LTRect_setColor_m1712792823 (LTRect_t2720449186 * __this, Color_t2020392075  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTRect::setAlpha(System.Single)
extern "C"  LTRect_t2720449186 * LTRect_setAlpha_m2532023745 (LTRect_t2720449186 * __this, float ___alpha0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTRect::setLabel(System.String)
extern "C"  LTRect_t2720449186 * LTRect_setLabel_m3664455658 (LTRect_t2720449186 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTRect::setUseSimpleScale(System.Boolean,UnityEngine.Rect)
extern "C"  LTRect_t2720449186 * LTRect_setUseSimpleScale_m3820472217 (LTRect_t2720449186 * __this, bool ___useSimpleScale0, Rect_t3681755626  ___relativeRect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTRect::setUseSimpleScale(System.Boolean)
extern "C"  LTRect_t2720449186 * LTRect_setUseSimpleScale_m2985486880 (LTRect_t2720449186 * __this, bool ___useSimpleScale0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTRect LTRect::setSizeByHeight(System.Boolean)
extern "C"  LTRect_t2720449186 * LTRect_setSizeByHeight_m1237295582 (LTRect_t2720449186 * __this, bool ___sizeByHeight0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LTRect::ToString()
extern "C"  String_t* LTRect_ToString_m3538498954 (LTRect_t2720449186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
