// Generated from /POI/java/org/apache/poi/ss/formula/atp/IfError.java
#include <org/apache/poi/ss/formula/atp/IfError.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/OperationEvaluationContext.hpp>
#include <org/apache/poi/ss/formula/WorkbookEvaluator.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
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

org::apache::poi::ss::formula::atp::IfError::IfError(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::atp::IfError::IfError() 
    : IfError(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::functions::FreeRefFunction*& org::apache::poi::ss::formula::atp::IfError::instance()
{
    clinit();
    return instance_;
}
org::apache::poi::ss::formula::functions::FreeRefFunction* org::apache::poi::ss::formula::atp::IfError::instance_;

void org::apache::poi::ss::formula::atp::IfError::ctor()
{
    super::ctor();
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::atp::IfError::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, ::org::apache::poi::ss::formula::OperationEvaluationContext* ec)
{
    if(npc(args)->length != 2) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    ::org::apache::poi::ss::formula::eval::ValueEval* val;
    try {
        val = evaluateInternal((*args)[int32_t(0)], (*args)[int32_t(1)], npc(ec)->getRowIndex(), npc(ec)->getColumnIndex());
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    return val;
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::atp::IfError::evaluateInternal(::org::apache::poi::ss::formula::eval::ValueEval* arg, ::org::apache::poi::ss::formula::eval::ValueEval* iferror, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */
{
    clinit();
    arg = ::org::apache::poi::ss::formula::WorkbookEvaluator::dereferenceResult(arg, srcCellRow, srcCellCol);
    if(dynamic_cast< ::org::apache::poi::ss::formula::eval::ErrorEval* >(arg) != nullptr) {
        return iferror;
    } else {
        return arg;
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::atp::IfError::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.atp.IfError", 37);
    return c;
}

void org::apache::poi::ss::formula::atp::IfError::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new IfError();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::formula::atp::IfError::getClass0()
{
    return class_();
}

