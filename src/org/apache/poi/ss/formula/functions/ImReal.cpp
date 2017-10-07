// Generated from /POI/java/org/apache/poi/ss/formula/functions/ImReal.java
#include <org/apache/poi/ss/formula/functions/ImReal.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/regex/Matcher.hpp>
#include <java/util/regex/Pattern.hpp>
#include <org/apache/poi/ss/formula/OperationEvaluationContext.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/Imaginary.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

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

org::apache::poi::ss::formula::functions::ImReal::ImReal(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::ImReal::ImReal()
    : ImReal(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::functions::FreeRefFunction*& org::apache::poi::ss::formula::functions::ImReal::instance()
{
    clinit();
    return instance_;
}
org::apache::poi::ss::formula::functions::FreeRefFunction* org::apache::poi::ss::formula::functions::ImReal::instance_;

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::ImReal::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* inumberVE)
{
    ::org::apache::poi::ss::formula::eval::ValueEval* veText1;
    try {
        veText1 = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue(inumberVE, srcRowIndex, srcColumnIndex);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    auto iNumber = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToString(veText1);
    auto m = npc(Imaginary::COMPLEX_NUMBER_PATTERN())->matcher(iNumber);
    auto result = npc(m)->matches();
    auto real = u""_j;
    if(result == true) {
        auto realGroup = npc(m)->group(int32_t(2));
        auto hasRealPart = npc(realGroup)->length() != 0;
        if(npc(realGroup)->length() == 0) {
            return new ::org::apache::poi::ss::formula::eval::StringEval(::java::lang::String::valueOf(int32_t(0)));
        }
        if(hasRealPart) {
            auto sign = u""_j;
            auto realSign = npc(m)->group(Imaginary::GROUP1_REAL_SIGN);
            if(npc(realSign)->length() != 0 && !(npc(realSign)->equals(static_cast< ::java::lang::Object* >(u"+"_j)))) {
                sign = realSign;
            }
            auto groupRealNumber = npc(m)->group(Imaginary::GROUP2_IMAGINARY_INTEGER_OR_DOUBLE);
            if(npc(groupRealNumber)->length() != 0) {
                real = ::java::lang::StringBuilder().append(sign)->append(groupRealNumber)->toString();
            } else {
                real = ::java::lang::StringBuilder().append(sign)->append(u"1"_j)->toString();
            }
        }
    } else {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::NUM_ERROR();
    }
    return new ::org::apache::poi::ss::formula::eval::StringEval(real);
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::ImReal::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, ::org::apache::poi::ss::formula::OperationEvaluationContext* ec)
{
    if(npc(args)->length != 1) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    return evaluate(npc(ec)->getRowIndex(), npc(ec)->getColumnIndex(), (*args)[int32_t(0)]);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::ImReal::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.ImReal", 42);
    return c;
}

void org::apache::poi::ss::formula::functions::ImReal::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new ImReal();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::ImReal::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* org::apache::poi::ss::formula::functions::ImReal::getClass0()
{
    return class_();
}

