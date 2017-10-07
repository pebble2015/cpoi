// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <javax/imageio/ImageIO_ImageReaderIterator.hpp>

extern void unimplemented_(const char16_t* name);
javax::imageio::ImageIO_ImageReaderIterator::ImageIO_ImageReaderIterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

javax::imageio::ImageIO_ImageReaderIterator::ImageIO_ImageReaderIterator(::java::util::Iterator* iter)
    : ImageIO_ImageReaderIterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(iter);
}


void ::javax::imageio::ImageIO_ImageReaderIterator::ctor(::java::util::Iterator* iter)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::imageio::ImageIO_ImageReaderIterator::ctor(::java::util::Iterator* iter)");
}

bool javax::imageio::ImageIO_ImageReaderIterator::hasNext()
{ /* stub */
    unimplemented_(u"bool javax::imageio::ImageIO_ImageReaderIterator::hasNext()");
    return 0;
}

javax::imageio::ImageReader* javax::imageio::ImageIO_ImageReaderIterator::next()
{ /* stub */
    unimplemented_(u"javax::imageio::ImageReader* javax::imageio::ImageIO_ImageReaderIterator::next()");
    return 0;
}

void javax::imageio::ImageIO_ImageReaderIterator::remove()
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageIO_ImageReaderIterator::remove()");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::imageio::ImageIO_ImageReaderIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.imageio.ImageIO.ImageReaderIterator", 41);
    return c;
}

java::lang::Class* javax::imageio::ImageIO_ImageReaderIterator::getClass0()
{
    return class_();
}

