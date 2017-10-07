// Generated from /POI/java/org/apache/poi/hssf/util/HSSFColor.java
#include <org/apache/poi/hssf/util/HSSFColor_CORAL.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_HSSFColorPredefined.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::util::HSSFColor_CORAL::HSSFColor_CORAL(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::util::HSSFColor_CORAL::HSSFColor_CORAL() 
    : HSSFColor_CORAL(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::util::HSSFColor_HSSFColorPredefined*& org::apache::poi::hssf::util::HSSFColor_CORAL::ref()
{
    clinit();
    return ref_;
}
org::apache::poi::hssf::util::HSSFColor_HSSFColorPredefined* org::apache::poi::hssf::util::HSSFColor_CORAL::ref_;

int16_t& org::apache::poi::hssf::util::HSSFColor_CORAL::index()
{
    clinit();
    return index_;
}
int16_t org::apache::poi::hssf::util::HSSFColor_CORAL::index_;

int32_t& org::apache::poi::hssf::util::HSSFColor_CORAL::index2()
{
    clinit();
    return index2_;
}
int32_t org::apache::poi::hssf::util::HSSFColor_CORAL::index2_;

int16_tArray*& org::apache::poi::hssf::util::HSSFColor_CORAL::triplet()
{
    clinit();
    return triplet_;
}
int16_tArray* org::apache::poi::hssf::util::HSSFColor_CORAL::triplet_;

java::lang::String*& org::apache::poi::hssf::util::HSSFColor_CORAL::hexString()
{
    clinit();
    return hexString_;
}
java::lang::String* org::apache::poi::hssf::util::HSSFColor_CORAL::hexString_;

void org::apache::poi::hssf::util::HSSFColor_CORAL::ctor()
{
    super::ctor(ref_);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::util::HSSFColor_CORAL::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.util.HSSFColor.CORAL", 40);
    return c;
}

void org::apache::poi::hssf::util::HSSFColor_CORAL::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        ref_ = HSSFColor_HSSFColorPredefined::CORAL;
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

java::lang::Class* org::apache::poi::hssf::util::HSSFColor_CORAL::getClass0()
{
    return class_();
}

