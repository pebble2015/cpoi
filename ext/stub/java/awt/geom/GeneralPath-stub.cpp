// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/geom/GeneralPath.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::geom::GeneralPath::GeneralPath(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::geom::GeneralPath::GeneralPath()
    : GeneralPath(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::awt::geom::GeneralPath::GeneralPath(int32_t rule)
    : GeneralPath(*static_cast< ::default_init_tag* >(0))
{
    ctor(rule);
}

java::awt::geom::GeneralPath::GeneralPath(::java::awt::Shape* s)
    : GeneralPath(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

java::awt::geom::GeneralPath::GeneralPath(int32_t rule, int32_t initialCapacity)
    : GeneralPath(*static_cast< ::default_init_tag* >(0))
{
    ctor(rule, initialCapacity);
}

java::awt::geom::GeneralPath::GeneralPath(int32_t windingRule, ::int8_tArray* pointTypes, int32_t numTypes, ::floatArray* pointCoords, int32_t numCoords)
    : GeneralPath(*static_cast< ::default_init_tag* >(0))
{
    ctor(windingRule, pointTypes, numTypes, pointCoords, numCoords);
}

constexpr int64_t java::awt::geom::GeneralPath::serialVersionUID;

void ::java::awt::geom::GeneralPath::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::GeneralPath::ctor()");
}

void ::java::awt::geom::GeneralPath::ctor(int32_t rule)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::GeneralPath::ctor(int32_t rule)");
}

void ::java::awt::geom::GeneralPath::ctor(::java::awt::Shape* s)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::GeneralPath::ctor(::java::awt::Shape* s)");
}

void ::java::awt::geom::GeneralPath::ctor(int32_t rule, int32_t initialCapacity)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::GeneralPath::ctor(int32_t rule, int32_t initialCapacity)");
}

void ::java::awt::geom::GeneralPath::ctor(int32_t windingRule, ::int8_tArray* pointTypes, int32_t numTypes, ::floatArray* pointCoords, int32_t numCoords)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::GeneralPath::ctor(int32_t windingRule, ::int8_tArray* pointTypes, int32_t numTypes, ::floatArray* pointCoords, int32_t numCoords)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::geom::GeneralPath::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.geom.GeneralPath", 25);
    return c;
}

java::lang::Class* java::awt::geom::GeneralPath::getClass0()
{
    return class_();
}

