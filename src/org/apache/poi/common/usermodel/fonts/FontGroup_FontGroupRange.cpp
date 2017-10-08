// Generated from /POI/java/org/apache/poi/common/usermodel/fonts/FontGroup.java
#include <org/apache/poi/common/usermodel/fonts/FontGroup_FontGroupRange.hpp>

#include <org/apache/poi/common/usermodel/fonts/FontGroup.hpp>

poi::common::usermodel::fonts::FontGroup_FontGroupRange::FontGroup_FontGroupRange(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::common::usermodel::fonts::FontGroup_FontGroupRange::FontGroup_FontGroupRange()
    : FontGroup_FontGroupRange(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_t poi::common::usermodel::fonts::FontGroup_FontGroupRange::getLength()
{
    return len;
}

poi::common::usermodel::fonts::FontGroup* poi::common::usermodel::fonts::FontGroup_FontGroupRange::getFontGroup()
{
    return fontGroup;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::common::usermodel::fonts::FontGroup_FontGroupRange::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.common.usermodel.fonts.FontGroup.FontGroupRange", 62);
    return c;
}

java::lang::Class* poi::common::usermodel::fonts::FontGroup_FontGroupRange::getClass0()
{
    return class_();
}

