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

// DemoHub
struct DemoHub_t1843661618;
// System.String
struct String_t;
// BestHTTP.SignalR.Hubs.Hub
struct Hub_t272719679;
// BestHTTP.SignalR.Messages.ProgressMessage
struct ProgressMessage_t1081190384;
// BestHTTP.SignalR.Messages.ResultMessage
struct ResultMessage_t3036240250;
// BestHTTP.SignalR.Messages.FailureMessage
struct FailureMessage_t2793948643;
// System.Object
struct Il2CppObject;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// BestHTTP.SignalR.Messages.MethodCallMessage
struct MethodCallMessage_t1119839878;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Hubs_Hub272719679.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Messages_ClientM624279968.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Messages_Progre1081190384.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Messages_Result3036240250.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Messages_Failur2793948643.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Messages_Method1119839878.h"

// System.Void DemoHub::.ctor()
extern "C"  void DemoHub__ctor_m978383807 (DemoHub_t1843661618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::ReportProgress(System.String)
extern "C"  void DemoHub_ReportProgress_m3465968370 (DemoHub_t1843661618 * __this, String_t* ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::OnLongRunningJob_Progress(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.ClientMessage,BestHTTP.SignalR.Messages.ProgressMessage)
extern "C"  void DemoHub_OnLongRunningJob_Progress_m3127057411 (DemoHub_t1843661618 * __this, Hub_t272719679 * ___hub0, ClientMessage_t624279968  ___originialMessage1, ProgressMessage_t1081190384 * ___progress2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::OnLongRunningJob_Done(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.ClientMessage,BestHTTP.SignalR.Messages.ResultMessage)
extern "C"  void DemoHub_OnLongRunningJob_Done_m300154770 (DemoHub_t1843661618 * __this, Hub_t272719679 * ___hub0, ClientMessage_t624279968  ___originalMessage1, ResultMessage_t3036240250 * ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::MultipleCalls()
extern "C"  void DemoHub_MultipleCalls_m3468957436 (DemoHub_t1843661618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::DynamicTask()
extern "C"  void DemoHub_DynamicTask_m1987793067 (DemoHub_t1843661618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::OnDynamicTask_Failed(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.ClientMessage,BestHTTP.SignalR.Messages.FailureMessage)
extern "C"  void DemoHub_OnDynamicTask_Failed_m3534844656 (DemoHub_t1843661618 * __this, Hub_t272719679 * ___hub0, ClientMessage_t624279968  ___originalMessage1, FailureMessage_t2793948643 * ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::OnDynamicTask_Done(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.ClientMessage,BestHTTP.SignalR.Messages.ResultMessage)
extern "C"  void DemoHub_OnDynamicTask_Done_m1638512420 (DemoHub_t1843661618 * __this, Hub_t272719679 * ___hub0, ClientMessage_t624279968  ___originalMessage1, ResultMessage_t3036240250 * ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::AddToGroups()
extern "C"  void DemoHub_AddToGroups_m484138253 (DemoHub_t1843661618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::GetValue()
extern "C"  void DemoHub_GetValue_m2551730200 (DemoHub_t1843661618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::TaskWithException()
extern "C"  void DemoHub_TaskWithException_m3099902527 (DemoHub_t1843661618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::GenericTaskWithException()
extern "C"  void DemoHub_GenericTaskWithException_m4231431668 (DemoHub_t1843661618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::SynchronousException()
extern "C"  void DemoHub_SynchronousException_m684761273 (DemoHub_t1843661618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::PassingDynamicComplex(System.Object)
extern "C"  void DemoHub_PassingDynamicComplex_m3180638581 (DemoHub_t1843661618 * __this, Il2CppObject * ___person0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::SimpleArray(System.Int32[])
extern "C"  void DemoHub_SimpleArray_m992770927 (DemoHub_t1843661618 * __this, Int32U5BU5D_t3030399641* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::ComplexType(System.Object)
extern "C"  void DemoHub_ComplexType_m2841819289 (DemoHub_t1843661618 * __this, Il2CppObject * ___person0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::ComplexArray(System.Object[])
extern "C"  void DemoHub_ComplexArray_m2809781868 (DemoHub_t1843661618 * __this, ObjectU5BU5D_t3614634134* ___complexArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::Overload()
extern "C"  void DemoHub_Overload_m1073236395 (DemoHub_t1843661618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::OnVoidOverload_Done(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.ClientMessage,BestHTTP.SignalR.Messages.ResultMessage)
extern "C"  void DemoHub_OnVoidOverload_Done_m1235780934 (DemoHub_t1843661618 * __this, Hub_t272719679 * ___hub0, ClientMessage_t624279968  ___originalMessage1, ResultMessage_t3036240250 * ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::Overload(System.Int32)
extern "C"  void DemoHub_Overload_m540389510 (DemoHub_t1843661618 * __this, int32_t ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::OnIntOverload_Done(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.ClientMessage,BestHTTP.SignalR.Messages.ResultMessage)
extern "C"  void DemoHub_OnIntOverload_Done_m295644635 (DemoHub_t1843661618 * __this, Hub_t272719679 * ___hub0, ClientMessage_t624279968  ___originalMessage1, ResultMessage_t3036240250 * ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::ReadStateValue()
extern "C"  void DemoHub_ReadStateValue_m1877798213 (DemoHub_t1843661618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::PlainTask()
extern "C"  void DemoHub_PlainTask_m108060948 (DemoHub_t1843661618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::GenericTaskWithContinueWith()
extern "C"  void DemoHub_GenericTaskWithContinueWith_m1689502416 (DemoHub_t1843661618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::FromArbitraryCode(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.MethodCallMessage)
extern "C"  void DemoHub_FromArbitraryCode_m1183658857 (DemoHub_t1843661618 * __this, Hub_t272719679 * ___hub0, MethodCallMessage_t1119839878 * ___methodCall1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::GroupAdded(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.MethodCallMessage)
extern "C"  void DemoHub_GroupAdded_m1223097757 (DemoHub_t1843661618 * __this, Hub_t272719679 * ___hub0, MethodCallMessage_t1119839878 * ___methodCall1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::Signal(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.MethodCallMessage)
extern "C"  void DemoHub_Signal_m2543281988 (DemoHub_t1843661618 * __this, Hub_t272719679 * ___hub0, MethodCallMessage_t1119839878 * ___methodCall1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::Invoke(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.MethodCallMessage)
extern "C"  void DemoHub_Invoke_m2659031228 (DemoHub_t1843661618 * __this, Hub_t272719679 * ___hub0, MethodCallMessage_t1119839878 * ___methodCall1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::Draw()
extern "C"  void DemoHub_Draw_m1084283435 (DemoHub_t1843661618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::<GetValue>m__0(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.ClientMessage,BestHTTP.SignalR.Messages.ResultMessage)
extern "C"  void DemoHub_U3CGetValueU3Em__0_m4080039866 (DemoHub_t1843661618 * __this, Hub_t272719679 * ___hub0, ClientMessage_t624279968  ___msg1, ResultMessage_t3036240250 * ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::<TaskWithException>m__1(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.ClientMessage,BestHTTP.SignalR.Messages.FailureMessage)
extern "C"  void DemoHub_U3CTaskWithExceptionU3Em__1_m616255201 (DemoHub_t1843661618 * __this, Hub_t272719679 * ___hub0, ClientMessage_t624279968  ___msg1, FailureMessage_t2793948643 * ___error2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::<GenericTaskWithException>m__2(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.ClientMessage,BestHTTP.SignalR.Messages.FailureMessage)
extern "C"  void DemoHub_U3CGenericTaskWithExceptionU3Em__2_m4291911067 (DemoHub_t1843661618 * __this, Hub_t272719679 * ___hub0, ClientMessage_t624279968  ___msg1, FailureMessage_t2793948643 * ___error2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::<SynchronousException>m__3(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.ClientMessage,BestHTTP.SignalR.Messages.FailureMessage)
extern "C"  void DemoHub_U3CSynchronousExceptionU3Em__3_m3978555329 (DemoHub_t1843661618 * __this, Hub_t272719679 * ___hub0, ClientMessage_t624279968  ___msg1, FailureMessage_t2793948643 * ___error2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::<PassingDynamicComplex>m__4(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.ClientMessage,BestHTTP.SignalR.Messages.ResultMessage)
extern "C"  void DemoHub_U3CPassingDynamicComplexU3Em__4_m3819775421 (DemoHub_t1843661618 * __this, Hub_t272719679 * ___hub0, ClientMessage_t624279968  ___msg1, ResultMessage_t3036240250 * ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::<SimpleArray>m__5(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.ClientMessage,BestHTTP.SignalR.Messages.ResultMessage)
extern "C"  void DemoHub_U3CSimpleArrayU3Em__5_m3797344307 (DemoHub_t1843661618 * __this, Hub_t272719679 * ___hub0, ClientMessage_t624279968  ___msg1, ResultMessage_t3036240250 * ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::<ComplexType>m__6(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.ClientMessage,BestHTTP.SignalR.Messages.ResultMessage)
extern "C"  void DemoHub_U3CComplexTypeU3Em__6_m2568478023 (DemoHub_t1843661618 * __this, Hub_t272719679 * ___hub0, ClientMessage_t624279968  ___msg1, ResultMessage_t3036240250 * ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::<ComplexArray>m__7(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.ClientMessage,BestHTTP.SignalR.Messages.ResultMessage)
extern "C"  void DemoHub_U3CComplexArrayU3Em__7_m2925457523 (DemoHub_t1843661618 * __this, Hub_t272719679 * ___hub0, ClientMessage_t624279968  ___msg1, ResultMessage_t3036240250 * ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::<ReadStateValue>m__8(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.ClientMessage,BestHTTP.SignalR.Messages.ResultMessage)
extern "C"  void DemoHub_U3CReadStateValueU3Em__8_m1059781779 (DemoHub_t1843661618 * __this, Hub_t272719679 * ___hub0, ClientMessage_t624279968  ___msg1, ResultMessage_t3036240250 * ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::<PlainTask>m__9(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.ClientMessage,BestHTTP.SignalR.Messages.ResultMessage)
extern "C"  void DemoHub_U3CPlainTaskU3Em__9_m569297395 (DemoHub_t1843661618 * __this, Hub_t272719679 * ___hub0, ClientMessage_t624279968  ___msg1, ResultMessage_t3036240250 * ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DemoHub::<GenericTaskWithContinueWith>m__A(BestHTTP.SignalR.Hubs.Hub,BestHTTP.SignalR.Messages.ClientMessage,BestHTTP.SignalR.Messages.ResultMessage)
extern "C"  void DemoHub_U3CGenericTaskWithContinueWithU3Em__A_m1555863121 (DemoHub_t1843661618 * __this, Hub_t272719679 * ___hub0, ClientMessage_t624279968  ___msg1, ResultMessage_t3036240250 * ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
