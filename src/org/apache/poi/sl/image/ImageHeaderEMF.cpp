// Generated from /POI/java/org/apache/poi/sl/image/ImageHeaderEMF.java
#include <org/apache/poi/sl/image/ImageHeaderEMF.hpp>

#include <java/awt/Dimension.hpp>
#include <java/awt/Rectangle.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/LocaleUtil.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::sl::image::ImageHeaderEMF::ImageHeaderEMF(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::image::ImageHeaderEMF::ImageHeaderEMF(::int8_tArray* data, int32_t off) 
    : ImageHeaderEMF(*static_cast< ::default_init_tag* >(0))
{
    ctor(data,off);
}

poi::util::POILogger*& poi::sl::image::ImageHeaderEMF::LOG()
{
    clinit();
    return LOG_;
}
poi::util::POILogger* poi::sl::image::ImageHeaderEMF::LOG_;

java::lang::String*& poi::sl::image::ImageHeaderEMF::EMF_SIGNATURE()
{
    clinit();
    return EMF_SIGNATURE_;
}
java::lang::String* poi::sl::image::ImageHeaderEMF::EMF_SIGNATURE_;

void poi::sl::image::ImageHeaderEMF::ctor(::int8_tArray* data, int32_t off)
{
    super::ctor();
    auto offset = off;
    auto type = static_cast< int32_t >(::poi::util::LittleEndian::getUInt(data, offset));
    offset += 4;
    if(type != 1) {
        npc(LOG_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Invalid EMF picture - invalid type"_j)}));
        deviceBounds = new ::java::awt::Rectangle(int32_t(0), int32_t(0), int32_t(200), int32_t(200));
        return;
    }
    offset += 4;
    auto left = ::poi::util::LittleEndian::getInt(data, offset);
    offset += 4;
    auto top = ::poi::util::LittleEndian::getInt(data, offset);
    offset += 4;
    auto right = ::poi::util::LittleEndian::getInt(data, offset);
    offset += 4;
    auto bottom = ::poi::util::LittleEndian::getInt(data, offset);
    offset += 4;
    deviceBounds = new ::java::awt::Rectangle(left, top, right - left, bottom - top);
    offset += 16;
    auto signature = new ::java::lang::String(data, offset, npc(EMF_SIGNATURE_)->length(), ::poi::util::LocaleUtil::CHARSET_1252());
    if(!npc(EMF_SIGNATURE_)->equals(static_cast< ::java::lang::Object* >(signature))) {
        npc(LOG_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Invalid EMF picture - invalid signature"_j)}));
    }
}

java::awt::Dimension* poi::sl::image::ImageHeaderEMF::getSize()
{
    return npc(deviceBounds)->getSize();
}

java::awt::Rectangle* poi::sl::image::ImageHeaderEMF::getBounds()
{
    return deviceBounds;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::image::ImageHeaderEMF::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.image.ImageHeaderEMF", 38);
    return c;
}

void poi::sl::image::ImageHeaderEMF::clinit()
{
struct string_init_ {
    string_init_() {
    EMF_SIGNATURE_ = u" EMF"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOG_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(ImageHeaderEMF::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::sl::image::ImageHeaderEMF::getClass0()
{
    return class_();
}

