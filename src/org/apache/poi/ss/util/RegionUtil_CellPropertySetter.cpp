// Generated from /POI/java/org/apache/poi/ss/util/RegionUtil.java
#include <org/apache/poi/ss/util/RegionUtil_CellPropertySetter.hpp>

#include <java/lang/Short.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/usermodel/BorderStyle.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/util/CellUtil.hpp>

org::apache::poi::ss::util::RegionUtil_CellPropertySetter::RegionUtil_CellPropertySetter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::util::RegionUtil_CellPropertySetter::RegionUtil_CellPropertySetter(::java::lang::String* propertyName, int32_t value) 
    : RegionUtil_CellPropertySetter(*static_cast< ::default_init_tag* >(0))
{
    ctor(propertyName,value);
}

org::apache::poi::ss::util::RegionUtil_CellPropertySetter::RegionUtil_CellPropertySetter(::java::lang::String* propertyName, ::org::apache::poi::ss::usermodel::BorderStyle* value) 
    : RegionUtil_CellPropertySetter(*static_cast< ::default_init_tag* >(0))
{
    ctor(propertyName,value);
}

void org::apache::poi::ss::util::RegionUtil_CellPropertySetter::ctor(::java::lang::String* propertyName, int32_t value)
{
    super::ctor();
    _propertyName = propertyName;
    _propertyValue = ::java::lang::Short::valueOf(static_cast< int16_t >(value));
}

void org::apache::poi::ss::util::RegionUtil_CellPropertySetter::ctor(::java::lang::String* propertyName, ::org::apache::poi::ss::usermodel::BorderStyle* value)
{
    super::ctor();
    _propertyName = propertyName;
    _propertyValue = value;
}

void org::apache::poi::ss::util::RegionUtil_CellPropertySetter::setProperty(::org::apache::poi::ss::usermodel::Row* row, int32_t column)
{
    auto cell = CellUtil::getCell(row, column);
    CellUtil::setCellStyleProperty(cell, _propertyName, _propertyValue);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::util::RegionUtil_CellPropertySetter::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.RegionUtil.CellPropertySetter", 52);
    return c;
}

java::lang::Class* org::apache::poi::ss::util::RegionUtil_CellPropertySetter::getClass0()
{
    return class_();
}

