// Generated from /POI/java/org/apache/poi/sl/draw/binding/STBlackWhiteMode.java
#include <org/apache/poi/sl/draw/binding/STBlackWhiteMode.hpp>

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

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace sl
            {
                namespace draw
                {
                    namespace binding
                    {
typedef ::SubArray< ::org::apache::poi::sl::draw::binding::STBlackWhiteMode, ::java::lang::EnumArray > STBlackWhiteModeArray;
                    } // binding
                } // draw
            } // sl
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::sl::draw::binding::STBlackWhiteMode::STBlackWhiteMode(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::STBlackWhiteMode::STBlackWhiteMode(::java::lang::String* name, int ordinal, ::java::lang::String* v) 
    : STBlackWhiteMode(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, v);
}

org::apache::poi::sl::draw::binding::STBlackWhiteMode* org::apache::poi::sl::draw::binding::STBlackWhiteMode::CLR = new ::org::apache::poi::sl::draw::binding::STBlackWhiteMode(u"CLR"_j, 0, u"clr"_j);
org::apache::poi::sl::draw::binding::STBlackWhiteMode* org::apache::poi::sl::draw::binding::STBlackWhiteMode::AUTO = new ::org::apache::poi::sl::draw::binding::STBlackWhiteMode(u"AUTO"_j, 1, u"auto"_j);
org::apache::poi::sl::draw::binding::STBlackWhiteMode* org::apache::poi::sl::draw::binding::STBlackWhiteMode::GRAY = new ::org::apache::poi::sl::draw::binding::STBlackWhiteMode(u"GRAY"_j, 2, u"gray"_j);
org::apache::poi::sl::draw::binding::STBlackWhiteMode* org::apache::poi::sl::draw::binding::STBlackWhiteMode::LT_GRAY = new ::org::apache::poi::sl::draw::binding::STBlackWhiteMode(u"LT_GRAY"_j, 3, u"ltGray"_j);
org::apache::poi::sl::draw::binding::STBlackWhiteMode* org::apache::poi::sl::draw::binding::STBlackWhiteMode::INV_GRAY = new ::org::apache::poi::sl::draw::binding::STBlackWhiteMode(u"INV_GRAY"_j, 4, u"invGray"_j);
org::apache::poi::sl::draw::binding::STBlackWhiteMode* org::apache::poi::sl::draw::binding::STBlackWhiteMode::GRAY_WHITE = new ::org::apache::poi::sl::draw::binding::STBlackWhiteMode(u"GRAY_WHITE"_j, 5, u"grayWhite"_j);
org::apache::poi::sl::draw::binding::STBlackWhiteMode* org::apache::poi::sl::draw::binding::STBlackWhiteMode::BLACK_GRAY = new ::org::apache::poi::sl::draw::binding::STBlackWhiteMode(u"BLACK_GRAY"_j, 6, u"blackGray"_j);
org::apache::poi::sl::draw::binding::STBlackWhiteMode* org::apache::poi::sl::draw::binding::STBlackWhiteMode::BLACK_WHITE = new ::org::apache::poi::sl::draw::binding::STBlackWhiteMode(u"BLACK_WHITE"_j, 7, u"blackWhite"_j);
org::apache::poi::sl::draw::binding::STBlackWhiteMode* org::apache::poi::sl::draw::binding::STBlackWhiteMode::BLACK = new ::org::apache::poi::sl::draw::binding::STBlackWhiteMode(u"BLACK"_j, 8, u"black"_j);
org::apache::poi::sl::draw::binding::STBlackWhiteMode* org::apache::poi::sl::draw::binding::STBlackWhiteMode::WHITE = new ::org::apache::poi::sl::draw::binding::STBlackWhiteMode(u"WHITE"_j, 9, u"white"_j);
org::apache::poi::sl::draw::binding::STBlackWhiteMode* org::apache::poi::sl::draw::binding::STBlackWhiteMode::HIDDEN = new ::org::apache::poi::sl::draw::binding::STBlackWhiteMode(u"HIDDEN"_j, 10, u"hidden"_j);
void org::apache::poi::sl::draw::binding::STBlackWhiteMode::ctor(::java::lang::String* name, int ordinal, ::java::lang::String* v)
{
    super::ctor(name, ordinal);
    value_ = v;
}

java::lang::String* org::apache::poi::sl::draw::binding::STBlackWhiteMode::value()
{
    return value_;
}

org::apache::poi::sl::draw::binding::STBlackWhiteMode* org::apache::poi::sl::draw::binding::STBlackWhiteMode::fromValue(::java::lang::String* v)
{
    clinit();
    for(auto c : *npc(STBlackWhiteMode::values())) {
        if(npc(npc(c)->value_)->equals(static_cast< ::java::lang::Object* >(v))) {
            return c;
        }
    }
    throw new ::java::lang::IllegalArgumentException(v);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::STBlackWhiteMode::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.STBlackWhiteMode", 47);
    return c;
}

org::apache::poi::sl::draw::binding::STBlackWhiteMode* org::apache::poi::sl::draw::binding::STBlackWhiteMode::valueOf(::java::lang::String* a0)
{
    if(AUTO->toString()->equals(a0))
        return AUTO;
    if(BLACK->toString()->equals(a0))
        return BLACK;
    if(BLACK_GRAY->toString()->equals(a0))
        return BLACK_GRAY;
    if(BLACK_WHITE->toString()->equals(a0))
        return BLACK_WHITE;
    if(CLR->toString()->equals(a0))
        return CLR;
    if(GRAY->toString()->equals(a0))
        return GRAY;
    if(GRAY_WHITE->toString()->equals(a0))
        return GRAY_WHITE;
    if(HIDDEN->toString()->equals(a0))
        return HIDDEN;
    if(INV_GRAY->toString()->equals(a0))
        return INV_GRAY;
    if(LT_GRAY->toString()->equals(a0))
        return LT_GRAY;
    if(WHITE->toString()->equals(a0))
        return WHITE;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::sl::draw::binding::STBlackWhiteModeArray* org::apache::poi::sl::draw::binding::STBlackWhiteMode::values()
{
    return new org::apache::poi::sl::draw::binding::STBlackWhiteModeArray({
        AUTO,
        BLACK,
        BLACK_GRAY,
        BLACK_WHITE,
        CLR,
        GRAY,
        GRAY_WHITE,
        HIDDEN,
        INV_GRAY,
        LT_GRAY,
        WHITE,
    });
}

java::lang::Class* org::apache::poi::sl::draw::binding::STBlackWhiteMode::getClass0()
{
    return class_();
}

