// Generated from /POI/java/org/apache/poi/util/PngUtils.java
#include <org/apache/poi/util/PngUtils.hpp>

#include <java/lang/NullPointerException.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::util::PngUtils::PngUtils(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::util::PngUtils::PngUtils() 
    : PngUtils(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int8_tArray*& org::apache::poi::util::PngUtils::PNG_FILE_HEADER()
{
    clinit();
    return PNG_FILE_HEADER_;
}
int8_tArray* org::apache::poi::util::PngUtils::PNG_FILE_HEADER_;

void org::apache::poi::util::PngUtils::ctor()
{
    super::ctor();
}

bool org::apache::poi::util::PngUtils::matchesPngHeader(::int8_tArray* data, int32_t offset)
{
    clinit();
    if(data == nullptr || npc(data)->length - offset < npc(PNG_FILE_HEADER_)->length) {
        return false;
    }
    for (auto i = int32_t(0); i < npc(PNG_FILE_HEADER_)->length; i++) {
        if((*PNG_FILE_HEADER_)[i] != (*data)[i + offset]) {
            return false;
        }
    }
    return true;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::util::PngUtils::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.PngUtils", 28);
    return c;
}

void org::apache::poi::util::PngUtils::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        PNG_FILE_HEADER_ = new ::int8_tArray({
            static_cast< int8_t >(int32_t(137))
            , static_cast< int8_t >(int32_t(80))
            , static_cast< int8_t >(int32_t(78))
            , static_cast< int8_t >(int32_t(71))
            , static_cast< int8_t >(int32_t(13))
            , static_cast< int8_t >(int32_t(10))
            , static_cast< int8_t >(int32_t(26))
            , static_cast< int8_t >(int32_t(10))
        });
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::util::PngUtils::getClass0()
{
    return class_();
}

