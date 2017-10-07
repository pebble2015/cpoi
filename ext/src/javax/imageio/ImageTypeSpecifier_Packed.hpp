// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/color/fwd-POI.hpp>
#include <javax/imageio/fwd-POI.hpp>
#include <javax/imageio/ImageTypeSpecifier.hpp>

struct default_init_tag;

class javax::imageio::ImageTypeSpecifier_Packed
    : public ImageTypeSpecifier
{

public:
    typedef ImageTypeSpecifier super;

public: /* package */
    int32_t alphaMask {  };
    int32_t blueMask {  };
    ::java::awt::color::ColorSpace* colorSpace {  };
    int32_t greenMask {  };
    bool isAlphaPremultiplied {  };
    int32_t redMask {  };
    int32_t transferType {  };

protected:
    void ctor(::java::awt::color::ColorSpace* colorSpace, int32_t redMask, int32_t greenMask, int32_t blueMask, int32_t alphaMask, int32_t transferType, bool isAlphaPremultiplied);

    // Generated

public:
    ImageTypeSpecifier_Packed(::java::awt::color::ColorSpace* colorSpace, int32_t redMask, int32_t greenMask, int32_t blueMask, int32_t alphaMask, int32_t transferType, bool isAlphaPremultiplied);
protected:
    ImageTypeSpecifier_Packed(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
