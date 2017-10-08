// Generated from /POI/java/org/apache/poi/ss/formula/functions/LinearRegressionFunction.java
#include <org/apache/poi/ss/formula/functions/LinearRegressionFunction_ValueArray.hpp>

#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

poi::ss::formula::functions::LinearRegressionFunction_ValueArray::LinearRegressionFunction_ValueArray(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::LinearRegressionFunction_ValueArray::LinearRegressionFunction_ValueArray(int32_t size) 
    : LinearRegressionFunction_ValueArray(*static_cast< ::default_init_tag* >(0))
{
    ctor(size);
}

void poi::ss::formula::functions::LinearRegressionFunction_ValueArray::ctor(int32_t size)
{
    super::ctor();
    _size = size;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::LinearRegressionFunction_ValueArray::getItem(int32_t index)
{
    if(index < 0 || index > _size) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Specified index "_j)->append(index)
            ->append(u" is outside range (0.."_j)
            ->append((_size - int32_t(1)))
            ->append(u")"_j)->toString());
    }
    return getItemInternal(index);
}

int32_t poi::ss::formula::functions::LinearRegressionFunction_ValueArray::getSize()
{
    return _size;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::LinearRegressionFunction_ValueArray::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.LinearRegressionFunction.ValueArray", 71);
    return c;
}

java::lang::Class* poi::ss::formula::functions::LinearRegressionFunction_ValueArray::getClass0()
{
    return class_();
}

