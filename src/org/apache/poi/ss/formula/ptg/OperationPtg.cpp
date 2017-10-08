// Generated from /POI/java/org/apache/poi/ss/formula/ptg/OperationPtg.java
#include <org/apache/poi/ss/formula/ptg/OperationPtg.hpp>

#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>

poi::ss::formula::ptg::OperationPtg::OperationPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::ptg::OperationPtg::OperationPtg()
    : OperationPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t poi::ss::formula::ptg::OperationPtg::TYPE_UNARY;

constexpr int32_t poi::ss::formula::ptg::OperationPtg::TYPE_BINARY;

constexpr int32_t poi::ss::formula::ptg::OperationPtg::TYPE_FUNCTION;

int8_t poi::ss::formula::ptg::OperationPtg::getDefaultOperandClass()
{
    return Ptg::CLASS_VALUE;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::ptg::OperationPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.OperationPtg", 42);
    return c;
}

java::lang::Class* poi::ss::formula::ptg::OperationPtg::getClass0()
{
    return class_();
}

