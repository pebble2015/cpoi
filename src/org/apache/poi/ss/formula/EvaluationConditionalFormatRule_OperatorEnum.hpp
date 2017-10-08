// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationConditionalFormatRule.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
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
typedef ::SubArray< ::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum, ::java::lang::EnumArray > EvaluationConditionalFormatRule_OperatorEnumArray;
        } // formula
    } // ss
} // poi

struct default_init_tag;

class poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static EvaluationConditionalFormatRule_OperatorEnum *NO_COMPARISON;
    static EvaluationConditionalFormatRule_OperatorEnum *BETWEEN;
    static EvaluationConditionalFormatRule_OperatorEnum *NOT_BETWEEN;
    static EvaluationConditionalFormatRule_OperatorEnum *EQUAL;
    static EvaluationConditionalFormatRule_OperatorEnum *NOT_EQUAL;
    static EvaluationConditionalFormatRule_OperatorEnum *GREATER_THAN;
    static EvaluationConditionalFormatRule_OperatorEnum *LESS_THAN;
    static EvaluationConditionalFormatRule_OperatorEnum *GREATER_OR_EQUAL;
    static EvaluationConditionalFormatRule_OperatorEnum *LESS_OR_EQUAL;

public:
    virtual /* <C extends Comparable<C>> */bool isValid(::java::lang::Comparable* cellValue, ::java::lang::Comparable* v1, ::java::lang::Comparable* v2) = 0;

    // Generated
    EvaluationConditionalFormatRule_OperatorEnum(::java::lang::String* name, int ordinal);
protected:
    EvaluationConditionalFormatRule_OperatorEnum(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static EvaluationConditionalFormatRule_OperatorEnum* valueOf(::java::lang::String* a0);
    static EvaluationConditionalFormatRule_OperatorEnumArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class EvaluationConditionalFormatRule;
    friend class EvaluationConditionalFormatRule_checkFilter_1;
    friend class EvaluationConditionalFormatRule_checkFilter_2;
    friend class EvaluationConditionalFormatRule_checkFilter_3;
    friend class EvaluationConditionalFormatRule_checkFilter_4;
    friend class EvaluationConditionalFormatRule_ValueFunction;
    friend class EvaluationConditionalFormatRule_OperatorEnum_1;
    friend class EvaluationConditionalFormatRule_OperatorEnum_2;
    friend class EvaluationConditionalFormatRule_OperatorEnum_3;
    friend class EvaluationConditionalFormatRule_OperatorEnum_4;
    friend class EvaluationConditionalFormatRule_OperatorEnum_5;
    friend class EvaluationConditionalFormatRule_OperatorEnum_6;
    friend class EvaluationConditionalFormatRule_OperatorEnum_7;
    friend class EvaluationConditionalFormatRule_OperatorEnum_8;
    friend class EvaluationConditionalFormatRule_OperatorEnum_9;
    friend class EvaluationConditionalFormatRule_ValueAndFormat;
};
