// Generated from /POI/java/org/apache/poi/sl/draw/geom/LineToCommand.java
#include <org/apache/poi/sl/draw/geom/LineToCommand.hpp>

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

poi::sl::draw::geom::LineToCommand::LineToCommand(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::geom::LineToCommand::LineToCommand(::poi::sl::draw::binding::CTAdjPoint2D* pt) 
    : LineToCommand(*static_cast< ::default_init_tag* >(0))
{
    ctor(pt);
}

poi::sl::draw::geom::LineToCommand::LineToCommand(::java::lang::String* s1, ::java::lang::String* s2) 
    : LineToCommand(*static_cast< ::default_init_tag* >(0))
{
    ctor(s1,s2);
}

void poi::sl::draw::geom::LineToCommand::ctor(::poi::sl::draw::binding::CTAdjPoint2D* pt)
{
    super::ctor();
    arg1 = npc(pt)->getX();
    arg2 = npc(pt)->getY();
}

void poi::sl::draw::geom::LineToCommand::ctor(::java::lang::String* s1, ::java::lang::String* s2)
{
    super::ctor();
    arg1 = s1;
    arg2 = s2;
}

void poi::sl::draw::geom::LineToCommand::execute(::java::awt::geom::Path2D_Double* path, Context* ctx)
{
    auto x = npc(ctx)->getValue(arg1);
    auto y = npc(ctx)->getValue(arg2);
    npc(path)->lineTo(x, y);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::geom::LineToCommand::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.geom.LineToCommand", 41);
    return c;
}

java::lang::Class* poi::sl::draw::geom::LineToCommand::getClass0()
{
    return class_();
}

