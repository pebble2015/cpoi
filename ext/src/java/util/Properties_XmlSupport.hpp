// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <sun/util/spi/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::Properties_XmlSupport
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::sun::util::spi::XmlPropertiesProvider* PROVIDER_;

    /*void ctor(); (private) */

public: /* package */
    static void load(Properties* props, ::java::io::InputStream* in);
    /*static ::sun::util::spi::XmlPropertiesProvider* loadProvider(); (private) */
    /*static ::sun::util::spi::XmlPropertiesProvider* loadProviderAsService(::java::lang::ClassLoader* cl); (private) */
    /*static ::sun::util::spi::XmlPropertiesProvider* loadProviderFromProperty(::java::lang::ClassLoader* cl); (private) */
    static void save(Properties* props, ::java::io::OutputStream* os, ::java::lang::String* comment, ::java::lang::String* encoding);

    // Generated

public:
    Properties_XmlSupport();
protected:
    Properties_XmlSupport(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ::sun::util::spi::XmlPropertiesProvider*& PROVIDER();
    virtual ::java::lang::Class* getClass0();
};
