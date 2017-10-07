// Generated from /POI/java/org/apache/poi/ddf/EscherShapePathProperty.java
#include <org/apache/poi/ddf/EscherShapePathProperty.hpp>

org::apache::poi::ddf::EscherShapePathProperty::EscherShapePathProperty(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ddf::EscherShapePathProperty::EscherShapePathProperty(int16_t propertyNumber, int32_t shapePath) 
    : EscherShapePathProperty(*static_cast< ::default_init_tag* >(0))
{
    ctor(propertyNumber,shapePath);
}

constexpr int32_t org::apache::poi::ddf::EscherShapePathProperty::LINE_OF_STRAIGHT_SEGMENTS;

constexpr int32_t org::apache::poi::ddf::EscherShapePathProperty::CLOSED_POLYGON;

constexpr int32_t org::apache::poi::ddf::EscherShapePathProperty::CURVES;

constexpr int32_t org::apache::poi::ddf::EscherShapePathProperty::CLOSED_CURVES;

constexpr int32_t org::apache::poi::ddf::EscherShapePathProperty::COMPLEX;

void org::apache::poi::ddf::EscherShapePathProperty::ctor(int16_t propertyNumber, int32_t shapePath)
{
    super::ctor(propertyNumber, false, false, shapePath);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::EscherShapePathProperty::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherShapePathProperty", 42);
    return c;
}

java::lang::Class* org::apache::poi::ddf::EscherShapePathProperty::getClass0()
{
    return class_();
}

