// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

struct java::awt::image::RenderedImage
    : public virtual ::java::lang::Object
{

    virtual WritableRaster* copyData(WritableRaster* raster) = 0;
    virtual ColorModel* getColorModel() = 0;
    virtual Raster* getData() = 0;
    virtual Raster* getData(::java::awt::Rectangle* rect) = 0;
    virtual int32_t getHeight() = 0;
    virtual int32_t getMinTileX() = 0;
    virtual int32_t getMinTileY() = 0;
    virtual int32_t getMinX() = 0;
    virtual int32_t getMinY() = 0;
    virtual int32_t getNumXTiles() = 0;
    virtual int32_t getNumYTiles() = 0;
    virtual ::java::lang::Object* getProperty(::java::lang::String* name) = 0;
    virtual ::java::lang::StringArray* getPropertyNames() = 0;
    virtual SampleModel* getSampleModel() = 0;
    virtual ::java::util::Vector* getSources() = 0;
    virtual Raster* getTile(int32_t tileX, int32_t tileY) = 0;
    virtual int32_t getTileGridXOffset() = 0;
    virtual int32_t getTileGridYOffset() = 0;
    virtual int32_t getTileHeight() = 0;
    virtual int32_t getTileWidth() = 0;
    virtual int32_t getWidth() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
