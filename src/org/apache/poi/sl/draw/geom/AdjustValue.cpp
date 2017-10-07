// Generated from /POI/java/org/apache/poi/sl/draw/geom/AdjustValue.java
#include <org/apache/poi/sl/draw/geom/AdjustValue.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/sl/draw/binding/CTGeomGuide.hpp>
#include <org/apache/poi/sl/draw/geom/Context.hpp>
#include <org/apache/poi/sl/draw/geom/Guide.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::sl::draw::geom::AdjustValue::AdjustValue(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::geom::AdjustValue::AdjustValue(::org::apache::poi::sl::draw::binding::CTGeomGuide* gd) 
    : AdjustValue(*static_cast< ::default_init_tag* >(0))
{
    ctor(gd);
}

void org::apache::poi::sl::draw::geom::AdjustValue::ctor(::org::apache::poi::sl::draw::binding::CTGeomGuide* gd)
{
    super::ctor(npc(gd)->getName(), npc(gd)->getFmla());
}

double org::apache::poi::sl::draw::geom::AdjustValue::evaluate(Context* ctx)
{
    auto name = getName();
    auto adj = npc(ctx)->getAdjustValue(name);
    return (adj != nullptr) ? npc(adj)->evaluate(ctx) : super::evaluate(ctx);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::geom::AdjustValue::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.geom.AdjustValue", 39);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::geom::AdjustValue::getClass0()
{
    return class_();
}

