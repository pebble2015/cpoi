// Generated from /POI/java/org/apache/poi/ss/formula/atp/AnalysisToolPak.java
#include <org/apache/poi/ss/formula/atp/AnalysisToolPak_NotImplemented.hpp>

#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/eval/NotImplementedFunctionException.hpp>

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

org::apache::poi::ss::formula::atp::AnalysisToolPak_NotImplemented::AnalysisToolPak_NotImplemented(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::atp::AnalysisToolPak_NotImplemented::AnalysisToolPak_NotImplemented(::java::lang::String* functionName) 
    : AnalysisToolPak_NotImplemented(*static_cast< ::default_init_tag* >(0))
{
    ctor(functionName);
}

void org::apache::poi::ss::formula::atp::AnalysisToolPak_NotImplemented::ctor(::java::lang::String* functionName)
{
    super::ctor();
    _functionName = functionName;
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::atp::AnalysisToolPak_NotImplemented::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, ::org::apache::poi::ss::formula::OperationEvaluationContext* ec)
{
    throw new ::org::apache::poi::ss::formula::eval::NotImplementedFunctionException(_functionName);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::atp::AnalysisToolPak_NotImplemented::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.atp.AnalysisToolPak.NotImplemented", 60);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::atp::AnalysisToolPak_NotImplemented::getClass0()
{
    return class_();
}

