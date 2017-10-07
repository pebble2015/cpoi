// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/geom/Path2D_Iterator.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::geom::Path2D_Iterator::Path2D_Iterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::geom::Path2D_Iterator::Path2D_Iterator(Path2D* path)
    : Path2D_Iterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(path);
}

int32_tArray*& java::awt::geom::Path2D_Iterator::curvecoords()
{
    clinit();
    return curvecoords_;
}
int32_tArray* java::awt::geom::Path2D_Iterator::curvecoords_;

void ::java::awt::geom::Path2D_Iterator::ctor(Path2D* path)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Path2D_Iterator::ctor(Path2D* path)");
}

int32_t java::awt::geom::Path2D_Iterator::getWindingRule()
{ /* stub */
    unimplemented_(u"int32_t java::awt::geom::Path2D_Iterator::getWindingRule()");
    return 0;
}

bool java::awt::geom::Path2D_Iterator::isDone()
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Path2D_Iterator::isDone()");
    return 0;
}

void java::awt::geom::Path2D_Iterator::next()
{ /* stub */
    unimplemented_(u"void java::awt::geom::Path2D_Iterator::next()");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::geom::Path2D_Iterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.geom.Path2D.Iterator", 29);
    return c;
}

java::lang::Class* java::awt::geom::Path2D_Iterator::getClass0()
{
    return class_();
}

