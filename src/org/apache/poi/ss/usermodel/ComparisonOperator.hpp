// Generated from /POI/java/org/apache/poi/ss/usermodel/ComparisonOperator.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::usermodel::ComparisonOperator final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int8_t NO_COMPARISON { int8_t(0) };
    static constexpr int8_t BETWEEN { int8_t(1) };
    static constexpr int8_t NOT_BETWEEN { int8_t(2) };
    static constexpr int8_t EQUAL { int8_t(3) };
    static constexpr int8_t NOT_EQUAL { int8_t(4) };
    static constexpr int8_t GT { int8_t(5) };
    static constexpr int8_t LT { int8_t(6) };
    static constexpr int8_t GE { int8_t(7) };
    static constexpr int8_t LE { int8_t(8) };

    // Generated
    ComparisonOperator();
protected:
    ComparisonOperator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
