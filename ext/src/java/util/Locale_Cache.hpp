// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <sun/util/locale/LocaleObjectCache.hpp>

struct default_init_tag;

class java::util::Locale_Cache
    : public ::sun::util::locale::LocaleObjectCache
{

public:
    typedef ::sun::util::locale::LocaleObjectCache super;

    /*void ctor(); (private) */

public: /* protected */
    virtual Locale* createObject(Locale_LocaleKey* key);

    // Generated

public:
    Locale_Cache();
protected:
    Locale_Cache(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* protected */
    virtual ::java::lang::Object* createObject(::java::lang::Object* arg0) override;

private:
    virtual ::java::lang::Class* getClass0();
};
