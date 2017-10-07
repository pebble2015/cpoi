// Generated from /POI/java/org/apache/poi/ss/formula/functions/Intercept.java
#include <org/apache/poi/ss/formula/functions/Intercept.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/LinearRegressionFunction_FUNCTION.hpp>
#include <org/apache/poi/ss/formula/functions/LinearRegressionFunction.hpp>

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

org::apache::poi::ss::formula::functions::Intercept::Intercept(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::Intercept::Intercept() 
    : Intercept(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::ss::formula::functions::Intercept::ctor()
{
    super::ctor();
    func = new LinearRegressionFunction(LinearRegressionFunction_FUNCTION::INTERCEPT);
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Intercept::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1)
{
    return npc(func)->evaluate(srcRowIndex, srcColumnIndex, arg0, arg1);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::Intercept::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Intercept", 45);
    return c;
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Intercept::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* org::apache::poi::ss::formula::functions::Intercept::getClass0()
{
    return class_();
}

