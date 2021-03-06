// Generated from /POI/java/org/apache/poi/ss/formula/atp/WorkdayFunction.java
#include <org/apache/poi/ss/formula/atp/WorkdayFunction.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/OperationEvaluationContext.hpp>
#include <org/apache/poi/ss/formula/atp/ArgumentsEvaluator.hpp>
#include <org/apache/poi/ss/formula/atp/WorkdayCalculator.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/usermodel/DateUtil.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

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

poi::ss::formula::atp::WorkdayFunction::WorkdayFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::atp::WorkdayFunction::WorkdayFunction(ArgumentsEvaluator* anEvaluator) 
    : WorkdayFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor(anEvaluator);
}

poi::ss::formula::functions::FreeRefFunction*& poi::ss::formula::atp::WorkdayFunction::instance()
{
    clinit();
    return instance_;
}
poi::ss::formula::functions::FreeRefFunction* poi::ss::formula::atp::WorkdayFunction::instance_;

void poi::ss::formula::atp::WorkdayFunction::ctor(ArgumentsEvaluator* anEvaluator)
{
    super::ctor();
    this->evaluator = anEvaluator;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::atp::WorkdayFunction::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, ::poi::ss::formula::OperationEvaluationContext* ec)
{
    if(npc(args)->length < 2 || npc(args)->length > 3) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    auto srcCellRow = npc(ec)->getRowIndex();
    auto srcCellCol = npc(ec)->getColumnIndex();
    double start;
    int32_t days;
    ::doubleArray* holidays;
    try {
        start = npc(this->evaluator)->evaluateDateArg((*args)[int32_t(0)], srcCellRow, srcCellCol);
        days = static_cast< int32_t >(::java::lang::Math::floor(npc(this->evaluator)->evaluateNumberArg((*args)[int32_t(1)], srcCellRow, srcCellCol)));
        auto holidaysCell = npc(args)->length == 3 ? (*args)[int32_t(2)] : static_cast< ::poi::ss::formula::eval::ValueEval* >(nullptr);
        holidays = npc(this->evaluator)->evaluateDatesArg(holidaysCell, srcCellRow, srcCellCol);
        return new ::poi::ss::formula::eval::NumberEval(::poi::ss::usermodel::DateUtil::getExcelDate(npc(WorkdayCalculator::instance())->calculateWorkdays(start, days, holidays)));
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::atp::WorkdayFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.atp.WorkdayFunction", 45);
    return c;
}

void poi::ss::formula::atp::WorkdayFunction::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new WorkdayFunction(ArgumentsEvaluator::instance());
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::atp::WorkdayFunction::getClass0()
{
    return class_();
}

