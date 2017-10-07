// Generated from /POI/java/org/apache/poi/common/usermodel/fonts/FontGroup.java
#include <org/apache/poi/common/usermodel/fonts/FontGroup_Range.hpp>

#include <org/apache/poi/common/usermodel/fonts/FontGroup.hpp>

org::apache::poi::common::usermodel::fonts::FontGroup_Range::FontGroup_Range(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::common::usermodel::fonts::FontGroup_Range::FontGroup_Range(int32_t upper, FontGroup* fontGroup) 
    : FontGroup_Range(*static_cast< ::default_init_tag* >(0))
{
    ctor(upper,fontGroup);
}

void org::apache::poi::common::usermodel::fonts::FontGroup_Range::ctor(int32_t upper, FontGroup* fontGroup)
{
    super::ctor();
    this->upper = upper;
    this->fontGroup = fontGroup;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::common::usermodel::fonts::FontGroup_Range::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.common.usermodel.fonts.FontGroup.Range", 53);
    return c;
}

java::lang::Class* org::apache::poi::common::usermodel::fonts::FontGroup_Range::getClass0()
{
    return class_();
}

