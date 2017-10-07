// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/geom/Path2D_Float_CopyIterator.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::geom::Path2D_Float_CopyIterator::Path2D_Float_CopyIterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::geom::Path2D_Float_CopyIterator::Path2D_Float_CopyIterator(Path2D_Float* p2df)
    : Path2D_Float_CopyIterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(p2df);
}


void ::java::awt::geom::Path2D_Float_CopyIterator::ctor(Path2D_Float* p2df)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Path2D_Float_CopyIterator::ctor(Path2D_Float* p2df)");
}

int32_t java::awt::geom::Path2D_Float_CopyIterator::currentSegment(::floatArray* coords)
{ /* stub */
    unimplemented_(u"int32_t java::awt::geom::Path2D_Float_CopyIterator::currentSegment(::floatArray* coords)");
    return 0;
}

int32_t java::awt::geom::Path2D_Float_CopyIterator::currentSegment(::doubleArray* coords)
{ /* stub */
    unimplemented_(u"int32_t java::awt::geom::Path2D_Float_CopyIterator::currentSegment(::doubleArray* coords)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::geom::Path2D_Float_CopyIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.geom.Path2D.Float.CopyIterator", 39);
    return c;
}

java::lang::Class* java::awt::geom::Path2D_Float_CopyIterator::getClass0()
{
    return class_();
}

