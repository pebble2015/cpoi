// Generated from /POI/java/org/apache/poi/sl/image/ImageHeaderPICT.java
#include <org/apache/poi/sl/image/ImageHeaderPICT.hpp>

#include <java/awt/Dimension.hpp>
#include <java/awt/Rectangle.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::sl::image::ImageHeaderPICT::ImageHeaderPICT(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::image::ImageHeaderPICT::ImageHeaderPICT(::int8_tArray* data, int32_t off) 
    : ImageHeaderPICT(*static_cast< ::default_init_tag* >(0))
{
    ctor(data,off);
}

constexpr int32_t org::apache::poi::sl::image::ImageHeaderPICT::PICT_HEADER_OFFSET;

constexpr double org::apache::poi::sl::image::ImageHeaderPICT::DEFAULT_RESOLUTION;

int8_tArray*& org::apache::poi::sl::image::ImageHeaderPICT::V2_HEADER()
{
    clinit();
    return V2_HEADER_;
}
int8_tArray* org::apache::poi::sl::image::ImageHeaderPICT::V2_HEADER_;

void org::apache::poi::sl::image::ImageHeaderPICT::ctor(::int8_tArray* data, int32_t off)
{
    super::ctor();
    auto offset = off;
    offset += 2;
    auto y1 = readUnsignedShort(data, offset);
    offset += 2;
    auto x1 = readUnsignedShort(data, offset);
    offset += 2;
    auto y2 = readUnsignedShort(data, offset);
    offset += 2;
    auto x2 = readUnsignedShort(data, offset);
    offset += 2;
    auto isV2 = true;
    for(auto b : *npc(V2_HEADER_)) {
        if(b != (*data)[offset++]) {
            isV2 = false;
            break;
        }
    }
    if(isV2) {
        hRes = readFixedPoint(data, offset);
        offset += 4;
        vRes = readFixedPoint(data, offset);
        offset += 4;
    } else {
        hRes = DEFAULT_RESOLUTION;
        vRes = DEFAULT_RESOLUTION;
    }
    bounds = new ::java::awt::Rectangle(x1, y1, x2 - x1, y2 - y1);
}

java::awt::Dimension* org::apache::poi::sl::image::ImageHeaderPICT::getSize()
{
    auto height = static_cast< int32_t >(::java::lang::Math::round(npc(bounds)->height * DEFAULT_RESOLUTION / vRes));
    auto width = static_cast< int32_t >(::java::lang::Math::round(npc(bounds)->width * DEFAULT_RESOLUTION / hRes));
    return new ::java::awt::Dimension(width, height);
}

java::awt::Rectangle* org::apache::poi::sl::image::ImageHeaderPICT::getBounds()
{
    return bounds;
}

int32_t org::apache::poi::sl::image::ImageHeaderPICT::readUnsignedShort(::int8_tArray* data, int32_t offset)
{
    clinit();
    auto b0 = (*data)[offset] & int32_t(255);
    auto b1 = (*data)[offset + int32_t(1)] & int32_t(255);
    return b0 << int32_t(8) | b1;
}

double org::apache::poi::sl::image::ImageHeaderPICT::readFixedPoint(::int8_tArray* data, int32_t offset)
{
    clinit();
    auto b0 = (*data)[offset] & int32_t(255);
    auto b1 = (*data)[offset + int32_t(1)] & int32_t(255);
    auto b2 = (*data)[offset + int32_t(2)] & int32_t(255);
    auto b3 = (*data)[offset + int32_t(3)] & int32_t(255);
    auto i = (b0 << int32_t(24)) | (b1 << int32_t(16)) | (b2 << int32_t(8))| b3;
    return i / static_cast< double >(int32_t(65536));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::image::ImageHeaderPICT::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.image.ImageHeaderPICT", 39);
    return c;
}

void org::apache::poi::sl::image::ImageHeaderPICT::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        V2_HEADER_ = (new ::int8_tArray({
            static_cast< int8_t >(int32_t(0))
            , static_cast< int8_t >(int32_t(17))
            , static_cast< int8_t >(int32_t(2))
            , static_cast< int8_t >(int32_t(255))
            , static_cast< int8_t >(int32_t(12))
            , static_cast< int8_t >(int32_t(0))
            , static_cast< int8_t >(int32_t(255))
            , static_cast< int8_t >(int32_t(254))
            , static_cast< int8_t >(int32_t(0))
            , static_cast< int8_t >(int32_t(0))
        }));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::sl::image::ImageHeaderPICT::getClass0()
{
    return class_();
}

