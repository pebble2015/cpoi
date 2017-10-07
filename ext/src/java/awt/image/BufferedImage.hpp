// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <sun/awt/image/fwd-POI.hpp>
#include <java/awt/Image.hpp>
#include <java/awt/image/WritableRenderedImage.hpp>
#include <java/awt/Transparency.hpp>

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

struct default_init_tag;

class java::awt::image::BufferedImage
    : public ::java::awt::Image
    , public virtual WritableRenderedImage
    , public virtual ::java::awt::Transparency
{

public:
    typedef ::java::awt::Image super;

private:
    static constexpr int32_t DCM_555_BLU_MASK { int32_t(31) };
    static constexpr int32_t DCM_555_GRN_MASK { int32_t(992) };
    static constexpr int32_t DCM_555_RED_MASK { int32_t(31744) };
    static constexpr int32_t DCM_565_BLU_MASK { int32_t(31) };
    static constexpr int32_t DCM_565_GRN_MASK { int32_t(2016) };
    static constexpr int32_t DCM_565_RED_MASK { int32_t(63488) };
    static constexpr int32_t DCM_ALPHA_MASK { int32_t(-16777216) };
    static constexpr int32_t DCM_BGR_BLU_MASK { int32_t(16711680) };
    static constexpr int32_t DCM_BGR_GRN_MASK { int32_t(65280) };
    static constexpr int32_t DCM_BGR_RED_MASK { int32_t(255) };
    static constexpr int32_t DCM_BLUE_MASK { int32_t(255) };
    static constexpr int32_t DCM_GREEN_MASK { int32_t(65280) };
    static constexpr int32_t DCM_RED_MASK { int32_t(16711680) };

public:
    static constexpr int32_t TYPE_3BYTE_BGR { int32_t(5) };
    static constexpr int32_t TYPE_4BYTE_ABGR { int32_t(6) };
    static constexpr int32_t TYPE_4BYTE_ABGR_PRE { int32_t(7) };
    static constexpr int32_t TYPE_BYTE_BINARY { int32_t(12) };
    static constexpr int32_t TYPE_BYTE_GRAY { int32_t(10) };
    static constexpr int32_t TYPE_BYTE_INDEXED { int32_t(13) };
    static constexpr int32_t TYPE_CUSTOM { int32_t(0) };
    static constexpr int32_t TYPE_INT_ARGB { int32_t(2) };
    static constexpr int32_t TYPE_INT_ARGB_PRE { int32_t(3) };
    static constexpr int32_t TYPE_INT_BGR { int32_t(4) };
    static constexpr int32_t TYPE_INT_RGB { int32_t(1) };
    static constexpr int32_t TYPE_USHORT_555_RGB { int32_t(9) };
    static constexpr int32_t TYPE_USHORT_565_RGB { int32_t(8) };
    static constexpr int32_t TYPE_USHORT_GRAY { int32_t(11) };

private:
    ColorModel* colorModel {  };
    int32_t imageType {  };
    ::sun::awt::image::OffScreenImageSource* osis {  };
    ::java::util::Hashtable* properties {  };
    WritableRaster* raster {  };

protected:
    void ctor(int32_t width, int32_t height, int32_t imageType);
    void ctor(int32_t width, int32_t height, int32_t imageType, IndexColorModel* cm);
    void ctor(ColorModel* cm, WritableRaster* raster, bool isRasterPremultiplied, ::java::util::Hashtable* properties);

public:
    void addTileObserver(TileObserver* to) override;
    virtual void coerceData(bool isAlphaPremultiplied);
    WritableRaster* copyData(WritableRaster* outRaster) override;
    virtual ::java::awt::Graphics2D* createGraphics();
    virtual WritableRaster* getAlphaRaster();
    ColorModel* getColorModel() override;
    Raster* getData() override;
    Raster* getData(::java::awt::Rectangle* rect) override;
    ::java::awt::Graphics* getGraphics() override;
    int32_t getHeight() override;
    int32_t getHeight(ImageObserver* observer) override;
    int32_t getMinTileX() override;
    int32_t getMinTileY() override;
    int32_t getMinX() override;
    int32_t getMinY() override;
    int32_t getNumXTiles() override;
    int32_t getNumYTiles() override;
    ::java::lang::Object* getProperty(::java::lang::String* name) override;
    ::java::lang::Object* getProperty(::java::lang::String* name, ImageObserver* observer) override;
    ::java::lang::StringArray* getPropertyNames() override;
    virtual int32_t getRGB(int32_t x, int32_t y);
    virtual ::int32_tArray* getRGB(int32_t startX, int32_t startY, int32_t w, int32_t h, ::int32_tArray* rgbArray_, int32_t offset, int32_t scansize);
    virtual WritableRaster* getRaster();
    SampleModel* getSampleModel() override;
    ImageProducer* getSource() override;
    ::java::util::Vector* getSources() override;
    virtual BufferedImage* getSubimage(int32_t x, int32_t y, int32_t w, int32_t h);
    Raster* getTile(int32_t tileX, int32_t tileY) override;
    int32_t getTileGridXOffset() override;
    int32_t getTileGridYOffset() override;
    int32_t getTileHeight() override;
    int32_t getTileWidth() override;
    int32_t getTransparency() override;
    virtual int32_t getType();
    int32_t getWidth() override;
    int32_t getWidth(ImageObserver* observer) override;
    WritableRaster* getWritableTile(int32_t tileX, int32_t tileY) override;
    ::java::awt::PointArray* getWritableTileIndices() override;
    bool hasTileWriters() override;
    /*static void initIDs(); (private) */
    virtual bool isAlphaPremultiplied();
    /*static bool isStandard(ColorModel* cm, WritableRaster* wr); (private) */
    bool isTileWritable(int32_t tileX, int32_t tileY) override;
    void releaseWritableTile(int32_t tileX, int32_t tileY) override;
    void removeTileObserver(TileObserver* to) override;
    void setData(Raster* r) override;
    virtual void setRGB(int32_t x, int32_t y, int32_t rgb);
    virtual void setRGB(int32_t startX, int32_t startY, int32_t w, int32_t h, ::int32_tArray* rgbArray_, int32_t offset, int32_t scansize);
    ::java::lang::String* toString() override;

    // Generated
    BufferedImage(int32_t width, int32_t height, int32_t imageType);
    BufferedImage(int32_t width, int32_t height, int32_t imageType, IndexColorModel* cm);
    BufferedImage(ColorModel* cm, WritableRaster* raster, bool isRasterPremultiplied, ::java::util::Hashtable* properties);
protected:
    BufferedImage(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
