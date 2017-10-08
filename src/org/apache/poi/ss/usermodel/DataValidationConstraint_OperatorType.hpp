// Generated from /POI/java/org/apache/poi/ss/usermodel/DataValidationConstraint.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::usermodel::DataValidationConstraint_OperatorType final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    static constexpr int32_t BETWEEN { int32_t(0) };
    static constexpr int32_t NOT_BETWEEN { int32_t(1) };
    static constexpr int32_t EQUAL { int32_t(2) };
    static constexpr int32_t NOT_EQUAL { int32_t(3) };
    static constexpr int32_t GREATER_THAN { int32_t(4) };
    static constexpr int32_t LESS_THAN { int32_t(5) };
    static constexpr int32_t GREATER_OR_EQUAL { int32_t(6) };
    static constexpr int32_t LESS_OR_EQUAL { int32_t(7) };
    static constexpr int32_t IGNORED { int32_t(0) };
    static void validateSecondArg(int32_t comparisonOperator, ::java::lang::String* paramValue);

    // Generated

private:
    DataValidationConstraint_OperatorType();
protected:
    DataValidationConstraint_OperatorType(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DataValidationConstraint;
    friend class DataValidationConstraint_ValidationType;
};
