// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPath2DMoveTo.java
#include <org/apache/poi/sl/draw/binding/CTPath2DMoveTo.hpp>

#include <org/apache/poi/sl/draw/binding/CTAdjPoint2D.hpp>

org::apache::poi::sl::draw::binding::CTPath2DMoveTo::CTPath2DMoveTo(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::CTPath2DMoveTo::CTPath2DMoveTo()
    : CTPath2DMoveTo(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::sl::draw::binding::CTAdjPoint2D* org::apache::poi::sl::draw::binding::CTPath2DMoveTo::getPt()
{
    return pt;
}

void org::apache::poi::sl::draw::binding::CTPath2DMoveTo::setPt(CTAdjPoint2D* value)
{
    this->pt = value;
}

bool org::apache::poi::sl::draw::binding::CTPath2DMoveTo::isSetPt()
{
    return (this->pt != nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::CTPath2DMoveTo::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTPath2DMoveTo", 45);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::binding::CTPath2DMoveTo::getClass0()
{
    return class_();
}

