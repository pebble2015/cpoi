// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <javax/imageio/fwd-POI.hpp>
#include <javax/imageio/ImageTypeSpecifier.hpp>

struct default_init_tag;

class javax::imageio::ImageTypeSpecifier_Grayscale
    : public ImageTypeSpecifier
{

public:
    typedef ImageTypeSpecifier super;

public: /* package */
    int32_t bits {  };
    int32_t dataType {  };
    bool hasAlpha {  };
    bool isAlphaPremultiplied {  };
    bool isSigned {  };

protected:
    void ctor(int32_t bits, int32_t dataType, bool isSigned, bool hasAlpha, bool isAlphaPremultiplied);

    // Generated

public:
    ImageTypeSpecifier_Grayscale(int32_t bits, int32_t dataType, bool isSigned, bool hasAlpha, bool isAlphaPremultiplied);
protected:
    ImageTypeSpecifier_Grayscale(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
