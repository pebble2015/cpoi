// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/Image.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::Image::Image(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::Image::Image()
    : Image(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t java::awt::Image::SCALE_AREA_AVERAGING;
constexpr int32_t java::awt::Image::SCALE_DEFAULT;
constexpr int32_t java::awt::Image::SCALE_FAST;
constexpr int32_t java::awt::Image::SCALE_REPLICATE;
constexpr int32_t java::awt::Image::SCALE_SMOOTH;
java::lang::Object*& java::awt::Image::UndefinedProperty()
{
    clinit();
    return UndefinedProperty_;
}
java::lang::Object* java::awt::Image::UndefinedProperty_;
java::awt::ImageCapabilities*& java::awt::Image::defaultImageCaps()
{
    clinit();
    return defaultImageCaps_;
}
java::awt::ImageCapabilities* java::awt::Image::defaultImageCaps_;

void ::java::awt::Image::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::Image::ctor()");
}

void java::awt::Image::flush()
{ /* stub */
    unimplemented_(u"void java::awt::Image::flush()");
}

float java::awt::Image::getAccelerationPriority()
{ /* stub */
return accelerationPriority ; /* getter */
}

java::awt::ImageCapabilities* java::awt::Image::getCapabilities(GraphicsConfiguration* gc)
{ /* stub */
    unimplemented_(u"java::awt::ImageCapabilities* java::awt::Image::getCapabilities(GraphicsConfiguration* gc)");
    return 0;
}

java::awt::Image* java::awt::Image::getScaledInstance(int32_t width, int32_t height, int32_t hints)
{ /* stub */
    unimplemented_(u"java::awt::Image* java::awt::Image::getScaledInstance(int32_t width, int32_t height, int32_t hints)");
    return 0;
}

void java::awt::Image::setAccelerationPriority(float priority)
{ /* stub */
    this->accelerationPriority = priority; /* setter */
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::Image::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.Image", 14);
    return c;
}

java::lang::Class* java::awt::Image::getClass0()
{
    return class_();
}

