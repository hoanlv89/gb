#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// IOSNativeSettings
struct IOSNativeSettings_t547170227;

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"
#include "AssemblyU2DCSharp_IOSGalleryLoadImageFormat518894765.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IOSNativeSettings
struct  IOSNativeSettings_t547170227  : public ScriptableObject_t1975622470
{
public:
	// System.String IOSNativeSettings::AppleId
	String_t* ___AppleId_3;
	// System.Collections.Generic.List`1<System.String> IOSNativeSettings::InAppProducts
	List_1_t1398341365 * ___InAppProducts_4;
	// System.Boolean IOSNativeSettings::SendFakeEventsInEditor
	bool ___SendFakeEventsInEditor_5;
	// System.Collections.Generic.List`1<System.String> IOSNativeSettings::RegisteredAchievementsIds
	List_1_t1398341365 * ___RegisteredAchievementsIds_6;
	// System.Collections.Generic.List`1<System.String> IOSNativeSettings::DefaultStoreProductsView
	List_1_t1398341365 * ___DefaultStoreProductsView_7;
	// System.Boolean IOSNativeSettings::checkInternetBeforeLoadRequest
	bool ___checkInternetBeforeLoadRequest_8;
	// System.Boolean IOSNativeSettings::ShowStoreKitParams
	bool ___ShowStoreKitParams_9;
	// System.Boolean IOSNativeSettings::ShowGCParams
	bool ___ShowGCParams_10;
	// System.Boolean IOSNativeSettings::ShowAchievementsParams
	bool ___ShowAchievementsParams_11;
	// System.Boolean IOSNativeSettings::ShowUsersParams
	bool ___ShowUsersParams_12;
	// System.Boolean IOSNativeSettings::ShowOtherParams
	bool ___ShowOtherParams_13;
	// System.Boolean IOSNativeSettings::ShowCameraAndGalleryParams
	bool ___ShowCameraAndGalleryParams_14;
	// System.Boolean IOSNativeSettings::UseOneSignal
	bool ___UseOneSignal_15;
	// System.Boolean IOSNativeSettings::DisablePluginLogs
	bool ___DisablePluginLogs_16;
	// System.Boolean IOSNativeSettings::UseGCRequestCaching
	bool ___UseGCRequestCaching_17;
	// System.Boolean IOSNativeSettings::UsePPForAchievements
	bool ___UsePPForAchievements_18;
	// System.Boolean IOSNativeSettings::EnablePushNotificationsAPI
	bool ___EnablePushNotificationsAPI_19;
	// System.Boolean IOSNativeSettings::AutoLoadUsersSmallImages
	bool ___AutoLoadUsersSmallImages_20;
	// System.Boolean IOSNativeSettings::AutoLoadUsersBigImages
	bool ___AutoLoadUsersBigImages_21;
	// System.Int32 IOSNativeSettings::MaxImageLoadSize
	int32_t ___MaxImageLoadSize_22;
	// System.Single IOSNativeSettings::JPegCompressionRate
	float ___JPegCompressionRate_23;
	// IOSGalleryLoadImageFormat IOSNativeSettings::GalleryImageFormat
	int32_t ___GalleryImageFormat_24;

public:
	inline static int32_t get_offset_of_AppleId_3() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___AppleId_3)); }
	inline String_t* get_AppleId_3() const { return ___AppleId_3; }
	inline String_t** get_address_of_AppleId_3() { return &___AppleId_3; }
	inline void set_AppleId_3(String_t* value)
	{
		___AppleId_3 = value;
		Il2CppCodeGenWriteBarrier(&___AppleId_3, value);
	}

	inline static int32_t get_offset_of_InAppProducts_4() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___InAppProducts_4)); }
	inline List_1_t1398341365 * get_InAppProducts_4() const { return ___InAppProducts_4; }
	inline List_1_t1398341365 ** get_address_of_InAppProducts_4() { return &___InAppProducts_4; }
	inline void set_InAppProducts_4(List_1_t1398341365 * value)
	{
		___InAppProducts_4 = value;
		Il2CppCodeGenWriteBarrier(&___InAppProducts_4, value);
	}

	inline static int32_t get_offset_of_SendFakeEventsInEditor_5() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___SendFakeEventsInEditor_5)); }
	inline bool get_SendFakeEventsInEditor_5() const { return ___SendFakeEventsInEditor_5; }
	inline bool* get_address_of_SendFakeEventsInEditor_5() { return &___SendFakeEventsInEditor_5; }
	inline void set_SendFakeEventsInEditor_5(bool value)
	{
		___SendFakeEventsInEditor_5 = value;
	}

	inline static int32_t get_offset_of_RegisteredAchievementsIds_6() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___RegisteredAchievementsIds_6)); }
	inline List_1_t1398341365 * get_RegisteredAchievementsIds_6() const { return ___RegisteredAchievementsIds_6; }
	inline List_1_t1398341365 ** get_address_of_RegisteredAchievementsIds_6() { return &___RegisteredAchievementsIds_6; }
	inline void set_RegisteredAchievementsIds_6(List_1_t1398341365 * value)
	{
		___RegisteredAchievementsIds_6 = value;
		Il2CppCodeGenWriteBarrier(&___RegisteredAchievementsIds_6, value);
	}

	inline static int32_t get_offset_of_DefaultStoreProductsView_7() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___DefaultStoreProductsView_7)); }
	inline List_1_t1398341365 * get_DefaultStoreProductsView_7() const { return ___DefaultStoreProductsView_7; }
	inline List_1_t1398341365 ** get_address_of_DefaultStoreProductsView_7() { return &___DefaultStoreProductsView_7; }
	inline void set_DefaultStoreProductsView_7(List_1_t1398341365 * value)
	{
		___DefaultStoreProductsView_7 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultStoreProductsView_7, value);
	}

	inline static int32_t get_offset_of_checkInternetBeforeLoadRequest_8() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___checkInternetBeforeLoadRequest_8)); }
	inline bool get_checkInternetBeforeLoadRequest_8() const { return ___checkInternetBeforeLoadRequest_8; }
	inline bool* get_address_of_checkInternetBeforeLoadRequest_8() { return &___checkInternetBeforeLoadRequest_8; }
	inline void set_checkInternetBeforeLoadRequest_8(bool value)
	{
		___checkInternetBeforeLoadRequest_8 = value;
	}

	inline static int32_t get_offset_of_ShowStoreKitParams_9() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___ShowStoreKitParams_9)); }
	inline bool get_ShowStoreKitParams_9() const { return ___ShowStoreKitParams_9; }
	inline bool* get_address_of_ShowStoreKitParams_9() { return &___ShowStoreKitParams_9; }
	inline void set_ShowStoreKitParams_9(bool value)
	{
		___ShowStoreKitParams_9 = value;
	}

	inline static int32_t get_offset_of_ShowGCParams_10() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___ShowGCParams_10)); }
	inline bool get_ShowGCParams_10() const { return ___ShowGCParams_10; }
	inline bool* get_address_of_ShowGCParams_10() { return &___ShowGCParams_10; }
	inline void set_ShowGCParams_10(bool value)
	{
		___ShowGCParams_10 = value;
	}

	inline static int32_t get_offset_of_ShowAchievementsParams_11() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___ShowAchievementsParams_11)); }
	inline bool get_ShowAchievementsParams_11() const { return ___ShowAchievementsParams_11; }
	inline bool* get_address_of_ShowAchievementsParams_11() { return &___ShowAchievementsParams_11; }
	inline void set_ShowAchievementsParams_11(bool value)
	{
		___ShowAchievementsParams_11 = value;
	}

	inline static int32_t get_offset_of_ShowUsersParams_12() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___ShowUsersParams_12)); }
	inline bool get_ShowUsersParams_12() const { return ___ShowUsersParams_12; }
	inline bool* get_address_of_ShowUsersParams_12() { return &___ShowUsersParams_12; }
	inline void set_ShowUsersParams_12(bool value)
	{
		___ShowUsersParams_12 = value;
	}

	inline static int32_t get_offset_of_ShowOtherParams_13() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___ShowOtherParams_13)); }
	inline bool get_ShowOtherParams_13() const { return ___ShowOtherParams_13; }
	inline bool* get_address_of_ShowOtherParams_13() { return &___ShowOtherParams_13; }
	inline void set_ShowOtherParams_13(bool value)
	{
		___ShowOtherParams_13 = value;
	}

	inline static int32_t get_offset_of_ShowCameraAndGalleryParams_14() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___ShowCameraAndGalleryParams_14)); }
	inline bool get_ShowCameraAndGalleryParams_14() const { return ___ShowCameraAndGalleryParams_14; }
	inline bool* get_address_of_ShowCameraAndGalleryParams_14() { return &___ShowCameraAndGalleryParams_14; }
	inline void set_ShowCameraAndGalleryParams_14(bool value)
	{
		___ShowCameraAndGalleryParams_14 = value;
	}

	inline static int32_t get_offset_of_UseOneSignal_15() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___UseOneSignal_15)); }
	inline bool get_UseOneSignal_15() const { return ___UseOneSignal_15; }
	inline bool* get_address_of_UseOneSignal_15() { return &___UseOneSignal_15; }
	inline void set_UseOneSignal_15(bool value)
	{
		___UseOneSignal_15 = value;
	}

	inline static int32_t get_offset_of_DisablePluginLogs_16() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___DisablePluginLogs_16)); }
	inline bool get_DisablePluginLogs_16() const { return ___DisablePluginLogs_16; }
	inline bool* get_address_of_DisablePluginLogs_16() { return &___DisablePluginLogs_16; }
	inline void set_DisablePluginLogs_16(bool value)
	{
		___DisablePluginLogs_16 = value;
	}

	inline static int32_t get_offset_of_UseGCRequestCaching_17() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___UseGCRequestCaching_17)); }
	inline bool get_UseGCRequestCaching_17() const { return ___UseGCRequestCaching_17; }
	inline bool* get_address_of_UseGCRequestCaching_17() { return &___UseGCRequestCaching_17; }
	inline void set_UseGCRequestCaching_17(bool value)
	{
		___UseGCRequestCaching_17 = value;
	}

	inline static int32_t get_offset_of_UsePPForAchievements_18() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___UsePPForAchievements_18)); }
	inline bool get_UsePPForAchievements_18() const { return ___UsePPForAchievements_18; }
	inline bool* get_address_of_UsePPForAchievements_18() { return &___UsePPForAchievements_18; }
	inline void set_UsePPForAchievements_18(bool value)
	{
		___UsePPForAchievements_18 = value;
	}

	inline static int32_t get_offset_of_EnablePushNotificationsAPI_19() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___EnablePushNotificationsAPI_19)); }
	inline bool get_EnablePushNotificationsAPI_19() const { return ___EnablePushNotificationsAPI_19; }
	inline bool* get_address_of_EnablePushNotificationsAPI_19() { return &___EnablePushNotificationsAPI_19; }
	inline void set_EnablePushNotificationsAPI_19(bool value)
	{
		___EnablePushNotificationsAPI_19 = value;
	}

	inline static int32_t get_offset_of_AutoLoadUsersSmallImages_20() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___AutoLoadUsersSmallImages_20)); }
	inline bool get_AutoLoadUsersSmallImages_20() const { return ___AutoLoadUsersSmallImages_20; }
	inline bool* get_address_of_AutoLoadUsersSmallImages_20() { return &___AutoLoadUsersSmallImages_20; }
	inline void set_AutoLoadUsersSmallImages_20(bool value)
	{
		___AutoLoadUsersSmallImages_20 = value;
	}

	inline static int32_t get_offset_of_AutoLoadUsersBigImages_21() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___AutoLoadUsersBigImages_21)); }
	inline bool get_AutoLoadUsersBigImages_21() const { return ___AutoLoadUsersBigImages_21; }
	inline bool* get_address_of_AutoLoadUsersBigImages_21() { return &___AutoLoadUsersBigImages_21; }
	inline void set_AutoLoadUsersBigImages_21(bool value)
	{
		___AutoLoadUsersBigImages_21 = value;
	}

	inline static int32_t get_offset_of_MaxImageLoadSize_22() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___MaxImageLoadSize_22)); }
	inline int32_t get_MaxImageLoadSize_22() const { return ___MaxImageLoadSize_22; }
	inline int32_t* get_address_of_MaxImageLoadSize_22() { return &___MaxImageLoadSize_22; }
	inline void set_MaxImageLoadSize_22(int32_t value)
	{
		___MaxImageLoadSize_22 = value;
	}

	inline static int32_t get_offset_of_JPegCompressionRate_23() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___JPegCompressionRate_23)); }
	inline float get_JPegCompressionRate_23() const { return ___JPegCompressionRate_23; }
	inline float* get_address_of_JPegCompressionRate_23() { return &___JPegCompressionRate_23; }
	inline void set_JPegCompressionRate_23(float value)
	{
		___JPegCompressionRate_23 = value;
	}

	inline static int32_t get_offset_of_GalleryImageFormat_24() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___GalleryImageFormat_24)); }
	inline int32_t get_GalleryImageFormat_24() const { return ___GalleryImageFormat_24; }
	inline int32_t* get_address_of_GalleryImageFormat_24() { return &___GalleryImageFormat_24; }
	inline void set_GalleryImageFormat_24(int32_t value)
	{
		___GalleryImageFormat_24 = value;
	}
};

struct IOSNativeSettings_t547170227_StaticFields
{
public:
	// IOSNativeSettings IOSNativeSettings::instance
	IOSNativeSettings_t547170227 * ___instance_28;

public:
	inline static int32_t get_offset_of_instance_28() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227_StaticFields, ___instance_28)); }
	inline IOSNativeSettings_t547170227 * get_instance_28() const { return ___instance_28; }
	inline IOSNativeSettings_t547170227 ** get_address_of_instance_28() { return &___instance_28; }
	inline void set_instance_28(IOSNativeSettings_t547170227 * value)
	{
		___instance_28 = value;
		Il2CppCodeGenWriteBarrier(&___instance_28, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
