// Generated from /POI/java/org/apache/poi/hssf/record/CFRuleBase.java
#include <org/apache/poi/hssf/record/CFRuleBase_ComparisonOperator.hpp>

org::apache::poi::hssf::record::CFRuleBase_ComparisonOperator::CFRuleBase_ComparisonOperator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::CFRuleBase_ComparisonOperator::CFRuleBase_ComparisonOperator()
    : CFRuleBase_ComparisonOperator(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int8_t org::apache::poi::hssf::record::CFRuleBase_ComparisonOperator::NO_COMPARISON;

constexpr int8_t org::apache::poi::hssf::record::CFRuleBase_ComparisonOperator::BETWEEN;

constexpr int8_t org::apache::poi::hssf::record::CFRuleBase_ComparisonOperator::NOT_BETWEEN;

constexpr int8_t org::apache::poi::hssf::record::CFRuleBase_ComparisonOperator::EQUAL;

constexpr int8_t org::apache::poi::hssf::record::CFRuleBase_ComparisonOperator::NOT_EQUAL;

constexpr int8_t org::apache::poi::hssf::record::CFRuleBase_ComparisonOperator::GT;

constexpr int8_t org::apache::poi::hssf::record::CFRuleBase_ComparisonOperator::LT;

constexpr int8_t org::apache::poi::hssf::record::CFRuleBase_ComparisonOperator::GE;

constexpr int8_t org::apache::poi::hssf::record::CFRuleBase_ComparisonOperator::LE;

constexpr int8_t org::apache::poi::hssf::record::CFRuleBase_ComparisonOperator::max_operator;

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::CFRuleBase_ComparisonOperator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.CFRuleBase.ComparisonOperator", 56);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::CFRuleBase_ComparisonOperator::getClass0()
{
    return class_();
}

