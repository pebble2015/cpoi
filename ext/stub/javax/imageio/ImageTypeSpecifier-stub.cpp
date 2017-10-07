// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <javax/imageio/ImageTypeSpecifier.hpp>

extern void unimplemented_(const char16_t* name);
javax::imageio::ImageTypeSpecifier::ImageTypeSpecifier(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

javax::imageio::ImageTypeSpecifier::ImageTypeSpecifier(::java::awt::image::RenderedImage* image)
    : ImageTypeSpecifier(*static_cast< ::default_init_tag* >(0))
{
    ctor(image);
}

javax::imageio::ImageTypeSpecifier::ImageTypeSpecifier(::java::awt::image::ColorModel* colorModel, ::java::awt::image::SampleModel* sampleModel)
    : ImageTypeSpecifier(*static_cast< ::default_init_tag* >(0))
{
    ctor(colorModel, sampleModel);
}

javax::imageio::ImageTypeSpecifierArray*& javax::imageio::ImageTypeSpecifier::BISpecifier()
{
    clinit();
    return BISpecifier_;
}
javax::imageio::ImageTypeSpecifierArray* javax::imageio::ImageTypeSpecifier::BISpecifier_;
java::awt::color::ColorSpace*& javax::imageio::ImageTypeSpecifier::sRGB()
{
    clinit();
    return sRGB_;
}
java::awt::color::ColorSpace* javax::imageio::ImageTypeSpecifier::sRGB_;

/* private: void ::javax::imageio::ImageTypeSpecifier::ctor() */
void ::javax::imageio::ImageTypeSpecifier::ctor(::java::awt::image::RenderedImage* image)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::imageio::ImageTypeSpecifier::ctor(::java::awt::image::RenderedImage* image)");
}

void ::javax::imageio::ImageTypeSpecifier::ctor(::java::awt::image::ColorModel* colorModel, ::java::awt::image::SampleModel* sampleModel)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::imageio::ImageTypeSpecifier::ctor(::java::awt::image::ColorModel* colorModel, ::java::awt::image::SampleModel* sampleModel)");
}

javax::imageio::ImageTypeSpecifier* javax::imageio::ImageTypeSpecifier::createBanded(::java::awt::color::ColorSpace* colorSpace, ::int32_tArray* bankIndices, ::int32_tArray* bandOffsets, int32_t dataType, bool hasAlpha, bool isAlphaPremultiplied)
{ /* stub */
    clinit();
    unimplemented_(u"javax::imageio::ImageTypeSpecifier* javax::imageio::ImageTypeSpecifier::createBanded(::java::awt::color::ColorSpace* colorSpace, ::int32_tArray* bankIndices, ::int32_tArray* bandOffsets, int32_t dataType, bool hasAlpha, bool isAlphaPremultiplied)");
    return 0;
}

java::awt::image::BufferedImage* javax::imageio::ImageTypeSpecifier::createBufferedImage(int32_t width, int32_t height)
{ /* stub */
    unimplemented_(u"java::awt::image::BufferedImage* javax::imageio::ImageTypeSpecifier::createBufferedImage(int32_t width, int32_t height)");
    return 0;
}

java::awt::image::ColorModel* javax::imageio::ImageTypeSpecifier::createComponentCM(::java::awt::color::ColorSpace* colorSpace, int32_t numBands, int32_t dataType, bool hasAlpha, bool isAlphaPremultiplied)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::image::ColorModel* javax::imageio::ImageTypeSpecifier::createComponentCM(::java::awt::color::ColorSpace* colorSpace, int32_t numBands, int32_t dataType, bool hasAlpha, bool isAlphaPremultiplied)");
    return 0;
}

javax::imageio::ImageTypeSpecifier* javax::imageio::ImageTypeSpecifier::createFromBufferedImageType(int32_t bufferedImageType)
{ /* stub */
    clinit();
    unimplemented_(u"javax::imageio::ImageTypeSpecifier* javax::imageio::ImageTypeSpecifier::createFromBufferedImageType(int32_t bufferedImageType)");
    return 0;
}

javax::imageio::ImageTypeSpecifier* javax::imageio::ImageTypeSpecifier::createFromRenderedImage(::java::awt::image::RenderedImage* image)
{ /* stub */
    clinit();
    unimplemented_(u"javax::imageio::ImageTypeSpecifier* javax::imageio::ImageTypeSpecifier::createFromRenderedImage(::java::awt::image::RenderedImage* image)");
    return 0;
}

javax::imageio::ImageTypeSpecifier* javax::imageio::ImageTypeSpecifier::createGrayscale(int32_t bits, int32_t dataType, bool isSigned)
{ /* stub */
    clinit();
    unimplemented_(u"javax::imageio::ImageTypeSpecifier* javax::imageio::ImageTypeSpecifier::createGrayscale(int32_t bits, int32_t dataType, bool isSigned)");
    return 0;
}

