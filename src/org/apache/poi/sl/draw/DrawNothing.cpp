// Generated from /POI/java/org/apache/poi/sl/draw/DrawNothing.java
#include <org/apache/poi/sl/draw/DrawNothing.hpp>

#include <org/apache/poi/sl/usermodel/Shape.hpp>

org::apache::poi::sl::draw::DrawNothing::DrawNothing(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::DrawNothing::DrawNothing(::org::apache::poi::sl::usermodel::Shape* shape) 
    : DrawNothing(*static_cast< ::default_init_tag* >(0))
{
    ctor(shape);
}

void org::apache::poi::sl::draw::DrawNothing::ctor(::org::apache::poi::sl::usermodel::Shape* shape)
{
    super::ctor();
    this->shape = shape;
}

void org::apache::poi::sl::draw::DrawNothing::applyTransform(::java::awt::Graphics2D* graphics)
{
}

void org::apache::poi::sl::draw::DrawNothing::draw(::java::awt::Graphics2D* graphics)
{
}

void org::apache::poi::sl::draw::DrawNothing::drawContent(::java::awt::Graphics2D* context)
{
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::DrawNothing::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.DrawNothing", 34);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::DrawNothing::getClass0()
{
    return class_();
}

