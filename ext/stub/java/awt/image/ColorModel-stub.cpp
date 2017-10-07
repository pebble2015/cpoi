// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/image/ColorModel.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::image::ColorModel::ColorModel(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::image::ColorModel::ColorModel(int32_t bits)
    : ColorModel(*static_cast< ::default_init_tag* >(0))
{
    ctor(bits);
}

java::awt::image::ColorModel::ColorModel(int32_t pixel_bits, ::int32_tArray* bits, ::java::awt::color::ColorSpace* cspace, bool hasAlpha, bool isAlphaPremultiplied, int32_t transparency, int32_t transferType)
    : ColorModel(*static_cast< ::default_init_tag* >(0))
{
    ctor(pixel_bits, bits, cspace, hasAlpha, isAlphaPremultiplied, transparency, transferType);
}

java::awt::image::ColorModel*& java::awt::image::ColorModel::RGBdefault()
{
    clinit();
    return RGBdefault_;
}
java::awt::image::ColorModel* java::awt::image::ColorModel::RGBdefault_;
java::util::Map*& java::awt::image::ColorModel::g16Tos8Map()
{
    clinit();
    return g16Tos8Map_;
}
java::util::Map* java::awt::image::ColorModel::g16Tos8Map_;
java::util::Map*& java::awt::image::ColorModel::g8Tos8Map()
{
    clinit();
    return g8Tos8Map_;
}
java::util::Map* java::awt::image::ColorModel::g8Tos8Map_;
int8_tArray*& java::awt::image::ColorModel::l16Tos8()
{
    clinit();
    return l16Tos8_;
}
int8_tArray* java::awt::image::ColorModel::l16Tos8_;
int8_tArray*& java::awt::image::ColorModel::l8Tos8()
{
    clinit();
    return l8Tos8_;
}
int8_tArray* java::awt::image::ColorModel::l8Tos8_;
java::util::Map*& java::awt::image::ColorModel::lg16Toog16Map()
{
    clinit();
    return lg16Toog16Map_;
}
java::util::Map* java::awt::image::ColorModel::lg16Toog16Map_;
java::util::Map*& java::awt::image::ColorModel::lg16Toog8Map()
{
    clinit();
    return lg16Toog8Map_;
}
java::util::Map* java::awt::image::ColorModel::lg16Toog8Map_;
bool& java::awt::image::ColorModel::loaded()
{
    clinit();
    return loaded_;
}
bool java::awt::image::ColorModel::loaded_;
int16_tArray*& java::awt::image::ColorModel::s8Tol16()
{
    clinit();
    return s8Tol16_;
}
int16_tArray* java::awt::image::ColorModel::s8Tol16_;
int8_tArray*& java::awt::image::ColorModel::s8Tol8()
{
    clinit();
    return s8Tol8_;
}
int8_tArray* java::awt::image::ColorModel::s8Tol8_;

void ::java::awt::image::ColorModel::ctor(int32_t bits)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::image::ColorModel::ctor(int32_t bits)");
}

void ::java::awt::image::ColorModel::ctor(int32_t pixel_bits, ::int32_tArray* bits, ::java::awt::color::ColorSpace* cspace, bool hasAlpha, bool isAlphaPremultiplied, int32_t transparency, int32_t transferType)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::image::ColorModel::ctor(int32_t pixel_bits, ::int32_tArray* bits, ::java::awt::color::ColorSpace* cspace, bool hasAlpha, bool isAlphaPremultiplied, int32_t transparency, int32_t transferType)");
}

java::awt::image::ColorModel* java::awt::image::ColorModel::coerceData(WritableRaster* raster, bool isAlphaPremultiplied)
{ /* stub */
    unimplemented_(u"java::awt::image::ColorModel* java::awt::image::ColorModel::coerceData(WritableRaster* raster, bool isAlphaPremultiplied)");
    return 0;
}

