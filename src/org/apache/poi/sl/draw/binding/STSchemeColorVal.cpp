// Generated from /POI/java/org/apache/poi/sl/draw/binding/STSchemeColorVal.java
#include <org/apache/poi/sl/draw/binding/STSchemeColorVal.hpp>

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
typedef ::SubArray< ::org::apache::poi::sl::draw::binding::STSchemeColorVal, ::java::lang::EnumArray > STSchemeColorValArray;
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

org::apache::poi::sl::draw::binding::STSchemeColorVal::STSchemeColorVal(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::STSchemeColorVal::STSchemeColorVal(::java::lang::String* name, int ordinal, ::java::lang::String* v) 
    : STSchemeColorVal(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, v);
}

org::apache::poi::sl::draw::binding::STSchemeColorVal* org::apache::poi::sl::draw::binding::STSchemeColorVal::BG_1 = new ::org::apache::poi::sl::draw::binding::STSchemeColorVal(u"BG_1"_j, 0, u"bg1"_j);
org::apache::poi::sl::draw::binding::STSchemeColorVal* org::apache::poi::sl::draw::binding::STSchemeColorVal::TX_1 = new ::org::apache::poi::sl::draw::binding::STSchemeColorVal(u"TX_1"_j, 1, u"tx1"_j);
org::apache::poi::sl::draw::binding::STSchemeColorVal* org::apache::poi::sl::draw::binding::STSchemeColorVal::BG_2 = new ::org::apache::poi::sl::draw::binding::STSchemeColorVal(u"BG_2"_j, 2, u"bg2"_j);
org::apache::poi::sl::draw::binding::STSchemeColorVal* org::apache::poi::sl::draw::binding::STSchemeColorVal::TX_2 = new ::org::apache::poi::sl::draw::binding::STSchemeColorVal(u"TX_2"_j, 3, u"tx2"_j);
org::apache::poi::sl::draw::binding::STSchemeColorVal* org::apache::poi::sl::draw::binding::STSchemeColorVal::ACCENT_1 = new ::org::apache::poi::sl::draw::binding::STSchemeColorVal(u"ACCENT_1"_j, 4, u"accent1"_j);
org::apache::poi::sl::draw::binding::STSchemeColorVal* org::apache::poi::sl::draw::binding::STSchemeColorVal::ACCENT_2 = new ::org::apache::poi::sl::draw::binding::STSchemeColorVal(u"ACCENT_2"_j, 5, u"accent2"_j);
org::apache::poi::sl::draw::binding::STSchemeColorVal* org::apache::poi::sl::draw::binding::STSchemeColorVal::ACCENT_3 = new ::org::apache::poi::sl::draw::binding::STSchemeColorVal(u"ACCENT_3"_j, 6, u"accent3"_j);
org::apache::poi::sl::draw::binding::STSchemeColorVal* org::apache::poi::sl::draw::binding::STSchemeColorVal::ACCENT_4 = new ::org::apache::poi::sl::draw::binding::STSchemeColorVal(u"ACCENT_4"_j, 7, u"accent4"_j);
org::apache::poi::sl::draw::binding::STSchemeColorVal* org::apache::poi::sl::draw::binding::STSchemeColorVal::ACCENT_5 = new ::org::apache::poi::sl::draw::binding::STSchemeColorVal(u"ACCENT_5"_j, 8, u"accent5"_j);
org::apache::poi::sl::draw::binding::STSchemeColorVal* org::apache::poi::sl::draw::binding::STSchemeColorVal::ACCENT_6 = new ::org::apache::poi::sl::draw::binding::STSchemeColorVal(u"ACCENT_6"_j, 9, u"accent6"_j);
org::apache::poi::sl::draw::binding::STSchemeColorVal* org::apache::poi::sl::draw::binding::STSchemeColorVal::HLINK = new ::org::apache::poi::sl::draw::binding::STSchemeColorVal(u"HLINK"_j, 10, u"hlink"_j);
org::apache::poi::sl::draw::binding::STSchemeColorVal* org::apache::poi::sl::draw::binding::STSchemeColorVal::FOL_HLINK = new ::org::apache::poi::sl::draw::binding::STSchemeColorVal(u"FOL_HLINK"_j, 11, u"folHlink"_j);
org::apache::poi::sl::draw::binding::STSchemeColorVal* org::apache::poi::sl::draw::binding::STSchemeColorVal::PH_CLR = new ::org::apache::poi::sl::draw::binding::STSchemeColorVal(u"PH_CLR"_j, 12, u"phClr"_j);
org::apache::poi::sl::draw::binding::STSchemeColorVal* org::apache::poi::sl::draw::binding::STSchemeColorVal::DK_1 = new ::org::apache::poi::sl::draw::binding::STSchemeColorVal(u"DK_1"_j, 13, u"dk1"_j);
org::apache::poi::sl::draw::binding::STSchemeColorVal* org::apache::poi::sl::draw::binding::STSchemeColorVal::LT_1 = new ::org::apache::poi::sl::draw::binding::STSchemeColorVal(u"LT_1"_j, 14, u"lt1"_j);
org::apache::poi::sl::draw::binding::STSchemeColorVal* org::apache::poi::sl::draw::binding::STSchemeColorVal::DK_2 = new ::org::apache::poi::sl::draw::binding::STSchemeColorVal(u"DK_2"_j, 15, u"dk2"_j);
org::apache::poi::sl::draw::binding::STSchemeColorVal* org::apache::poi::sl::draw::binding::STSchemeColorVal::LT_2 = new ::org::apache::poi::sl::draw::binding::STSchemeColorVal(u"LT_2"_j, 16, u"lt2"_j);
void org::apache::poi::sl::draw::binding::STSchemeColorVal::ctor(::java::lang::String* name, int ordinal, ::java::lang::String* v)
{
    super::ctor(name, ordinal);
    value_ = v;
}

