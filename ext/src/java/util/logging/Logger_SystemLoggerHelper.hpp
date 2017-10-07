// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/logging/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::logging::Logger_SystemLoggerHelper
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static bool disableCallerCheck_;

    /*void ctor(); (private) */
    /*static bool getBooleanProperty(::java::lang::String* key); (private) */

    // Generated

public:
    Logger_SystemLoggerHelper();
protected:
    Logger_SystemLoggerHelper(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static bool& disableCallerCheck();

private:
    virtual ::java::lang::Class* getClass0();
};
