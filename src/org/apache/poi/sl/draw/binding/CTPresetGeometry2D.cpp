// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPresetGeometry2D.java
#include <org/apache/poi/sl/draw/binding/CTPresetGeometry2D.hpp>

#include <org/apache/poi/sl/draw/binding/CTGeomGuideList.hpp>
#include <org/apache/poi/sl/draw/binding/STShapeType.hpp>

poi::sl::draw::binding::CTPresetGeometry2D::CTPresetGeometry2D(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::binding::CTPresetGeometry2D::CTPresetGeometry2D()
    : CTPresetGeometry2D(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::sl::draw::binding::CTGeomGuideList* poi::sl::draw::binding::CTPresetGeometry2D::getAvLst()
{
    return avLst;
}

void poi::sl::draw::binding::CTPresetGeometry2D::setAvLst(CTGeomGuideList* value)
{
    this->avLst = value;
}

bool poi::sl::draw::binding::CTPresetGeometry2D::isSetAvLst()
{
    return (this->avLst != nullptr);
}

poi::sl::draw::binding::STShapeType* poi::sl::draw::binding::CTPresetGeometry2D::getPrst()
{
    return prst;
}

void poi::sl::draw::binding::CTPresetGeometry2D::setPrst(STShapeType* value)
{
    this->prst = value;
}

bool poi::sl::draw::binding::CTPresetGeometry2D::isSetPrst()
{
    return (this->prst != nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::binding::CTPresetGeometry2D::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTPresetGeometry2D", 49);
    return c;
}

java::lang::Class* poi::sl::draw::binding::CTPresetGeometry2D::getClass0()
{
    return class_();
}

