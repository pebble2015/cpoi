// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/image/Raster.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::image::Raster::Raster(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::image::Raster::Raster(SampleModel* sampleModel, ::java::awt::Point* origin)
    : Raster(*static_cast< ::default_init_tag* >(0))
{
    ctor(sampleModel, origin);
}

java::awt::image::Raster::Raster(SampleModel* sampleModel, DataBuffer* dataBuffer, ::java::awt::Point* origin)
    : Raster(*static_cast< ::default_init_tag* >(0))
{
    ctor(sampleModel, dataBuffer, origin);
}

java::awt::image::Raster::Raster(SampleModel* sampleModel, DataBuffer* dataBuffer, ::java::awt::Rectangle* aRegion, ::java::awt::Point* sampleModelTranslate, Raster* parent)
    : Raster(*static_cast< ::default_init_tag* >(0))
{
    ctor(sampleModel, dataBuffer, aRegion, sampleModelTranslate, parent);
}


void ::java::awt::image::Raster::ctor(SampleModel* sampleModel, ::java::awt::Point* origin)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::image::Raster::ctor(SampleModel* sampleModel, ::java::awt::Point* origin)");
}

void ::java::awt::image::Raster::ctor(SampleModel* sampleModel, DataBuffer* dataBuffer, ::java::awt::Point* origin)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::image::Raster::ctor(SampleModel* sampleModel, DataBuffer* dataBuffer, ::java::awt::Point* origin)");
}

void ::java::awt::image::Raster::ctor(SampleModel* sampleModel, DataBuffer* dataBuffer, ::java::awt::Rectangle* aRegion, ::java::awt::Point* sampleModelTranslate, Raster* parent)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::image::Raster::ctor(SampleModel* sampleModel, DataBuffer* dataBuffer, ::java::awt::Rectangle* aRegion, ::java::awt::Point* sampleModelTranslate, Raster* parent)");
}

java::awt::image::WritableRaster* java::awt::image::Raster::createBandedRaster(int32_t dataType, int32_t w, int32_t h, int32_t bands, ::java::awt::Point* location)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::image::WritableRaster* java::awt::image::Raster::createBandedRaster(int32_t dataType, int32_t w, int32_t h, int32_t bands, ::java::awt::Point* location)");
    return 0;
}

java::awt::image::WritableRaster* java::awt::image::Raster::createBandedRaster(int32_t dataType, int32_t w, int32_t h, int32_t scanlineStride, ::int32_tArray* bankIndices, ::int32_tArray* bandOffsets, ::java::awt::Point* location)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::image::WritableRaster* java::awt::image::Raster::createBandedRaster(int32_t dataType, int32_t w, int32_t h, int32_t scanlineStride, ::int32_tArray* bankIndices, ::int32_tArray* bandOffsets, ::java::awt::Point* location)");
    return 0;
}

java::awt::image::WritableRaster* java::awt::image::Raster::createBandedRaster(DataBuffer* dataBuffer, int32_t w, int32_t h, int32_t scanlineStride, ::int32_tArray* bankIndices, ::int32_tArray* bandOffsets, ::java::awt::Point* location)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::image::WritableRaster* java::awt::image::Raster::createBandedRaster(DataBuffer* dataBuffer, int32_t w, int32_t h, int32_t scanlineStride, ::int32_tArray* bankIndices, ::int32_tArray* bandOffsets, ::java::awt::Point* location)");
    return 0;
}

java::awt::image::Raster* java::awt::image::Raster::createChild(int32_t parentX, int32_t parentY, int32_t width, int32_t height, int32_t childMinX, int32_t childMinY, ::int32_tArray* bandList)
{ /* stub */
    unimplemented_(u"java::awt::image::Raster* java::awt::image::Raster::createChild(int32_t parentX, int32_t parentY, int32_t width, int32_t height, int32_t childMinX, int32_t childMinY, ::int32_tArray* bandList)");
    return 0;
}

java::awt::image::WritableRaster* java::awt::image::Raster::createCompatibleWritableRaster()
{ /* stub */
    unimplemented_(u"java::awt::image::WritableRaster* java::awt::image::Raster::createCompatibleWritableRaster()");
    return 0;
}

java::awt::image::WritableRaster* java::awt::image::Raster::createCompatibleWritableRaster(::java::awt::Rectangle* rect)
{ /* stub */
    unimplemented_(u"java::awt::image::WritableRaster* java::awt::image::Raster::createCompatibleWritableRaster(::java::awt::Rectangle* rect)");
    return 0;
}

java::awt::image::WritableRaster* java::awt::image::Raster::createCompatibleWritableRaster(int32_t w, int32_t h)
{ /* stub */
    unimplemented_(u"java::awt::image::WritableRaster* java::awt::image::Raster::createCompatibleWritableRaster(int32_t w, int32_t h)");
    return 0;
}

java::awt::image::WritableRaster* java::awt::image::Raster::createCompatibleWritableRaster(int32_t x, int32_t y, int32_t w, int32_t h)
{ /* stub */
    unimplemented_(u"java::awt::image::WritableRaster* java::awt::image::Raster::createCompatibleWritableRaster(int32_t x, int32_t y, int32_t w, int32_t h)");
    return 0;
}

