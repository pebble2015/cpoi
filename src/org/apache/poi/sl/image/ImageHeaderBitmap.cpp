// Generated from /POI/java/org/apache/poi/sl/image/ImageHeaderBitmap.java
#include <org/apache/poi/sl/image/ImageHeaderBitmap.hpp>

#include <java/awt/Dimension.hpp>
#include <java/awt/image/BufferedImage.hpp>
#include <java/io/ByteArrayInputStream.hpp>
#include <java/io/IOException.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <javax/imageio/ImageIO.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <org/apache/poi/util/Units.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::sl::image::ImageHeaderBitmap::ImageHeaderBitmap(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::image::ImageHeaderBitmap::ImageHeaderBitmap(::int8_tArray* data, int32_t offset) 
    : ImageHeaderBitmap(*static_cast< ::default_init_tag* >(0))
{
    ctor(data,offset);
}

poi::util::POILogger*& poi::sl::image::ImageHeaderBitmap::LOG()
{
    clinit();
    return LOG_;
}
poi::util::POILogger* poi::sl::image::ImageHeaderBitmap::LOG_;

void poi::sl::image::ImageHeaderBitmap::ctor(::int8_tArray* data, int32_t offset)
{
    super::ctor();
    ::java::awt::image::BufferedImage* img = nullptr;
    try {
        img = ::javax::imageio::ImageIO::read(static_cast< ::java::io::InputStream* >(new ::java::io::ByteArrayInputStream(data, offset, npc(data)->length - offset)));
    } catch (::java::io::IOException* e) {
        npc(LOG_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Can't determine image dimensions"_j), static_cast< ::java::lang::Object* >(e)}));
    }
    size = (img == nullptr) ? new ::java::awt::Dimension(int32_t(200), int32_t(200)) : new ::java::awt::Dimension(static_cast< int32_t >(::poi::util::Units::pixelToPoints(npc(img)->getWidth())), static_cast< int32_t >(::poi::util::Units::pixelToPoints(npc(img)->getHeight())));
}

java::awt::Dimension* poi::sl::image::ImageHeaderBitmap::getSize()
{
    return size;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::image::ImageHeaderBitmap::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.image.ImageHeaderBitmap", 41);
    return c;
}

void poi::sl::image::ImageHeaderBitmap::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOG_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(ImageHeaderBitmap::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::sl::image::ImageHeaderBitmap::getClass0()
{
    return class_();
}

