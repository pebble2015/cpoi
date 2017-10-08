// Generated from /POI/java/org/apache/poi/sl/draw/DrawSimpleShape.java
#include <org/apache/poi/sl/draw/DrawSimpleShape_getCustomGeometry_1.hpp>

#include <java/lang/NullPointerException.hpp>
#include <javax/xml/stream/events/XMLEvent.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::sl::draw::DrawSimpleShape_getCustomGeometry_1::DrawSimpleShape_getCustomGeometry_1()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

bool poi::sl::draw::DrawSimpleShape_getCustomGeometry_1::accept(::javax::xml::stream::events::XMLEvent* event)
{
    return npc(event)->isStartElement();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::DrawSimpleShape_getCustomGeometry_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::sl::draw::DrawSimpleShape_getCustomGeometry_1::getClass0()
{
    return class_();
}

