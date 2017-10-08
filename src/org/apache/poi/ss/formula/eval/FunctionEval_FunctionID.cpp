// Generated from /POI/java/org/apache/poi/ss/formula/eval/FunctionEval.java
#include <org/apache/poi/ss/formula/eval/FunctionEval_FunctionID.hpp>

poi::ss::formula::eval::FunctionEval_FunctionID::FunctionEval_FunctionID(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::eval::FunctionEval_FunctionID::FunctionEval_FunctionID()
    : FunctionEval_FunctionID(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t poi::ss::formula::eval::FunctionEval_FunctionID::IF;

constexpr int32_t poi::ss::formula::eval::FunctionEval_FunctionID::SUM;

constexpr int32_t poi::ss::formula::eval::FunctionEval_FunctionID::OFFSET;

constexpr int32_t poi::ss::formula::eval::FunctionEval_FunctionID::CHOOSE;

constexpr int32_t poi::ss::formula::eval::FunctionEval_FunctionID::INDIRECT;

constexpr int32_t poi::ss::formula::eval::FunctionEval_FunctionID::EXTERNAL_FUNC;

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::eval::FunctionEval_FunctionID::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.FunctionEval.FunctionID", 54);
    return c;
}

java::lang::Class* poi::ss::formula::eval::FunctionEval_FunctionID::getClass0()
{
    return class_();
}

