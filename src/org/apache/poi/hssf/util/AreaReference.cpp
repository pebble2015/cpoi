// Generated from /POI/java/org/apache/poi/hssf/util/AreaReference.java
#include <org/apache/poi/hssf/util/AreaReference.hpp>

#include <org/apache/poi/hssf/util/CellReference.hpp>
#include <org/apache/poi/ss/SpreadsheetVersion.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>

poi::hssf::util::AreaReference::AreaReference(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::util::AreaReference::AreaReference(::java::lang::String* reference) 
    : AreaReference(*static_cast< ::default_init_tag* >(0))
{
    ctor(reference);
}

poi::hssf::util::AreaReference::AreaReference(CellReference* topLeft, CellReference* botRight) 
    : AreaReference(*static_cast< ::default_init_tag* >(0))
{
    ctor(topLeft,botRight);
}

void poi::hssf::util::AreaReference::ctor(::java::lang::String* reference)
{
    super::ctor(reference, ::poi::ss::SpreadsheetVersion::EXCEL97);
}

void poi::hssf::util::AreaReference::ctor(CellReference* topLeft, CellReference* botRight)
{
    super::ctor(static_cast< ::poi::ss::util::CellReference* >(topLeft), static_cast< ::poi::ss::util::CellReference* >(botRight));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::util::AreaReference::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.util.AreaReference", 38);
    return c;
}

java::lang::Class* poi::hssf::util::AreaReference::getClass0()
{
    return class_();
}

