// Generated from /POI/java/org/apache/poi/ss/format/CellFormatCondition.java
#include <org/apache/poi/ss/format/CellFormatCondition.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/ss/format/CellFormatCondition_getInstance_1.hpp>
#include <org/apache/poi/ss/format/CellFormatCondition_getInstance_2.hpp>
#include <org/apache/poi/ss/format/CellFormatCondition_getInstance_3.hpp>
#include <org/apache/poi/ss/format/CellFormatCondition_getInstance_4.hpp>
#include <org/apache/poi/ss/format/CellFormatCondition_getInstance_5.hpp>
#include <org/apache/poi/ss/format/CellFormatCondition_getInstance_6.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::format::CellFormatCondition::CellFormatCondition(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::format::CellFormatCondition::CellFormatCondition()
    : CellFormatCondition(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t org::apache::poi::ss::format::CellFormatCondition::LT;

constexpr int32_t org::apache::poi::ss::format::CellFormatCondition::LE;

constexpr int32_t org::apache::poi::ss::format::CellFormatCondition::GT;

constexpr int32_t org::apache::poi::ss::format::CellFormatCondition::GE;

constexpr int32_t org::apache::poi::ss::format::CellFormatCondition::EQ;

constexpr int32_t org::apache::poi::ss::format::CellFormatCondition::NE;

java::util::Map*& org::apache::poi::ss::format::CellFormatCondition::TESTS()
{
    clinit();
    return TESTS_;
}
java::util::Map* org::apache::poi::ss::format::CellFormatCondition::TESTS_;

org::apache::poi::ss::format::CellFormatCondition* org::apache::poi::ss::format::CellFormatCondition::getInstance(::java::lang::String* opString, ::java::lang::String* constStr)
{
    clinit();
    if(!npc(TESTS_)->containsKey(opString))
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Unknown test: "_j)->append(opString)->toString());

    int32_t test = (npc(java_cast< ::java::lang::Integer* >(npc(TESTS_)->get(opString))))->intValue();
    auto const c = ::java::lang::Double::parseDouble(constStr);
    switch (test) {
    case LT:
        return new CellFormatCondition_getInstance_1(c);
    case LE:
        return new CellFormatCondition_getInstance_2(c);
    case GT:
        return new CellFormatCondition_getInstance_3(c);
    case GE:
        return new CellFormatCondition_getInstance_4(c);
    case EQ:
        return new CellFormatCondition_getInstance_5(c);
    case NE:
        return new CellFormatCondition_getInstance_6(c);
    default:
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Cannot create for test number "_j)->append(test)
            ->append(u"(\""_j)
            ->append(opString)
            ->append(u"\")"_j)->toString());
    }

}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::format::CellFormatCondition::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.format.CellFormatCondition", 44);
    return c;
}

void org::apache::poi::ss::format::CellFormatCondition::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        {
            TESTS_ = new ::java::util::HashMap();
            npc(TESTS_)->put(u"<"_j, ::java::lang::Integer::valueOf(LT));
            npc(TESTS_)->put(u"<="_j, ::java::lang::Integer::valueOf(LE));
            npc(TESTS_)->put(u">"_j, ::java::lang::Integer::valueOf(GT));
            npc(TESTS_)->put(u">="_j, ::java::lang::Integer::valueOf(GE));
            npc(TESTS_)->put(u"="_j, ::java::lang::Integer::valueOf(EQ));
            npc(TESTS_)->put(u"=="_j, ::java::lang::Integer::valueOf(EQ));
            npc(TESTS_)->put(u"!="_j, ::java::lang::Integer::valueOf(NE));
            npc(TESTS_)->put(u"<>"_j, ::java::lang::Integer::valueOf(NE));
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::format::CellFormatCondition::getClass0()
{
    return class_();
}

