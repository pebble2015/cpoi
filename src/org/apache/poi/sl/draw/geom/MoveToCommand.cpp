// Generated from /POI/java/org/apache/poi/sl/draw/geom/MoveToCommand.java
#include <org/apache/poi/sl/draw/geom/MoveToCommand.hpp>

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

org::apache::poi::sl::draw::geom::MoveToCommand::MoveToCommand(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::geom::MoveToCommand::MoveToCommand(::org::apache::poi::sl::draw::binding::CTAdjPoint2D* pt) 
    : MoveToCommand(*static_cast< ::default_init_tag* >(0))
{
    ctor(pt);
}

org::apache::poi::sl::draw::geom::MoveToCommand::MoveToCommand(::java::lang::String* s1, ::java::lang::String* s2) 
    : MoveToCommand(*static_cast< ::default_init_tag* >(0))
{
    ctor(s1,s2);
}

void org::apache::poi::sl::draw::geom::MoveToCommand::ctor(::org::apache::poi::sl::draw::binding::CTAdjPoint2D* pt)
{
    super::ctor();
    arg1 = npc(pt)->getX();
    arg2 = npc(pt)->getY();
}

void org::apache::poi::sl::draw::geom::MoveToCommand::ctor(::java::lang::String* s1, ::java::lang::String* s2)
{
    super::ctor();
    arg1 = s1;
    arg2 = s2;
}

void org::apache::poi::sl::draw::geom::MoveToCommand::execute(::java::awt::geom::Path2D_Double* path, Context* ctx)
{
    auto x = npc(ctx)->getValue(arg1);
    auto y = npc(ctx)->getValue(arg2);
    npc(path)->moveTo(x, y);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::geom::MoveToCommand::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.geom.MoveToCommand", 41);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::geom::MoveToCommand::getClass0()
{
    return class_();
}

