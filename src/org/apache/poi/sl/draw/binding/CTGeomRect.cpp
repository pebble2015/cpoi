// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTGeomRect.java
#include <org/apache/poi/sl/draw/binding/CTGeomRect.hpp>

#include <java/lang/String.hpp>

poi::sl::draw::binding::CTGeomRect::CTGeomRect(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::binding::CTGeomRect::CTGeomRect()
    : CTGeomRect(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String* poi::sl::draw::binding::CTGeomRect::getL()
{
    return l;
}

void poi::sl::draw::binding::CTGeomRect::setL(::java::lang::String* value)
{
    this->l = value;
}

bool poi::sl::draw::binding::CTGeomRect::isSetL()
{
    return (this->l != nullptr);
}

java::lang::String* poi::sl::draw::binding::CTGeomRect::getT()
{
    return t;
}

void poi::sl::draw::binding::CTGeomRect::setT(::java::lang::String* value)
{
    this->t = value;
}

bool poi::sl::draw::binding::CTGeomRect::isSetT()
{
    return (this->t != nullptr);
}

java::lang::String* poi::sl::draw::binding::CTGeomRect::getR()
{
    return r;
}

void poi::sl::draw::binding::CTGeomRect::setR(::java::lang::String* value)
{
    this->r = value;
}

bool poi::sl::draw::binding::CTGeomRect::isSetR()
{
    return (this->r != nullptr);
}

java::lang::String* poi::sl::draw::binding::CTGeomRect::getB()
{
    return b;
}

void poi::sl::draw::binding::CTGeomRect::setB(::java::lang::String* value)
{
    this->b = value;
}

bool poi::sl::draw::binding::CTGeomRect::isSetB()
{
    return (this->b != nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::binding::CTGeomRect::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTGeomRect", 41);
    return c;
}

java::lang::Class* poi::sl::draw::binding::CTGeomRect::getClass0()
{
    return class_();
}

