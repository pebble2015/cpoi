// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <javax/imageio/ImageReadParam.hpp>

extern void unimplemented_(const char16_t* name);
javax::imageio::ImageReadParam::ImageReadParam(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

javax::imageio::ImageReadParam::ImageReadParam()
    : ImageReadParam(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}


void ::javax::imageio::ImageReadParam::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::imageio::ImageReadParam::ctor()");
}

bool javax::imageio::ImageReadParam::canSetSourceRenderSize()
{ /* stub */
    unimplemented_(u"bool javax::imageio::ImageReadParam::canSetSourceRenderSize()");
    return 0;
}

java::awt::image::BufferedImage* javax::imageio::ImageReadParam::getDestination()
{ /* stub */
return destination ; /* getter */
}

int32_tArray* javax::imageio::ImageReadParam::getDestinationBands()
{ /* stub */
return destinationBands ; /* getter */
}

int32_t javax::imageio::ImageReadParam::getSourceMaxProgressivePass()
{ /* stub */
    unimplemented_(u"int32_t javax::imageio::ImageReadParam::getSourceMaxProgressivePass()");
    return 0;
}

int32_t javax::imageio::ImageReadParam::getSourceMinProgressivePass()
{ /* stub */
    unimplemented_(u"int32_t javax::imageio::ImageReadParam::getSourceMinProgressivePass()");
    return 0;
}

int32_t javax::imageio::ImageReadParam::getSourceNumProgressivePasses()
{ /* stub */
    unimplemented_(u"int32_t javax::imageio::ImageReadParam::getSourceNumProgressivePasses()");
    return 0;
}

java::awt::Dimension* javax::imageio::ImageReadParam::getSourceRenderSize()
{ /* stub */
return sourceRenderSize ; /* getter */
}

void javax::imageio::ImageReadParam::setDestination(::java::awt::image::BufferedImage* destination)
{ /* stub */
    this->destination = destination; /* setter */
}

void javax::imageio::ImageReadParam::setDestinationBands(::int32_tArray* destinationBands)
{ /* stub */
    this->destinationBands = destinationBands; /* setter */
}

void javax::imageio::ImageReadParam::setDestinationType(ImageTypeSpecifier* destinationType)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReadParam::setDestinationType(ImageTypeSpecifier* destinationType)");
}

void javax::imageio::ImageReadParam::setSourceProgressivePasses(int32_t minPass, int32_t numPasses)
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageReadParam::setSourceProgressivePasses(int32_t minPass, int32_t numPasses)");
}

void javax::imageio::ImageReadParam::setSourceRenderSize(::java::awt::Dimension* size)
{ /* stub */
    this->sourceRenderSize = size; /* setter */
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::imageio::ImageReadParam::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.imageio.ImageReadParam", 28);
    return c;
}

java::lang::Class* javax::imageio::ImageReadParam::getClass0()
{
    return class_();
}

