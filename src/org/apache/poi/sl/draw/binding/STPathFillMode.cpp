// Generated from /POI/java/org/apache/poi/sl/draw/binding/STPathFillMode.java
#include <org/apache/poi/sl/draw/binding/STPathFillMode.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
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
            namespace binding
            {
typedef ::SubArray< ::poi::sl::draw::binding::STPathFillMode, ::java::lang::EnumArray > STPathFillModeArray;
            } // binding
        } // draw
    } // sl
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::sl::draw::binding::STPathFillMode::STPathFillMode(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::binding::STPathFillMode::STPathFillMode(::java::lang::String* name, int ordinal, ::java::lang::String* v) 
    : STPathFillMode(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, v);
}

poi::sl::draw::binding::STPathFillMode* poi::sl::draw::binding::STPathFillMode::NONE = new ::poi::sl::draw::binding::STPathFillMode(u"NONE"_j, 0, u"none"_j);
poi::sl::draw::binding::STPathFillMode* poi::sl::draw::binding::STPathFillMode::NORM = new ::poi::sl::draw::binding::STPathFillMode(u"NORM"_j, 1, u"norm"_j);
poi::sl::draw::binding::STPathFillMode* poi::sl::draw::binding::STPathFillMode::LIGHTEN = new ::poi::sl::draw::binding::STPathFillMode(u"LIGHTEN"_j, 2, u"lighten"_j);
poi::sl::draw::binding::STPathFillMode* poi::sl::draw::binding::STPathFillMode::LIGHTEN_LESS = new ::poi::sl::draw::binding::STPathFillMode(u"LIGHTEN_LESS"_j, 3, u"lightenLess"_j);
poi::sl::draw::binding::STPathFillMode* poi::sl::draw::binding::STPathFillMode::DARKEN = new ::poi::sl::draw::binding::STPathFillMode(u"DARKEN"_j, 4, u"darken"_j);
poi::sl::draw::binding::STPathFillMode* poi::sl::draw::binding::STPathFillMode::DARKEN_LESS = new ::poi::sl::draw::binding::STPathFillMode(u"DARKEN_LESS"_j, 5, u"darkenLess"_j);
void poi::sl::draw::binding::STPathFillMode::ctor(::java::lang::String* name, int ordinal, ::java::lang::String* v)
{
    super::ctor(name, ordinal);
    value_ = v;
}

java::lang::String* poi::sl::draw::binding::STPathFillMode::value()
{
    return value_;
}

poi::sl::draw::binding::STPathFillMode* poi::sl::draw::binding::STPathFillMode::fromValue(::java::lang::String* v)
{
    clinit();
    for(auto c : *npc(STPathFillMode::values())) {
        if(npc(npc(c)->value_)->equals(static_cast< ::java::lang::Object* >(v))) {
            return c;
        }
    }
    throw new ::java::lang::IllegalArgumentException(v);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::binding::STPathFillMode::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.STPathFillMode", 45);
    return c;
}

poi::sl::draw::binding::STPathFillMode* poi::sl::draw::binding::STPathFillMode::valueOf(::java::lang::String* a0)
{
    if(DARKEN->toString()->equals(a0))
        return DARKEN;
    if(DARKEN_LESS->toString()->equals(a0))
        return DARKEN_LESS;
    if(LIGHTEN->toString()->equals(a0))
        return LIGHTEN;
    if(LIGHTEN_LESS->toString()->equals(a0))
        return LIGHTEN_LESS;
    if(NONE->toString()->equals(a0))
        return NONE;
    if(NORM->toString()->equals(a0))
        return NORM;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::sl::draw::binding::STPathFillModeArray* poi::sl::draw::binding::STPathFillMode::values()
{
    return new poi::sl::draw::binding::STPathFillModeArray({
        DARKEN,
        DARKEN_LESS,
        LIGHTEN,
        LIGHTEN_LESS,
        NONE,
        NORM,
    });
}

java::lang::Class* poi::sl::draw::binding::STPathFillMode::getClass0()
{
    return class_();
}

