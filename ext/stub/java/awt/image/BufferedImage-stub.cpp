// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/image/BufferedImage.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
    } // lang

    namespace awt
    {
        namespace geom
        {
typedef ::SubArray< ::java::awt::geom::Point2D, ::java::lang::ObjectArray, ::java::lang::CloneableArray > Point2DArray;
        } // geom
    } // awt

    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace awt
    {
typedef ::SubArray< ::java::awt::Point, ::java::awt::geom::Point2DArray, ::java::io::SerializableArray > PointArray;
    } // awt

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

extern void unimplemented_(const char16_t* name);
java::awt::image::BufferedImage::BufferedImage(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::image::BufferedImage::BufferedImage(int32_t width, int32_t height, int32_t imageType)
    : BufferedImage(*static_cast< ::default_init_tag* >(0))
{
    ctor(width, height, imageType);
}

java::awt::image::BufferedImage::BufferedImage(int32_t width, int32_t height, int32_t imageType, IndexColorModel* cm)
    : BufferedImage(*static_cast< ::default_init_tag* >(0))
{
    ctor(width, height, imageType, cm);
}

java::awt::image::BufferedImage::BufferedImage(ColorModel* cm, WritableRaster* raster, bool isRasterPremultiplied, ::java::util::Hashtable* properties)
    : BufferedImage(*static_cast< ::default_init_tag* >(0))
{
    ctor(cm, raster, isRasterPremultiplied, properties);
}

constexpr int32_t java::awt::image::BufferedImage::DCM_555_BLU_MASK;
constexpr int32_t java::awt::image::BufferedImage::DCM_555_GRN_MASK;
constexpr int32_t java::awt::image::BufferedImage::DCM_555_RED_MASK;
constexpr int32_t java::awt::image::BufferedImage::DCM_565_BLU_MASK;
constexpr int32_t java::awt::image::BufferedImage::DCM_565_GRN_MASK;
constexpr int32_t java::awt::image::BufferedImage::DCM_565_RED_MASK;
constexpr int32_t java::awt::image::BufferedImage::DCM_ALPHA_MASK;
constexpr int32_t java::awt::image::BufferedImage::DCM_BGR_BLU_MASK;
constexpr int32_t java::awt::image::BufferedImage::DCM_BGR_GRN_MASK;
constexpr int32_t java::awt::image::BufferedImage::DCM_BGR_RED_MASK;
constexpr int32_t java::awt::image::BufferedImage::DCM_BLUE_MASK;
constexpr int32_t java::awt::image::BufferedImage::DCM_GREEN_MASK;
constexpr int32_t java::awt::image::BufferedImage::DCM_RED_MASK;
constexpr int32_t java::awt::image::BufferedImage::TYPE_3BYTE_BGR;
constexpr int32_t java::awt::image::BufferedImage::TYPE_4BYTE_ABGR;
constexpr int32_t java::awt::image::BufferedImage::TYPE_4BYTE_ABGR_PRE;
constexpr int32_t java::awt::image::BufferedImage::TYPE_BYTE_BINARY;
constexpr int32_t java::awt::image::BufferedImage::TYPE_BYTE_GRAY;
constexpr int32_t java::awt::image::BufferedImage::TYPE_BYTE_INDEXED;
constexpr int32_t java::awt::image::BufferedImage::TYPE_CUSTOM;
constexpr int32_t java::awt::image::BufferedImage::TYPE_INT_ARGB;
constexpr int32_t java::awt::image::BufferedImage::TYPE_INT_ARGB_PRE;
constexpr int32_t java::awt::image::BufferedImage::TYPE_INT_BGR;
constexpr int32_t java::awt::image::BufferedImage::TYPE_INT_RGB;
constexpr int32_t java::awt::image::BufferedImage::TYPE_USHORT_555_RGB;
constexpr int32_t java::awt::image::BufferedImage::TYPE_USHORT_565_RGB;
constexpr int32_t java::awt::image::BufferedImage::TYPE_USHORT_GRAY;

void ::java::awt::image::BufferedImage::ctor(int32_t width, int32_t height, int32_t imageType)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::image::BufferedImage::ctor(int32_t width, int32_t height, int32_t imageType)");
}

void ::java::awt::image::BufferedImage::ctor(int32_t width, int32_t height, int32_t imageType, IndexColorModel* cm)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::image::BufferedImage::ctor(int32_t width, int32_t height, int32_t imageType, IndexColorModel* cm)");
}

void ::java::awt::image::BufferedImage::ctor(ColorModel* cm, WritableRaster* raster, bool isRasterPremultiplied, ::java::util::Hashtable* properties)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::image::BufferedImage::ctor(ColorModel* cm, WritableRaster* raster, bool isRasterPremultiplied, ::java::util::Hashtable* properties)");
}

void java::awt::image::BufferedImage::addTileObserver(TileObserver* to)
{ /* stub */
    unimplemented_(u"void java::awt::image::BufferedImage::addTileObserver(TileObserver* to)");
}

