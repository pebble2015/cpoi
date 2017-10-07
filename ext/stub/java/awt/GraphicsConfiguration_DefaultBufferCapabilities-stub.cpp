// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/GraphicsConfiguration_DefaultBufferCapabilities.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::GraphicsConfiguration_DefaultBufferCapabilities::GraphicsConfiguration_DefaultBufferCapabilities(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::GraphicsConfiguration_DefaultBufferCapabilities::GraphicsConfiguration_DefaultBufferCapabilities(ImageCapabilities* imageCaps)
    : GraphicsConfiguration_DefaultBufferCapabilities(*static_cast< ::default_init_tag* >(0))
{
    ctor(imageCaps);
}


void ::java::awt::GraphicsConfiguration_DefaultBufferCapabilities::ctor(ImageCapabilities* imageCaps)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::GraphicsConfiguration_DefaultBufferCapabilities::ctor(ImageCapabilities* imageCaps)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::GraphicsConfiguration_DefaultBufferCapabilities::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.GraphicsConfiguration.DefaultBufferCapabilities", 56);
    return c;
}

java::lang::Class* java::awt::GraphicsConfiguration_DefaultBufferCapabilities::getClass0()
{
    return class_();
}