javax::imageio::ImageTypeSpecifier* javax::imageio::ImageTypeSpecifier::createGrayscale(int32_t bits, int32_t dataType, bool isSigned, bool isAlphaPremultiplied)
{ /* stub */
    clinit();
    unimplemented_(u"javax::imageio::ImageTypeSpecifier* javax::imageio::ImageTypeSpecifier::createGrayscale(int32_t bits, int32_t dataType, bool isSigned, bool isAlphaPremultiplied)");
    return 0;
}

javax::imageio::ImageTypeSpecifier* javax::imageio::ImageTypeSpecifier::createIndexed(::int8_tArray* redLUT, ::int8_tArray* greenLUT, ::int8_tArray* blueLUT, ::int8_tArray* alphaLUT, int32_t bits, int32_t dataType)
{ /* stub */
    clinit();
    unimplemented_(u"javax::imageio::ImageTypeSpecifier* javax::imageio::ImageTypeSpecifier::createIndexed(::int8_tArray* redLUT, ::int8_tArray* greenLUT, ::int8_tArray* blueLUT, ::int8_tArray* alphaLUT, int32_t bits, int32_t dataType)");
    return 0;
}

javax::imageio::ImageTypeSpecifier* javax::imageio::ImageTypeSpecifier::createInterleaved(::java::awt::color::ColorSpace* colorSpace, ::int32_tArray* bandOffsets, int32_t dataType, bool hasAlpha, bool isAlphaPremultiplied)
{ /* stub */
    clinit();
    unimplemented_(u"javax::imageio::ImageTypeSpecifier* javax::imageio::ImageTypeSpecifier::createInterleaved(::java::awt::color::ColorSpace* colorSpace, ::int32_tArray* bandOffsets, int32_t dataType, bool hasAlpha, bool isAlphaPremultiplied)");
    return 0;
}

javax::imageio::ImageTypeSpecifier* javax::imageio::ImageTypeSpecifier::createPacked(::java::awt::color::ColorSpace* colorSpace, int32_t redMask, int32_t greenMask, int32_t blueMask, int32_t alphaMask, int32_t transferType, bool isAlphaPremultiplied)
{ /* stub */
    clinit();
    unimplemented_(u"javax::imageio::ImageTypeSpecifier* javax::imageio::ImageTypeSpecifier::createPacked(::java::awt::color::ColorSpace* colorSpace, int32_t redMask, int32_t greenMask, int32_t blueMask, int32_t alphaMask, int32_t transferType, bool isAlphaPremultiplied)");
    return 0;
}

/* private: javax::imageio::ImageTypeSpecifier* javax::imageio::ImageTypeSpecifier::createSpecifier(int32_t type) */
bool javax::imageio::ImageTypeSpecifier::equals(::java::lang::Object* o)
{ /* stub */
    unimplemented_(u"bool javax::imageio::ImageTypeSpecifier::equals(::java::lang::Object* o)");
    return 0;
}

int32_t javax::imageio::ImageTypeSpecifier::getBitsPerBand(int32_t band)
{ /* stub */
    unimplemented_(u"int32_t javax::imageio::ImageTypeSpecifier::getBitsPerBand(int32_t band)");
    return 0;
}

int32_t javax::imageio::ImageTypeSpecifier::getBufferedImageType()
{ /* stub */
    unimplemented_(u"int32_t javax::imageio::ImageTypeSpecifier::getBufferedImageType()");
    return 0;
}

java::awt::image::ColorModel* javax::imageio::ImageTypeSpecifier::getColorModel()
{ /* stub */
return colorModel ; /* getter */
}

int32_t javax::imageio::ImageTypeSpecifier::getNumBands()
{ /* stub */
    unimplemented_(u"int32_t javax::imageio::ImageTypeSpecifier::getNumBands()");
    return 0;
}

int32_t javax::imageio::ImageTypeSpecifier::getNumComponents()
{ /* stub */
    unimplemented_(u"int32_t javax::imageio::ImageTypeSpecifier::getNumComponents()");
    return 0;
}

java::awt::image::SampleModel* javax::imageio::ImageTypeSpecifier::getSampleModel()
{ /* stub */
return sampleModel ; /* getter */
}

java::awt::image::SampleModel* javax::imageio::ImageTypeSpecifier::getSampleModel(int32_t width, int32_t height)
{ /* stub */
return sampleModel ; /* getter */
}

/* private: javax::imageio::ImageTypeSpecifier* javax::imageio::ImageTypeSpecifier::getSpecifier(int32_t type) */
int32_t javax::imageio::ImageTypeSpecifier::hashCode()
{ /* stub */
    unimplemented_(u"int32_t javax::imageio::ImageTypeSpecifier::hashCode()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::imageio::ImageTypeSpecifier::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.imageio.ImageTypeSpecifier", 32);
    return c;
}

java::lang::Class* javax::imageio::ImageTypeSpecifier::getClass0()
{
    return class_();
}

