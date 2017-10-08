// Generated from /POI/java/org/apache/poi/hssf/model/InternalSheet.java
#include <org/apache/poi/hssf/model/InternalSheet_UnsupportedBOFType.hpp>

#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

poi::hssf::model::InternalSheet_UnsupportedBOFType::InternalSheet_UnsupportedBOFType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::model::InternalSheet_UnsupportedBOFType::InternalSheet_UnsupportedBOFType(int32_t type) 
    : InternalSheet_UnsupportedBOFType(*static_cast< ::default_init_tag* >(0))
{
    ctor(type);
}

void poi::hssf::model::InternalSheet_UnsupportedBOFType::ctor(int32_t type)
{
    super::ctor(::java::lang::StringBuilder().append(u"BOF not of a supported type, found "_j)->append(type)->toString());
    this->type = type;
}

int32_t poi::hssf::model::InternalSheet_UnsupportedBOFType::getType()
{
    return type;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::model::InternalSheet_UnsupportedBOFType::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.model.InternalSheet.UnsupportedBOFType", 58);
    return c;
}

java::lang::Class* poi::hssf::model::InternalSheet_UnsupportedBOFType::getClass0()
{
    return class_();
}

