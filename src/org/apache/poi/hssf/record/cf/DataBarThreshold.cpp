// Generated from /POI/java/org/apache/poi/hssf/record/cf/DataBarThreshold.java
#include <org/apache/poi/hssf/record/cf/DataBarThreshold.hpp>

org::apache::poi::hssf::record::cf::DataBarThreshold::DataBarThreshold(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::cf::DataBarThreshold::DataBarThreshold() 
    : DataBarThreshold(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::cf::DataBarThreshold::DataBarThreshold(::org::apache::poi::util::LittleEndianInput* in) 
    : DataBarThreshold(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void org::apache::poi::hssf::record::cf::DataBarThreshold::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::cf::DataBarThreshold::ctor(::org::apache::poi::util::LittleEndianInput* in)
{
    super::ctor(in);
}

org::apache::poi::hssf::record::cf::DataBarThreshold* org::apache::poi::hssf::record::cf::DataBarThreshold::clone()
{
    auto rec = new DataBarThreshold();
    super::copyTo(rec);
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::cf::DataBarThreshold::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.cf.DataBarThreshold", 46);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::cf::DataBarThreshold::getClass0()
{
    return class_();
}