java::awt::image::WritableRaster* java::awt::image::Raster::createInterleavedRaster(int32_t dataType, int32_t w, int32_t h, int32_t bands, ::java::awt::Point* location)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::image::WritableRaster* java::awt::image::Raster::createInterleavedRaster(int32_t dataType, int32_t w, int32_t h, int32_t bands, ::java::awt::Point* location)");
    return 0;
}

java::awt::image::WritableRaster* java::awt::image::Raster::createInterleavedRaster(int32_t dataType, int32_t w, int32_t h, int32_t scanlineStride, int32_t pixelStride, ::int32_tArray* bandOffsets, ::java::awt::Point* location)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::image::WritableRaster* java::awt::image::Raster::createInterleavedRaster(int32_t dataType, int32_t w, int32_t h, int32_t scanlineStride, int32_t pixelStride, ::int32_tArray* bandOffsets, ::java::awt::Point* location)");
    return 0;
}

java::awt::image::WritableRaster* java::awt::image::Raster::createInterleavedRaster(DataBuffer* dataBuffer, int32_t w, int32_t h, int32_t scanlineStride, int32_t pixelStride, ::int32_tArray* bandOffsets, ::java::awt::Point* location)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::image::WritableRaster* java::awt::image::Raster::createInterleavedRaster(DataBuffer* dataBuffer, int32_t w, int32_t h, int32_t scanlineStride, int32_t pixelStride, ::int32_tArray* bandOffsets, ::java::awt::Point* location)");
    return 0;
}

java::awt::image::WritableRaster* java::awt::image::Raster::createPackedRaster(int32_t dataType, int32_t w, int32_t h, ::int32_tArray* bandMasks, ::java::awt::Point* location)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::image::WritableRaster* java::awt::image::Raster::createPackedRaster(int32_t dataType, int32_t w, int32_t h, ::int32_tArray* bandMasks, ::java::awt::Point* location)");
    return 0;
}

java::awt::image::WritableRaster* java::awt::image::Raster::createPackedRaster(DataBuffer* dataBuffer, int32_t w, int32_t h, int32_t bitsPerPixel, ::java::awt::Point* location)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::image::WritableRaster* java::awt::image::Raster::createPackedRaster(DataBuffer* dataBuffer, int32_t w, int32_t h, int32_t bitsPerPixel, ::java::awt::Point* location)");
    return 0;
}

java::awt::image::WritableRaster* java::awt::image::Raster::createPackedRaster(int32_t dataType, int32_t w, int32_t h, int32_t bands, int32_t bitsPerBand, ::java::awt::Point* location)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::image::WritableRaster* java::awt::image::Raster::createPackedRaster(int32_t dataType, int32_t w, int32_t h, int32_t bands, int32_t bitsPerBand, ::java::awt::Point* location)");
    return 0;
}

java::awt::image::WritableRaster* java::awt::image::Raster::createPackedRaster(DataBuffer* dataBuffer, int32_t w, int32_t h, int32_t scanlineStride, ::int32_tArray* bandMasks, ::java::awt::Point* location)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::image::WritableRaster* java::awt::image::Raster::createPackedRaster(DataBuffer* dataBuffer, int32_t w, int32_t h, int32_t scanlineStride, ::int32_tArray* bandMasks, ::java::awt::Point* location)");
    return 0;
}

java::awt::image::Raster* java::awt::image::Raster::createRaster(SampleModel* sm, DataBuffer* db, ::java::awt::Point* location)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::image::Raster* java::awt::image::Raster::createRaster(SampleModel* sm, DataBuffer* db, ::java::awt::Point* location)");
    return 0;
}

java::awt::image::Raster* java::awt::image::Raster::createTranslatedChild(int32_t childMinX, int32_t childMinY)
{ /* stub */
    unimplemented_(u"java::awt::image::Raster* java::awt::image::Raster::createTranslatedChild(int32_t childMinX, int32_t childMinY)");
    return 0;
}

java::awt::image::WritableRaster* java::awt::image::Raster::createWritableRaster(SampleModel* sm, ::java::awt::Point* location)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::image::WritableRaster* java::awt::image::Raster::createWritableRaster(SampleModel* sm, ::java::awt::Point* location)");
    return 0;
}

java::awt::image::WritableRaster* java::awt::image::Raster::createWritableRaster(SampleModel* sm, DataBuffer* db, ::java::awt::Point* location)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::image::WritableRaster* java::awt::image::Raster::createWritableRaster(SampleModel* sm, DataBuffer* db, ::java::awt::Point* location)");
    return 0;
}

java::awt::Rectangle* java::awt::image::Raster::getBounds()
{ /* stub */
    unimplemented_(u"java::awt::Rectangle* java::awt::image::Raster::getBounds()");
    return 0;
}

java::awt::image::DataBuffer* java::awt::image::Raster::getDataBuffer()
{ /* stub */
return dataBuffer ; /* getter */
}

