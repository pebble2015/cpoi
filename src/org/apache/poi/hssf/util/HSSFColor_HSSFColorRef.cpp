// Generated from /POI/java/org/apache/poi/hssf/util/HSSFColor.java
#include <org/apache/poi/hssf/util/HSSFColor_HSSFColorRef.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_HSSFColorPredefined.hpp>
#include <org/apache/poi/hssf/util/HSSFColor.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::util::HSSFColor_HSSFColorRef::HSSFColor_HSSFColorRef(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::util::HSSFColor_HSSFColorRef::HSSFColor_HSSFColorRef(HSSFColor_HSSFColorPredefined* colorEnum) 
    : HSSFColor_HSSFColorRef(*static_cast< ::default_init_tag* >(0))
{
    ctor(colorEnum);
}

void poi::hssf::util::HSSFColor_HSSFColorRef::ctor(HSSFColor_HSSFColorPredefined* colorEnum)
{
    super::ctor(npc(colorEnum)->getIndex(), npc(colorEnum)->getIndex2(), npc(npc(colorEnum)->color)->color);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::util::HSSFColor_HSSFColorRef::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.util.HSSFColor.HSSFColorRef", 47);
    return c;
}

java::lang::Class* poi::hssf::util::HSSFColor_HSSFColorRef::getClass0()
{
    return class_();
}