java::awt::image::SampleModel* java::awt::image::ColorModel::createCompatibleSampleModel(int32_t w, int32_t h)
{ /* stub */
    unimplemented_(u"java::awt::image::SampleModel* java::awt::image::ColorModel::createCompatibleSampleModel(int32_t w, int32_t h)");
    return 0;
}

java::awt::image::WritableRaster* java::awt::image::ColorModel::createCompatibleWritableRaster(int32_t w, int32_t h)
{ /* stub */
    unimplemented_(u"java::awt::image::WritableRaster* java::awt::image::ColorModel::createCompatibleWritableRaster(int32_t w, int32_t h)");
    return 0;
}

bool java::awt::image::ColorModel::equals(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"bool java::awt::image::ColorModel::equals(::java::lang::Object* obj)");
    return 0;
}

void java::awt::image::ColorModel::finalize()
{ /* stub */
    unimplemented_(u"void java::awt::image::ColorModel::finalize()");
}

int32_t java::awt::image::ColorModel::getAlpha(::java::lang::Object* inData)
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::ColorModel::getAlpha(::java::lang::Object* inData)");
    return 0;
}

java::awt::image::WritableRaster* java::awt::image::ColorModel::getAlphaRaster(WritableRaster* raster)
{ /* stub */
    unimplemented_(u"java::awt::image::WritableRaster* java::awt::image::ColorModel::getAlphaRaster(WritableRaster* raster)");
    return 0;
}

int32_t java::awt::image::ColorModel::getBlue(::java::lang::Object* inData)
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::ColorModel::getBlue(::java::lang::Object* inData)");
    return 0;
}

java::awt::color::ColorSpace* java::awt::image::ColorModel::getColorSpace()
{ /* stub */
return colorSpace ; /* getter */
}

int32_tArray* java::awt::image::ColorModel::getComponentSize()
{ /* stub */
    unimplemented_(u"int32_tArray* java::awt::image::ColorModel::getComponentSize()");
    return 0;
}

int32_t java::awt::image::ColorModel::getComponentSize(int32_t componentIdx)
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::ColorModel::getComponentSize(int32_t componentIdx)");
    return 0;
}

int32_tArray* java::awt::image::ColorModel::getComponents(int32_t pixel, ::int32_tArray* components, int32_t offset)
{ /* stub */
    unimplemented_(u"int32_tArray* java::awt::image::ColorModel::getComponents(int32_t pixel, ::int32_tArray* components, int32_t offset)");
    return 0;
}

int32_tArray* java::awt::image::ColorModel::getComponents(::java::lang::Object* pixel, ::int32_tArray* components, int32_t offset)
{ /* stub */
    unimplemented_(u"int32_tArray* java::awt::image::ColorModel::getComponents(::java::lang::Object* pixel, ::int32_tArray* components, int32_t offset)");
    return 0;
}

int32_t java::awt::image::ColorModel::getDataElement(::int32_tArray* components, int32_t offset)
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::ColorModel::getDataElement(::int32_tArray* components, int32_t offset)");
    return 0;
}

int32_t java::awt::image::ColorModel::getDataElement(::floatArray* normComponents, int32_t normOffset)
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::ColorModel::getDataElement(::floatArray* normComponents, int32_t normOffset)");
    return 0;
}

java::lang::Object* java::awt::image::ColorModel::getDataElements(int32_t rgb, ::java::lang::Object* pixel)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::awt::image::ColorModel::getDataElements(int32_t rgb, ::java::lang::Object* pixel)");
    return 0;
}

java::lang::Object* java::awt::image::ColorModel::getDataElements(::int32_tArray* components, int32_t offset, ::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::awt::image::ColorModel::getDataElements(::int32_tArray* components, int32_t offset, ::java::lang::Object* obj)");
    return 0;
}

java::lang::Object* java::awt::image::ColorModel::getDataElements(::floatArray* normComponents, int32_t normOffset, ::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::awt::image::ColorModel::getDataElements(::floatArray* normComponents, int32_t normOffset, ::java::lang::Object* obj)");
    return 0;
}

