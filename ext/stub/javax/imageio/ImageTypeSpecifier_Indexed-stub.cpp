// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <javax/imageio/ImageTypeSpecifier_Indexed.hpp>

extern void unimplemented_(const char16_t* name);
javax::imageio::ImageTypeSpecifier_Indexed::ImageTypeSpecifier_Indexed(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

javax::imageio::ImageTypeSpecifier_Indexed::ImageTypeSpecifier_Indexed(::int8_tArray* redLUT, ::int8_tArray* greenLUT, ::int8_tArray* blueLUT, ::int8_tArray* alphaLUT, int32_t bits, int32_t dataType)
    : ImageTypeSpecifier_Indexed(*static_cast< ::default_init_tag* >(0))
{
    ctor(redLUT, greenLUT, blueLUT, alphaLUT, bits, dataType);
}


void ::javax::imageio::ImageTypeSpecifier_Indexed::ctor(::int8_tArray* redLUT, ::int8_tArray* greenLUT, ::int8_tArray* blueLUT, ::int8_tArray* alphaLUT, int32_t bits, int32_t dataType)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::imageio::ImageTypeSpecifier_Indexed::ctor(::int8_tArray* redLUT, ::int8_tArray* greenLUT, ::int8_tArray* blueLUT, ::int8_tArray* alphaLUT, int32_t bits, int32_t dataType)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::imageio::ImageTypeSpecifier_Indexed::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.imageio.ImageTypeSpecifier.Indexed", 40);
    return c;
}

java::lang::Class* javax::imageio::ImageTypeSpecifier_Indexed::getClass0()
{
    return class_();
}

