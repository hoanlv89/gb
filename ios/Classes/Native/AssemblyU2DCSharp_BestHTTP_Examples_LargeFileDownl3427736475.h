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
// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BestHTTP.Examples.LargeFileDownloadSample
struct  LargeFileDownloadSample_t3427736475  : public MonoBehaviour_t1158329972
{
public:
	// BestHTTP.HTTPRequest BestHTTP.Examples.LargeFileDownloadSample::request
	HTTPRequest_t138485887 * ___request_3;
	// System.String BestHTTP.Examples.LargeFileDownloadSample::status
	String_t* ___status_4;
	// System.Single BestHTTP.Examples.LargeFileDownloadSample::progress
	float ___progress_5;
	// System.Int32 BestHTTP.Examples.LargeFileDownloadSample::fragmentSize
	int32_t ___fragmentSize_6;

public:
	inline static int32_t get_offset_of_request_3() { return static_cast<int32_t>(offsetof(LargeFileDownloadSample_t3427736475, ___request_3)); }
	inline HTTPRequest_t138485887 * get_request_3() const { return ___request_3; }
	inline HTTPRequest_t138485887 ** get_address_of_request_3() { return &___request_3; }
	inline void set_request_3(HTTPRequest_t138485887 * value)
	{
		___request_3 = value;
		Il2CppCodeGenWriteBarrier(&___request_3, value);
	}

	inline static int32_t get_offset_of_status_4() { return static_cast<int32_t>(offsetof(LargeFileDownloadSample_t3427736475, ___status_4)); }
	inline String_t* get_status_4() const { return ___status_4; }
	inline String_t** get_address_of_status_4() { return &___status_4; }
	inline void set_status_4(String_t* value)
	{
		___status_4 = value;
		Il2CppCodeGenWriteBarrier(&___status_4, value);
	}

	inline static int32_t get_offset_of_progress_5() { return static_cast<int32_t>(offsetof(LargeFileDownloadSample_t3427736475, ___progress_5)); }
	inline float get_progress_5() const { return ___progress_5; }
	inline float* get_address_of_progress_5() { return &___progress_5; }
	inline void set_progress_5(float value)
	{
		___progress_5 = value;
	}

	inline static int32_t get_offset_of_fragmentSize_6() { return static_cast<int32_t>(offsetof(LargeFileDownloadSample_t3427736475, ___fragmentSize_6)); }
	inline int32_t get_fragmentSize_6() const { return ___fragmentSize_6; }
	inline int32_t* get_address_of_fragmentSize_6() { return &___fragmentSize_6; }
	inline void set_fragmentSize_6(int32_t value)
	{
		___fragmentSize_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
