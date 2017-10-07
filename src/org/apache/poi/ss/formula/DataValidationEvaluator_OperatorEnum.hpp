// Generated from /POI/java/org/apache/poi/ss/formula/DataValidationEvaluator.java

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
typedef ::SubArray< ::org::apache::poi::ss::formula::DataValidationEvaluator_OperatorEnum, ::java::lang::EnumArray > DataValidationEvaluator_OperatorEnumArray;
                } // formula
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::formula::DataValidationEvaluator_OperatorEnum
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static DataValidationEvaluator_OperatorEnum *BETWEEN;
    static DataValidationEvaluator_OperatorEnum *NOT_BETWEEN;
    static DataValidationEvaluator_OperatorEnum *EQUAL;
    static DataValidationEvaluator_OperatorEnum *NOT_EQUAL;
    static DataValidationEvaluator_OperatorEnum *GREATER_THAN;
    static DataValidationEvaluator_OperatorEnum *LESS_THAN;
    static DataValidationEvaluator_OperatorEnum *GREATER_OR_EQUAL;
    static DataValidationEvaluator_OperatorEnum *LESS_OR_EQUAL;

private:
    static DataValidationEvaluator_OperatorEnum* IGNORED_;

public:
    virtual bool isValid(::java::lang::Double* cellValue, ::java::lang::Double* v1, ::java::lang::Double* v2) = 0;

    // Generated
    DataValidationEvaluator_OperatorEnum(::java::lang::String* name, int ordinal);
protected:
    DataValidationEvaluator_OperatorEnum(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static DataValidationEvaluator_OperatorEnum*& IGNORED();
    static DataValidationEvaluator_OperatorEnum* valueOf(::java::lang::String* a0);
    static DataValidationEvaluator_OperatorEnumArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DataValidationEvaluator;
    friend class DataValidationEvaluator_ValidationEnum;
    friend class DataValidationEvaluator_ValidationEnum_1;
    friend class DataValidationEvaluator_ValidationEnum_2;
    friend class DataValidationEvaluator_ValidationEnum_3;
    friend class DataValidationEvaluator_ValidationEnum_4;
    friend class DataValidationEvaluator_ValidationEnum_5;
    friend class DataValidationEvaluator_OperatorEnum_1;
    friend class DataValidationEvaluator_OperatorEnum_2;
    friend class DataValidationEvaluator_OperatorEnum_3;
    friend class DataValidationEvaluator_OperatorEnum_4;
    friend class DataValidationEvaluator_OperatorEnum_5;
    friend class DataValidationEvaluator_OperatorEnum_6;
    friend class DataValidationEvaluator_OperatorEnum_7;
    friend class DataValidationEvaluator_OperatorEnum_8;
    friend class DataValidationEvaluator_DataValidationContext;
};
