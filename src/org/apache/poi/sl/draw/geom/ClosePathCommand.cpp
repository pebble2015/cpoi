// Generated from /POI/java/org/apache/poi/sl/draw/geom/ClosePathCommand.java
#include <org/apache/poi/sl/draw/geom/ClosePathCommand.hpp>

#include <java/awt/geom/Path2D_Double.hpp>
#include <java/lang/NullPointerException.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::sl::draw::geom::ClosePathCommand::ClosePathCommand(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::geom::ClosePathCommand::ClosePathCommand() 
    : ClosePathCommand(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::sl::draw::geom::ClosePathCommand::ctor()
{
    super::ctor();
}

void poi::sl::draw::geom::ClosePathCommand::execute(::java::awt::geom::Path2D_Double* path, Context* ctx)
{
    npc(path)->closePath();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::geom::ClosePathCommand::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.geom.ClosePathCommand", 44);
    return c;
}

java::lang::Class* poi::sl::draw::geom::ClosePathCommand::getClass0()
{
    return class_();
}

