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

// ISNMediaExample
struct ISNMediaExample_t3823465036;
// MP_MediaItem
struct MP_MediaItem_t4025623029;
// System.Collections.Generic.List`1<MP_MediaItem>
struct List_1_t3394744161;
// MP_MediaPickerResult
struct MP_MediaPickerResult_t2204006871;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_MP_MediaItem4025623029.h"
#include "AssemblyU2DCSharp_MP_MusicPlaybackState2364713801.h"
#include "AssemblyU2DCSharp_MP_MediaPickerResult2204006871.h"

// System.Void ISNMediaExample::.ctor()
extern "C"  void ISNMediaExample__ctor_m2699371975 (ISNMediaExample_t3823465036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISNMediaExample::Awake()
extern "C"  void ISNMediaExample_Awake_m3877124264 (ISNMediaExample_t3823465036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISNMediaExample::HandleActionNowPlayingItemChanged(MP_MediaItem)
extern "C"  void ISNMediaExample_HandleActionNowPlayingItemChanged_m144878209 (ISNMediaExample_t3823465036 * __this, MP_MediaItem_t4025623029 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISNMediaExample::HandleActionPlaybackStateChanged(MP_MusicPlaybackState)
extern "C"  void ISNMediaExample_HandleActionPlaybackStateChanged_m2072401630 (ISNMediaExample_t3823465036 * __this, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISNMediaExample::HandleActionQueueUpdated(System.Collections.Generic.List`1<MP_MediaItem>)
extern "C"  void ISNMediaExample_HandleActionQueueUpdated_m1295256084 (ISNMediaExample_t3823465036 * __this, List_1_t3394744161 * ___items0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISNMediaExample::HandleActionMediaPickerResult(MP_MediaPickerResult)
extern "C"  void ISNMediaExample_HandleActionMediaPickerResult_m3016652509 (ISNMediaExample_t3823465036 * __this, MP_MediaPickerResult_t2204006871 * ___res0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISNMediaExample::OnGUI()
extern "C"  void ISNMediaExample_OnGUI_m786200433 (ISNMediaExample_t3823465036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
