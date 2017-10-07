// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/geom/Path2D_Double_TxIterator.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::geom::Path2D_Double_TxIterator::Path2D_Double_TxIterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::geom::Path2D_Double_TxIterator::Path2D_Double_TxIterator(Path2D_Double* p2dd, AffineTransform* at)
    : Path2D_Double_TxIterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(p2dd, at);
}


void ::java::awt::geom::Path2D_Double_TxIterator::ctor(Path2D_Double* p2dd, AffineTransform* at)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Path2D_Double_TxIterator::ctor(Path2D_Double* p2dd, AffineTransform* at)");
}

int32_t java::awt::geom::Path2D_Double_TxIterator::currentSegment(::floatArray* coords)
{ /* stub */
    unimplemented_(u"int32_t java::awt::geom::Path2D_Double_TxIterator::currentSegment(::floatArray* coords)");
    return 0;
}

int32_t java::awt::geom::Path2D_Double_TxIterator::currentSegment(::doubleArray* coords)
{ /* stub */
    unimplemented_(u"int32_t java::awt::geom::Path2D_Double_TxIterator::currentSegment(::doubleArray* coords)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::geom::Path2D_Double_TxIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.geom.Path2D.Double.TxIterator", 38);
    return c;
}

java::lang::Class* java::awt::geom::Path2D_Double_TxIterator::getClass0()
{
    return class_();
}