int32_t java::awt::image::ColorModel::getDefaultTransferType(int32_t pixel_bits)
{ /* stub */
    clinit();
    unimplemented_(u"int32_t java::awt::image::ColorModel::getDefaultTransferType(int32_t pixel_bits)");
    return 0;
}

int8_tArray* java::awt::image::ColorModel::getGray16TosRGB8LUT(::java::awt::color::ICC_ColorSpace* grayCS)
{ /* stub */
    clinit();
    unimplemented_(u"int8_tArray* java::awt::image::ColorModel::getGray16TosRGB8LUT(::java::awt::color::ICC_ColorSpace* grayCS)");
    return 0;
}

int8_tArray* java::awt::image::ColorModel::getGray8TosRGB8LUT(::java::awt::color::ICC_ColorSpace* grayCS)
{ /* stub */
    clinit();
    unimplemented_(u"int8_tArray* java::awt::image::ColorModel::getGray8TosRGB8LUT(::java::awt::color::ICC_ColorSpace* grayCS)");
    return 0;
}

int32_t java::awt::image::ColorModel::getGreen(::java::lang::Object* inData)
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::ColorModel::getGreen(::java::lang::Object* inData)");
    return 0;
}

int16_tArray* java::awt::image::ColorModel::getLinearGray16ToOtherGray16LUT(::java::awt::color::ICC_ColorSpace* grayCS)
{ /* stub */
    clinit();
    unimplemented_(u"int16_tArray* java::awt::image::ColorModel::getLinearGray16ToOtherGray16LUT(::java::awt::color::ICC_ColorSpace* grayCS)");
    return 0;
}

int8_tArray* java::awt::image::ColorModel::getLinearGray16ToOtherGray8LUT(::java::awt::color::ICC_ColorSpace* grayCS)
{ /* stub */
    clinit();
    unimplemented_(u"int8_tArray* java::awt::image::ColorModel::getLinearGray16ToOtherGray8LUT(::java::awt::color::ICC_ColorSpace* grayCS)");
    return 0;
}

int8_tArray* java::awt::image::ColorModel::getLinearRGB16TosRGB8LUT()
{ /* stub */
    clinit();
    unimplemented_(u"int8_tArray* java::awt::image::ColorModel::getLinearRGB16TosRGB8LUT()");
    return 0;
}

int8_tArray* java::awt::image::ColorModel::getLinearRGB8TosRGB8LUT()
{ /* stub */
    clinit();
    unimplemented_(u"int8_tArray* java::awt::image::ColorModel::getLinearRGB8TosRGB8LUT()");
    return 0;
}

floatArray* java::awt::image::ColorModel::getNormalizedComponents(::java::lang::Object* pixel, ::floatArray* normComponents, int32_t normOffset)
{ /* stub */
    unimplemented_(u"floatArray* java::awt::image::ColorModel::getNormalizedComponents(::java::lang::Object* pixel, ::floatArray* normComponents, int32_t normOffset)");
    return 0;
}

floatArray* java::awt::image::ColorModel::getNormalizedComponents(::int32_tArray* components, int32_t offset, ::floatArray* normComponents, int32_t normOffset)
{ /* stub */
    unimplemented_(u"floatArray* java::awt::image::ColorModel::getNormalizedComponents(::int32_tArray* components, int32_t offset, ::floatArray* normComponents, int32_t normOffset)");
    return 0;
}

int32_t java::awt::image::ColorModel::getNumColorComponents()
{ /* stub */
return numColorComponents ; /* getter */
}

int32_t java::awt::image::ColorModel::getNumComponents()
{ /* stub */
return numComponents ; /* getter */
}

int32_t java::awt::image::ColorModel::getPixelSize()
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::ColorModel::getPixelSize()");
    return 0;
}

