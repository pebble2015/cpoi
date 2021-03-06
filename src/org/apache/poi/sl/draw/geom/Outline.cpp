// Generated from /POI/java/org/apache/poi/sl/draw/geom/Outline.java
#include <org/apache/poi/sl/draw/geom/Outline.hpp>

#include <java/awt/Shape.hpp>
#include <org/apache/poi/sl/draw/geom/Path.hpp>

poi::sl::draw::geom::Outline::Outline(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::geom::Outline::Outline(::java::awt::Shape* shape, Path* path) 
    : Outline(*static_cast< ::default_init_tag* >(0))
{
    ctor(shape,path);
}

void poi::sl::draw::geom::Outline::ctor(::java::awt::Shape* shape, Path* path)
{
    super::ctor();
    this->shape = shape;
    this->path = path;
}

poi::sl::draw::geom::Path* poi::sl::draw::geom::Outline::getPath()
{
    return path;
}

java::awt::Shape* poi::sl::draw::geom::Outline::getOutline()
{
    return shape;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::geom::Outline::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.geom.Outline", 35);
    return c;
}

java::lang::Class* poi::sl::draw::geom::Outline::getClass0()
{
    return class_();
}

