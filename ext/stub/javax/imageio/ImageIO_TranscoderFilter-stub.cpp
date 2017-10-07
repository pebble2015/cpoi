// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <javax/imageio/ImageIO_TranscoderFilter.hpp>

extern void unimplemented_(const char16_t* name);
javax::imageio::ImageIO_TranscoderFilter::ImageIO_TranscoderFilter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

javax::imageio::ImageIO_TranscoderFilter::ImageIO_TranscoderFilter(::javax::imageio::spi::ImageReaderSpi* readerSpi, ::javax::imageio::spi::ImageWriterSpi* writerSpi)
    : ImageIO_TranscoderFilter(*static_cast< ::default_init_tag* >(0))
{
    ctor(readerSpi, writerSpi);
}


void ::javax::imageio::ImageIO_TranscoderFilter::ctor(::javax::imageio::spi::ImageReaderSpi* readerSpi, ::javax::imageio::spi::ImageWriterSpi* writerSpi)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::imageio::ImageIO_TranscoderFilter::ctor(::javax::imageio::spi::ImageReaderSpi* readerSpi, ::javax::imageio::spi::ImageWriterSpi* writerSpi)");
}

bool javax::imageio::ImageIO_TranscoderFilter::filter(::java::lang::Object* elt)
{ /* stub */
    unimplemented_(u"bool javax::imageio::ImageIO_TranscoderFilter::filter(::java::lang::Object* elt)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::imageio::ImageIO_TranscoderFilter::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.imageio.ImageIO.TranscoderFilter", 38);
    return c;
}

java::lang::Class* javax::imageio::ImageIO_TranscoderFilter::getClass0()
{
    return class_();
}

