// Generated from /POI/java/org/apache/poi/sl/draw/DrawAutoShape.java
#include <org/apache/poi/sl/draw/DrawAutoShape.hpp>

#include <org/apache/poi/sl/usermodel/AutoShape.hpp>

org::apache::poi::sl::draw::DrawAutoShape::DrawAutoShape(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::DrawAutoShape::DrawAutoShape(::org::apache::poi::sl::usermodel::AutoShape* shape) 
    : DrawAutoShape(*static_cast< ::default_init_tag* >(0))
{
    ctor(shape);
}

void org::apache::poi::sl::draw::DrawAutoShape::ctor(::org::apache::poi::sl::usermodel::AutoShape* shape)
{
    super::ctor(shape);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::DrawAutoShape::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.DrawAutoShape", 36);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::DrawAutoShape::getClass0()
{
    return class_();
}

