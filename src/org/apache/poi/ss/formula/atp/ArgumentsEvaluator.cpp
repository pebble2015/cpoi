// Generated from /POI/java/org/apache/poi/ss/formula/atp/ArgumentsEvaluator.java
#include <org/apache/poi/ss/formula/atp/ArgumentsEvaluator.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Calendar.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ss/formula/atp/DateParser.hpp>
#include <org/apache/poi/ss/formula/eval/AreaEvalBase.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/usermodel/DateUtil.hpp>
#include <Array.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::atp::ArgumentsEvaluator::ArgumentsEvaluator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::atp::ArgumentsEvaluator::ArgumentsEvaluator() 
    : ArgumentsEvaluator(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::atp::ArgumentsEvaluator*& poi::ss::formula::atp::ArgumentsEvaluator::instance()
{
    clinit();
    return instance_;
}
poi::ss::formula::atp::ArgumentsEvaluator* poi::ss::formula::atp::ArgumentsEvaluator::instance_;

void poi::ss::formula::atp::ArgumentsEvaluator::ctor()
{
    super::ctor();
}

double poi::ss::formula::atp::ArgumentsEvaluator::evaluateDateArg(::poi::ss::formula::eval::ValueEval* arg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */
{
    auto ve = ::poi::ss::formula::eval::OperandResolver::getSingleValue(arg, srcCellRow, static_cast< int16_t >(srcCellCol));
    if(dynamic_cast< ::poi::ss::formula::eval::StringEval* >(ve) != nullptr) {
        auto strVal = npc((java_cast< ::poi::ss::formula::eval::StringEval* >(ve)))->getStringValue();
        auto dVal = ::poi::ss::formula::eval::OperandResolver::parseDouble(strVal);
        if(dVal != nullptr) {
            return npc(dVal)->doubleValue();
        }
        auto date = DateParser::parseDate(strVal);
        return ::poi::ss::usermodel::DateUtil::getExcelDate(date, false);
    }
    return ::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(ve);
}

doubleArray* poi::ss::formula::atp::ArgumentsEvaluator::evaluateDatesArg(::poi::ss::formula::eval::ValueEval* arg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */
{
    if(arg == nullptr) {
        return new ::doubleArray(int32_t(0));
    }
    if(dynamic_cast< ::poi::ss::formula::eval::StringEval* >(arg) != nullptr) {
        return new ::doubleArray({evaluateDateArg(arg, srcCellRow, srcCellCol)});
    } else if(dynamic_cast< ::poi::ss::formula::eval::AreaEvalBase* >(arg) != nullptr) {
        ::java::util::List* valuesList = new ::java::util::ArrayList();
        auto area = java_cast< ::poi::ss::formula::eval::AreaEvalBase* >(arg);
        for (auto i = npc(area)->getFirstRow(); i <= npc(area)->getLastRow(); i++) {
            for (auto j = npc(area)->getFirstColumn(); j <= npc(area)->getLastColumn(); j++) {
                npc(valuesList)->add(::java::lang::Double::valueOf(evaluateDateArg(npc(area)->getAbsoluteValue(i, j), i, j)));
            }
        }
        auto values = new ::doubleArray(npc(valuesList)->size());
        for (auto i = int32_t(0); i < npc(valuesList)->size(); i++) {
            (*values)[i] = npc(java_cast< ::java::lang::Double* >(npc(valuesList)->get(i)))->doubleValue();
        }
        return values;
    }
    return new ::doubleArray({::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(arg)});
}

double poi::ss::formula::atp::ArgumentsEvaluator::evaluateNumberArg(::poi::ss::formula::eval::ValueEval* arg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */
{
    if(arg == nullptr) {
        return 0.0f;
    }
    return ::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(arg);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::atp::ArgumentsEvaluator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.atp.ArgumentsEvaluator", 48);
    return c;
}

void poi::ss::formula::atp::ArgumentsEvaluator::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new ArgumentsEvaluator();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::atp::ArgumentsEvaluator::getClass0()
{
    return class_();
}

