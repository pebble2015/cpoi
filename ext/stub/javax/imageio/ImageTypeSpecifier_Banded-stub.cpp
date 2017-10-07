// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <javax/imageio/ImageTypeSpecifier_Banded.hpp>

extern void unimplemented_(const char16_t* name);
javax::imageio::ImageTypeSpecifier_Banded::ImageTypeSpecifier_Banded(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

javax::imageio::ImageTypeSpecifier_Banded::ImageTypeSpecifier_Banded(::java::awt::color::ColorSpace* colorSpace, ::int32_tArray* bankIndices, ::int32_tArray* bandOffsets, int32_t dataType, bool hasAlpha, bool isAlphaPremultiplied)
    : ImageTypeSpecifier_Banded(*static_cast< ::default_init_tag* >(0))
{
    ctor(colorSpace, bankIndices, bandOffsets, dataType, hasAlpha, isAlphaPremultiplied);
}


void ::javax::imageio::ImageTypeSpecifier_Banded::ctor(::java::awt::color::ColorSpace* colorSpace, ::int32_tArray* bankIndices, ::int32_tArray* bandOffsets, int32_t dataType, bool hasAlpha, bool isAlphaPremultiplied)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::imageio::ImageTypeSpecifier_Banded::ctor(::java::awt::color::ColorSpace* colorSpace, ::int32_tArray* bankIndices, ::int32_tArray* bandOffsets, int32_t dataType, bool hasAlpha, bool isAlphaPremultiplied)");
}

bool javax::imageio::ImageTypeSpecifier_Banded::equals(::java::lang::Object* o)
{ /* stub */
    unimplemented_(u"bool javax::imageio::ImageTypeSpecifier_Banded::equals(::java::lang::Object* o)");
    return 0;
}

int32_t javax::imageio::ImageTypeSpecifier_Banded::hashCode()
{ /* stub */
    unimplemented_(u"int32_t javax::imageio::ImageTypeSpecifier_Banded::hashCode()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::imageio::ImageTypeSpecifier_Banded::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.imageio.ImageTypeSpecifier.Banded", 39);
    return c;
}

java::lang::Class* javax::imageio::ImageTypeSpecifier_Banded::getClass0()
{
    return class_();
}

