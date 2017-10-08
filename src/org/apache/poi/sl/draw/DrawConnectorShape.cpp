// Generated from /POI/java/org/apache/poi/sl/draw/DrawConnectorShape.java
#include <org/apache/poi/sl/draw/DrawConnectorShape.hpp>

#include <org/apache/poi/sl/usermodel/ConnectorShape.hpp>

poi::sl::draw::DrawConnectorShape::DrawConnectorShape(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::DrawConnectorShape::DrawConnectorShape(::poi::sl::usermodel::ConnectorShape* shape) 
    : DrawConnectorShape(*static_cast< ::default_init_tag* >(0))
{
    ctor(shape);
}

void poi::sl::draw::DrawConnectorShape::ctor(::poi::sl::usermodel::ConnectorShape* shape)
{
    super::ctor(shape);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::DrawConnectorShape::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.DrawConnectorShape", 41);
    return c;
}

java::lang::Class* poi::sl::draw::DrawConnectorShape::getClass0()
{
    return class_();
}

