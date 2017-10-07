// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/Polygon_PolygonPathIterator.hpp>

#include <java/awt/Polygon.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::Polygon_PolygonPathIterator::Polygon_PolygonPathIterator(Polygon *Polygon_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , Polygon_this(Polygon_this)
{
    clinit();
}

java::awt::Polygon_PolygonPathIterator::Polygon_PolygonPathIterator(Polygon *Polygon_this, Polygon* pg, ::java::awt::geom::AffineTransform* at)
    : Polygon_PolygonPathIterator(Polygon_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(pg, at);
}


void ::java::awt::Polygon_PolygonPathIterator::ctor(Polygon* pg, ::java::awt::geom::AffineTransform* at)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::Polygon_PolygonPathIterator::ctor(Polygon* pg, ::java::awt::geom::AffineTransform* at)");
}

int32_t java::awt::Polygon_PolygonPathIterator::currentSegment(::floatArray* coords)
{ /* stub */
    unimplemented_(u"int32_t java::awt::Polygon_PolygonPathIterator::currentSegment(::floatArray* coords)");
    return 0;
}

int32_t java::awt::Polygon_PolygonPathIterator::currentSegment(::doubleArray* coords)
{ /* stub */
    unimplemented_(u"int32_t java::awt::Polygon_PolygonPathIterator::currentSegment(::doubleArray* coords)");
    return 0;
}

int32_t java::awt::Polygon_PolygonPathIterator::getWindingRule()
{ /* stub */
    unimplemented_(u"int32_t java::awt::Polygon_PolygonPathIterator::getWindingRule()");
    return 0;
}

bool java::awt::Polygon_PolygonPathIterator::isDone()
{ /* stub */
    unimplemented_(u"bool java::awt::Polygon_PolygonPathIterator::isDone()");
    return 0;
}

void java::awt::Polygon_PolygonPathIterator::next()
{ /* stub */
    unimplemented_(u"void java::awt::Polygon_PolygonPathIterator::next()");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::Polygon_PolygonPathIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.Polygon.PolygonPathIterator", 36);
    return c;
}

java::lang::Class* java::awt::Polygon_PolygonPathIterator::getClass0()
{
    return class_();
}

