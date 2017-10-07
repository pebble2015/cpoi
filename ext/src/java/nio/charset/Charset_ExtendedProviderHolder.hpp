// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/nio/charset/fwd-POI.hpp>
#include <java/nio/charset/spi/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::nio::charset::Charset_ExtendedProviderHolder
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::nio::charset::spi::CharsetProvider* extendedProvider__;

    /*void ctor(); (private) */
    /*static ::java::nio::charset::spi::CharsetProvider* extendedProvider(); (private) */

    // Generated

public:
    Charset_ExtendedProviderHolder();
protected:
    Charset_ExtendedProviderHolder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static ::java::nio::charset::spi::CharsetProvider*& extendedProvider_();

private:
    virtual ::java::lang::Class* getClass0();
};
