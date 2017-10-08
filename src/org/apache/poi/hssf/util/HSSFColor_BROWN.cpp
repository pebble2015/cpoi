// Generated from /POI/java/org/apache/poi/hssf/util/HSSFColor.java
#include <org/apache/poi/hssf/util/HSSFColor_BROWN.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_HSSFColorPredefined.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::util::HSSFColor_BROWN::HSSFColor_BROWN(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::util::HSSFColor_BROWN::HSSFColor_BROWN() 
    : HSSFColor_BROWN(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::util::HSSFColor_HSSFColorPredefined*& poi::hssf::util::HSSFColor_BROWN::ref()
{
    clinit();
    return ref_;
}
poi::hssf::util::HSSFColor_HSSFColorPredefined* poi::hssf::util::HSSFColor_BROWN::ref_;

int16_t& poi::hssf::util::HSSFColor_BROWN::index()
{
    clinit();
    return index_;
}
int16_t poi::hssf::util::HSSFColor_BROWN::index_;

int32_t& poi::hssf::util::HSSFColor_BROWN::index2()
{
    clinit();
    return index2_;
}
int32_t poi::hssf::util::HSSFColor_BROWN::index2_;

int16_tArray*& poi::hssf::util::HSSFColor_BROWN::triplet()
{
    clinit();
    return triplet_;
}
int16_tArray* poi::hssf::util::HSSFColor_BROWN::triplet_;

java::lang::String*& poi::hssf::util::HSSFColor_BROWN::hexString()
{
    clinit();
    return hexString_;
}
java::lang::String* poi::hssf::util::HSSFColor_BROWN::hexString_;

void poi::hssf::util::HSSFColor_BROWN::ctor()
{
    super::ctor(ref_);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::util::HSSFColor_BROWN::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.util.HSSFColor.BROWN", 40);
    return c;
}

void poi::hssf::util::HSSFColor_BROWN::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        ref_ = HSSFColor_HSSFColorPredefined::BROWN;
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

java::lang::Class* poi::hssf::util::HSSFColor_BROWN::getClass0()
{
    return class_();
}