java::lang::String* org::apache::poi::sl::draw::binding::STSchemeColorVal::value()
{
    return value_;
}

org::apache::poi::sl::draw::binding::STSchemeColorVal* org::apache::poi::sl::draw::binding::STSchemeColorVal::fromValue(::java::lang::String* v)
{
    clinit();
    for(auto c : *npc(STSchemeColorVal::values())) {
        if(npc(npc(c)->value_)->equals(static_cast< ::java::lang::Object* >(v))) {
            return c;
        }
    }
    throw new ::java::lang::IllegalArgumentException(v);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::STSchemeColorVal::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.STSchemeColorVal", 47);
    return c;
}

org::apache::poi::sl::draw::binding::STSchemeColorVal* org::apache::poi::sl::draw::binding::STSchemeColorVal::valueOf(::java::lang::String* a0)
{
    if(ACCENT_1->toString()->equals(a0))
        return ACCENT_1;
    if(ACCENT_2->toString()->equals(a0))
        return ACCENT_2;
    if(ACCENT_3->toString()->equals(a0))
        return ACCENT_3;
    if(ACCENT_4->toString()->equals(a0))
        return ACCENT_4;
    if(ACCENT_5->toString()->equals(a0))
        return ACCENT_5;
    if(ACCENT_6->toString()->equals(a0))
        return ACCENT_6;
    if(BG_1->toString()->equals(a0))
        return BG_1;
    if(BG_2->toString()->equals(a0))
        return BG_2;
    if(DK_1->toString()->equals(a0))
        return DK_1;
    if(DK_2->toString()->equals(a0))
        return DK_2;
    if(FOL_HLINK->toString()->equals(a0))
        return FOL_HLINK;
    if(HLINK->toString()->equals(a0))
        return HLINK;
    if(LT_1->toString()->equals(a0))
        return LT_1;
    if(LT_2->toString()->equals(a0))
        return LT_2;
    if(PH_CLR->toString()->equals(a0))
        return PH_CLR;
    if(TX_1->toString()->equals(a0))
        return TX_1;
    if(TX_2->toString()->equals(a0))
        return TX_2;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::sl::draw::binding::STSchemeColorValArray* org::apache::poi::sl::draw::binding::STSchemeColorVal::values()
{
    return new org::apache::poi::sl::draw::binding::STSchemeColorValArray({
        ACCENT_1,
        ACCENT_2,
        ACCENT_3,
        ACCENT_4,
        ACCENT_5,
        ACCENT_6,
        BG_1,
        BG_2,
        DK_1,
        DK_2,
        FOL_HLINK,
        HLINK,
        LT_1,
        LT_2,
        PH_CLR,
        TX_1,
        TX_2,
    });
}

java::lang::Class* org::apache::poi::sl::draw::binding::STSchemeColorVal::getClass0()
{
    return class_();
}