java::lang::Object* java::awt::image::Raster::getDataElements(int32_t x, int32_t y, ::java::lang::Object* outData)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::awt::image::Raster::getDataElements(int32_t x, int32_t y, ::java::lang::Object* outData)");
    return 0;
}

java::lang::Object* java::awt::image::Raster::getDataElements(int32_t x, int32_t y, int32_t w, int32_t h, ::java::lang::Object* outData)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::awt::image::Raster::getDataElements(int32_t x, int32_t y, int32_t w, int32_t h, ::java::lang::Object* outData)");
    return 0;
}

int32_t java::awt::image::Raster::getHeight()
{ /* stub */
return height ; /* getter */
}

int32_t java::awt::image::Raster::getMinX()
{ /* stub */
return minX ; /* getter */
}

int32_t java::awt::image::Raster::getMinY()
{ /* stub */
return minY ; /* getter */
}

int32_t java::awt::image::Raster::getNumBands()
{ /* stub */
return numBands ; /* getter */
}

int32_t java::awt::image::Raster::getNumDataElements()
{ /* stub */
return numDataElements ; /* getter */
}

java::awt::image::Raster* java::awt::image::Raster::getParent()
{ /* stub */
return parent ; /* getter */
}

int32_tArray* java::awt::image::Raster::getPixel(int32_t x, int32_t y, ::int32_tArray* iArray_)
{ /* stub */
    unimplemented_(u"int32_tArray* java::awt::image::Raster::getPixel(int32_t x, int32_t y, ::int32_tArray* iArray_)");
    return 0;
}

floatArray* java::awt::image::Raster::getPixel(int32_t x, int32_t y, ::floatArray* fArray_)
{ /* stub */
    unimplemented_(u"floatArray* java::awt::image::Raster::getPixel(int32_t x, int32_t y, ::floatArray* fArray_)");
    return 0;
}

doubleArray* java::awt::image::Raster::getPixel(int32_t x, int32_t y, ::doubleArray* dArray_)
{ /* stub */
    unimplemented_(u"doubleArray* java::awt::image::Raster::getPixel(int32_t x, int32_t y, ::doubleArray* dArray_)");
    return 0;
}

int32_tArray* java::awt::image::Raster::getPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::int32_tArray* iArray_)
{ /* stub */
    unimplemented_(u"int32_tArray* java::awt::image::Raster::getPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::int32_tArray* iArray_)");
    return 0;
}

floatArray* java::awt::image::Raster::getPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::floatArray* fArray_)
{ /* stub */
    unimplemented_(u"floatArray* java::awt::image::Raster::getPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::floatArray* fArray_)");
    return 0;
}

doubleArray* java::awt::image::Raster::getPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::doubleArray* dArray_)
{ /* stub */
    unimplemented_(u"doubleArray* java::awt::image::Raster::getPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::doubleArray* dArray_)");
    return 0;
}

int32_t java::awt::image::Raster::getSample(int32_t x, int32_t y, int32_t b)
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::Raster::getSample(int32_t x, int32_t y, int32_t b)");
    return 0;
}

double java::awt::image::Raster::getSampleDouble(int32_t x, int32_t y, int32_t b)
{ /* stub */
    unimplemented_(u"double java::awt::image::Raster::getSampleDouble(int32_t x, int32_t y, int32_t b)");
    return 0;
}

float java::awt::image::Raster::getSampleFloat(int32_t x, int32_t y, int32_t b)
{ /* stub */
    unimplemented_(u"float java::awt::image::Raster::getSampleFloat(int32_t x, int32_t y, int32_t b)");
    return 0;
}

java::awt::image::SampleModel* java::awt::image::Raster::getSampleModel()
{ /* stub */
return sampleModel ; /* getter */
}

int32_t java::awt::image::Raster::getSampleModelTranslateX()
{ /* stub */
return sampleModelTranslateX ; /* getter */
}

int32_t java::awt::image::Raster::getSampleModelTranslateY()
{ /* stub */
return sampleModelTranslateY ; /* getter */
}

int32_tArray* java::awt::image::Raster::getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, ::int32_tArray* iArray_)
{ /* stub */
    unimplemented_(u"int32_tArray* java::awt::image::Raster::getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, ::int32_tArray* iArray_)");
    return 0;
}

floatArray* java::awt::image::Raster::getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, ::floatArray* fArray_)
{ /* stub */
    unimplemented_(u"floatArray* java::awt::image::Raster::getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, ::floatArray* fArray_)");
    return 0;
}

doubleArray* java::awt::image::Raster::getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, ::doubleArray* dArray_)
{ /* stub */
    unimplemented_(u"doubleArray* java::awt::image::Raster::getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, ::doubleArray* dArray_)");
    return 0;
}

int32_t java::awt::image::Raster::getTransferType()
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::Raster::getTransferType()");
    return 0;
}

int32_t java::awt::image::Raster::getWidth()
{ /* stub */
return width ; /* getter */
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::image::Raster::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.image.Raster", 21);
    return c;
}

java::lang::Class* java::awt::image::Raster::getClass0()
{
    return class_();
}

