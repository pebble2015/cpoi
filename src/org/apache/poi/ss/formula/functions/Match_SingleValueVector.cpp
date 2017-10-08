// Generated from /POI/java/org/apache/poi/ss/formula/functions/Match.java
#include <org/apache/poi/ss/formula/functions/Match_SingleValueVector.hpp>

#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

poi::ss::formula::functions::Match_SingleValueVector::Match_SingleValueVector(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Match_SingleValueVector::Match_SingleValueVector(::poi::ss::formula::eval::ValueEval* value) 
    : Match_SingleValueVector(*static_cast< ::default_init_tag* >(0))
{
    ctor(value);
}

void poi::ss::formula::functions::Match_SingleValueVector::ctor(::poi::ss::formula::eval::ValueEval* value)
{
    super::ctor();
    _value = value;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Match_SingleValueVector::getItem(int32_t index)
{
    if(index != 0) {
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Invalid index ("_j)->append(index)
            ->append(u") only zero is allowed"_j)->toString());
    }
    return _value;
}

int32_t poi::ss::formula::functions::Match_SingleValueVector::getSize()
{
    return 1;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Match_SingleValueVector::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Match.SingleValueVector", 59);
    return c;
}

java::lang::Class* poi::ss::formula::functions::Match_SingleValueVector::getClass0()
{
    return class_();
}

