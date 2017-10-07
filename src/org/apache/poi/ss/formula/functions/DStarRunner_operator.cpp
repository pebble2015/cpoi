// Generated from /POI/java/org/apache/poi/ss/formula/functions/DStarRunner.java
#include <org/apache/poi/ss/formula/functions/DStarRunner_operator.hpp>

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
                    namespace functions
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::functions::DStarRunner_operator, ::java::lang::EnumArray > DStarRunner_operatorArray;
                    } // functions
                } // formula
            } // ss
        } // poi
    } // apache
} // org

org::apache::poi::ss::formula::functions::DStarRunner_operator::DStarRunner_operator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::DStarRunner_operator::DStarRunner_operator(::java::lang::String* name, int ordinal)
    : DStarRunner_operator(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

org::apache::poi::ss::formula::functions::DStarRunner_operator* org::apache::poi::ss::formula::functions::DStarRunner_operator::largerThan = new ::org::apache::poi::ss::formula::functions::DStarRunner_operator(u"largerThan"_j, 0);
org::apache::poi::ss::formula::functions::DStarRunner_operator* org::apache::poi::ss::formula::functions::DStarRunner_operator::largerEqualThan = new ::org::apache::poi::ss::formula::functions::DStarRunner_operator(u"largerEqualThan"_j, 1);
org::apache::poi::ss::formula::functions::DStarRunner_operator* org::apache::poi::ss::formula::functions::DStarRunner_operator::smallerThan = new ::org::apache::poi::ss::formula::functions::DStarRunner_operator(u"smallerThan"_j, 2);
org::apache::poi::ss::formula::functions::DStarRunner_operator* org::apache::poi::ss::formula::functions::DStarRunner_operator::smallerEqualThan = new ::org::apache::poi::ss::formula::functions::DStarRunner_operator(u"smallerEqualThan"_j, 3);
org::apache::poi::ss::formula::functions::DStarRunner_operator* org::apache::poi::ss::formula::functions::DStarRunner_operator::equal = new ::org::apache::poi::ss::formula::functions::DStarRunner_operator(u"equal"_j, 4);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::DStarRunner_operator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.DStarRunner.operator", 56);
    return c;
}

org::apache::poi::ss::formula::functions::DStarRunner_operator* org::apache::poi::ss::formula::functions::DStarRunner_operator::valueOf(::java::lang::String* a0)
{
    if(equal->toString()->equals(a0))
        return equal;
    if(largerEqualThan->toString()->equals(a0))
        return largerEqualThan;
    if(largerThan->toString()->equals(a0))
        return largerThan;
    if(smallerEqualThan->toString()->equals(a0))
        return smallerEqualThan;
    if(smallerThan->toString()->equals(a0))
        return smallerThan;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::ss::formula::functions::DStarRunner_operatorArray* org::apache::poi::ss::formula::functions::DStarRunner_operator::values()
{
    return new org::apache::poi::ss::formula::functions::DStarRunner_operatorArray({
        equal,
        largerEqualThan,
        largerThan,
        smallerEqualThan,
        smallerThan,
    });
}

java::lang::Class* org::apache::poi::ss::formula::functions::DStarRunner_operator::getClass0()
{
    return class_();
}

