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

// CTInbox
struct CTInbox_t2559313007;
// System.Collections.Generic.List`1<Mail>
struct List_1_t3341915391;
// Mail
struct Mail_t3972794259;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Mail3972794259.h"

// System.Void CTInbox::.ctor()
extern "C"  void CTInbox__ctor_m3055586768 (CTInbox_t2559313007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CTInbox::Start()
extern "C"  void CTInbox_Start_m1227949044 (CTInbox_t2559313007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CTInbox::_getMails()
extern "C"  void CTInbox__getMails_m3166798149 (CTInbox_t2559313007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CTInbox::init()
extern "C"  void CTInbox_init_m1634660044 (CTInbox_t2559313007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CTInbox::updateViewDeleteReadingMail()
extern "C"  void CTInbox_updateViewDeleteReadingMail_m1677869218 (CTInbox_t2559313007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CTInbox::showMailReadingView(System.Boolean)
extern "C"  void CTInbox_showMailReadingView_m882542430 (CTInbox_t2559313007 * __this, bool ___show0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CTInbox::getMails(System.Int32)
extern "C"  void CTInbox_getMails_m544837231 (CTInbox_t2559313007 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Mail> CTInbox::addmail(System.Collections.Generic.List`1<Mail>,Mail)
extern "C"  List_1_t3341915391 * CTInbox_addmail_m1200902874 (CTInbox_t2559313007 * __this, List_1_t3341915391 * ___list0, Mail_t3972794259 * ___mail1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CTInbox::refreshMail()
extern "C"  void CTInbox_refreshMail_m2511744952 (CTInbox_t2559313007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CTInbox::showHideDelMails(Mail,System.Boolean)
extern "C"  void CTInbox_showHideDelMails_m3196495472 (CTInbox_t2559313007 * __this, Mail_t3972794259 * ___mail0, bool ___check1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CTInbox::readMail(System.Int32)
extern "C"  void CTInbox_readMail_m1397665700 (CTInbox_t2559313007 * __this, int32_t ___readingMailID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CTInbox::deleteMail(System.Int32)
extern "C"  void CTInbox_deleteMail_m453629339 (CTInbox_t2559313007 * __this, int32_t ___readingMailID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CTInbox::getGoldFromMail(System.Int32)
extern "C"  void CTInbox_getGoldFromMail_m3653762252 (CTInbox_t2559313007 * __this, int32_t ___readingMailID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CTInbox::<init>m__0()
extern "C"  void CTInbox_U3CinitU3Em__0_m1004324899 (CTInbox_t2559313007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CTInbox::<init>m__1()
extern "C"  void CTInbox_U3CinitU3Em__1_m1004324866 (CTInbox_t2559313007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CTInbox::<init>m__2()
extern "C"  void CTInbox_U3CinitU3Em__2_m1004324833 (CTInbox_t2559313007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CTInbox::<init>m__3()
extern "C"  void CTInbox_U3CinitU3Em__3_m1004324800 (CTInbox_t2559313007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CTInbox::<refreshMail>m__4(Mail,Mail)
extern "C"  int32_t CTInbox_U3CrefreshMailU3Em__4_m3793746663 (Il2CppObject * __this /* static, unused */, Mail_t3972794259 * ___x0, Mail_t3972794259 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CTInbox::<refreshMail>m__5()
extern "C"  void CTInbox_U3CrefreshMailU3Em__5_m564555942 (CTInbox_t2559313007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
