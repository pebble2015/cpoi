// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <javax/imageio/ImageIO_ImageWriterIterator.hpp>

extern void unimplemented_(const char16_t* name);
javax::imageio::ImageIO_ImageWriterIterator::ImageIO_ImageWriterIterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

javax::imageio::ImageIO_ImageWriterIterator::ImageIO_ImageWriterIterator(::java::util::Iterator* iter)
    : ImageIO_ImageWriterIterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(iter);
}


void ::javax::imageio::ImageIO_ImageWriterIterator::ctor(::java::util::Iterator* iter)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::imageio::ImageIO_ImageWriterIterator::ctor(::java::util::Iterator* iter)");
}

bool javax::imageio::ImageIO_ImageWriterIterator::hasNext()
{ /* stub */
    unimplemented_(u"bool javax::imageio::ImageIO_ImageWriterIterator::hasNext()");
    return 0;
}

javax::imageio::ImageWriter* javax::imageio::ImageIO_ImageWriterIterator::next()
{ /* stub */
    unimplemented_(u"javax::imageio::ImageWriter* javax::imageio::ImageIO_ImageWriterIterator::next()");
    return 0;
}

void javax::imageio::ImageIO_ImageWriterIterator::remove()
{ /* stub */
    unimplemented_(u"void javax::imageio::ImageIO_ImageWriterIterator::remove()");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::imageio::ImageIO_ImageWriterIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.imageio.ImageIO.ImageWriterIterator", 41);
    return c;
}

java::lang::Class* javax::imageio::ImageIO_ImageWriterIterator::getClass0()
{
    return class_();
}

