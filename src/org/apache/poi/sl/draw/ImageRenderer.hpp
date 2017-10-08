// Generated from /POI/java/org/apache/poi/sl/draw/ImageRenderer.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::sl::draw::ImageRenderer
    : public virtual ::java::lang::Object
{
    virtual void loadImage(::java::io::InputStream* data, ::java::lang::String* contentType) /* throws(IOException) */ = 0;
    virtual void loadImage(::int8_tArray* data, ::java::lang::String* contentType) /* throws(IOException) */ = 0;
    virtual ::java::awt::Dimension* getDimension() = 0;
    virtual void setAlpha(double alpha) = 0;
    virtual ::java::awt::image::BufferedImage* getImage() = 0;
    virtual ::java::awt::image::BufferedImage* getImage(::java::awt::Dimension* dim) = 0;
    virtual bool drawImage(::java::awt::Graphics2D* graphics, ::java::awt::geom::Rectangle2D* anchor) = 0;
    virtual bool drawImage(::java::awt::Graphics2D* graphics, ::java::awt::geom::Rectangle2D* anchor, ::java::awt::Insets* clip) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
