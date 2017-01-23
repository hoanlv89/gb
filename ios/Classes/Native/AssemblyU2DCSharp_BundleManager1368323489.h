#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BundleManager
struct BundleManager_t1368323489;
// SDialog
struct SDialog_t1510781833;
// System.String
struct String_t;
// UnityEngine.Ping
struct Ping_t3164159734;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Slider
struct Slider_t297367283;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AssetBundle>
struct Dictionary_2_t3969758016;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// UnityEngine.AssetBundleManifest
struct AssetBundleManifest_t1328741589;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BundleManager
struct  BundleManager_t1368323489  : public MonoBehaviour_t1158329972
{
public:
	// SDialog BundleManager::dialogInstance
	SDialog_t1510781833 * ___dialogInstance_3;
	// UnityEngine.Ping BundleManager::ping
	Ping_t3164159734 * ___ping_7;
	// System.Single BundleManager::pingStartTime
	float ___pingStartTime_8;
	// UnityEngine.UI.Text BundleManager::status
	Text_t356221433 * ___status_9;
	// UnityEngine.UI.Slider BundleManager::slider
	Slider_t297367283 * ___slider_10;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AssetBundle> BundleManager::bundles
	Dictionary_2_t3969758016 * ___bundles_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> BundleManager::bundleVariants
	Dictionary_2_t3943999495 * ___bundleVariants_12;
	// UnityEngine.AssetBundleManifest BundleManager::manifest
	AssetBundleManifest_t1328741589 * ___manifest_13;
	// System.String BundleManager::platform
	String_t* ___platform_14;

public:
	inline static int32_t get_offset_of_dialogInstance_3() { return static_cast<int32_t>(offsetof(BundleManager_t1368323489, ___dialogInstance_3)); }
	inline SDialog_t1510781833 * get_dialogInstance_3() const { return ___dialogInstance_3; }
	inline SDialog_t1510781833 ** get_address_of_dialogInstance_3() { return &___dialogInstance_3; }
	inline void set_dialogInstance_3(SDialog_t1510781833 * value)
	{
		___dialogInstance_3 = value;
		Il2CppCodeGenWriteBarrier(&___dialogInstance_3, value);
	}

	inline static int32_t get_offset_of_ping_7() { return static_cast<int32_t>(offsetof(BundleManager_t1368323489, ___ping_7)); }
	inline Ping_t3164159734 * get_ping_7() const { return ___ping_7; }
	inline Ping_t3164159734 ** get_address_of_ping_7() { return &___ping_7; }
	inline void set_ping_7(Ping_t3164159734 * value)
	{
		___ping_7 = value;
		Il2CppCodeGenWriteBarrier(&___ping_7, value);
	}

	inline static int32_t get_offset_of_pingStartTime_8() { return static_cast<int32_t>(offsetof(BundleManager_t1368323489, ___pingStartTime_8)); }
	inline float get_pingStartTime_8() const { return ___pingStartTime_8; }
	inline float* get_address_of_pingStartTime_8() { return &___pingStartTime_8; }
	inline void set_pingStartTime_8(float value)
	{
		___pingStartTime_8 = value;
	}

	inline static int32_t get_offset_of_status_9() { return static_cast<int32_t>(offsetof(BundleManager_t1368323489, ___status_9)); }
	inline Text_t356221433 * get_status_9() const { return ___status_9; }
	inline Text_t356221433 ** get_address_of_status_9() { return &___status_9; }
	inline void set_status_9(Text_t356221433 * value)
	{
		___status_9 = value;
		Il2CppCodeGenWriteBarrier(&___status_9, value);
	}

	inline static int32_t get_offset_of_slider_10() { return static_cast<int32_t>(offsetof(BundleManager_t1368323489, ___slider_10)); }
	inline Slider_t297367283 * get_slider_10() const { return ___slider_10; }
	inline Slider_t297367283 ** get_address_of_slider_10() { return &___slider_10; }
	inline void set_slider_10(Slider_t297367283 * value)
	{
		___slider_10 = value;
		Il2CppCodeGenWriteBarrier(&___slider_10, value);
	}

	inline static int32_t get_offset_of_bundles_11() { return static_cast<int32_t>(offsetof(BundleManager_t1368323489, ___bundles_11)); }
	inline Dictionary_2_t3969758016 * get_bundles_11() const { return ___bundles_11; }
	inline Dictionary_2_t3969758016 ** get_address_of_bundles_11() { return &___bundles_11; }
	inline void set_bundles_11(Dictionary_2_t3969758016 * value)
	{
		___bundles_11 = value;
		Il2CppCodeGenWriteBarrier(&___bundles_11, value);
	}

	inline static int32_t get_offset_of_bundleVariants_12() { return static_cast<int32_t>(offsetof(BundleManager_t1368323489, ___bundleVariants_12)); }
	inline Dictionary_2_t3943999495 * get_bundleVariants_12() const { return ___bundleVariants_12; }
	inline Dictionary_2_t3943999495 ** get_address_of_bundleVariants_12() { return &___bundleVariants_12; }
	inline void set_bundleVariants_12(Dictionary_2_t3943999495 * value)
	{
		___bundleVariants_12 = value;
		Il2CppCodeGenWriteBarrier(&___bundleVariants_12, value);
	}

	inline static int32_t get_offset_of_manifest_13() { return static_cast<int32_t>(offsetof(BundleManager_t1368323489, ___manifest_13)); }
	inline AssetBundleManifest_t1328741589 * get_manifest_13() const { return ___manifest_13; }
	inline AssetBundleManifest_t1328741589 ** get_address_of_manifest_13() { return &___manifest_13; }
	inline void set_manifest_13(AssetBundleManifest_t1328741589 * value)
	{
		___manifest_13 = value;
		Il2CppCodeGenWriteBarrier(&___manifest_13, value);
	}

	inline static int32_t get_offset_of_platform_14() { return static_cast<int32_t>(offsetof(BundleManager_t1368323489, ___platform_14)); }
	inline String_t* get_platform_14() const { return ___platform_14; }
	inline String_t** get_address_of_platform_14() { return &___platform_14; }
	inline void set_platform_14(String_t* value)
	{
		___platform_14 = value;
		Il2CppCodeGenWriteBarrier(&___platform_14, value);
	}
};

struct BundleManager_t1368323489_StaticFields
{
public:
	// BundleManager BundleManager::instance
	BundleManager_t1368323489 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(BundleManager_t1368323489_StaticFields, ___instance_2)); }
	inline BundleManager_t1368323489 * get_instance_2() const { return ___instance_2; }
	inline BundleManager_t1368323489 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(BundleManager_t1368323489 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
