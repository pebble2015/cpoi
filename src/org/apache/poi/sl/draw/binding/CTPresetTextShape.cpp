// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPresetTextShape.java
#include <org/apache/poi/sl/draw/binding/CTPresetTextShape.hpp>

#include <org/apache/poi/sl/draw/binding/CTGeomGuideList.hpp>
#include <org/apache/poi/sl/draw/binding/STTextShapeType.hpp>

org::apache::poi::sl::draw::binding::CTPresetTextShape::CTPresetTextShape(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::CTPresetTextShape::CTPresetTextShape()
    : CTPresetTextShape(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::sl::draw::binding::CTGeomGuideList* org::apache::poi::sl::draw::binding::CTPresetTextShape::getAvLst()
{
    return avLst;
}

void org::apache::poi::sl::draw::binding::CTPresetTextShape::setAvLst(CTGeomGuideList* value)
{
    this->avLst = value;
}

bool org::apache::poi::sl::draw::binding::CTPresetTextShape::isSetAvLst()
{
    return (this->avLst != nullptr);
}

org::apache::poi::sl::draw::binding::STTextShapeType* org::apache::poi::sl::draw::binding::CTPresetTextShape::getPrst()
{
    return prst;
}

void org::apache::poi::sl::draw::binding::CTPresetTextShape::setPrst(STTextShapeType* value)
{
    this->prst = value;
}

bool org::apache::poi::sl::draw::binding::CTPresetTextShape::isSetPrst()
{
    return (this->prst != nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::CTPresetTextShape::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTPresetTextShape", 48);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::binding::CTPresetTextShape::getClass0()
{
    return class_();
}

