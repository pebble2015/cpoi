// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPresetGeometry2D.java
#include <org/apache/poi/sl/draw/binding/CTPresetGeometry2D.hpp>

#include <org/apache/poi/sl/draw/binding/CTGeomGuideList.hpp>
#include <org/apache/poi/sl/draw/binding/STShapeType.hpp>

org::apache::poi::sl::draw::binding::CTPresetGeometry2D::CTPresetGeometry2D(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::CTPresetGeometry2D::CTPresetGeometry2D()
    : CTPresetGeometry2D(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::sl::draw::binding::CTGeomGuideList* org::apache::poi::sl::draw::binding::CTPresetGeometry2D::getAvLst()
{
    return avLst;
}

void org::apache::poi::sl::draw::binding::CTPresetGeometry2D::setAvLst(CTGeomGuideList* value)
{
    this->avLst = value;
}

bool org::apache::poi::sl::draw::binding::CTPresetGeometry2D::isSetAvLst()
{
    return (this->avLst != nullptr);
}

org::apache::poi::sl::draw::binding::STShapeType* org::apache::poi::sl::draw::binding::CTPresetGeometry2D::getPrst()
{
    return prst;
}

void org::apache::poi::sl::draw::binding::CTPresetGeometry2D::setPrst(STShapeType* value)
{
    this->prst = value;
}

bool org::apache::poi::sl::draw::binding::CTPresetGeometry2D::isSetPrst()
{
    return (this->prst != nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::CTPresetGeometry2D::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTPresetGeometry2D", 49);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::binding::CTPresetGeometry2D::getClass0()
{
    return class_();
}

