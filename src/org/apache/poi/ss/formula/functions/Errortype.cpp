// Generated from /POI/java/org/apache/poi/ss/formula/functions/Errortype.java
#include <org/apache/poi/ss/formula/functions/Errortype.hpp>

#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/usermodel/FormulaError.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace eval
            {
typedef ::SubArray< ::poi::ss::formula::eval::ValueEval, ::java::lang::ObjectArray > ValueEvalArray;
            } // eval
        } // formula
    } // ss
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::functions::Errortype::Errortype(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Errortype::Errortype()
    : Errortype(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Errortype::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0)
{
    try {
        ::poi::ss::formula::eval::OperandResolver::getSingleValue(arg0, srcRowIndex, srcColumnIndex);
        return ::poi::ss::formula::eval::ErrorEval::NA();
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        auto result = translateErrorCodeToErrorTypeValue(npc(npc(e)->getErrorEval())->getErrorCode());
        return new ::poi::ss::formula::eval::NumberEval(static_cast< double >(result));
    }
}

int32_t poi::ss::formula::functions::Errortype::translateErrorCodeToErrorTypeValue(int32_t errorCode)
{
    {
        auto v = ::poi::ss::usermodel::FormulaError::forInt(errorCode);
        if((v == ::poi::ss::usermodel::FormulaError::NULL_)) {
            return 1;
        }
        if((v == ::poi::ss::usermodel::FormulaError::DIV0)) {
            return 2;
        }
        if((v == ::poi::ss::usermodel::FormulaError::VALUE)) {
            return 3;
        }
        if((v == ::poi::ss::usermodel::FormulaError::REF)) {
            return 4;
        }
        if((v == ::poi::ss::usermodel::FormulaError::NAME)) {
            return 5;
        }
        if((v == ::poi::ss::usermodel::FormulaError::NUM)) {
            return 6;
        }
        if((v == ::poi::ss::usermodel::FormulaError::NA)) {
            return 7;
        }
        if((((v != ::poi::ss::usermodel::FormulaError::NULL_) && (v != ::poi::ss::usermodel::FormulaError::DIV0) && (v != ::poi::ss::usermodel::FormulaError::VALUE) && (v != ::poi::ss::usermodel::FormulaError::REF) && (v != ::poi::ss::usermodel::FormulaError::NAME) && (v != ::poi::ss::usermodel::FormulaError::NUM) && (v != ::poi::ss::usermodel::FormulaError::NA)))) {
            throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid error code ("_j)->append(errorCode)
                ->append(u")"_j)->toString());
        }
end_switch0:;
    }

}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Errortype::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Errortype", 45);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Errortype::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::Errortype::getClass0()
{
    return class_();
}

