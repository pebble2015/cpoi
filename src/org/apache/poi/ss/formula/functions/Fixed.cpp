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

org::apache::poi::ss::formula::functions::Fixed::Fixed(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::Fixed::Fixed()
    : Fixed(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Fixed::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1, ::org::apache::poi::ss::formula::eval::ValueEval* arg2)
{
    return fixed(arg0, arg1, arg2, srcRowIndex, srcColumnIndex);
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Fixed::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1)
{
    return fixed(arg0, arg1, ::org::apache::poi::ss::formula::eval::BoolEval::FALSE(), srcRowIndex, srcColumnIndex);
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Fixed::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0)
{
    return fixed(arg0, new ::org::apache::poi::ss::formula::eval::NumberEval(static_cast< double >(int32_t(2))), ::org::apache::poi::ss::formula::eval::BoolEval::FALSE(), srcRowIndex, srcColumnIndex);
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Fixed::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    switch (npc(args)->length) {
    case int32_t(1):
        return fixed((*args)[int32_t(0)], new ::org::apache::poi::ss::formula::eval::NumberEval(static_cast< double >(int32_t(2))), ::org::apache::poi::ss::formula::eval::BoolEval::FALSE(), srcRowIndex, srcColumnIndex);
    case int32_t(2):
        return fixed((*args)[int32_t(0)], (*args)[int32_t(1)], ::org::apache::poi::ss::formula::eval::BoolEval::FALSE(), srcRowIndex, srcColumnIndex);
    case int32_t(3):
        return fixed((*args)[int32_t(0)], (*args)[int32_t(1)], (*args)[int32_t(2)], srcRowIndex, srcColumnIndex);
    }

    return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Fixed::fixed(::org::apache::poi::ss::formula::eval::ValueEval* numberParam, ::org::apache::poi::ss::formula::eval::ValueEval* placesParam, ::org::apache::poi::ss::formula::eval::ValueEval* skipThousandsSeparatorParam, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    try {
        auto numberValueEval = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue(numberParam, srcRowIndex, srcColumnIndex);
        auto number = new ::java::math::BigDecimal(::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(numberValueEval));
        auto placesValueEval = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue(placesParam, srcRowIndex, srcColumnIndex);
        auto places = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToInt(placesValueEval);
        auto skipThousandsSeparatorValueEval = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue(skipThousandsSeparatorParam, srcRowIndex, srcColumnIndex);
        auto skipThousandsSeparator = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToBoolean(skipThousandsSeparatorValueEval, false);
        number = npc(number)->setScale(places, ::java::math::RoundingMode::HALF_UP);
        auto nf = ::java::text::NumberFormat::getNumberInstance(::java::util::Locale::US());
        auto formatter = java_cast< ::java::text::DecimalFormat* >(nf);
        npc(formatter)->setGroupingUsed(!(skipThousandsSeparator != nullptr && (npc(skipThousandsSeparator))->booleanValue()));
        npc(formatter)->setMinimumFractionDigits(places >= 0 ? places : int32_t(0));
        npc(formatter)->setMaximumFractionDigits(places >= 0 ? places : int32_t(0));
        auto numberString = npc(formatter)->format(npc(number)->doubleValue());
        return new ::org::apache::poi::ss::formula::eval::StringEval(numberString);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::Fixed::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Fixed", 41);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::functions::Fixed::getClass0()
{
    return class_();
}

