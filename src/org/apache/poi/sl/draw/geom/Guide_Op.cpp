// Generated from /POI/java/org/apache/poi/sl/draw/geom/Guide.java
#include <org/apache/poi/sl/draw/geom/Guide_Op.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/String.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
    } // lang
} // java

namespace poi
{
    namespace sl
    {
        namespace draw
        {
            namespace geom
            {
typedef ::SubArray< ::poi::sl::draw::geom::Guide_Op, ::java::lang::EnumArray > Guide_OpArray;
            } // geom
        } // draw
    } // sl
} // poi

poi::sl::draw::geom::Guide_Op::Guide_Op(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::geom::Guide_Op::Guide_Op(::java::lang::String* name, int ordinal)
    : Guide_Op(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::sl::draw::geom::Guide_Op* poi::sl::draw::geom::Guide_Op::muldiv = new ::poi::sl::draw::geom::Guide_Op(u"muldiv"_j, 0);
poi::sl::draw::geom::Guide_Op* poi::sl::draw::geom::Guide_Op::addsub = new ::poi::sl::draw::geom::Guide_Op(u"addsub"_j, 1);
poi::sl::draw::geom::Guide_Op* poi::sl::draw::geom::Guide_Op::adddiv = new ::poi::sl::draw::geom::Guide_Op(u"adddiv"_j, 2);
poi::sl::draw::geom::Guide_Op* poi::sl::draw::geom::Guide_Op::ifelse = new ::poi::sl::draw::geom::Guide_Op(u"ifelse"_j, 3);
poi::sl::draw::geom::Guide_Op* poi::sl::draw::geom::Guide_Op::val = new ::poi::sl::draw::geom::Guide_Op(u"val"_j, 4);
poi::sl::draw::geom::Guide_Op* poi::sl::draw::geom::Guide_Op::abs = new ::poi::sl::draw::geom::Guide_Op(u"abs"_j, 5);
poi::sl::draw::geom::Guide_Op* poi::sl::draw::geom::Guide_Op::sqrt = new ::poi::sl::draw::geom::Guide_Op(u"sqrt"_j, 6);
poi::sl::draw::geom::Guide_Op* poi::sl::draw::geom::Guide_Op::max = new ::poi::sl::draw::geom::Guide_Op(u"max"_j, 7);
poi::sl::draw::geom::Guide_Op* poi::sl::draw::geom::Guide_Op::min = new ::poi::sl::draw::geom::Guide_Op(u"min"_j, 8);
poi::sl::draw::geom::Guide_Op* poi::sl::draw::geom::Guide_Op::at2 = new ::poi::sl::draw::geom::Guide_Op(u"at2"_j, 9);
poi::sl::draw::geom::Guide_Op* poi::sl::draw::geom::Guide_Op::sin = new ::poi::sl::draw::geom::Guide_Op(u"sin"_j, 10);
poi::sl::draw::geom::Guide_Op* poi::sl::draw::geom::Guide_Op::cos = new ::poi::sl::draw::geom::Guide_Op(u"cos"_j, 11);
poi::sl::draw::geom::Guide_Op* poi::sl::draw::geom::Guide_Op::tan = new ::poi::sl::draw::geom::Guide_Op(u"tan"_j, 12);
poi::sl::draw::geom::Guide_Op* poi::sl::draw::geom::Guide_Op::cat2 = new ::poi::sl::draw::geom::Guide_Op(u"cat2"_j, 13);
poi::sl::draw::geom::Guide_Op* poi::sl::draw::geom::Guide_Op::sat2 = new ::poi::sl::draw::geom::Guide_Op(u"sat2"_j, 14);
poi::sl::draw::geom::Guide_Op* poi::sl::draw::geom::Guide_Op::pin = new ::poi::sl::draw::geom::Guide_Op(u"pin"_j, 15);
poi::sl::draw::geom::Guide_Op* poi::sl::draw::geom::Guide_Op::mod = new ::poi::sl::draw::geom::Guide_Op(u"mod"_j, 16);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::geom::Guide_Op::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.geom.Guide.Op", 36);
    return c;
}

poi::sl::draw::geom::Guide_Op* poi::sl::draw::geom::Guide_Op::valueOf(::java::lang::String* a0)
{
    if(abs->toString()->equals(a0))
        return abs;
    if(adddiv->toString()->equals(a0))
        return adddiv;
    if(addsub->toString()->equals(a0))
        return addsub;
    if(at2->toString()->equals(a0))
        return at2;
    if(cat2->toString()->equals(a0))
        return cat2;
    if(cos->toString()->equals(a0))
        return cos;
    if(ifelse->toString()->equals(a0))
        return ifelse;
    if(max->toString()->equals(a0))
        return max;
    if(min->toString()->equals(a0))
        return min;
    if(mod->toString()->equals(a0))
        return mod;
    if(muldiv->toString()->equals(a0))
        return muldiv;
    if(pin->toString()->equals(a0))
        return pin;
    if(sat2->toString()->equals(a0))
        return sat2;
    if(sin->toString()->equals(a0))
        return sin;
    if(sqrt->toString()->equals(a0))
        return sqrt;
    if(tan->toString()->equals(a0))
        return tan;
    if(val->toString()->equals(a0))
        return val;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::sl::draw::geom::Guide_OpArray* poi::sl::draw::geom::Guide_Op::values()
{
    return new poi::sl::draw::geom::Guide_OpArray({
        abs,
        adddiv,
        addsub,
        at2,
        cat2,
        cos,
        ifelse,
        max,
        min,
        mod,
        muldiv,
        pin,
        sat2,
        sin,
        sqrt,
        tan,
        val,
    });
}

java::lang::Class* poi::sl::draw::geom::Guide_Op::getClass0()
{
    return class_();
}

