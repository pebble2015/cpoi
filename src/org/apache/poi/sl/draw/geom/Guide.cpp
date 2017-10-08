// Generated from /POI/java/org/apache/poi/sl/draw/geom/Guide.java
#include <org/apache/poi/sl/draw/geom/Guide.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/sl/draw/binding/CTGeomGuide.hpp>
#include <org/apache/poi/sl/draw/geom/Context.hpp>
#include <org/apache/poi/sl/draw/geom/Guide_Op.hpp>
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
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::sl::draw::geom::Guide::Guide(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::geom::Guide::Guide(::poi::sl::draw::binding::CTGeomGuide* gd) 
    : Guide(*static_cast< ::default_init_tag* >(0))
{
    ctor(gd);
}

poi::sl::draw::geom::Guide::Guide(::java::lang::String* nm, ::java::lang::String* fm) 
    : Guide(*static_cast< ::default_init_tag* >(0))
{
    ctor(nm,fm);
}

void poi::sl::draw::geom::Guide::ctor(::poi::sl::draw::binding::CTGeomGuide* gd)
{
    ctor(npc(gd)->getName(), npc(gd)->getFmla());
}

void poi::sl::draw::geom::Guide::ctor(::java::lang::String* nm, ::java::lang::String* fm)
{
    super::ctor();
    name = nm;
    fmla = fm;
    operands = npc(fm)->split(u"\\s+"_j);
    op = Guide_Op::valueOf(npc(npc(npc(npc(npc((*operands)[int32_t(0)])->replace(static_cast< ::java::lang::CharSequence* >(u"*"_j), static_cast< ::java::lang::CharSequence* >(u"mul"_j)))->replace(static_cast< ::java::lang::CharSequence* >(u"/"_j), static_cast< ::java::lang::CharSequence* >(u"div"_j)))->replace(static_cast< ::java::lang::CharSequence* >(u"+"_j), static_cast< ::java::lang::CharSequence* >(u"add"_j)))->replace(static_cast< ::java::lang::CharSequence* >(u"-"_j), static_cast< ::java::lang::CharSequence* >(u"sub"_j)))->replace(static_cast< ::java::lang::CharSequence* >(u"?:"_j), static_cast< ::java::lang::CharSequence* >(u"ifelse"_j)));
}

java::lang::String* poi::sl::draw::geom::Guide::getName()
{
    return name;
}

java::lang::String* poi::sl::draw::geom::Guide::getFormula()
{
    return fmla;
}

double poi::sl::draw::geom::Guide::evaluate(Context* ctx)
{
    auto x = (npc(operands)->length > 1) ? npc(ctx)->getValue((*operands)[int32_t(1)]) : static_cast< double >(int32_t(0));
    auto y = (npc(operands)->length > 2) ? npc(ctx)->getValue((*operands)[int32_t(2)]) : static_cast< double >(int32_t(0));
    auto z = (npc(operands)->length > 3) ? npc(ctx)->getValue((*operands)[int32_t(3)]) : static_cast< double >(int32_t(0));
    {
        auto v = op;
        if((v == Guide_Op::abs)) {
            return ::java::lang::Math::abs(x);
        }
        if((v == Guide_Op::adddiv)) {
            return (x + y) / z;
        }
        if((v == Guide_Op::addsub)) {
            return (x + y) - z;
        }
        if((v == Guide_Op::at2)) {
            return ::java::lang::Math::toDegrees(::java::lang::Math::atan2(y, x)) * OOXML_DEGREE;
        }
        if((v == Guide_Op::cos)) {
            return x * ::java::lang::Math::cos(::java::lang::Math::toRadians(y / OOXML_DEGREE));
        }
        if((v == Guide_Op::cat2)) {
            return x * ::java::lang::Math::cos(::java::lang::Math::atan2(z, y));
        }
        if((v == Guide_Op::ifelse)) {
            return x > 0 ? y : z;
        }
        if((v == Guide_Op::val)) {
            return x;
        }
        if((v == Guide_Op::max)) {
            return ::java::lang::Math::max(x, y);
        }
        if((v == Guide_Op::min)) {
            return ::java::lang::Math::min(x, y);
        }
        if((v == Guide_Op::mod)) {
            return ::java::lang::Math::sqrt(x * x + y * y + z * z);
        }
        if((v == Guide_Op::muldiv)) {
            return (x * y) / z;
        }
        if((v == Guide_Op::pin)) {
            if(y < x) {
                return x;
            } else if(y > z) {
                return z;
            } else {
                return y;
            }
        }
        if((v == Guide_Op::pin) || (v == Guide_Op::sat2)) {
            return x * ::java::lang::Math::sin(::java::lang::Math::atan2(z, y));
        }
        if((v == Guide_Op::sin)) {
            return x * ::java::lang::Math::sin(::java::lang::Math::toRadians(y / OOXML_DEGREE));
        }
        if((v == Guide_Op::sqrt)) {
            return ::java::lang::Math::sqrt(x);
        }
        if((v == Guide_Op::tan)) {
            return x * ::java::lang::Math::tan(::java::lang::Math::toRadians(y / OOXML_DEGREE));
        }
        if((((v != Guide_Op::abs) && (v != Guide_Op::adddiv) && (v != Guide_Op::addsub) && (v != Guide_Op::at2) && (v != Guide_Op::cos) && (v != Guide_Op::cat2) && (v != Guide_Op::ifelse) && (v != Guide_Op::val) && (v != Guide_Op::max) && (v != Guide_Op::min) && (v != Guide_Op::mod) && (v != Guide_Op::muldiv) && (v != Guide_Op::pin) && (v != Guide_Op::sat2) && (v != Guide_Op::sin) && (v != Guide_Op::sqrt) && (v != Guide_Op::tan)))) {
            return 0;
        }
end_switch0:;
    }

}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::geom::Guide::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.geom.Guide", 33);
    return c;
}

java::lang::Class* poi::sl::draw::geom::Guide::getClass0()
{
    return class_();
}

