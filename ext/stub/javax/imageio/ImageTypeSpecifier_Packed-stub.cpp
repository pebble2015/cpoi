// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <javax/imageio/ImageTypeSpecifier_Packed.hpp>

extern void unimplemented_(const char16_t* name);
javax::imageio::ImageTypeSpecifier_Packed::ImageTypeSpecifier_Packed(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

javax::imageio::ImageTypeSpecifier_Packed::ImageTypeSpecifier_Packed(::java::awt::color::ColorSpace* colorSpace, int32_t redMask, int32_t greenMask, int32_t blueMask, int32_t alphaMask, int32_t transferType, bool isAlphaPremultiplied)
    : ImageTypeSpecifier_Packed(*static_cast< ::default_init_tag* >(0))
{
    ctor(colorSpace, redMask, greenMask, blueMask, alphaMask, transferType, isAlphaPremultiplied);
}


void ::javax::imageio::ImageTypeSpecifier_Packed::ctor(::java::awt::color::ColorSpace* colorSpace, int32_t redMask, int32_t greenMask, int32_t blueMask, int32_t alphaMask, int32_t transferType, bool isAlphaPremultiplied)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::imageio::ImageTypeSpecifier_Packed::ctor(::java::awt::color::ColorSpace* colorSpace, int32_t redMask, int32_t greenMask, int32_t blueMask, int32_t alphaMask, int32_t transferType, bool isAlphaPremultiplied)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::imageio::ImageTypeSpecifier_Packed::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.imageio.ImageTypeSpecifier.Packed", 39);
    return c;
}

java::lang::Class* javax::imageio::ImageTypeSpecifier_Packed::getClass0()
{
    return class_();
}

