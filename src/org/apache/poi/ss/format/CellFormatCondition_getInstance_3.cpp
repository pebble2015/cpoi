// Generated from /POI/java/org/apache/poi/ss/format/CellFormatCondition.java
#include <org/apache/poi/ss/format/CellFormatCondition_getInstance_3.hpp>

org::apache::poi::ss::format::CellFormatCondition_getInstance_3::CellFormatCondition_getInstance_3(double c)
    : super(*static_cast< ::default_init_tag* >(0))
    , c(c)
{
    clinit();
    ctor();
}

bool org::apache::poi::ss::format::CellFormatCondition_getInstance_3::pass(double value)
{
    return value > c;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::format::CellFormatCondition_getInstance_3::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* org::apache::poi::ss::format::CellFormatCondition_getInstance_3::getClass0()
{
    return class_();
}

