// Generated from /POI/java/org/apache/poi/ss/formula/functions/Rank.java
#include <org/apache/poi/ss/formula/functions/Rank.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ss/formula/eval/AreaEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
#include <org/apache/poi/ss/formula/eval/RefListEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

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

poi::ss::formula::functions::Rank::Rank(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Rank::Rank()
    : Rank(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Rank::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1)
{
    try {
        auto ve = ::poi::ss::formula::eval::OperandResolver::getSingleValue(arg0, srcRowIndex, srcColumnIndex);
        auto result = ::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(ve);
        if(::java::lang::Double::isNaN(result) || ::java::lang::Double::isInfinite(result)) {
            throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::NUM_ERROR());
        }
        if(dynamic_cast< ::poi::ss::formula::eval::RefListEval* >(arg1) != nullptr) {
            return eval(result, (java_cast< ::poi::ss::formula::eval::RefListEval* >(arg1)), true);
        }
        auto const aeRange = convertRangeArg(arg1);
        return eval(result, aeRange, true);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Rank::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1, ::poi::ss::formula::eval::ValueEval* arg2)
{
    try {
        auto ve = ::poi::ss::formula::eval::OperandResolver::getSingleValue(arg0, srcRowIndex, srcColumnIndex);
        auto const result = ::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(ve);
        if(::java::lang::Double::isNaN(result) || ::java::lang::Double::isInfinite(result)) {
            throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::NUM_ERROR());
        }
        ve = ::poi::ss::formula::eval::OperandResolver::getSingleValue(arg2, srcRowIndex, srcColumnIndex);
        auto order_value = ::poi::ss::formula::eval::OperandResolver::coerceValueToInt(ve);
        bool order;
        if(order_value == 0) {
            order = true;
        } else if(order_value == 1) {
            order = false;
        } else {
            throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::NUM_ERROR());
        }
        if(dynamic_cast< ::poi::ss::formula::eval::RefListEval* >(arg1) != nullptr) {
            return eval(result, (java_cast< ::poi::ss::formula::eval::RefListEval* >(arg1)), order);
        }
        auto const aeRange = convertRangeArg(arg1);
        return eval(result, aeRange, order);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Rank::eval(double arg0, ::poi::ss::formula::eval::AreaEval* aeRange, bool descending_order)
{
    clinit();
    auto rank = int32_t(1);
    auto height = npc(aeRange)->getHeight();
    auto width = npc(aeRange)->getWidth();
    for (auto r = int32_t(0); r < height; r++) {
        for (auto c = int32_t(0); c < width; c++) {
            auto value = getValue(aeRange, r, c);
            if(value == nullptr)
                continue;

            if(descending_order && (npc(value))->doubleValue() > arg0 || !descending_order && (npc(value))->doubleValue() < arg0) {
                rank++;
            }
        }
    }
    return new ::poi::ss::formula::eval::NumberEval(static_cast< double >(rank));
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Rank::eval(double arg0, ::poi::ss::formula::eval::RefListEval* aeRange, bool descending_order)
{
    clinit();
    auto rank = int32_t(1);
    for (auto _i = npc(npc(aeRange)->getList())->iterator(); _i->hasNext(); ) {
        ::poi::ss::formula::eval::ValueEval* ve = java_cast< ::poi::ss::formula::eval::ValueEval* >(_i->next());
        {
            if(dynamic_cast< ::poi::ss::formula::eval::RefEval* >(ve) != nullptr) {
                ve = npc((java_cast< ::poi::ss::formula::eval::RefEval* >(ve)))->getInnerValueEval(npc((java_cast< ::poi::ss::formula::eval::RefEval* >(ve)))->getFirstSheetIndex());
            }
            ::java::lang::Double* value;
            if(dynamic_cast< ::poi::ss::formula::eval::NumberEval* >(ve) != nullptr) {
                value = ::java::lang::Double::valueOf(npc((java_cast< ::poi::ss::formula::eval::NumberEval* >(ve)))->getNumberValue());
            } else {
                continue;
            }
            if(descending_order && (npc(value))->doubleValue() > arg0 || !descending_order && (npc(value))->doubleValue() < arg0) {
                rank++;
            }
        }
    }
    return new ::poi::ss::formula::eval::NumberEval(static_cast< double >(rank));
}

java::lang::Double* poi::ss::formula::functions::Rank::getValue(::poi::ss::formula::eval::AreaEval* aeRange, int32_t relRowIndex, int32_t relColIndex)
{
    clinit();
    auto addend = npc(aeRange)->getRelativeValue(relRowIndex, relColIndex);
    if(dynamic_cast< ::poi::ss::formula::eval::NumberEval* >(addend) != nullptr) {
        return ::java::lang::Double::valueOf(npc((java_cast< ::poi::ss::formula::eval::NumberEval* >(addend)))->getNumberValue());
    }
    return nullptr;
}

poi::ss::formula::eval::AreaEval* poi::ss::formula::functions::Rank::convertRangeArg(::poi::ss::formula::eval::ValueEval* eval) /* throws(EvaluationException) */
{
    clinit();
    if(dynamic_cast< ::poi::ss::formula::eval::AreaEval* >(eval) != nullptr) {
        return java_cast< ::poi::ss::formula::eval::AreaEval* >(eval);
    }
    if(dynamic_cast< ::poi::ss::formula::eval::RefEval* >(eval) != nullptr) {
        return npc((java_cast< ::poi::ss::formula::eval::RefEval* >(eval)))->offset(0, 0, 0, 0);
    }
    throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Rank::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Rank", 40);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Rank::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::Rank::getClass0()
{
    return class_();
}

