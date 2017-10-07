// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/imageio/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <javax/imageio/spi/ServiceRegistry_Filter.hpp>

struct default_init_tag;

class javax::imageio::ImageIO_CanEncodeImageAndFormatFilter
    : public virtual ::java::lang::Object
    , public virtual ::javax::imageio::spi::ServiceRegistry_Filter
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::java::lang::String* formatName {  };
    ImageTypeSpecifier* type {  };

protected:
    void ctor(ImageTypeSpecifier* type, ::java::lang::String* formatName);

public:
    bool filter(::java::lang::Object* elt) override;

    // Generated
    ImageIO_CanEncodeImageAndFormatFilter(ImageTypeSpecifier* type, ::java::lang::String* formatName);
protected:
    ImageIO_CanEncodeImageAndFormatFilter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
