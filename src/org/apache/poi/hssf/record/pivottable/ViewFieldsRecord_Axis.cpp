// Generated from /POI/java/org/apache/poi/hssf/record/pivottable/ViewFieldsRecord.java
#include <org/apache/poi/hssf/record/pivottable/ViewFieldsRecord_Axis.hpp>

org::apache::poi::hssf::record::pivottable::ViewFieldsRecord_Axis::ViewFieldsRecord_Axis(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::pivottable::ViewFieldsRecord_Axis::ViewFieldsRecord_Axis()
    : ViewFieldsRecord_Axis(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t org::apache::poi::hssf::record::pivottable::ViewFieldsRecord_Axis::NO_AXIS;

constexpr int32_t org::apache::poi::hssf::record::pivottable::ViewFieldsRecord_Axis::ROW;

constexpr int32_t org::apache::poi::hssf::record::pivottable::ViewFieldsRecord_Axis::COLUMN;

constexpr int32_t org::apache::poi::hssf::record::pivottable::ViewFieldsRecord_Axis::PAGE;

constexpr int32_t org::apache::poi::hssf::record::pivottable::ViewFieldsRecord_Axis::DATA;

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::pivottable::ViewFieldsRecord_Axis::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.pivottable.ViewFieldsRecord.Axis", 59);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::pivottable::ViewFieldsRecord_Axis::getClass0()
{
    return class_();
}

