// Generated from /POI/java/org/apache/poi/ss/usermodel/ConditionalFormattingThreshold.java
#include <org/apache/poi/ss/usermodel/ConditionalFormattingThreshold_RangeType.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
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
            namespace ss
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType, ::java::lang::EnumArray > ConditionalFormattingThreshold_RangeTypeArray;
                } // usermodel
            } // ss
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::ConditionalFormattingThreshold_RangeType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::ConditionalFormattingThreshold_RangeType(::java::lang::String* name, int ordinal, int32_t id, ::java::lang::String* name1) 
    : ConditionalFormattingThreshold_RangeType(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, id,name1);
}

org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType* org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::NUMBER = new ::org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType(u"NUMBER"_j, 0, int32_t(1), u"num"_j);
org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType* org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::MIN = new ::org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType(u"MIN"_j, 1, int32_t(2), u"min"_j);
org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType* org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::MAX = new ::org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType(u"MAX"_j, 2, int32_t(3), u"max"_j);
org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType* org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::PERCENT = new ::org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType(u"PERCENT"_j, 3, int32_t(4), u"percent"_j);
org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType* org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::PERCENTILE = new ::org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType(u"PERCENTILE"_j, 4, int32_t(5), u"percentile"_j);
org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType* org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::UNALLOCATED = new ::org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType(u"UNALLOCATED"_j, 5, int32_t(6), nullptr);
org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType* org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::FORMULA = new ::org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType(u"FORMULA"_j, 6, int32_t(7), u"formula"_j);
java::lang::String* org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::toString()
{
    return ::java::lang::StringBuilder().append(id)->append(u" - "_j)
        ->append(name_)->toString();
}

org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType* org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::byId(int32_t id)
{
    clinit();
    return (*values())[id - int32_t(1)];
}

org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType* org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::byName(::java::lang::String* name)
{
    clinit();
    for(auto t : *npc(values())) {
        if(npc(npc(t)->name_)->equals(static_cast< ::java::lang::Object* >(name)))
            return t;

    }
    return nullptr;
}

void org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::ctor(::java::lang::String* name, int ordinal, int32_t id, ::java::lang::String* name1)
{
    super::ctor(name, ordinal);
    this->id = id;
    this->name_ = name;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.ConditionalFormattingThreshold.RangeType", 68);
    return c;
}

org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType* org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::valueOf(::java::lang::String* a0)
{
    if(FORMULA->toString()->equals(a0))
        return FORMULA;
    if(MAX->toString()->equals(a0))
        return MAX;
    if(MIN->toString()->equals(a0))
        return MIN;
    if(NUMBER->toString()->equals(a0))
        return NUMBER;
    if(PERCENT->toString()->equals(a0))
        return PERCENT;
    if(PERCENTILE->toString()->equals(a0))
        return PERCENTILE;
    if(UNALLOCATED->toString()->equals(a0))
        return UNALLOCATED;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeTypeArray* org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::values()
{
    return new org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeTypeArray({
        FORMULA,
        MAX,
        MIN,
        NUMBER,
        PERCENT,
        PERCENTILE,
        UNALLOCATED,
    });
}

java::lang::Class* org::apache::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::getClass0()
{
    return class_();
}

