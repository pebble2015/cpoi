// Generated from /POI/java/org/apache/poi/sl/draw/geom/CurveToCommand.java
#include <org/apache/poi/sl/draw/geom/CurveToCommand.hpp>

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

org::apache::poi::sl::draw::geom::CurveToCommand::CurveToCommand(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::geom::CurveToCommand::CurveToCommand(::org::apache::poi::sl::draw::binding::CTAdjPoint2D* pt1, ::org::apache::poi::sl::draw::binding::CTAdjPoint2D* pt2, ::org::apache::poi::sl::draw::binding::CTAdjPoint2D* pt3) 
    : CurveToCommand(*static_cast< ::default_init_tag* >(0))
{
    ctor(pt1,pt2,pt3);
}

void org::apache::poi::sl::draw::geom::CurveToCommand::ctor(::org::apache::poi::sl::draw::binding::CTAdjPoint2D* pt1, ::org::apache::poi::sl::draw::binding::CTAdjPoint2D* pt2, ::org::apache::poi::sl::draw::binding::CTAdjPoint2D* pt3)
{
    super::ctor();
    arg1 = npc(pt1)->getX();
    arg2 = npc(pt1)->getY();
    arg3 = npc(pt2)->getX();
    arg4 = npc(pt2)->getY();
    arg5 = npc(pt3)->getX();
    arg6 = npc(pt3)->getY();
}

void org::apache::poi::sl::draw::geom::CurveToCommand::execute(::java::awt::geom::Path2D_Double* path, Context* ctx)
{
    auto x1 = npc(ctx)->getValue(arg1);
    auto y1 = npc(ctx)->getValue(arg2);
    auto x2 = npc(ctx)->getValue(arg3);
    auto y2 = npc(ctx)->getValue(arg4);
    auto x3 = npc(ctx)->getValue(arg5);
    auto y3 = npc(ctx)->getValue(arg6);
    npc(path)->curveTo(x1, y1, x2, y2, x3, y3);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::geom::CurveToCommand::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.geom.CurveToCommand", 42);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::geom::CurveToCommand::getClass0()
{
    return class_();
}

