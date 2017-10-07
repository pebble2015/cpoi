// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/color/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/imageio/fwd-POI.hpp>
#include <javax/imageio/ImageTypeSpecifier.hpp>

struct default_init_tag;

class javax::imageio::ImageTypeSpecifier_Interleaved
    : public ImageTypeSpecifier
{

public:
    typedef ImageTypeSpecifier super;

public: /* package */
    ::int32_tArray* bandOffsets {  };
    ::java::awt::color::ColorSpace* colorSpace {  };
    int32_t dataType {  };
    bool hasAlpha {  };
    bool isAlphaPremultiplied {  };

protected:
    void ctor(::java::awt::color::ColorSpace* colorSpace, ::int32_tArray* bandOffsets, int32_t dataType, bool hasAlpha, bool isAlphaPremultiplied);

public:
    bool equals(::java::lang::Object* o) override;
    int32_t hashCode() override;

    // Generated
    ImageTypeSpecifier_Interleaved(::java::awt::color::ColorSpace* colorSpace, ::int32_tArray* bandOffsets, int32_t dataType, bool hasAlpha, bool isAlphaPremultiplied);
protected:
    ImageTypeSpecifier_Interleaved(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
