// Generated from /POI/java/org/apache/poi/ss/formula/functions/LinearRegressionFunction.java
#include <org/apache/poi/ss/formula/functions/LinearRegressionFunction_FUNCTION.hpp>

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
    namespace ss
    {
        namespace formula
        {
            namespace functions
            {
typedef ::SubArray< ::poi::ss::formula::functions::LinearRegressionFunction_FUNCTION, ::java::lang::EnumArray > LinearRegressionFunction_FUNCTIONArray;
            } // functions
        } // formula
    } // ss
} // poi

poi::ss::formula::functions::LinearRegressionFunction_FUNCTION::LinearRegressionFunction_FUNCTION(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::LinearRegressionFunction_FUNCTION::LinearRegressionFunction_FUNCTION(::java::lang::String* name, int ordinal)
    : LinearRegressionFunction_FUNCTION(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::ss::formula::functions::LinearRegressionFunction_FUNCTION* poi::ss::formula::functions::LinearRegressionFunction_FUNCTION::INTERCEPT = new ::poi::ss::formula::functions::LinearRegressionFunction_FUNCTION(u"INTERCEPT"_j, 0);
poi::ss::formula::functions::LinearRegressionFunction_FUNCTION* poi::ss::formula::functions::LinearRegressionFunction_FUNCTION::SLOPE = new ::poi::ss::formula::functions::LinearRegressionFunction_FUNCTION(u"SLOPE"_j, 1);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::LinearRegressionFunction_FUNCTION::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.LinearRegressionFunction.FUNCTION", 69);
    return c;
}

poi::ss::formula::functions::LinearRegressionFunction_FUNCTION* poi::ss::formula::functions::LinearRegressionFunction_FUNCTION::valueOf(::java::lang::String* a0)
{
    if(INTERCEPT->toString()->equals(a0))
        return INTERCEPT;
    if(SLOPE->toString()->equals(a0))
        return SLOPE;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::formula::functions::LinearRegressionFunction_FUNCTIONArray* poi::ss::formula::functions::LinearRegressionFunction_FUNCTION::values()
{
    return new poi::ss::formula::functions::LinearRegressionFunction_FUNCTIONArray({
        INTERCEPT,
        SLOPE,
    });
}

java::lang::Class* poi::ss::formula::functions::LinearRegressionFunction_FUNCTION::getClass0()
{
    return class_();
}

