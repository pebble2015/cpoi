// Generated from /POI/java/org/apache/poi/ss/formula/functions/LinearRegressionFunction.java
#include <org/apache/poi/ss/formula/functions/LinearRegressionFunction_SingleCellValueArray.hpp>

#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

poi::ss::formula::functions::LinearRegressionFunction_SingleCellValueArray::LinearRegressionFunction_SingleCellValueArray(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::LinearRegressionFunction_SingleCellValueArray::LinearRegressionFunction_SingleCellValueArray(::poi::ss::formula::eval::ValueEval* value) 
    : LinearRegressionFunction_SingleCellValueArray(*static_cast< ::default_init_tag* >(0))
{
    ctor(value);
}

void poi::ss::formula::functions::LinearRegressionFunction_SingleCellValueArray::ctor(::poi::ss::formula::eval::ValueEval* value)
{
    super::ctor(int32_t(1));
    _value = value;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::LinearRegressionFunction_SingleCellValueArray::getItemInternal(int32_t index)
{
    return _value;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::LinearRegressionFunction_SingleCellValueArray::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.LinearRegressionFunction.SingleCellValueArray", 81);
    return c;
}

java::lang::Class* poi::ss::formula::functions::LinearRegressionFunction_SingleCellValueArray::getClass0()
{
    return class_();
}

