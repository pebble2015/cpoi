// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTCustomGeometry2D.java
#include <org/apache/poi/sl/draw/binding/CTCustomGeometry2D.hpp>

#include <org/apache/poi/sl/draw/binding/CTAdjustHandleList.hpp>
#include <org/apache/poi/sl/draw/binding/CTConnectionSiteList.hpp>
#include <org/apache/poi/sl/draw/binding/CTGeomGuideList.hpp>
#include <org/apache/poi/sl/draw/binding/CTGeomRect.hpp>
#include <org/apache/poi/sl/draw/binding/CTPath2DList.hpp>

org::apache::poi::sl::draw::binding::CTCustomGeometry2D::CTCustomGeometry2D(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::CTCustomGeometry2D::CTCustomGeometry2D()
    : CTCustomGeometry2D(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::sl::draw::binding::CTGeomGuideList* org::apache::poi::sl::draw::binding::CTCustomGeometry2D::getAvLst()
{
    return avLst;
}

void org::apache::poi::sl::draw::binding::CTCustomGeometry2D::setAvLst(CTGeomGuideList* value)
{
    this->avLst = value;
}

bool org::apache::poi::sl::draw::binding::CTCustomGeometry2D::isSetAvLst()
{
    return (this->avLst != nullptr);
}

org::apache::poi::sl::draw::binding::CTGeomGuideList* org::apache::poi::sl::draw::binding::CTCustomGeometry2D::getGdLst()
{
    return gdLst;
}

void org::apache::poi::sl::draw::binding::CTCustomGeometry2D::setGdLst(CTGeomGuideList* value)
{
    this->gdLst = value;
}

bool org::apache::poi::sl::draw::binding::CTCustomGeometry2D::isSetGdLst()
{
    return (this->gdLst != nullptr);
}

org::apache::poi::sl::draw::binding::CTAdjustHandleList* org::apache::poi::sl::draw::binding::CTCustomGeometry2D::getAhLst()
{
    return ahLst;
}

void org::apache::poi::sl::draw::binding::CTCustomGeometry2D::setAhLst(CTAdjustHandleList* value)
{
    this->ahLst = value;
}

bool org::apache::poi::sl::draw::binding::CTCustomGeometry2D::isSetAhLst()
{
    return (this->ahLst != nullptr);
}

org::apache::poi::sl::draw::binding::CTConnectionSiteList* org::apache::poi::sl::draw::binding::CTCustomGeometry2D::getCxnLst()
{
    return cxnLst;
}

void org::apache::poi::sl::draw::binding::CTCustomGeometry2D::setCxnLst(CTConnectionSiteList* value)
{
    this->cxnLst = value;
}

bool org::apache::poi::sl::draw::binding::CTCustomGeometry2D::isSetCxnLst()
{
    return (this->cxnLst != nullptr);
}

org::apache::poi::sl::draw::binding::CTGeomRect* org::apache::poi::sl::draw::binding::CTCustomGeometry2D::getRect()
{
    return rect;
}

void org::apache::poi::sl::draw::binding::CTCustomGeometry2D::setRect(CTGeomRect* value)
{
    this->rect = value;
}

bool org::apache::poi::sl::draw::binding::CTCustomGeometry2D::isSetRect()
{
    return (this->rect != nullptr);
}

org::apache::poi::sl::draw::binding::CTPath2DList* org::apache::poi::sl::draw::binding::CTCustomGeometry2D::getPathLst()
{
    return pathLst;
}

void org::apache::poi::sl::draw::binding::CTCustomGeometry2D::setPathLst(CTPath2DList* value)
{
    this->pathLst = value;
}

bool org::apache::poi::sl::draw::binding::CTCustomGeometry2D::isSetPathLst()
{
    return (this->pathLst != nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::CTCustomGeometry2D::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTCustomGeometry2D", 49);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::binding::CTCustomGeometry2D::getClass0()
{
    return class_();
}

