// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/awt/image/RenderedImage.hpp>

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
} // java

struct java::awt::image::WritableRenderedImage
    : public virtual RenderedImage
{

    virtual void addTileObserver(TileObserver* to) = 0;
    virtual WritableRaster* getWritableTile(int32_t tileX, int32_t tileY) = 0;
    virtual ::java::awt::PointArray* getWritableTileIndices() = 0;
    virtual bool hasTileWriters() = 0;
    virtual bool isTileWritable(int32_t tileX, int32_t tileY) = 0;
    virtual void releaseWritableTile(int32_t tileX, int32_t tileY) = 0;
    virtual void removeTileObserver(TileObserver* to) = 0;
    virtual void setData(Raster* r) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
