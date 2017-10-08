// Generated from /POI/java/org/apache/poi/ss/formula/functions/Fixed.java
#include <org/apache/poi/ss/formula/functions/Fixed.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/math/BigDecimal.hpp>
#include <java/math/RoundingMode.hpp>
#include <java/text/DecimalFormat.hpp>
#include <java/text/NumberFormat.hpp>
#include <java/util/Locale.hpp>
#include <org/apache/poi/ss/formula/eval/BoolEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
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

poi::ss::formula::functions::Fixed::Fixed(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Fixed::Fixed()
    : Fixed(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Fixed::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1, ::poi::ss::formula::eval::ValueEval* arg2)
{
    return fixed(arg0, arg1, arg2, srcRowIndex, srcColumnIndex);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Fixed::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1)
{
    return fixed(arg0, arg1, ::poi::ss::formula::eval::BoolEval::FALSE(), srcRowIndex, srcColumnIndex);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Fixed::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0)
{
    return fixed(arg0, new ::poi::ss::formula::eval::NumberEval(static_cast< double >(int32_t(2))), ::poi::ss::formula::eval::BoolEval::FALSE(), srcRowIndex, srcColumnIndex);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Fixed::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    switch (npc(args)->length) {
    case int32_t(1):
        return fixed((*args)[int32_t(0)], new ::poi::ss::formula::eval::NumberEval(static_cast< double >(int32_t(2))), ::poi::ss::formula::eval::BoolEval::FALSE(), srcRowIndex, srcColumnIndex);
    case int32_t(2):
        return fixed((*args)[int32_t(0)], (*args)[int32_t(1)], ::poi::ss::formula::eval::BoolEval::FALSE(), srcRowIndex, srcColumnIndex);
    case int32_t(3):
        return fixed((*args)[int32_t(0)], (*args)[int32_t(1)], (*args)[int32_t(2)], srcRowIndex, srcColumnIndex);
    }

    return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Fixed::fixed(::poi::ss::formula::eval::ValueEval* numberParam, ::poi::ss::formula::eval::ValueEval* placesParam, ::poi::ss::formula::eval::ValueEval* skipThousandsSeparatorParam, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    try {
        auto numberValueEval = ::poi::ss::formula::eval::OperandResolver::getSingleValue(numberParam, srcRowIndex, srcColumnIndex);
        auto number = new ::java::math::BigDecimal(::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(numberValueEval));
        auto placesValueEval = ::poi::ss::formula::eval::OperandResolver::getSingleValue(placesParam, srcRowIndex, srcColumnIndex);
        auto places = ::poi::ss::formula::eval::OperandResolver::coerceValueToInt(placesValueEval);
        auto skipThousandsSeparatorValueEval = ::poi::ss::formula::eval::OperandResolver::getSingleValue(skipThousandsSeparatorParam, srcRowIndex, srcColumnIndex);
        auto skipThousandsSeparator = ::poi::ss::formula::eval::OperandResolver::coerceValueToBoolean(skipThousandsSeparatorValueEval, false);
        number = npc(number)->setScale(places, ::java::math::RoundingMode::HALF_UP);
        auto nf = ::java::text::NumberFormat::getNumberInstance(::java::util::Locale::US());
        auto formatter = java_cast< ::java::text::DecimalFormat* >(nf);
        npc(formatter)->setGroupingUsed(!(skipThousandsSeparator != nullptr && (npc(skipThousandsSeparator))->booleanValue()));
        npc(formatter)->setMinimumFractionDigits(places >= 0 ? places : int32_t(0));
        npc(formatter)->setMaximumFractionDigits(places >= 0 ? places : int32_t(0));
        auto numberString = npc(formatter)->format(npc(number)->doubleValue());
        return new ::poi::ss::formula::eval::StringEval(numberString);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Fixed::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Fixed", 41);
    return c;
}

java::lang::Class* poi::ss::formula::functions::Fixed::getClass0()
{
    return class_();
}

