// Generated from /POI/java/org/apache/poi/hssf/record/cf/DataBarThreshold.java
#include <org/apache/poi/hssf/record/cf/DataBarThreshold.hpp>

poi::hssf::record::cf::DataBarThreshold::DataBarThreshold(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::cf::DataBarThreshold::DataBarThreshold() 
    : DataBarThreshold(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::cf::DataBarThreshold::DataBarThreshold(::poi::util::LittleEndianInput* in) 
    : DataBarThreshold(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void poi::hssf::record::cf::DataBarThreshold::ctor()
{
    super::ctor();
}

void poi::hssf::record::cf::DataBarThreshold::ctor(::poi::util::LittleEndianInput* in)
{
    super::ctor(in);
}

poi::hssf::record::cf::DataBarThreshold* poi::hssf::record::cf::DataBarThreshold::clone()
{
    auto rec = new DataBarThreshold();
    super::copyTo(rec);
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::cf::DataBarThreshold::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.cf.DataBarThreshold", 46);
    return c;
}

java::lang::Class* poi::hssf::record::cf::DataBarThreshold::getClass0()
{
    return class_();
}

