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
typedef ::SubArray< ::org::apache::poi::ss::formula::functions::LinearRegressionFunction_FUNCTION, ::java::lang::EnumArray > LinearRegressionFunction_FUNCTIONArray;
                    } // functions
                } // formula
            } // ss
        } // poi
    } // apache
} // org

org::apache::poi::ss::formula::functions::LinearRegressionFunction_FUNCTION::LinearRegressionFunction_FUNCTION(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::LinearRegressionFunction_FUNCTION::LinearRegressionFunction_FUNCTION(::java::lang::String* name, int ordinal)
    : LinearRegressionFunction_FUNCTION(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

org::apache::poi::ss::formula::functions::LinearRegressionFunction_FUNCTION* org::apache::poi::ss::formula::functions::LinearRegressionFunction_FUNCTION::INTERCEPT = new ::org::apache::poi::ss::formula::functions::LinearRegressionFunction_FUNCTION(u"INTERCEPT"_j, 0);
org::apache::poi::ss::formula::functions::LinearRegressionFunction_FUNCTION* org::apache::poi::ss::formula::functions::LinearRegressionFunction_FUNCTION::SLOPE = new ::org::apache::poi::ss::formula::functions::LinearRegressionFunction_FUNCTION(u"SLOPE"_j, 1);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::LinearRegressionFunction_FUNCTION::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.LinearRegressionFunction.FUNCTION", 69);
    return c;
}

org::apache::poi::ss::formula::functions::LinearRegressionFunction_FUNCTION* org::apache::poi::ss::formula::functions::LinearRegressionFunction_FUNCTION::valueOf(::java::lang::String* a0)
{
    if(INTERCEPT->toString()->equals(a0))
        return INTERCEPT;
    if(SLOPE->toString()->equals(a0))
        return SLOPE;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::ss::formula::functions::LinearRegressionFunction_FUNCTIONArray* org::apache::poi::ss::formula::functions::LinearRegressionFunction_FUNCTION::values()
{
    return new org::apache::poi::ss::formula::functions::LinearRegressionFunction_FUNCTIONArray({
        INTERCEPT,
        SLOPE,
    });
}

java::lang::Class* org::apache::poi::ss::formula::functions::LinearRegressionFunction_FUNCTION::getClass0()
{
    return class_();
}

