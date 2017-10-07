// Generated from /POI/java/org/apache/poi/ss/util/CellUtil.java
#include <org/apache/poi/ss/util/CellUtil_UnicodeMapping.hpp>

#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

org::apache::poi::ss::util::CellUtil_UnicodeMapping::CellUtil_UnicodeMapping(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::util::CellUtil_UnicodeMapping::CellUtil_UnicodeMapping(::java::lang::String* pEntityName, ::java::lang::String* pResolvedValue) 
    : CellUtil_UnicodeMapping(*static_cast< ::default_init_tag* >(0))
{
    ctor(pEntityName,pResolvedValue);
}

void org::apache::poi::ss::util::CellUtil_UnicodeMapping::ctor(::java::lang::String* pEntityName, ::java::lang::String* pResolvedValue)
{
    super::ctor();
    entityName = ::java::lang::StringBuilder().append(u"&"_j)->append(pEntityName)
        ->append(u";"_j)->toString();
    resolvedValue = pResolvedValue;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::util::CellUtil_UnicodeMapping::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.CellUtil.UnicodeMapping", 46);
    return c;
}

java::lang::Class* org::apache::poi::ss::util::CellUtil_UnicodeMapping::getClass0()
{
    return class_();
}

