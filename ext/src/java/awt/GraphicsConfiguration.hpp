// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::awt::GraphicsConfiguration
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static bool $assertionsDisabled_;
    static BufferCapabilities* defaultBufferCaps_;
    static ImageCapabilities* defaultImageCaps_;

protected:
    void ctor();

public:
    virtual ::java::awt::image::BufferedImage* createCompatibleImage(int32_t width, int32_t height);
    virtual ::java::awt::image::BufferedImage* createCompatibleImage(int32_t width, int32_t height, int32_t transparency);
    virtual ::java::awt::image::VolatileImage* createCompatibleVolatileImage(int32_t width, int32_t height);
    virtual ::java::awt::image::VolatileImage* createCompatibleVolatileImage(int32_t width, int32_t height, int32_t transparency);
    virtual ::java::awt::image::VolatileImage* createCompatibleVolatileImage(int32_t width, int32_t height, ImageCapabilities* caps);
    virtual ::java::awt::image::VolatileImage* createCompatibleVolatileImage(int32_t width, int32_t height, ImageCapabilities* caps, int32_t transparency);
    virtual Rectangle* getBounds() = 0;
    virtual BufferCapabilities* getBufferCapabilities();
    virtual ::java::awt::image::ColorModel* getColorModel() = 0;
    virtual ::java::awt::image::ColorModel* getColorModel(int32_t transparency) = 0;
    virtual ::java::awt::geom::AffineTransform* getDefaultTransform() = 0;
    virtual GraphicsDevice* getDevice() = 0;
    virtual ImageCapabilities* getImageCapabilities();
    virtual ::java::awt::geom::AffineTransform* getNormalizingTransform() = 0;
    virtual bool isTranslucencyCapable();

    // Generated

public: /* protected */
    GraphicsConfiguration();
protected:
    GraphicsConfiguration(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static bool& $assertionsDisabled();

private:
    static BufferCapabilities*& defaultBufferCaps();
    static ImageCapabilities*& defaultImageCaps();
    virtual ::java::lang::Class* getClass0();
};
