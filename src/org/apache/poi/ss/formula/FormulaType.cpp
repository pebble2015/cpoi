// Generated from /POI/java/org/apache/poi/ss/formula/FormulaType.java
#include <org/apache/poi/ss/formula/FormulaType.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
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
                namespace formula
                {
typedef ::SubArray< ::org::apache::poi::ss::formula::FormulaType, ::java::lang::EnumArray > FormulaTypeArray;
                } // formula
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

org::apache::poi::ss::formula::FormulaType::FormulaType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::FormulaType::FormulaType(::java::lang::String* name, int ordinal, bool singleValue) 
    : FormulaType(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, singleValue);
}

org::apache::poi::ss::formula::FormulaType* org::apache::poi::ss::formula::FormulaType::CELL = new ::org::apache::poi::ss::formula::FormulaType(u"CELL"_j, 0, true);
org::apache::poi::ss::formula::FormulaType* org::apache::poi::ss::formula::FormulaType::SHARED = new ::org::apache::poi::ss::formula::FormulaType(u"SHARED"_j, 1, true);
org::apache::poi::ss::formula::FormulaType* org::apache::poi::ss::formula::FormulaType::ARRAY = new ::org::apache::poi::ss::formula::FormulaType(u"ARRAY"_j, 2, false);
org::apache::poi::ss::formula::FormulaType* org::apache::poi::ss::formula::FormulaType::CONDFORMAT = new ::org::apache::poi::ss::formula::FormulaType(u"CONDFORMAT"_j, 3, true);
org::apache::poi::ss::formula::FormulaType* org::apache::poi::ss::formula::FormulaType::NAMEDRANGE = new ::org::apache::poi::ss::formula::FormulaType(u"NAMEDRANGE"_j, 4, false);
org::apache::poi::ss::formula::FormulaType* org::apache::poi::ss::formula::FormulaType::DATAVALIDATION_LIST = new ::org::apache::poi::ss::formula::FormulaType(u"DATAVALIDATION_LIST"_j, 5, false);
void org::apache::poi::ss::formula::FormulaType::ctor(::java::lang::String* name, int ordinal, bool singleValue)
{
    super::ctor(name, ordinal);
    this->isSingleValue_ = singleValue;
}

bool org::apache::poi::ss::formula::FormulaType::isSingleValue()
{
    return isSingleValue_;
}

org::apache::poi::ss::formula::FormulaType* org::apache::poi::ss::formula::FormulaType::forInt(int32_t code)
{
    clinit();
    if(code >= 0 && code < npc(values())->length) {
        return (*values())[code];
    }
    throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid FormulaType code: "_j)->append(code)->toString());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::FormulaType::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.FormulaType", 37);
    return c;
}

org::apache::poi::ss::formula::FormulaType* org::apache::poi::ss::formula::FormulaType::valueOf(::java::lang::String* a0)
{
    if(ARRAY->toString()->equals(a0))
        return ARRAY;
    if(CELL->toString()->equals(a0))
        return CELL;
    if(CONDFORMAT->toString()->equals(a0))
        return CONDFORMAT;
    if(DATAVALIDATION_LIST->toString()->equals(a0))
        return DATAVALIDATION_LIST;
    if(NAMEDRANGE->toString()->equals(a0))
        return NAMEDRANGE;
    if(SHARED->toString()->equals(a0))
        return SHARED;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::ss::formula::FormulaTypeArray* org::apache::poi::ss::formula::FormulaType::values()
{
    return new org::apache::poi::ss::formula::FormulaTypeArray({
        ARRAY,
        CELL,
        CONDFORMAT,
        DATAVALIDATION_LIST,
        NAMEDRANGE,
        SHARED,
    });
}

java::lang::Class* org::apache::poi::ss::formula::FormulaType::getClass0()
{
    return class_();
}

