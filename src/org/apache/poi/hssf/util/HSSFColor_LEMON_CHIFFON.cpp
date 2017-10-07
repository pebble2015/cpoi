// Generated from /POI/java/org/apache/poi/hssf/util/HSSFColor.java
#include <org/apache/poi/hssf/util/HSSFColor_LEMON_CHIFFON.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_HSSFColorPredefined.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::util::HSSFColor_LEMON_CHIFFON::HSSFColor_LEMON_CHIFFON(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::util::HSSFColor_LEMON_CHIFFON::HSSFColor_LEMON_CHIFFON() 
    : HSSFColor_LEMON_CHIFFON(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::util::HSSFColor_HSSFColorPredefined*& org::apache::poi::hssf::util::HSSFColor_LEMON_CHIFFON::ref()
{
    clinit();
    return ref_;
}
org::apache::poi::hssf::util::HSSFColor_HSSFColorPredefined* org::apache::poi::hssf::util::HSSFColor_LEMON_CHIFFON::ref_;

int16_t& org::apache::poi::hssf::util::HSSFColor_LEMON_CHIFFON::index()
{
    clinit();
    return index_;
}
int16_t org::apache::poi::hssf::util::HSSFColor_LEMON_CHIFFON::index_;

int32_t& org::apache::poi::hssf::util::HSSFColor_LEMON_CHIFFON::index2()
{
    clinit();
    return index2_;
}
int32_t org::apache::poi::hssf::util::HSSFColor_LEMON_CHIFFON::index2_;

int16_tArray*& org::apache::poi::hssf::util::HSSFColor_LEMON_CHIFFON::triplet()
{
    clinit();
    return triplet_;
}
int16_tArray* org::apache::poi::hssf::util::HSSFColor_LEMON_CHIFFON::triplet_;

java::lang::String*& org::apache::poi::hssf::util::HSSFColor_LEMON_CHIFFON::hexString()
{
    clinit();
    return hexString_;
}
java::lang::String* org::apache::poi::hssf::util::HSSFColor_LEMON_CHIFFON::hexString_;

void org::apache::poi::hssf::util::HSSFColor_LEMON_CHIFFON::ctor()
{
    super::ctor(ref_);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::util::HSSFColor_LEMON_CHIFFON::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.util.HSSFColor.LEMON_CHIFFON", 48);
    return c;
}

void org::apache::poi::hssf::util::HSSFColor_LEMON_CHIFFON::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        ref_ = HSSFColor_HSSFColorPredefined::LEMON_CHIFFON;
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

java::lang::Class* org::apache::poi::hssf::util::HSSFColor_LEMON_CHIFFON::getClass0()
{
    return class_();
}

