// Generated from /POI/java/org/apache/poi/hssf/util/HSSFColor.java
#include <org/apache/poi/hssf/util/HSSFColor_TAN.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_HSSFColorPredefined.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::util::HSSFColor_TAN::HSSFColor_TAN(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::util::HSSFColor_TAN::HSSFColor_TAN() 
    : HSSFColor_TAN(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::util::HSSFColor_HSSFColorPredefined*& org::apache::poi::hssf::util::HSSFColor_TAN::ref()
{
    clinit();
    return ref_;
}
org::apache::poi::hssf::util::HSSFColor_HSSFColorPredefined* org::apache::poi::hssf::util::HSSFColor_TAN::ref_;

int16_t& org::apache::poi::hssf::util::HSSFColor_TAN::index()
{
    clinit();
    return index_;
}
int16_t org::apache::poi::hssf::util::HSSFColor_TAN::index_;

int32_t& org::apache::poi::hssf::util::HSSFColor_TAN::index2()
{
    clinit();
    return index2_;
}
int32_t org::apache::poi::hssf::util::HSSFColor_TAN::index2_;

int16_tArray*& org::apache::poi::hssf::util::HSSFColor_TAN::triplet()
{
    clinit();
    return triplet_;
}
int16_tArray* org::apache::poi::hssf::util::HSSFColor_TAN::triplet_;

java::lang::String*& org::apache::poi::hssf::util::HSSFColor_TAN::hexString()
{
    clinit();
    return hexString_;
}
java::lang::String* org::apache::poi::hssf::util::HSSFColor_TAN::hexString_;

void org::apache::poi::hssf::util::HSSFColor_TAN::ctor()
{
    super::ctor(ref_);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::util::HSSFColor_TAN::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.util.HSSFColor.TAN", 38);
    return c;
}

void org::apache::poi::hssf::util::HSSFColor_TAN::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        ref_ = HSSFColor_HSSFColorPredefined::TAN;
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

java::lang::Class* org::apache::poi::hssf::util::HSSFColor_TAN::getClass0()
{
    return class_();
}

