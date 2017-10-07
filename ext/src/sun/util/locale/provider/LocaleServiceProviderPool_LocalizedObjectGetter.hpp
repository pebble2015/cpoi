// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/spi/fwd-POI.hpp>
#include <sun/util/locale/provider/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct sun::util::locale::provider::LocaleServiceProviderPool_LocalizedObjectGetter
    : public virtual ::java::lang::Object
{

    virtual ::java::lang::Object* getObject(::java::util::spi::LocaleServiceProvider* arg0, ::java::util::Locale* arg1, ::java::lang::String* arg2, ::java::lang::ObjectArray* arg3) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
