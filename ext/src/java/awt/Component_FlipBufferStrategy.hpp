// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/awt/image/BufferStrategy.hpp>

struct default_init_tag;

class java::awt::Component_FlipBufferStrategy
    : public ::java::awt::image::BufferStrategy
{

public:
    typedef ::java::awt::image::BufferStrategy super;

public: /* protected */
    BufferCapabilities* caps {  };
    Image* drawBuffer {  };
    ::java::awt::image::VolatileImage* drawVBuffer {  };

public: /* package */
    int32_t height {  };

public: /* protected */
    int32_t numBuffers {  };

public: /* package */
    Component* this$0 {  };

public: /* protected */
    bool validatedContents {  };

public: /* package */
    int32_t width {  };

protected:
    void ctor(int32_t numBuffers, BufferCapabilities* caps);

public:
    bool contentsLost() override;
    bool contentsRestored() override;

public: /* protected */
    virtual void createBuffers(int32_t numBuffers, BufferCapabilities* caps);
    virtual void destroyBuffers();

public:
    void dispose() override;

public: /* protected */
    virtual void flip(BufferCapabilities_FlipContents* flipAction);

public: /* package */
    virtual void flipSubRegion(int32_t x1, int32_t y1, int32_t x2, int32_t y2, BufferCapabilities_FlipContents* flipAction);

public: /* protected */
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
    /*void updateInternalBuffers(); (private) */

    // Generated

public: /* protected */
    Component_FlipBufferStrategy(Component *Component_this, int32_t numBuffers, BufferCapabilities* caps);
protected:
    Component_FlipBufferStrategy(Component *Component_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    Component *Component_this;

private:
    virtual ::java::lang::Class* getClass0();
};
