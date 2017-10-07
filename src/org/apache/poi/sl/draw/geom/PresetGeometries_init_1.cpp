// Generated from /POI/java/org/apache/poi/sl/draw/geom/PresetGeometries.java
#include <org/apache/poi/sl/draw/geom/PresetGeometries_init_1.hpp>

#include <java/lang/NullPointerException.hpp>
#include <javax/xml/stream/events/XMLEvent.hpp>
#include <org/apache/poi/sl/draw/geom/PresetGeometries.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::sl::draw::geom::PresetGeometries_init_1::PresetGeometries_init_1(PresetGeometries *PresetGeometries_this)
    : super(*static_cast< ::default_init_tag* >(0))
    , PresetGeometries_this(PresetGeometries_this)
{
    clinit();
    ctor();
}

bool org::apache::poi::sl::draw::geom::PresetGeometries_init_1::accept(::javax::xml::stream::events::XMLEvent* event)
{
    return npc(event)->isStartElement();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::geom::PresetGeometries_init_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::geom::PresetGeometries_init_1::getClass0()
{
    return class_();
}

