// Generated from /POI/java/org/apache/poi/ss/formula/ptg/AttrPtg.java
#include <org/apache/poi/ss/formula/ptg/AttrPtg_SpaceType.hpp>

org::apache::poi::ss::formula::ptg::AttrPtg_SpaceType::AttrPtg_SpaceType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::ptg::AttrPtg_SpaceType::AttrPtg_SpaceType() 
    : AttrPtg_SpaceType(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::ss::formula::ptg::AttrPtg_SpaceType::ctor()
{
    super::ctor();
}

constexpr int32_t org::apache::poi::ss::formula::ptg::AttrPtg_SpaceType::SPACE_BEFORE;

constexpr int32_t org::apache::poi::ss::formula::ptg::AttrPtg_SpaceType::CR_BEFORE;

constexpr int32_t org::apache::poi::ss::formula::ptg::AttrPtg_SpaceType::SPACE_BEFORE_OPEN_PAREN;

constexpr int32_t org::apache::poi::ss::formula::ptg::AttrPtg_SpaceType::CR_BEFORE_OPEN_PAREN;

constexpr int32_t org::apache::poi::ss::formula::ptg::AttrPtg_SpaceType::SPACE_BEFORE_CLOSE_PAREN;

constexpr int32_t org::apache::poi::ss::formula::ptg::AttrPtg_SpaceType::CR_BEFORE_CLOSE_PAREN;

constexpr int32_t org::apache::poi::ss::formula::ptg::AttrPtg_SpaceType::SPACE_AFTER_EQUALITY;

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::ptg::AttrPtg_SpaceType::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.AttrPtg.SpaceType", 47);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::ptg::AttrPtg_SpaceType::getClass0()
{
    return class_();
}

