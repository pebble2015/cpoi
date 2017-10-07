// Generated from /POI/java/org/apache/poi/ss/formula/eval/RelationalOperationEval.java
#include <org/apache/poi/ss/formula/eval/RelationalOperationEval_3.hpp>

org::apache::poi::ss::formula::eval::RelationalOperationEval_3::RelationalOperationEval_3()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

bool org::apache::poi::ss::formula::eval::RelationalOperationEval_3::convertComparisonResult(int32_t cmpResult)
{
    return cmpResult > 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::eval::RelationalOperationEval_3::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::eval::RelationalOperationEval_3::getClass0()
{
    return class_();
}