int32_t java::awt::image::ColorModel::getRGB(int32_t pixel)
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::ColorModel::getRGB(int32_t pixel)");
    return 0;
}

int32_t java::awt::image::ColorModel::getRGB(::java::lang::Object* inData)
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::ColorModel::getRGB(::java::lang::Object* inData)");
    return 0;
}

java::awt::image::ColorModel* java::awt::image::ColorModel::getRGBdefault()
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::image::ColorModel* java::awt::image::ColorModel::getRGBdefault()");
    return 0;
}

int32_t java::awt::image::ColorModel::getRed(::java::lang::Object* inData)
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::ColorModel::getRed(::java::lang::Object* inData)");
    return 0;
}

int32_t java::awt::image::ColorModel::getTransferType()
{ /* stub */
return transferType ; /* getter */
}

int32_t java::awt::image::ColorModel::getTransparency()
{ /* stub */
return transparency ; /* getter */
}

int32_tArray* java::awt::image::ColorModel::getUnnormalizedComponents(::floatArray* normComponents, int32_t normOffset, ::int32_tArray* components, int32_t offset)
{ /* stub */
    unimplemented_(u"int32_tArray* java::awt::image::ColorModel::getUnnormalizedComponents(::floatArray* normComponents, int32_t normOffset, ::int32_tArray* components, int32_t offset)");
    return 0;
}

int16_tArray* java::awt::image::ColorModel::getsRGB8ToLinearRGB16LUT()
{ /* stub */
    clinit();
    unimplemented_(u"int16_tArray* java::awt::image::ColorModel::getsRGB8ToLinearRGB16LUT()");
    return 0;
}

int8_tArray* java::awt::image::ColorModel::getsRGB8ToLinearRGB8LUT()
{ /* stub */
    clinit();
    unimplemented_(u"int8_tArray* java::awt::image::ColorModel::getsRGB8ToLinearRGB8LUT()");
    return 0;
}

bool java::awt::image::ColorModel::hasAlpha()
{ /* stub */
    unimplemented_(u"bool java::awt::image::ColorModel::hasAlpha()");
    return 0;
}

int32_t java::awt::image::ColorModel::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::ColorModel::hashCode()");
    return 0;
}

bool java::awt::image::ColorModel::isAlphaPremultiplied()
{ /* stub */
    unimplemented_(u"bool java::awt::image::ColorModel::isAlphaPremultiplied()");
    return 0;
}

bool java::awt::image::ColorModel::isCompatibleRaster(Raster* raster)
{ /* stub */
    unimplemented_(u"bool java::awt::image::ColorModel::isCompatibleRaster(Raster* raster)");
    return 0;
}

bool java::awt::image::ColorModel::isCompatibleSampleModel(SampleModel* sm)
{ /* stub */
    unimplemented_(u"bool java::awt::image::ColorModel::isCompatibleSampleModel(SampleModel* sm)");
    return 0;
}

bool java::awt::image::ColorModel::isLinearGRAYspace(::java::awt::color::ColorSpace* cs)
{ /* stub */
    clinit();
    unimplemented_(u"bool java::awt::image::ColorModel::isLinearGRAYspace(::java::awt::color::ColorSpace* cs)");
    return 0;
}

bool java::awt::image::ColorModel::isLinearRGBspace(::java::awt::color::ColorSpace* cs)
{ /* stub */
    clinit();
    unimplemented_(u"bool java::awt::image::ColorModel::isLinearRGBspace(::java::awt::color::ColorSpace* cs)");
    return 0;
}

void java::awt::image::ColorModel::loadLibraries()
{ /* stub */
    clinit();
    unimplemented_(u"void java::awt::image::ColorModel::loadLibraries()");
}

java::lang::String* java::awt::image::ColorModel::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::awt::image::ColorModel::toString()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::image::ColorModel::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.image.ColorModel", 25);
    return c;
}

java::lang::Class* java::awt::image::ColorModel::getClass0()
{
    return class_();
}

