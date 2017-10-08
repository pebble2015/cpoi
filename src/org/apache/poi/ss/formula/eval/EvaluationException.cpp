// Generated from /POI/java/org/apache/poi/ss/formula/eval/EvaluationException.java
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>

#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>

poi::ss::formula::eval::EvaluationException::EvaluationException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::eval::EvaluationException::EvaluationException(ErrorEval* errorEval) 
    : EvaluationException(*static_cast< ::default_init_tag* >(0))
{
    ctor(errorEval);
}

void poi::ss::formula::eval::EvaluationException::ctor(ErrorEval* errorEval)
{
    super::ctor();
    _errorEval = errorEval;
}

poi::ss::formula::eval::EvaluationException* poi::ss::formula::eval::EvaluationException::invalidValue()
{
    clinit();
    return new EvaluationException(ErrorEval::VALUE_INVALID());
}

poi::ss::formula::eval::EvaluationException* poi::ss::formula::eval::EvaluationException::invalidRef()
{
    clinit();
    return new EvaluationException(ErrorEval::REF_INVALID());
}

poi::ss::formula::eval::EvaluationException* poi::ss::formula::eval::EvaluationException::numberError()
{
    clinit();
    return new EvaluationException(ErrorEval::NUM_ERROR());
}

poi::ss::formula::eval::ErrorEval* poi::ss::formula::eval::EvaluationException::getErrorEval()
{
    return _errorEval;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::eval::EvaluationException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.EvaluationException", 50);
    return c;
}

java::lang::Class* poi::ss::formula::eval::EvaluationException::getClass0()
{
    return class_();
}

