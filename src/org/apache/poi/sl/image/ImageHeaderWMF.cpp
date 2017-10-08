// Generated from /POI/java/org/apache/poi/sl/image/ImageHeaderWMF.java
#include <org/apache/poi/sl/image/ImageHeaderWMF.hpp>

#include <java/awt/Dimension.hpp>
#include <java/awt/Rectangle.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
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

poi::sl::image::ImageHeaderWMF::ImageHeaderWMF(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::image::ImageHeaderWMF::ImageHeaderWMF(::java::awt::Rectangle* dim) 
    : ImageHeaderWMF(*static_cast< ::default_init_tag* >(0))
{
    ctor(dim);
}

poi::sl::image::ImageHeaderWMF::ImageHeaderWMF(::int8_tArray* data, int32_t off) 
    : ImageHeaderWMF(*static_cast< ::default_init_tag* >(0))
{
    ctor(data,off);
}

constexpr int32_t poi::sl::image::ImageHeaderWMF::APMHEADER_KEY;

poi::util::POILogger*& poi::sl::image::ImageHeaderWMF::LOG()
{
    clinit();
    return LOG_;
}
poi::util::POILogger* poi::sl::image::ImageHeaderWMF::LOG_;

void poi::sl::image::ImageHeaderWMF::ctor(::java::awt::Rectangle* dim)
{
    super::ctor();
    handle = 0;
    left = npc(dim)->x;
    top = npc(dim)->y;
    right = npc(dim)->x + npc(dim)->width;
    bottom = npc(dim)->y + npc(dim)->height;
    inch = ::poi::util::Units::POINT_DPI;
    reserved = 0;
}

void poi::sl::image::ImageHeaderWMF::ctor(::int8_tArray* data, int32_t off)
{
    super::ctor();
    auto offset = off;
    auto key = ::poi::util::LittleEndian::getInt(data, offset);
    offset += ::poi::util::LittleEndian::INT_SIZE;
    if(key != APMHEADER_KEY) {
        npc(LOG_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"WMF file doesn't contain a placeable header - ignore parsing"_j)}));
        handle = 0;
        left = 0;
        top = 0;
        right = 200;
        bottom = 200;
        inch = ::poi::util::Units::POINT_DPI;
        reserved = 0;
        return;
    }
    handle = ::poi::util::LittleEndian::getUShort(data, offset);
    offset += ::poi::util::LittleEndian::SHORT_SIZE;
    left = ::poi::util::LittleEndian::getShort(data, offset);
    offset += ::poi::util::LittleEndian::SHORT_SIZE;
    top = ::poi::util::LittleEndian::getShort(data, offset);
    offset += ::poi::util::LittleEndian::SHORT_SIZE;
    right = ::poi::util::LittleEndian::getShort(data, offset);
    offset += ::poi::util::LittleEndian::SHORT_SIZE;
    bottom = ::poi::util::LittleEndian::getShort(data, offset);
    offset += ::poi::util::LittleEndian::SHORT_SIZE;
    inch = ::poi::util::LittleEndian::getUShort(data, offset);
    offset += ::poi::util::LittleEndian::SHORT_SIZE;
    reserved = ::poi::util::LittleEndian::getInt(data, offset);
    offset += ::poi::util::LittleEndian::INT_SIZE;
    checksum = ::poi::util::LittleEndian::getShort(data, offset);
    offset += ::poi::util::LittleEndian::SHORT_SIZE;
    if(checksum != getChecksum()) {
        npc(LOG_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"WMF checksum does not match the header data"_j)}));
    }
}

int32_t poi::sl::image::ImageHeaderWMF::getChecksum()
{
    auto cs = int32_t(0);
    cs ^= (APMHEADER_KEY & int32_t(65535));
    cs ^= ((APMHEADER_KEY & int32_t(-65536)) >> int32_t(16));
    cs ^= left;
    cs ^= top;
    cs ^= right;
    cs ^= bottom;
    cs ^= inch;
    return cs;
}

void poi::sl::image::ImageHeaderWMF::write(::java::io::OutputStream* out) /* throws(IOException) */
{
    auto header = new ::int8_tArray(int32_t(22));
    auto pos = int32_t(0);
    ::poi::util::LittleEndian::putInt(header, pos, APMHEADER_KEY);
    pos += ::poi::util::LittleEndian::INT_SIZE;
    ::poi::util::LittleEndian::putUShort(header, pos, 0);
    pos += ::poi::util::LittleEndian::SHORT_SIZE;
    ::poi::util::LittleEndian::putUShort(header, pos, left);
    pos += ::poi::util::LittleEndian::SHORT_SIZE;
    ::poi::util::LittleEndian::putUShort(header, pos, top);
    pos += ::poi::util::LittleEndian::SHORT_SIZE;
    ::poi::util::LittleEndian::putUShort(header, pos, right);
    pos += ::poi::util::LittleEndian::SHORT_SIZE;
    ::poi::util::LittleEndian::putUShort(header, pos, bottom);
    pos += ::poi::util::LittleEndian::SHORT_SIZE;
    ::poi::util::LittleEndian::putUShort(header, pos, inch);
    pos += ::poi::util::LittleEndian::SHORT_SIZE;
    ::poi::util::LittleEndian::putInt(header, pos, 0);
    pos += ::poi::util::LittleEndian::INT_SIZE;
    checksum = getChecksum();
    ::poi::util::LittleEndian::putUShort(header, pos, checksum);
    npc(out)->write(header);
}

java::awt::Dimension* poi::sl::image::ImageHeaderWMF::getSize()
{
    auto coeff = (static_cast< double >(::poi::util::Units::POINT_DPI)) / inch;
    return new ::java::awt::Dimension(static_cast< int32_t >(::java::lang::Math::round((right - left) * coeff)), static_cast< int32_t >(::java::lang::Math::round((bottom - top) * coeff)));
}

java::awt::Rectangle* poi::sl::image::ImageHeaderWMF::getBounds()
{
    return new ::java::awt::Rectangle(left, top, right - left, bottom - top);
}

int32_t poi::sl::image::ImageHeaderWMF::getLength()
{
    return 22;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::image::ImageHeaderWMF::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.image.ImageHeaderWMF", 38);
    return c;
}

void poi::sl::image::ImageHeaderWMF::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOG_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(ImageHeaderWMF::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::sl::image::ImageHeaderWMF::getClass0()
{
    return class_();
}

