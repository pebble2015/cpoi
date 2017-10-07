// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/reflect/fwd-POI.hpp>
#include <javax/imageio/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <javax/imageio/spi/ServiceRegistry_Filter.hpp>

struct default_init_tag;

class javax::imageio::ImageIO_ContainsFilter
    : public virtual ::java::lang::Object
    , public virtual ::javax::imageio::spi::ServiceRegistry_Filter
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::java::lang::reflect::Method* method {  };
    ::java::lang::String* name {  };

protected:
    void ctor(::java::lang::reflect::Method* method, ::java::lang::String* name);

public:
    bool filter(::java::lang::Object* elt) override;

    // Generated
    ImageIO_ContainsFilter(::java::lang::reflect::Method* method, ::java::lang::String* name);
protected:
    ImageIO_ContainsFilter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