void java::awt::image::BufferedImage::coerceData(bool isAlphaPremultiplied)
{ /* stub */
    unimplemented_(u"void java::awt::image::BufferedImage::coerceData(bool isAlphaPremultiplied)");
}

java::awt::image::WritableRaster* java::awt::image::BufferedImage::copyData(WritableRaster* outRaster)
{ /* stub */
    unimplemented_(u"java::awt::image::WritableRaster* java::awt::image::BufferedImage::copyData(WritableRaster* outRaster)");
    return 0;
}

java::awt::Graphics2D* java::awt::image::BufferedImage::createGraphics()
{ /* stub */
    unimplemented_(u"java::awt::Graphics2D* java::awt::image::BufferedImage::createGraphics()");
    return 0;
}

java::awt::image::WritableRaster* java::awt::image::BufferedImage::getAlphaRaster()
{ /* stub */
    unimplemented_(u"java::awt::image::WritableRaster* java::awt::image::BufferedImage::getAlphaRaster()");
    return 0;
}

java::awt::image::ColorModel* java::awt::image::BufferedImage::getColorModel()
{ /* stub */
return colorModel ; /* getter */
}

java::awt::image::Raster* java::awt::image::BufferedImage::getData()
{ /* stub */
    unimplemented_(u"java::awt::image::Raster* java::awt::image::BufferedImage::getData()");
    return 0;
}

java::awt::image::Raster* java::awt::image::BufferedImage::getData(::java::awt::Rectangle* rect)
{ /* stub */
    unimplemented_(u"java::awt::image::Raster* java::awt::image::BufferedImage::getData(::java::awt::Rectangle* rect)");
    return 0;
}

java::awt::Graphics* java::awt::image::BufferedImage::getGraphics()
{ /* stub */
    unimplemented_(u"java::awt::Graphics* java::awt::image::BufferedImage::getGraphics()");
    return 0;
}

int32_t java::awt::image::BufferedImage::getHeight()
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::BufferedImage::getHeight()");
    return 0;
}

int32_t java::awt::image::BufferedImage::getHeight(ImageObserver* observer)
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::BufferedImage::getHeight(ImageObserver* observer)");
    return 0;
}

int32_t java::awt::image::BufferedImage::getMinTileX()
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::BufferedImage::getMinTileX()");
    return 0;
}

int32_t java::awt::image::BufferedImage::getMinTileY()
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::BufferedImage::getMinTileY()");
    return 0;
}

int32_t java::awt::image::BufferedImage::getMinX()
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::BufferedImage::getMinX()");
    return 0;
}

int32_t java::awt::image::BufferedImage::getMinY()
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::BufferedImage::getMinY()");
    return 0;
}

int32_t java::awt::image::BufferedImage::getNumXTiles()
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::BufferedImage::getNumXTiles()");
    return 0;
}

int32_t java::awt::image::BufferedImage::getNumYTiles()
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::BufferedImage::getNumYTiles()");
    return 0;
}

java::lang::Object* java::awt::image::BufferedImage::getProperty(::java::lang::String* name)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::awt::image::BufferedImage::getProperty(::java::lang::String* name)");
    return 0;
}

java::lang::Object* java::awt::image::BufferedImage::getProperty(::java::lang::String* name, ImageObserver* observer)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::awt::image::BufferedImage::getProperty(::java::lang::String* name, ImageObserver* observer)");
    return 0;
}

java::lang::StringArray* java::awt::image::BufferedImage::getPropertyNames()
{ /* stub */
    unimplemented_(u"java::lang::StringArray* java::awt::image::BufferedImage::getPropertyNames()");
    return 0;
}

int32_t java::awt::image::BufferedImage::getRGB(int32_t x, int32_t y)
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::BufferedImage::getRGB(int32_t x, int32_t y)");
    return 0;
}

int32_tArray* java::awt::image::BufferedImage::getRGB(int32_t startX, int32_t startY, int32_t w, int32_t h, ::int32_tArray* rgbArray_, int32_t offset, int32_t scansize)
{ /* stub */
    unimplemented_(u"int32_tArray* java::awt::image::BufferedImage::getRGB(int32_t startX, int32_t startY, int32_t w, int32_t h, ::int32_tArray* rgbArray_, int32_t offset, int32_t scansize)");
    return 0;
}

java::awt::image::WritableRaster* java::awt::image::BufferedImage::getRaster()
{ /* stub */
return raster ; /* getter */
}

java::awt::image::SampleModel* java::awt::image::BufferedImage::getSampleModel()
{ /* stub */
    unimplemented_(u"java::awt::image::SampleModel* java::awt::image::BufferedImage::getSampleModel()");
    return 0;
}

java::awt::image::ImageProducer* java::awt::image::BufferedImage::getSource()
{ /* stub */
    unimplemented_(u"java::awt::image::ImageProducer* java::awt::image::BufferedImage::getSource()");
    return 0;
}

