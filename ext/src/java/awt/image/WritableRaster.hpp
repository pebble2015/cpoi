// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/awt/image/Raster.hpp>

struct default_init_tag;

class java::awt::image::WritableRaster
    : public Raster
{

public:
    typedef Raster super;

protected:
    void ctor(SampleModel* sampleModel, ::java::awt::Point* origin);
    void ctor(SampleModel* sampleModel, DataBuffer* dataBuffer, ::java::awt::Point* origin);
    void ctor(SampleModel* sampleModel, DataBuffer* dataBuffer, ::java::awt::Rectangle* aRegion, ::java::awt::Point* sampleModelTranslate, WritableRaster* parent);

public:
    virtual WritableRaster* createWritableChild(int32_t parentX, int32_t parentY, int32_t w, int32_t h, int32_t childMinX, int32_t childMinY, ::int32_tArray* bandList);
    virtual WritableRaster* createWritableTranslatedChild(int32_t childMinX, int32_t childMinY);
    virtual WritableRaster* getWritableParent();
    virtual void setDataElements(int32_t x, int32_t y, ::java::lang::Object* inData);
    virtual void setDataElements(int32_t x, int32_t y, Raster* inRaster);
    virtual void setDataElements(int32_t x, int32_t y, int32_t w, int32_t h, ::java::lang::Object* inData);
    virtual void setPixel(int32_t x, int32_t y, ::int32_tArray* iArray_);
    virtual void setPixel(int32_t x, int32_t y, ::floatArray* fArray_);
    virtual void setPixel(int32_t x, int32_t y, ::doubleArray* dArray_);
    virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::int32_tArray* iArray_);
    virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::floatArray* fArray_);
    virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::doubleArray* dArray_);
    virtual void setRect(Raster* srcRaster);
    virtual void setRect(int32_t dx, int32_t dy, Raster* srcRaster);
    virtual void setSample(int32_t x, int32_t y, int32_t b, int32_t s);
    virtual void setSample(int32_t x, int32_t y, int32_t b, float s);
    virtual void setSample(int32_t x, int32_t y, int32_t b, double s);
    virtual void setSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, ::int32_tArray* iArray_);
    virtual void setSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, ::floatArray* fArray_);
    virtual void setSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, ::doubleArray* dArray_);

    // Generated

public: /* protected */
    WritableRaster(SampleModel* sampleModel, ::java::awt::Point* origin);
    WritableRaster(SampleModel* sampleModel, DataBuffer* dataBuffer, ::java::awt::Point* origin);
    WritableRaster(SampleModel* sampleModel, DataBuffer* dataBuffer, ::java::awt::Rectangle* aRegion, ::java::awt::Point* sampleModelTranslate, WritableRaster* parent);
protected:
    WritableRaster(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
