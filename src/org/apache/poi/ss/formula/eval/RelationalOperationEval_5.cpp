// Generated from /POI/java/org/apache/poi/ss/formula/eval/RelationalOperationEval.java
#include <org/apache/poi/ss/formula/eval/RelationalOperationEval_5.hpp>

poi::ss::formula::eval::RelationalOperationEval_5::RelationalOperationEval_5()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

bool poi::ss::formula::eval::RelationalOperationEval_5::convertComparisonResult(int32_t cmpResult)
{
    return cmpResult < 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::eval::RelationalOperationEval_5::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::ss::formula::eval::RelationalOperationEval_5::getClass0()
{
    return class_();
}

