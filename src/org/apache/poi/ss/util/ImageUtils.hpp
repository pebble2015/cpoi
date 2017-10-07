// Generated from /POI/java/org/apache/poi/ss/util/ImageUtils.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <javax/imageio/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::util::ImageUtils
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::org::apache::poi::util::POILogger* logger_;

public:
    static constexpr int32_t PIXEL_DPI { int32_t(96) };
    static ::java::awt::Dimension* getImageDimension(::java::io::InputStream* is, int32_t type);
    static ::int32_tArray* getResolution(::javax::imageio::ImageReader* r) /* throws(IOException) */;
    static ::java::awt::Dimension* setPreferredSize(::org::apache::poi::ss::usermodel::Picture* picture, double scaleX, double scaleY);
    static ::java::awt::Dimension* getDimensionFromAnchor(::org::apache::poi::ss::usermodel::Picture* picture);
    static double getRowHeightInPixels(::org::apache::poi::ss::usermodel::Sheet* sheet, int32_t rowNum);

    // Generated
    ImageUtils();
protected:
    ImageUtils(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::org::apache::poi::util::POILogger*& logger();
    virtual ::java::lang::Class* getClass0();
};
