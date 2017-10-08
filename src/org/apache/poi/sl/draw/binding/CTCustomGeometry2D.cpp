// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTCustomGeometry2D.java
#include <org/apache/poi/sl/draw/binding/CTCustomGeometry2D.hpp>

#include <org/apache/poi/sl/draw/binding/CTAdjustHandleList.hpp>
#include <org/apache/poi/sl/draw/binding/CTConnectionSiteList.hpp>
#include <org/apache/poi/sl/draw/binding/CTGeomGuideList.hpp>
#include <org/apache/poi/sl/draw/binding/CTGeomRect.hpp>
#include <org/apache/poi/sl/draw/binding/CTPath2DList.hpp>

poi::sl::draw::binding::CTCustomGeometry2D::CTCustomGeometry2D(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::binding::CTCustomGeometry2D::CTCustomGeometry2D()
    : CTCustomGeometry2D(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::sl::draw::binding::CTGeomGuideList* poi::sl::draw::binding::CTCustomGeometry2D::getAvLst()
{
    return avLst;
}

void poi::sl::draw::binding::CTCustomGeometry2D::setAvLst(CTGeomGuideList* value)
{
    this->avLst = value;
}

bool poi::sl::draw::binding::CTCustomGeometry2D::isSetAvLst()
{
    return (this->avLst != nullptr);
}

poi::sl::draw::binding::CTGeomGuideList* poi::sl::draw::binding::CTCustomGeometry2D::getGdLst()
{
    return gdLst;
}

void poi::sl::draw::binding::CTCustomGeometry2D::setGdLst(CTGeomGuideList* value)
{
    this->gdLst = value;
}

bool poi::sl::draw::binding::CTCustomGeometry2D::isSetGdLst()
{
    return (this->gdLst != nullptr);
}

poi::sl::draw::binding::CTAdjustHandleList* poi::sl::draw::binding::CTCustomGeometry2D::getAhLst()
{
    return ahLst;
}

void poi::sl::draw::binding::CTCustomGeometry2D::setAhLst(CTAdjustHandleList* value)
{
    this->ahLst = value;
}

bool poi::sl::draw::binding::CTCustomGeometry2D::isSetAhLst()
{
    return (this->ahLst != nullptr);
}

poi::sl::draw::binding::CTConnectionSiteList* poi::sl::draw::binding::CTCustomGeometry2D::getCxnLst()
{
    return cxnLst;
}

void poi::sl::draw::binding::CTCustomGeometry2D::setCxnLst(CTConnectionSiteList* value)
{
    this->cxnLst = value;
}

bool poi::sl::draw::binding::CTCustomGeometry2D::isSetCxnLst()
{
    return (this->cxnLst != nullptr);
}

poi::sl::draw::binding::CTGeomRect* poi::sl::draw::binding::CTCustomGeometry2D::getRect()
{
    return rect;
}

void poi::sl::draw::binding::CTCustomGeometry2D::setRect(CTGeomRect* value)
{
    this->rect = value;
}

bool poi::sl::draw::binding::CTCustomGeometry2D::isSetRect()
{
    return (this->rect != nullptr);
}

poi::sl::draw::binding::CTPath2DList* poi::sl::draw::binding::CTCustomGeometry2D::getPathLst()
{
    return pathLst;
}

void poi::sl::draw::binding::CTCustomGeometry2D::setPathLst(CTPath2DList* value)
{
    this->pathLst = value;
}

bool poi::sl::draw::binding::CTCustomGeometry2D::isSetPathLst()
{
    return (this->pathLst != nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::binding::CTCustomGeometry2D::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTCustomGeometry2D", 49);
    return c;
}

java::lang::Class* poi::sl::draw::binding::CTCustomGeometry2D::getClass0()
{
    return class_();
}

