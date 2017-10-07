// Generated from /POI/java/org/apache/poi/ddf/EscherTertiaryOptRecord.java
#include <org/apache/poi/ddf/EscherTertiaryOptRecord.hpp>

#include <java/lang/String.hpp>

org::apache::poi::ddf::EscherTertiaryOptRecord::EscherTertiaryOptRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ddf::EscherTertiaryOptRecord::EscherTertiaryOptRecord()
    : EscherTertiaryOptRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int16_t org::apache::poi::ddf::EscherTertiaryOptRecord::RECORD_ID;

java::lang::String* org::apache::poi::ddf::EscherTertiaryOptRecord::getRecordName()
{
    return u"TertiaryOpt"_j;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::EscherTertiaryOptRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherTertiaryOptRecord", 42);
    return c;
}

java::lang::Class* org::apache::poi::ddf::EscherTertiaryOptRecord::getClass0()
{
    return class_();
}

