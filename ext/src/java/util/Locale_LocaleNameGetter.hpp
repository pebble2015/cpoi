// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/spi/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <sun/util/locale/provider/LocaleServiceProviderPool_LocalizedObjectGetter.hpp>

struct default_init_tag;

class java::util::Locale_LocaleNameGetter
    : public virtual ::java::lang::Object
    , public virtual ::sun::util::locale::provider::LocaleServiceProviderPool_LocalizedObjectGetter
{

public:
    typedef ::java::lang::Object super;

private:
    static bool $assertionsDisabled_;
    static Locale_LocaleNameGetter* INSTANCE_;

    /*void ctor(); (private) */

public:
    virtual ::java::lang::String* getObject(::java::util::spi::LocaleNameProvider* localeNameProvider, Locale* locale, ::java::lang::String* key, ::java::lang::ObjectArray* params);

    // Generated
    Locale_LocaleNameGetter();
protected:
    Locale_LocaleNameGetter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual ::java::lang::Object* getObject(::java::util::spi::LocaleServiceProvider* arg0, Locale* arg1, ::java::lang::String* arg2, ::java::lang::ObjectArray* arg3) override;

public: /* package */
    static bool& $assertionsDisabled();

private:
    static Locale_LocaleNameGetter*& INSTANCE();
    virtual ::java::lang::Class* getClass0();
};
