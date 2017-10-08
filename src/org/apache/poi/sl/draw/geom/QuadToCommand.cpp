// Generated from /POI/java/org/apache/poi/sl/draw/geom/QuadToCommand.java
#include <org/apache/poi/sl/draw/geom/QuadToCommand.hpp>

#include <java/awt/geom/Path2D_Double.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/sl/draw/binding/CTAdjPoint2D.hpp>
#include <org/apache/poi/sl/draw/geom/Context.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::sl::draw::geom::QuadToCommand::QuadToCommand(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::geom::QuadToCommand::QuadToCommand(::poi::sl::draw::binding::CTAdjPoint2D* pt1, ::poi::sl::draw::binding::CTAdjPoint2D* pt2) 
    : QuadToCommand(*static_cast< ::default_init_tag* >(0))
{
    ctor(pt1,pt2);
}

void poi::sl::draw::geom::QuadToCommand::ctor(::poi::sl::draw::binding::CTAdjPoint2D* pt1, ::poi::sl::draw::binding::CTAdjPoint2D* pt2)
{
    super::ctor();
    arg1 = npc(pt1)->getX();
    arg2 = npc(pt1)->getY();
    arg3 = npc(pt2)->getX();
    arg4 = npc(pt2)->getY();
}

void poi::sl::draw::geom::QuadToCommand::execute(::java::awt::geom::Path2D_Double* path, Context* ctx)
{
    auto x1 = npc(ctx)->getValue(arg1);
    auto y1 = npc(ctx)->getValue(arg2);
    auto x2 = npc(ctx)->getValue(arg3);
    auto y2 = npc(ctx)->getValue(arg4);
    npc(path)->quadTo(x1, y1, x2, y2);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::geom::QuadToCommand::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.geom.QuadToCommand", 41);
    return c;
}

java::lang::Class* poi::sl::draw::geom::QuadToCommand::getClass0()
{
    return class_();
}

