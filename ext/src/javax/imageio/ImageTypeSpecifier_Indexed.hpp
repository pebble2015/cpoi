// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <javax/imageio/fwd-POI.hpp>
#include <javax/imageio/ImageTypeSpecifier.hpp>

struct default_init_tag;

class javax::imageio::ImageTypeSpecifier_Indexed
    : public ImageTypeSpecifier
{

public:
    typedef ImageTypeSpecifier super;

public: /* package */
    ::int8_tArray* alphaLUT {  };
    int32_t bits {  };
    ::int8_tArray* blueLUT {  };
    int32_t dataType {  };
    ::int8_tArray* greenLUT {  };
    ::int8_tArray* redLUT {  };

protected:
    void ctor(::int8_tArray* redLUT, ::int8_tArray* greenLUT, ::int8_tArray* blueLUT, ::int8_tArray* alphaLUT, int32_t bits, int32_t dataType);

    // Generated

public:
    ImageTypeSpecifier_Indexed(::int8_tArray* redLUT, ::int8_tArray* greenLUT, ::int8_tArray* blueLUT, ::int8_tArray* alphaLUT, int32_t bits, int32_t dataType);
protected:
    ImageTypeSpecifier_Indexed(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
