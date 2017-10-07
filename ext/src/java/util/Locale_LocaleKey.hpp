// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <sun/util/locale/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::Locale_LocaleKey final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::sun::util::locale::BaseLocale* base {  };
    ::sun::util::locale::LocaleExtensions* exts {  };
    int32_t hash {  };

    /*void ctor(::sun::util::locale::BaseLocale* baseLocale, ::sun::util::locale::LocaleExtensions* extensions); (private) */

public:
    bool equals(::java::lang::Object* obj) override;
    int32_t hashCode() override;

    // Generated
    Locale_LocaleKey();
protected:
    Locale_LocaleKey(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
