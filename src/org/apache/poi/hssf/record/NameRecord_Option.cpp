// Generated from /POI/java/org/apache/poi/hssf/record/NameRecord.java
#include <org/apache/poi/hssf/record/NameRecord_Option.hpp>

org::apache::poi::hssf::record::NameRecord_Option::NameRecord_Option(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::NameRecord_Option::NameRecord_Option()
    : NameRecord_Option(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t org::apache::poi::hssf::record::NameRecord_Option::OPT_HIDDEN_NAME;

constexpr int32_t org::apache::poi::hssf::record::NameRecord_Option::OPT_FUNCTION_NAME;

constexpr int32_t org::apache::poi::hssf::record::NameRecord_Option::OPT_COMMAND_NAME;

constexpr int32_t org::apache::poi::hssf::record::NameRecord_Option::OPT_MACRO;

constexpr int32_t org::apache::poi::hssf::record::NameRecord_Option::OPT_COMPLEX;

constexpr int32_t org::apache::poi::hssf::record::NameRecord_Option::OPT_BUILTIN;

constexpr int32_t org::apache::poi::hssf::record::NameRecord_Option::OPT_BINDATA;

bool org::apache::poi::hssf::record::NameRecord_Option::isFormula(int32_t optValue)
{
    clinit();
    return (optValue & int32_t(15)) == 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::NameRecord_Option::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.NameRecord.Option", 44);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::NameRecord_Option::getClass0()
{
    return class_();
}

