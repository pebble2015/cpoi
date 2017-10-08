// Generated from /POI/java/org/apache/poi/ss/formula/functions/LinearRegressionFunction.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Enum.hpp>

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

struct default_init_tag;

class poi::ss::formula::functions::LinearRegressionFunction_FUNCTION final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static LinearRegressionFunction_FUNCTION *INTERCEPT;
    static LinearRegressionFunction_FUNCTION *SLOPE;

    // Generated

public:
    LinearRegressionFunction_FUNCTION(::java::lang::String* name, int ordinal);
protected:
    LinearRegressionFunction_FUNCTION(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static LinearRegressionFunction_FUNCTION* valueOf(::java::lang::String* a0);
    static LinearRegressionFunction_FUNCTIONArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class LinearRegressionFunction;
    friend class LinearRegressionFunction_ValueArray;
    friend class LinearRegressionFunction_SingleCellValueArray;
    friend class LinearRegressionFunction_RefValueArray;
    friend class LinearRegressionFunction_AreaValueArray;
};
