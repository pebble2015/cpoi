// Generated from /POI/java/org/apache/poi/sl/draw/BitmapImageRenderer.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/sl/draw/ImageRenderer.hpp>

struct default_init_tag;

class poi::sl::draw::BitmapImageRenderer
    : public virtual ::java::lang::Object
    , public virtual ImageRenderer
{

public:
    typedef ::java::lang::Object super;

private:
    static ::poi::util::POILogger* LOG_;

public: /* protected */
    ::java::awt::image::BufferedImage* img {  };

public:
    void loadImage(::java::io::InputStream* data, ::java::lang::String* contentType) /* throws(IOException) */ override;
    void loadImage(::int8_tArray* data, ::java::lang::String* contentType) /* throws(IOException) */ override;

private:
    static ::java::awt::image::BufferedImage* readImage(::java::io::InputStream* data, ::java::lang::String* contentType) /* throws(IOException) */;
    static int32_t findTruncatedBlackBox(::java::awt::image::BufferedImage* img, int32_t width, int32_t height);

public:
    ::java::awt::image::BufferedImage* getImage() override;
    ::java::awt::image::BufferedImage* getImage(::java::awt::Dimension* dim) override;
    ::java::awt::Dimension* getDimension() override;
    void setAlpha(double alpha) override;
    bool drawImage(::java::awt::Graphics2D* graphics, ::java::awt::geom::Rectangle2D* anchor) override;
    bool drawImage(::java::awt::Graphics2D* graphics, ::java::awt::geom::Rectangle2D* anchor, ::java::awt::Insets* clip) override;

    // Generated
    BitmapImageRenderer();
protected:
    BitmapImageRenderer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::poi::util::POILogger*& LOG();
    virtual ::java::lang::Class* getClass0();
};
