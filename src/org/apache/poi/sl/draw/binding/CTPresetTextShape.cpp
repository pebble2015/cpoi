// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPresetTextShape.java
#include <org/apache/poi/sl/draw/binding/CTPresetTextShape.hpp>

#include <org/apache/poi/sl/draw/binding/CTGeomGuideList.hpp>
#include <org/apache/poi/sl/draw/binding/STTextShapeType.hpp>

poi::sl::draw::binding::CTPresetTextShape::CTPresetTextShape(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::binding::CTPresetTextShape::CTPresetTextShape()
    : CTPresetTextShape(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::sl::draw::binding::CTGeomGuideList* poi::sl::draw::binding::CTPresetTextShape::getAvLst()
{
    return avLst;
}

void poi::sl::draw::binding::CTPresetTextShape::setAvLst(CTGeomGuideList* value)
{
    this->avLst = value;
}

bool poi::sl::draw::binding::CTPresetTextShape::isSetAvLst()
{
    return (this->avLst != nullptr);
}

poi::sl::draw::binding::STTextShapeType* poi::sl::draw::binding::CTPresetTextShape::getPrst()
{
    return prst;
}

void poi::sl::draw::binding::CTPresetTextShape::setPrst(STTextShapeType* value)
{
    this->prst = value;
}

bool poi::sl::draw::binding::CTPresetTextShape::isSetPrst()
{
    return (this->prst != nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::binding::CTPresetTextShape::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTPresetTextShape", 48);
    return c;
}

java::lang::Class* poi::sl::draw::binding::CTPresetTextShape::getClass0()
{
    return class_();
}

