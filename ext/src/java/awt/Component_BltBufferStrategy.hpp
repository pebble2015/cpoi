// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/awt/image/BufferStrategy.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace awt
    {
typedef ::SubArray< ::java::awt::Image, ::java::lang::ObjectArray > ImageArray;
typedef ::SubArray< ::java::awt::Transparency, ::java::lang::ObjectArray > TransparencyArray;

        namespace image
        {
typedef ::SubArray< ::java::awt::image::VolatileImage, ::java::awt::ImageArray, ::java::awt::TransparencyArray > VolatileImageArray;
        } // image
    } // awt
} // java

struct default_init_tag;

class java::awt::Component_BltBufferStrategy
    : public ::java::awt::image::BufferStrategy
{

public:
    typedef ::java::awt::image::BufferStrategy super;

public: /* protected */
    ::java::awt::image::VolatileImageArray* backBuffers {  };
    BufferCapabilities* caps {  };
    int32_t height {  };

private:
    Insets* insets {  };

public: /* package */
    Component* this$0 {  };

public: /* protected */
    bool validatedContents {  };
    int32_t width {  };

protected:
    void ctor(int32_t numBuffers, BufferCapabilities* caps);

public:
    bool contentsLost() override;
    bool contentsRestored() override;

public: /* protected */
    virtual void createBackBuffers(int32_t numBuffers);

public:
    void dispose() override;

public: /* package */
    virtual Image* getBackBuffer();

public:
    BufferCapabilities* getCapabilities() override;
    Graphics* getDrawGraphics() override;

public: /* protected */
    virtual void revalidate();

public: /* package */
    virtual void revalidate(bool checkSize);

public:
    void show() override;

public: /* package */
    virtual void showSubRegion(int32_t x1, int32_t y1, int32_t x2, int32_t y2);

    // Generated

public: /* protected */
    Component_BltBufferStrategy(Component *Component_this, int32_t numBuffers, BufferCapabilities* caps);
protected:
    Component_BltBufferStrategy(Component *Component_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    Component *Component_this;

private:
    virtual ::java::lang::Class* getClass0();
};
