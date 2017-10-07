// Generated from /POI/java/org/apache/poi/ss/formula/atp/NetworkdaysFunction.java
#include <org/apache/poi/ss/formula/atp/NetworkdaysFunction.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/OperationEvaluationContext.hpp>
#include <org/apache/poi/ss/formula/atp/ArgumentsEvaluator.hpp>
#include <org/apache/poi/ss/formula/atp/WorkdayCalculator.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <Array.hpp>
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

org::apache::poi::ss::formula::atp::NetworkdaysFunction::NetworkdaysFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::atp::NetworkdaysFunction::NetworkdaysFunction(ArgumentsEvaluator* anEvaluator) 
    : NetworkdaysFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor(anEvaluator);
}

org::apache::poi::ss::formula::functions::FreeRefFunction*& org::apache::poi::ss::formula::atp::NetworkdaysFunction::instance()
{
    clinit();
    return instance_;
}
org::apache::poi::ss::formula::functions::FreeRefFunction* org::apache::poi::ss::formula::atp::NetworkdaysFunction::instance_;

void org::apache::poi::ss::formula::atp::NetworkdaysFunction::ctor(ArgumentsEvaluator* anEvaluator)
{
    super::ctor();
    this->evaluator = anEvaluator;
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::atp::NetworkdaysFunction::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, ::org::apache::poi::ss::formula::OperationEvaluationContext* ec)
{
    if(npc(args)->length < 2 || npc(args)->length > 3) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    auto srcCellRow = npc(ec)->getRowIndex();
    auto srcCellCol = npc(ec)->getColumnIndex();
    double start, end;
    ::doubleArray* holidays;
    try {
        start = npc(this->evaluator)->evaluateDateArg((*args)[int32_t(0)], srcCellRow, srcCellCol);
        end = npc(this->evaluator)->evaluateDateArg((*args)[int32_t(1)], srcCellRow, srcCellCol);
        if(start > end) {
            return ::org::apache::poi::ss::formula::eval::ErrorEval::NAME_INVALID();
        }
        auto holidaysCell = npc(args)->length == 3 ? (*args)[int32_t(2)] : static_cast< ::org::apache::poi::ss::formula::eval::ValueEval* >(nullptr);
        holidays = npc(this->evaluator)->evaluateDatesArg(holidaysCell, srcCellRow, srcCellCol);
        return new ::org::apache::poi::ss::formula::eval::NumberEval(static_cast< double >(npc(WorkdayCalculator::instance())->calculateWorkdays(start, end, holidays)));
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::atp::NetworkdaysFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.atp.NetworkdaysFunction", 49);
    return c;
}

void org::apache::poi::ss::formula::atp::NetworkdaysFunction::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new NetworkdaysFunction(ArgumentsEvaluator::instance());
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::formula::atp::NetworkdaysFunction::getClass0()
{
    return class_();
}

