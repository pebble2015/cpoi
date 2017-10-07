// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/BufferCapabilities.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::BufferCapabilities::BufferCapabilities(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::BufferCapabilities::BufferCapabilities(ImageCapabilities* frontCaps, ImageCapabilities* backCaps, BufferCapabilities_FlipContents* flipContents)
    : BufferCapabilities(*static_cast< ::default_init_tag* >(0))
{
    ctor(frontCaps, backCaps, flipContents);
}


void ::java::awt::BufferCapabilities::ctor(ImageCapabilities* frontCaps, ImageCapabilities* backCaps, BufferCapabilities_FlipContents* flipContents)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::BufferCapabilities::ctor(ImageCapabilities* frontCaps, ImageCapabilities* backCaps, BufferCapabilities_FlipContents* flipContents)");
}

java::lang::Object* java::awt::BufferCapabilities::clone()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::awt::BufferCapabilities::clone()");
    return 0;
}

java::awt::ImageCapabilities* java::awt::BufferCapabilities::getBackBufferCapabilities()
{ /* stub */
    unimplemented_(u"java::awt::ImageCapabilities* java::awt::BufferCapabilities::getBackBufferCapabilities()");
    return 0;
}

java::awt::BufferCapabilities_FlipContents* java::awt::BufferCapabilities::getFlipContents()
{ /* stub */
return flipContents ; /* getter */
}

java::awt::ImageCapabilities* java::awt::BufferCapabilities::getFrontBufferCapabilities()
{ /* stub */
    unimplemented_(u"java::awt::ImageCapabilities* java::awt::BufferCapabilities::getFrontBufferCapabilities()");
    return 0;
}

bool java::awt::BufferCapabilities::isFullScreenRequired()
{ /* stub */
    unimplemented_(u"bool java::awt::BufferCapabilities::isFullScreenRequired()");
    return 0;
}

bool java::awt::BufferCapabilities::isMultiBufferAvailable()
{ /* stub */
    unimplemented_(u"bool java::awt::BufferCapabilities::isMultiBufferAvailable()");
    return 0;
}

bool java::awt::BufferCapabilities::isPageFlipping()
{ /* stub */
    unimplemented_(u"bool java::awt::BufferCapabilities::isPageFlipping()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::BufferCapabilities::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.BufferCapabilities", 27);
    return c;
}

java::lang::Class* java::awt::BufferCapabilities::getClass0()
{
    return class_();
}

