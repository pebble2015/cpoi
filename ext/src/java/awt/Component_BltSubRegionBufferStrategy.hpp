// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/Component_BltBufferStrategy.hpp>
#include <sun/awt/SubRegionShowable.hpp>

struct default_init_tag;

class java::awt::Component_BltSubRegionBufferStrategy
    : public Component_BltBufferStrategy
    , public virtual ::sun::awt::SubRegionShowable
{

public:
    typedef Component_BltBufferStrategy super;

public: /* package */
    Component* this$0 {  };

protected:
    void ctor(int32_t numBuffers, BufferCapabilities* caps);

public:
    void show(int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
    bool showIfNotLost(int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;

    // Generated

public: /* protected */
    Component_BltSubRegionBufferStrategy(Component *Component_this, int32_t numBuffers, BufferCapabilities* caps);
protected:
    Component_BltSubRegionBufferStrategy(Component *Component_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    void show();

private:
    virtual ::java::lang::Class* getClass0();
};