java::util::Vector* java::awt::image::BufferedImage::getSources()
{ /* stub */
    unimplemented_(u"java::util::Vector* java::awt::image::BufferedImage::getSources()");
    return 0;
}

java::awt::image::BufferedImage* java::awt::image::BufferedImage::getSubimage(int32_t x, int32_t y, int32_t w, int32_t h)
{ /* stub */
    unimplemented_(u"java::awt::image::BufferedImage* java::awt::image::BufferedImage::getSubimage(int32_t x, int32_t y, int32_t w, int32_t h)");
    return 0;
}

java::awt::image::Raster* java::awt::image::BufferedImage::getTile(int32_t tileX, int32_t tileY)
{ /* stub */
    unimplemented_(u"java::awt::image::Raster* java::awt::image::BufferedImage::getTile(int32_t tileX, int32_t tileY)");
    return 0;
}

int32_t java::awt::image::BufferedImage::getTileGridXOffset()
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::BufferedImage::getTileGridXOffset()");
    return 0;
}

int32_t java::awt::image::BufferedImage::getTileGridYOffset()
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::BufferedImage::getTileGridYOffset()");
    return 0;
}

int32_t java::awt::image::BufferedImage::getTileHeight()
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::BufferedImage::getTileHeight()");
    return 0;
}

int32_t java::awt::image::BufferedImage::getTileWidth()
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::BufferedImage::getTileWidth()");
    return 0;
}

int32_t java::awt::image::BufferedImage::getTransparency()
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::BufferedImage::getTransparency()");
    return 0;
}

int32_t java::awt::image::BufferedImage::getType()
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::BufferedImage::getType()");
    return 0;
}

int32_t java::awt::image::BufferedImage::getWidth()
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::BufferedImage::getWidth()");
    return 0;
}

int32_t java::awt::image::BufferedImage::getWidth(ImageObserver* observer)
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::BufferedImage::getWidth(ImageObserver* observer)");
    return 0;
}

java::awt::image::WritableRaster* java::awt::image::BufferedImage::getWritableTile(int32_t tileX, int32_t tileY)
{ /* stub */
    unimplemented_(u"java::awt::image::WritableRaster* java::awt::image::BufferedImage::getWritableTile(int32_t tileX, int32_t tileY)");
    return 0;
}

java::awt::PointArray* java::awt::image::BufferedImage::getWritableTileIndices()
{ /* stub */
    unimplemented_(u"java::awt::PointArray* java::awt::image::BufferedImage::getWritableTileIndices()");
    return 0;
}

bool java::awt::image::BufferedImage::hasTileWriters()
{ /* stub */
    unimplemented_(u"bool java::awt::image::BufferedImage::hasTileWriters()");
    return 0;
}

bool java::awt::image::BufferedImage::isAlphaPremultiplied()
{ /* stub */
    unimplemented_(u"bool java::awt::image::BufferedImage::isAlphaPremultiplied()");
    return 0;
}

/* private: bool java::awt::image::BufferedImage::isStandard(ColorModel* cm, WritableRaster* wr) */
bool java::awt::image::BufferedImage::isTileWritable(int32_t tileX, int32_t tileY)
{ /* stub */
    unimplemented_(u"bool java::awt::image::BufferedImage::isTileWritable(int32_t tileX, int32_t tileY)");
    return 0;
}

void java::awt::image::BufferedImage::releaseWritableTile(int32_t tileX, int32_t tileY)
{ /* stub */
    unimplemented_(u"void java::awt::image::BufferedImage::releaseWritableTile(int32_t tileX, int32_t tileY)");
}

void java::awt::image::BufferedImage::removeTileObserver(TileObserver* to)
{ /* stub */
    unimplemented_(u"void java::awt::image::BufferedImage::removeTileObserver(TileObserver* to)");
}

void java::awt::image::BufferedImage::setData(Raster* r)
{ /* stub */
    unimplemented_(u"void java::awt::image::BufferedImage::setData(Raster* r)");
}

void java::awt::image::BufferedImage::setRGB(int32_t x, int32_t y, int32_t rgb)
{ /* stub */
    unimplemented_(u"void java::awt::image::BufferedImage::setRGB(int32_t x, int32_t y, int32_t rgb)");
}

void java::awt::image::BufferedImage::setRGB(int32_t startX, int32_t startY, int32_t w, int32_t h, ::int32_tArray* rgbArray_, int32_t offset, int32_t scansize)
{ /* stub */
    unimplemented_(u"void java::awt::image::BufferedImage::setRGB(int32_t startX, int32_t startY, int32_t w, int32_t h, ::int32_tArray* rgbArray_, int32_t offset, int32_t scansize)");
}

java::lang::String* java::awt::image::BufferedImage::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::awt::image::BufferedImage::toString()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::image::BufferedImage::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.image.BufferedImage", 28);
    return c;
}

java::lang::Class* java::awt::image::BufferedImage::getClass0()
{
    return class_();
}

