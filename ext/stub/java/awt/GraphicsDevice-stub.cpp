// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/GraphicsDevice.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace awt
    {
typedef ::SubArray< ::java::awt::DisplayMode, ::java::lang::ObjectArray > DisplayModeArray;
    } // awt
} // java

extern void unimplemented_(const char16_t* name);
java::awt::GraphicsDevice::GraphicsDevice(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::GraphicsDevice::GraphicsDevice()
    : GraphicsDevice(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t java::awt::GraphicsDevice::TYPE_IMAGE_BUFFER;
constexpr int32_t java::awt::GraphicsDevice::TYPE_PRINTER;
constexpr int32_t java::awt::GraphicsDevice::TYPE_RASTER_SCREEN;

void ::java::awt::GraphicsDevice::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::GraphicsDevice::ctor()");
}

int32_t java::awt::GraphicsDevice::getAvailableAcceleratedMemory()
{ /* stub */
    unimplemented_(u"int32_t java::awt::GraphicsDevice::getAvailableAcceleratedMemory()");
    return 0;
}

java::awt::GraphicsConfiguration* java::awt::GraphicsDevice::getBestConfiguration(GraphicsConfigTemplate* gct)
{ /* stub */
    unimplemented_(u"java::awt::GraphicsConfiguration* java::awt::GraphicsDevice::getBestConfiguration(GraphicsConfigTemplate* gct)");
    return 0;
}

java::awt::DisplayMode* java::awt::GraphicsDevice::getDisplayMode()
{ /* stub */
    unimplemented_(u"java::awt::DisplayMode* java::awt::GraphicsDevice::getDisplayMode()");
    return 0;
}

java::awt::DisplayModeArray* java::awt::GraphicsDevice::getDisplayModes()
{ /* stub */
    unimplemented_(u"java::awt::DisplayModeArray* java::awt::GraphicsDevice::getDisplayModes()");
    return 0;
}

java::awt::Window* java::awt::GraphicsDevice::getFullScreenWindow()
{ /* stub */
return fullScreenWindow ; /* getter */
}

java::awt::GraphicsConfiguration* java::awt::GraphicsDevice::getTranslucencyCapableGC()
{ /* stub */
    unimplemented_(u"java::awt::GraphicsConfiguration* java::awt::GraphicsDevice::getTranslucencyCapableGC()");
    return 0;
}

bool java::awt::GraphicsDevice::isDisplayChangeSupported()
{ /* stub */
    unimplemented_(u"bool java::awt::GraphicsDevice::isDisplayChangeSupported()");
    return 0;
}

bool java::awt::GraphicsDevice::isFullScreenSupported()
{ /* stub */
    unimplemented_(u"bool java::awt::GraphicsDevice::isFullScreenSupported()");
    return 0;
}

bool java::awt::GraphicsDevice::isWindowOpacitySupported()
{ /* stub */
    clinit();
    unimplemented_(u"bool java::awt::GraphicsDevice::isWindowOpacitySupported()");
    return 0;
}

bool java::awt::GraphicsDevice::isWindowPerpixelTranslucencySupported()
{ /* stub */
    unimplemented_(u"bool java::awt::GraphicsDevice::isWindowPerpixelTranslucencySupported()");
    return 0;
}

bool java::awt::GraphicsDevice::isWindowShapingSupported()
{ /* stub */
    clinit();
    unimplemented_(u"bool java::awt::GraphicsDevice::isWindowShapingSupported()");
    return 0;
}

bool java::awt::GraphicsDevice::isWindowTranslucencySupported(GraphicsDevice_WindowTranslucency* translucencyKind)
{ /* stub */
    unimplemented_(u"bool java::awt::GraphicsDevice::isWindowTranslucencySupported(GraphicsDevice_WindowTranslucency* translucencyKind)");
    return 0;
}

void java::awt::GraphicsDevice::setDisplayMode(DisplayMode* dm)
{ /* stub */
    unimplemented_(u"void java::awt::GraphicsDevice::setDisplayMode(DisplayMode* dm)");
}

void java::awt::GraphicsDevice::setFullScreenWindow(Window* w)
{ /* stub */
    this->fullScreenWindow = w; /* setter */
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::GraphicsDevice::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.GraphicsDevice", 23);
    return c;
}

java::lang::Class* java::awt::GraphicsDevice::getClass0()
{
    return class_();
}

