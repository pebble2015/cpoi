// Generated from /POI/java/org/apache/poi/hssf/extractor/ExcelExtractor.java
#include <org/apache/poi/hssf/extractor/ExcelExtractor_CommandParseException.hpp>

org::apache::poi::hssf::extractor::ExcelExtractor_CommandParseException::ExcelExtractor_CommandParseException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::extractor::ExcelExtractor_CommandParseException::ExcelExtractor_CommandParseException(::java::lang::String* msg) 
    : ExcelExtractor_CommandParseException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg);
}

void org::apache::poi::hssf::extractor::ExcelExtractor_CommandParseException::ctor(::java::lang::String* msg)
{
    super::ctor(msg);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::extractor::ExcelExtractor_CommandParseException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.extractor.ExcelExtractor.CommandParseException", 66);
    return c;
}

java::lang::Class* org::apache::poi::hssf::extractor::ExcelExtractor_CommandParseException::getClass0()
{
    return class_();
}

