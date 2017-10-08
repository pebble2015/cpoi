// Generated from /POI/java/org/apache/poi/hssf/record/RecordBase.java
#include <org/apache/poi/hssf/record/RecordBase.hpp>

poi::hssf::record::RecordBase::RecordBase(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::RecordBase::RecordBase()
    : RecordBase(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::RecordBase::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.RecordBase", 37);
    return c;
}

java::lang::Class* poi::hssf::record::RecordBase::getClass0()
{
    return class_();
}

