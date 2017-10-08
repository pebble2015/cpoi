// Generated from /POI/java/org/apache/poi/hssf/record/CFRuleBase.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::hssf::record::CFRuleBase_ComparisonOperator final
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

private:
    static constexpr int8_t max_operator { int8_t(8) };

    // Generated

public:
    CFRuleBase_ComparisonOperator();
protected:
    CFRuleBase_ComparisonOperator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class CFRuleBase;
};
