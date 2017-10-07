// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::awt::image::Raster
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    DataBuffer* dataBuffer {  };
    int32_t height {  };
    int32_t minX {  };
    int32_t minY {  };
    int32_t numBands {  };
    int32_t numDataElements {  };
    Raster* parent {  };
    SampleModel* sampleModel {  };
    int32_t sampleModelTranslateX {  };
    int32_t sampleModelTranslateY {  };
    int32_t width {  };

protected:
    void ctor(SampleModel* sampleModel, ::java::awt::Point* origin);
    void ctor(SampleModel* sampleModel, DataBuffer* dataBuffer, ::java::awt::Point* origin);
    void ctor(SampleModel* sampleModel, DataBuffer* dataBuffer, ::java::awt::Rectangle* aRegion, ::java::awt::Point* sampleModelTranslate, Raster* parent);

public:
    static WritableRaster* createBandedRaster(int32_t dataType, int32_t w, int32_t h, int32_t bands, ::java::awt::Point* location);
    static WritableRaster* createBandedRaster(int32_t dataType, int32_t w, int32_t h, int32_t scanlineStride, ::int32_tArray* bankIndices, ::int32_tArray* bandOffsets, ::java::awt::Point* location);
    static WritableRaster* createBandedRaster(DataBuffer* dataBuffer, int32_t w, int32_t h, int32_t scanlineStride, ::int32_tArray* bankIndices, ::int32_tArray* bandOffsets, ::java::awt::Point* location);
    virtual Raster* createChild(int32_t parentX, int32_t parentY, int32_t width, int32_t height, int32_t childMinX, int32_t childMinY, ::int32_tArray* bandList);
    virtual WritableRaster* createCompatibleWritableRaster();
    virtual WritableRaster* createCompatibleWritableRaster(::java::awt::Rectangle* rect);
    virtual WritableRaster* createCompatibleWritableRaster(int32_t w, int32_t h);
    virtual WritableRaster* createCompatibleWritableRaster(int32_t x, int32_t y, int32_t w, int32_t h);
    static WritableRaster* createInterleavedRaster(int32_t dataType, int32_t w, int32_t h, int32_t bands, ::java::awt::Point* location);
    static WritableRaster* createInterleavedRaster(int32_t dataType, int32_t w, int32_t h, int32_t scanlineStride, int32_t pixelStride, ::int32_tArray* bandOffsets, ::java::awt::Point* location);
    static WritableRaster* createInterleavedRaster(DataBuffer* dataBuffer, int32_t w, int32_t h, int32_t scanlineStride, int32_t pixelStride, ::int32_tArray* bandOffsets, ::java::awt::Point* location);
    static WritableRaster* createPackedRaster(int32_t dataType, int32_t w, int32_t h, ::int32_tArray* bandMasks, ::java::awt::Point* location);
    static WritableRaster* createPackedRaster(DataBuffer* dataBuffer, int32_t w, int32_t h, int32_t bitsPerPixel, ::java::awt::Point* location);
    static WritableRaster* createPackedRaster(int32_t dataType, int32_t w, int32_t h, int32_t bands, int32_t bitsPerBand, ::java::awt::Point* location);
    static WritableRaster* createPackedRaster(DataBuffer* dataBuffer, int32_t w, int32_t h, int32_t scanlineStride, ::int32_tArray* bandMasks, ::java::awt::Point* location);
    static Raster* createRaster(SampleModel* sm, DataBuffer* db, ::java::awt::Point* location);
    virtual Raster* createTranslatedChild(int32_t childMinX, int32_t childMinY);
    static WritableRaster* createWritableRaster(SampleModel* sm, ::java::awt::Point* location);
    static WritableRaster* createWritableRaster(SampleModel* sm, DataBuffer* db, ::java::awt::Point* location);
    virtual ::java::awt::Rectangle* getBounds();
    virtual DataBuffer* getDataBuffer();
    virtual ::java::lang::Object* getDataElements(int32_t x, int32_t y, ::java::lang::Object* outData);
    virtual ::java::lang::Object* getDataElements(int32_t x, int32_t y, int32_t w, int32_t h, ::java::lang::Object* outData);
    int32_t getHeight();
    int32_t getMinX();
    int32_t getMinY();
    int32_t getNumBands();
    int32_t getNumDataElements();
    virtual Raster* getParent();
    virtual ::int32_tArray* getPixel(int32_t x, int32_t y, ::int32_tArray* iArray_);
    virtual ::floatArray* getPixel(int32_t x, int32_t y, ::floatArray* fArray_);
    virtual ::doubleArray* getPixel(int32_t x, int32_t y, ::doubleArray* dArray_);
    virtual ::int32_tArray* getPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::int32_tArray* iArray_);
    virtual ::floatArray* getPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::floatArray* fArray_);
    virtual ::doubleArray* getPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::doubleArray* dArray_);
    virtual int32_t getSample(int32_t x, int32_t y, int32_t b);
    virtual double getSampleDouble(int32_t x, int32_t y, int32_t b);
    virtual float getSampleFloat(int32_t x, int32_t y, int32_t b);
    virtual SampleModel* getSampleModel();
    int32_t getSampleModelTranslateX();
    int32_t getSampleModelTranslateY();
    virtual ::int32_tArray* getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, ::int32_tArray* iArray_);
    virtual ::floatArray* getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, ::floatArray* fArray_);
    virtual ::doubleArray* getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, ::doubleArray* dArray_);
    int32_t getTransferType();
    int32_t getWidth();
    /*static void initIDs(); (private) */

    // Generated

public: /* protected */
    Raster(SampleModel* sampleModel, ::java::awt::Point* origin);
    Raster(SampleModel* sampleModel, DataBuffer* dataBuffer, ::java::awt::Point* origin);
    Raster(SampleModel* sampleModel, DataBuffer* dataBuffer, ::java::awt::Rectangle* aRegion, ::java::awt::Point* sampleModelTranslate, Raster* parent);
protected:
    Raster(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
