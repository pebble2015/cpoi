// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/GraphicsConfiguration.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::GraphicsConfiguration::GraphicsConfiguration(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::GraphicsConfiguration::GraphicsConfiguration()
    : GraphicsConfiguration(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

bool& java::awt::GraphicsConfiguration::$assertionsDisabled()
{
    clinit();
    return $assertionsDisabled_;
}
bool java::awt::GraphicsConfiguration::$assertionsDisabled_;
java::awt::BufferCapabilities*& java::awt::GraphicsConfiguration::defaultBufferCaps()
{
    clinit();
    return defaultBufferCaps_;
}
java::awt::BufferCapabilities* java::awt::GraphicsConfiguration::defaultBufferCaps_;
java::awt::ImageCapabilities*& java::awt::GraphicsConfiguration::defaultImageCaps()
{
    clinit();
    return defaultImageCaps_;
}
java::awt::ImageCapabilities* java::awt::GraphicsConfiguration::defaultImageCaps_;

void ::java::awt::GraphicsConfiguration::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::GraphicsConfiguration::ctor()");
}

java::awt::image::BufferedImage* java::awt::GraphicsConfiguration::createCompatibleImage(int32_t width, int32_t height)
{ /* stub */
    unimplemented_(u"java::awt::image::BufferedImage* java::awt::GraphicsConfiguration::createCompatibleImage(int32_t width, int32_t height)");
    return 0;
}

java::awt::image::BufferedImage* java::awt::GraphicsConfiguration::createCompatibleImage(int32_t width, int32_t height, int32_t transparency)
{ /* stub */
    unimplemented_(u"java::awt::image::BufferedImage* java::awt::GraphicsConfiguration::createCompatibleImage(int32_t width, int32_t height, int32_t transparency)");
    return 0;
}

java::awt::image::VolatileImage* java::awt::GraphicsConfiguration::createCompatibleVolatileImage(int32_t width, int32_t height)
{ /* stub */
    unimplemented_(u"java::awt::image::VolatileImage* java::awt::GraphicsConfiguration::createCompatibleVolatileImage(int32_t width, int32_t height)");
    return 0;
}

java::awt::image::VolatileImage* java::awt::GraphicsConfiguration::createCompatibleVolatileImage(int32_t width, int32_t height, int32_t transparency)
{ /* stub */
    unimplemented_(u"java::awt::image::VolatileImage* java::awt::GraphicsConfiguration::createCompatibleVolatileImage(int32_t width, int32_t height, int32_t transparency)");
    return 0;
}

java::awt::image::VolatileImage* java::awt::GraphicsConfiguration::createCompatibleVolatileImage(int32_t width, int32_t height, ImageCapabilities* caps)
{ /* stub */
    unimplemented_(u"java::awt::image::VolatileImage* java::awt::GraphicsConfiguration::createCompatibleVolatileImage(int32_t width, int32_t height, ImageCapabilities* caps)");
    return 0;
}

java::awt::image::VolatileImage* java::awt::GraphicsConfiguration::createCompatibleVolatileImage(int32_t width, int32_t height, ImageCapabilities* caps, int32_t transparency)
{ /* stub */
    unimplemented_(u"java::awt::image::VolatileImage* java::awt::GraphicsConfiguration::createCompatibleVolatileImage(int32_t width, int32_t height, ImageCapabilities* caps, int32_t transparency)");
    return 0;
}

java::awt::BufferCapabilities* java::awt::GraphicsConfiguration::getBufferCapabilities()
{ /* stub */
    unimplemented_(u"java::awt::BufferCapabilities* java::awt::GraphicsConfiguration::getBufferCapabilities()");
    return 0;
}

java::awt::ImageCapabilities* java::awt::GraphicsConfiguration::getImageCapabilities()
{ /* stub */
    unimplemented_(u"java::awt::ImageCapabilities* java::awt::GraphicsConfiguration::getImageCapabilities()");
    return 0;
}

bool java::awt::GraphicsConfiguration::isTranslucencyCapable()
{ /* stub */
    unimplemented_(u"bool java::awt::GraphicsConfiguration::isTranslucencyCapable()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::GraphicsConfiguration::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.GraphicsConfiguration", 30);
    return c;
}

java::lang::Class* java::awt::GraphicsConfiguration::getClass0()
{
    return class_();
}

