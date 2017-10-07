// Generated from /POI/java/org/apache/poi/ss/formula/DataValidationEvaluator.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
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
typedef ::SubArray< ::org::apache::poi::ss::formula::DataValidationEvaluator_ValidationEnum, ::java::lang::EnumArray > DataValidationEvaluator_ValidationEnumArray;
                } // formula
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::formula::DataValidationEvaluator_ValidationEnum
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static DataValidationEvaluator_ValidationEnum *ANY;
    static DataValidationEvaluator_ValidationEnum *INTEGER;
    static DataValidationEvaluator_ValidationEnum *DECIMAL;
    static DataValidationEvaluator_ValidationEnum *LIST;
    static DataValidationEvaluator_ValidationEnum *DATE;
    static DataValidationEvaluator_ValidationEnum *TIME;
    static DataValidationEvaluator_ValidationEnum *TEXT_LENGTH;
    static DataValidationEvaluator_ValidationEnum *FORMULA;

public:
    virtual bool isValidValue(::org::apache::poi::ss::usermodel::Cell* cell, DataValidationEvaluator_DataValidationContext* context);

public: /* protected */
    virtual bool isValidNumericCell(::org::apache::poi::ss::usermodel::Cell* cell, DataValidationEvaluator_DataValidationContext* context);
    virtual bool isValidNumericValue(::java::lang::Double* value, DataValidationEvaluator_DataValidationContext* context);

private:
    ::java::lang::Double* evalOrConstant(::java::lang::String* formula, DataValidationEvaluator_DataValidationContext* context) /* throws(NumberFormatException) */;

public:
    static bool isValid(::org::apache::poi::ss::usermodel::Cell* cell, DataValidationEvaluator_DataValidationContext* context);

    // Generated
    DataValidationEvaluator_ValidationEnum(::java::lang::String* name, int ordinal);
protected:
    DataValidationEvaluator_ValidationEnum(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static DataValidationEvaluator_ValidationEnum* valueOf(::java::lang::String* a0);
    static DataValidationEvaluator_ValidationEnumArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DataValidationEvaluator;
    friend class DataValidationEvaluator_ValidationEnum_1;
    friend class DataValidationEvaluator_ValidationEnum_2;
    friend class DataValidationEvaluator_ValidationEnum_3;
    friend class DataValidationEvaluator_ValidationEnum_4;
    friend class DataValidationEvaluator_ValidationEnum_5;
    friend class DataValidationEvaluator_OperatorEnum;
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
