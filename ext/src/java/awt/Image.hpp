// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <sun/awt/image/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::awt::Image
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t SCALE_AREA_AVERAGING { int32_t(16) };
    static constexpr int32_t SCALE_DEFAULT { int32_t(1) };
    static constexpr int32_t SCALE_FAST { int32_t(2) };
    static constexpr int32_t SCALE_REPLICATE { int32_t(8) };
    static constexpr int32_t SCALE_SMOOTH { int32_t(4) };

private:
    static ::java::lang::Object* UndefinedProperty_;

public: /* protected */
    float accelerationPriority {  };

private:
    static ImageCapabilities* defaultImageCaps_;

public: /* package */
    ::sun::awt::image::SurfaceManager* surfaceManager {  };

protected:
    void ctor();

public:
    virtual void flush();
    virtual float getAccelerationPriority();
    virtual ImageCapabilities* getCapabilities(GraphicsConfiguration* gc);
    virtual Graphics* getGraphics() = 0;
    virtual int32_t getHeight(::java::awt::image::ImageObserver* observer) = 0;
    virtual ::java::lang::Object* getProperty(::java::lang::String* name, ::java::awt::image::ImageObserver* observer) = 0;
    virtual Image* getScaledInstance(int32_t width, int32_t height, int32_t hints);
    virtual ::java::awt::image::ImageProducer* getSource() = 0;
    virtual int32_t getWidth(::java::awt::image::ImageObserver* observer) = 0;
    virtual void setAccelerationPriority(float priority);

    // Generated
    Image();
protected:
    Image(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ::java::lang::Object*& UndefinedProperty();

private:
    static ImageCapabilities*& defaultImageCaps();
    virtual ::java::lang::Class* getClass0();
};
