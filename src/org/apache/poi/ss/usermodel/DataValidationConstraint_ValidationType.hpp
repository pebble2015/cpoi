// Generated from /POI/java/org/apache/poi/ss/usermodel/DataValidationConstraint.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::usermodel::DataValidationConstraint_ValidationType final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    static constexpr int32_t ANY { int32_t(0) };
    static constexpr int32_t INTEGER { int32_t(1) };
    static constexpr int32_t DECIMAL { int32_t(2) };
    static constexpr int32_t LIST { int32_t(3) };
    static constexpr int32_t DATE { int32_t(4) };
    static constexpr int32_t TIME { int32_t(5) };
    static constexpr int32_t TEXT_LENGTH { int32_t(6) };
    static constexpr int32_t FORMULA { int32_t(7) };

    // Generated

private:
    DataValidationConstraint_ValidationType();
protected:
    DataValidationConstraint_ValidationType(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DataValidationConstraint;
    friend class DataValidationConstraint_OperatorType;
};
