// Generated from /POI/java/org/apache/poi/hssf/util/HSSFColor.java
#include <org/apache/poi/hssf/util/HSSFColor_AUTOMATIC.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_HSSFColorPredefined.hpp>
#include <org/apache/poi/hssf/util/HSSFColor.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::util::HSSFColor_AUTOMATIC::HSSFColor_AUTOMATIC(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::util::HSSFColor_AUTOMATIC::HSSFColor_AUTOMATIC() 
    : HSSFColor_AUTOMATIC(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::util::HSSFColor_HSSFColorPredefined*& poi::hssf::util::HSSFColor_AUTOMATIC::ref()
{
    clinit();
    return ref_;
}
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_AUTOMATIC::ref_;

int16_t& poi::hssf::util::HSSFColor_AUTOMATIC::index()
{
    clinit();
    return index_;
}
int16_t poi::hssf::util::HSSFColor_AUTOMATIC::index_;

int32_t& poi::hssf::util::HSSFColor_AUTOMATIC::index2()
{
    clinit();
    return index2_;
}
int32_t poi::hssf::util::HSSFColor_AUTOMATIC::index2_;

int16_tArray*& poi::hssf::util::HSSFColor_AUTOMATIC::triplet()
{
    clinit();
    return triplet_;
}
int16_tArray* poi::hssf::util::HSSFColor_AUTOMATIC::triplet_;

java::lang::String*& poi::hssf::util::HSSFColor_AUTOMATIC::hexString()
{
    clinit();
    return hexString_;
}
java::lang::String* poi::hssf::util::HSSFColor_AUTOMATIC::hexString_;

void poi::hssf::util::HSSFColor_AUTOMATIC::ctor()
{
    super::ctor(ref_);
}

poi::hssf::util::HSSFColor* poi::hssf::util::HSSFColor_AUTOMATIC::getInstance()
{
    clinit();
    return npc(ref_)->color;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::util::HSSFColor_AUTOMATIC::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.util.HSSFColor.AUTOMATIC", 44);
    return c;
}

void poi::hssf::util::HSSFColor_AUTOMATIC::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        ref_ = HSSFColor_HSSFColorPredefined::AUTOMATIC;
        index_ = npc(ref_)->getIndex();
        index2_ = npc(ref_)->getIndex2();
        triplet_ = npc(ref_)->getTriplet();
        hexString_ = npc(ref_)->getHexString();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::hssf::util::HSSFColor_AUTOMATIC::getClass0()
{
    return class_();
}

