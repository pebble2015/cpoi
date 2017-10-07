// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/security/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::Calendar_CalendarAccessControlContext
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::security::AccessControlContext* INSTANCE_;

    /*void ctor(); (private) */

    // Generated

public:
    Calendar_CalendarAccessControlContext();
protected:
    Calendar_CalendarAccessControlContext(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ::java::security::AccessControlContext*& INSTANCE();
    virtual ::java::lang::Class* getClass0();
};
