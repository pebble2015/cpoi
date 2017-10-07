// Generated from /POI/java/org/apache/poi/sl/draw/binding/STRectAlignment.java
#include <org/apache/poi/sl/draw/binding/STRectAlignment.hpp>

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
typedef ::SubArray< ::org::apache::poi::sl::draw::binding::STRectAlignment, ::java::lang::EnumArray > STRectAlignmentArray;
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

org::apache::poi::sl::draw::binding::STRectAlignment::STRectAlignment(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::STRectAlignment::STRectAlignment(::java::lang::String* name, int ordinal, ::java::lang::String* v) 
    : STRectAlignment(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, v);
}

org::apache::poi::sl::draw::binding::STRectAlignment* org::apache::poi::sl::draw::binding::STRectAlignment::TL = new ::org::apache::poi::sl::draw::binding::STRectAlignment(u"TL"_j, 0, u"tl"_j);
org::apache::poi::sl::draw::binding::STRectAlignment* org::apache::poi::sl::draw::binding::STRectAlignment::T = new ::org::apache::poi::sl::draw::binding::STRectAlignment(u"T"_j, 1, u"t"_j);
org::apache::poi::sl::draw::binding::STRectAlignment* org::apache::poi::sl::draw::binding::STRectAlignment::TR = new ::org::apache::poi::sl::draw::binding::STRectAlignment(u"TR"_j, 2, u"tr"_j);
org::apache::poi::sl::draw::binding::STRectAlignment* org::apache::poi::sl::draw::binding::STRectAlignment::L = new ::org::apache::poi::sl::draw::binding::STRectAlignment(u"L"_j, 3, u"l"_j);
org::apache::poi::sl::draw::binding::STRectAlignment* org::apache::poi::sl::draw::binding::STRectAlignment::CTR = new ::org::apache::poi::sl::draw::binding::STRectAlignment(u"CTR"_j, 4, u"ctr"_j);
org::apache::poi::sl::draw::binding::STRectAlignment* org::apache::poi::sl::draw::binding::STRectAlignment::R = new ::org::apache::poi::sl::draw::binding::STRectAlignment(u"R"_j, 5, u"r"_j);
org::apache::poi::sl::draw::binding::STRectAlignment* org::apache::poi::sl::draw::binding::STRectAlignment::BL = new ::org::apache::poi::sl::draw::binding::STRectAlignment(u"BL"_j, 6, u"bl"_j);
org::apache::poi::sl::draw::binding::STRectAlignment* org::apache::poi::sl::draw::binding::STRectAlignment::B = new ::org::apache::poi::sl::draw::binding::STRectAlignment(u"B"_j, 7, u"b"_j);
org::apache::poi::sl::draw::binding::STRectAlignment* org::apache::poi::sl::draw::binding::STRectAlignment::BR = new ::org::apache::poi::sl::draw::binding::STRectAlignment(u"BR"_j, 8, u"br"_j);
void org::apache::poi::sl::draw::binding::STRectAlignment::ctor(::java::lang::String* name, int ordinal, ::java::lang::String* v)
{
    super::ctor(name, ordinal);
    value_ = v;
}

java::lang::String* org::apache::poi::sl::draw::binding::STRectAlignment::value()
{
    return value_;
}

org::apache::poi::sl::draw::binding::STRectAlignment* org::apache::poi::sl::draw::binding::STRectAlignment::fromValue(::java::lang::String* v)
{
    clinit();
    for(auto c : *npc(STRectAlignment::values())) {
        if(npc(npc(c)->value_)->equals(static_cast< ::java::lang::Object* >(v))) {
            return c;
        }
    }
    throw new ::java::lang::IllegalArgumentException(v);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::STRectAlignment::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.STRectAlignment", 46);
    return c;
}

org::apache::poi::sl::draw::binding::STRectAlignment* org::apache::poi::sl::draw::binding::STRectAlignment::valueOf(::java::lang::String* a0)
{
    if(B->toString()->equals(a0))
        return B;
    if(BL->toString()->equals(a0))
        return BL;
    if(BR->toString()->equals(a0))
        return BR;
    if(CTR->toString()->equals(a0))
        return CTR;
    if(L->toString()->equals(a0))
        return L;
    if(R->toString()->equals(a0))
        return R;
    if(T->toString()->equals(a0))
        return T;
    if(TL->toString()->equals(a0))
        return TL;
    if(TR->toString()->equals(a0))
        return TR;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::sl::draw::binding::STRectAlignmentArray* org::apache::poi::sl::draw::binding::STRectAlignment::values()
{
    return new org::apache::poi::sl::draw::binding::STRectAlignmentArray({
        B,
        BL,
        BR,
        CTR,
        L,
        R,
        T,
        TL,
        TR,
    });
}

java::lang::Class* org::apache::poi::sl::draw::binding::STRectAlignment::getClass0()
{
    return class_();
}

