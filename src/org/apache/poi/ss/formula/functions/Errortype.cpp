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
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace formula
                {
                    namespace eval
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::eval::ValueEval, ::java::lang::ObjectArray > ValueEvalArray;
                    } // eval
                } // formula
            } // ss
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::functions::Errortype::Errortype(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::Errortype::Errortype()
    : Errortype(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Errortype::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0)
{
    try {
        ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue(arg0, srcRowIndex, srcColumnIndex);
        return ::org::apache::poi::ss::formula::eval::ErrorEval::NA();
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        auto result = translateErrorCodeToErrorTypeValue(npc(npc(e)->getErrorEval())->getErrorCode());
        return new ::org::apache::poi::ss::formula::eval::NumberEval(static_cast< double >(result));
    }
}

int32_t org::apache::poi::ss::formula::functions::Errortype::translateErrorCodeToErrorTypeValue(int32_t errorCode)
{
    {
        auto v = ::org::apache::poi::ss::usermodel::FormulaError::forInt(errorCode);
        if((v == ::org::apache::poi::ss::usermodel::FormulaError::NULL_)) {
            return 1;
        }
        if((v == ::org::apache::poi::ss::usermodel::FormulaError::DIV0)) {
            return 2;
        }
        if((v == ::org::apache::poi::ss::usermodel::FormulaError::VALUE)) {
            return 3;
        }
        if((v == ::org::apache::poi::ss::usermodel::FormulaError::REF)) {
            return 4;
        }
        if((v == ::org::apache::poi::ss::usermodel::FormulaError::NAME)) {
            return 5;
        }
        if((v == ::org::apache::poi::ss::usermodel::FormulaError::NUM)) {
            return 6;
        }
        if((v == ::org::apache::poi::ss::usermodel::FormulaError::NA)) {
            return 7;
        }
        if((((v != ::org::apache::poi::ss::usermodel::FormulaError::NULL_) && (v != ::org::apache::poi::ss::usermodel::FormulaError::DIV0) && (v != ::org::apache::poi::ss::usermodel::FormulaError::VALUE) && (v != ::org::apache::poi::ss::usermodel::FormulaError::REF) && (v != ::org::apache::poi::ss::usermodel::FormulaError::NAME) && (v != ::org::apache::poi::ss::usermodel::FormulaError::NUM) && (v != ::org::apache::poi::ss::usermodel::FormulaError::NA)))) {
            throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid error code ("_j)->append(errorCode)
                ->append(u")"_j)->toString());
        }
end_switch0:;
    }

}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::Errortype::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Errortype", 45);
    return c;
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Errortype::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* org::apache::poi::ss::formula::functions::Errortype::getClass0()
{
    return class_();
}

