// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <sun/awt/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace awt
    {
typedef ::SubArray< ::java::awt::DisplayMode, ::java::lang::ObjectArray > DisplayModeArray;
typedef ::SubArray< ::java::awt::GraphicsConfiguration, ::java::lang::ObjectArray > GraphicsConfigurationArray;
    } // awt
} // java

struct default_init_tag;

class java::awt::GraphicsDevice
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t TYPE_IMAGE_BUFFER { int32_t(2) };
    static constexpr int32_t TYPE_PRINTER { int32_t(1) };
    static constexpr int32_t TYPE_RASTER_SCREEN { int32_t(0) };

private:
    ::java::lang::Object* fsAppContextLock {  };
    ::sun::awt::AppContext* fullScreenAppContext {  };
    Window* fullScreenWindow {  };
    Rectangle* windowedModeBounds {  };

protected:
    void ctor();

public:
    virtual int32_t getAvailableAcceleratedMemory();
    virtual GraphicsConfiguration* getBestConfiguration(GraphicsConfigTemplate* gct);
    virtual GraphicsConfigurationArray* getConfigurations() = 0;
    virtual GraphicsConfiguration* getDefaultConfiguration() = 0;
    virtual DisplayMode* getDisplayMode();
    virtual DisplayModeArray* getDisplayModes();
    virtual Window* getFullScreenWindow();
    virtual ::java::lang::String* getIDstring() = 0;

public: /* package */
    virtual GraphicsConfiguration* getTranslucencyCapableGC();

public:
    virtual int32_t getType() = 0;
    virtual bool isDisplayChangeSupported();
    virtual bool isFullScreenSupported();

public: /* package */
    static bool isWindowOpacitySupported();
    virtual bool isWindowPerpixelTranslucencySupported();
    static bool isWindowShapingSupported();

public:
    virtual bool isWindowTranslucencySupported(GraphicsDevice_WindowTranslucency* translucencyKind);
    virtual void setDisplayMode(DisplayMode* dm);
    virtual void setFullScreenWindow(Window* w);

    // Generated

public: /* protected */
    GraphicsDevice();
protected:
    GraphicsDevice(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
