// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPath2DLineTo.java
#include <org/apache/poi/sl/draw/binding/CTPath2DLineTo.hpp>

#include <org/apache/poi/sl/draw/binding/CTAdjPoint2D.hpp>

poi::sl::draw::binding::CTPath2DLineTo::CTPath2DLineTo(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::binding::CTPath2DLineTo::CTPath2DLineTo()
    : CTPath2DLineTo(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::sl::draw::binding::CTAdjPoint2D* poi::sl::draw::binding::CTPath2DLineTo::getPt()
{
    return pt;
}

void poi::sl::draw::binding::CTPath2DLineTo::setPt(CTAdjPoint2D* value)
{
    this->pt = value;
}

bool poi::sl::draw::binding::CTPath2DLineTo::isSetPt()
{
    return (this->pt != nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::binding::CTPath2DLineTo::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTPath2DLineTo", 45);
    return c;
}

java::lang::Class* poi::sl::draw::binding::CTPath2DLineTo::getClass0()
{
    return class_();
}

