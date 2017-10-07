// Generated from /POI/java/org/apache/poi/hssf/util/AreaReference.java
#include <org/apache/poi/hssf/util/AreaReference.hpp>

#include <org/apache/poi/hssf/util/CellReference.hpp>
#include <org/apache/poi/ss/SpreadsheetVersion.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>

org::apache::poi::hssf::util::AreaReference::AreaReference(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::util::AreaReference::AreaReference(::java::lang::String* reference) 
    : AreaReference(*static_cast< ::default_init_tag* >(0))
{
    ctor(reference);
}

org::apache::poi::hssf::util::AreaReference::AreaReference(CellReference* topLeft, CellReference* botRight) 
    : AreaReference(*static_cast< ::default_init_tag* >(0))
{
    ctor(topLeft,botRight);
}

void org::apache::poi::hssf::util::AreaReference::ctor(::java::lang::String* reference)
{
    super::ctor(reference, ::org::apache::poi::ss::SpreadsheetVersion::EXCEL97);
}

void org::apache::poi::hssf::util::AreaReference::ctor(CellReference* topLeft, CellReference* botRight)
{
    super::ctor(static_cast< ::org::apache::poi::ss::util::CellReference* >(topLeft), static_cast< ::org::apache::poi::ss::util::CellReference* >(botRight));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::util::AreaReference::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.util.AreaReference", 38);
    return c;
}

java::lang::Class* org::apache::poi::hssf::util::AreaReference::getClass0()
{
    return class_();
}

