// Generated from /POI/java/org/apache/poi/ss/formula/functions/Countif.java
#include <org/apache/poi/ss/formula/functions/Countif.hpp>

#include <java/lang/Boolean.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/ThreeDEval.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/BoolEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/CountUtils_I_MatchPredicate.hpp>
#include <org/apache/poi/ss/formula/functions/CountUtils.hpp>
#include <org/apache/poi/ss/formula/functions/Countif_BooleanMatcher.hpp>
#include <org/apache/poi/ss/formula/functions/Countif_CmpOp.hpp>
#include <org/apache/poi/ss/formula/functions/Countif_ErrorMatcher.hpp>
#include <org/apache/poi/ss/formula/functions/Countif_NumberMatcher.hpp>
#include <org/apache/poi/ss/formula/functions/Countif_StringMatcher.hpp>

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

poi::ss::formula::functions::Countif::Countif(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Countif::Countif()
    : Countif(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Countif::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1)
{
    auto mp = createCriteriaPredicate(arg1, srcRowIndex, srcColumnIndex);
    if(mp == nullptr) {
        return ::poi::ss::formula::eval::NumberEval::ZERO();
    }
    auto result = countMatchingCellsInArea(arg0, mp);
    return new ::poi::ss::formula::eval::NumberEval(result);
}

double poi::ss::formula::functions::Countif::countMatchingCellsInArea(::poi::ss::formula::eval::ValueEval* rangeArg, CountUtils_I_MatchPredicate* criteriaPredicate)
{
    if(dynamic_cast< ::poi::ss::formula::eval::RefEval* >(rangeArg) != nullptr) {
        return CountUtils::countMatchingCellsInRef(java_cast< ::poi::ss::formula::eval::RefEval* >(rangeArg), criteriaPredicate);
    } else if(dynamic_cast< ::poi::ss::formula::ThreeDEval* >(rangeArg) != nullptr) {
        return CountUtils::countMatchingCellsInArea(java_cast< ::poi::ss::formula::ThreeDEval* >(rangeArg), criteriaPredicate);
    } else {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Bad range arg type ("_j)->append(npc(npc(rangeArg)->getClass())->getName())
            ->append(u")"_j)->toString());
    }
}

poi::ss::formula::functions::CountUtils_I_MatchPredicate* poi::ss::formula::functions::Countif::createCriteriaPredicate(::poi::ss::formula::eval::ValueEval* arg, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    clinit();
    auto evaluatedCriteriaArg = evaluateCriteriaArg(arg, srcRowIndex, srcColumnIndex);
    if(dynamic_cast< ::poi::ss::formula::eval::NumberEval* >(evaluatedCriteriaArg) != nullptr) {
        return new Countif_NumberMatcher(npc((java_cast< ::poi::ss::formula::eval::NumberEval* >(evaluatedCriteriaArg)))->getNumberValue(), Countif_CmpOp::OP_NONE());
    }
    if(dynamic_cast< ::poi::ss::formula::eval::BoolEval* >(evaluatedCriteriaArg) != nullptr) {
        return new Countif_BooleanMatcher(npc((java_cast< ::poi::ss::formula::eval::BoolEval* >(evaluatedCriteriaArg)))->getBooleanValue(), Countif_CmpOp::OP_NONE());
    }
    if(dynamic_cast< ::poi::ss::formula::eval::StringEval* >(evaluatedCriteriaArg) != nullptr) {
        return createGeneralMatchPredicate(java_cast< ::poi::ss::formula::eval::StringEval* >(evaluatedCriteriaArg));
    }
    if(dynamic_cast< ::poi::ss::formula::eval::ErrorEval* >(evaluatedCriteriaArg) != nullptr) {
        return new Countif_ErrorMatcher(npc((java_cast< ::poi::ss::formula::eval::ErrorEval* >(evaluatedCriteriaArg)))->getErrorCode(), Countif_CmpOp::OP_NONE());
    }
    if(evaluatedCriteriaArg == static_cast< ::poi::ss::formula::eval::ValueEval* >(::poi::ss::formula::eval::BlankEval::instance())) {
        return nullptr;
    }
    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unexpected type for criteria ("_j)->append(npc(npc(evaluatedCriteriaArg)->getClass())->getName())
        ->append(u")"_j)->toString());
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Countif::evaluateCriteriaArg(::poi::ss::formula::eval::ValueEval* arg, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    clinit();
    try {
        return ::poi::ss::formula::eval::OperandResolver::getSingleValue(arg, srcRowIndex, srcColumnIndex);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

poi::ss::formula::functions::CountUtils_I_MatchPredicate* poi::ss::formula::functions::Countif::createGeneralMatchPredicate(::poi::ss::formula::eval::StringEval* stringEval)
{
    clinit();
    auto value = npc(stringEval)->getStringValue();
    auto operator_ = Countif_CmpOp::getOperator(value);
    value = npc(value)->substring(npc(operator_)->getLength());
    auto booleanVal = parseBoolean(value);
    if(booleanVal != nullptr) {
        return new Countif_BooleanMatcher(npc(booleanVal)->booleanValue(), operator_);
    }
    auto doubleVal = ::poi::ss::formula::eval::OperandResolver::parseDouble(value);
    if(doubleVal != nullptr) {
        return new Countif_NumberMatcher(npc(doubleVal)->doubleValue(), operator_);
    }
    auto ee = parseError(value);
    if(ee != nullptr) {
        return new Countif_ErrorMatcher(npc(ee)->getErrorCode(), operator_);
    }
    return new Countif_StringMatcher(value, operator_);
}

poi::ss::formula::eval::ErrorEval* poi::ss::formula::functions::Countif::parseError(::java::lang::String* value)
{
    clinit();
    if(npc(value)->length() < 4 || npc(value)->charAt(int32_t(0)) != u'#') {
        return nullptr;
    }
    if(npc(value)->equals(static_cast< ::java::lang::Object* >(u"#NULL!"_j))) {
        return ::poi::ss::formula::eval::ErrorEval::NULL_INTERSECTION();
    }
    if(npc(value)->equals(static_cast< ::java::lang::Object* >(u"#DIV/0!"_j))) {
        return ::poi::ss::formula::eval::ErrorEval::DIV_ZERO();
    }
    if(npc(value)->equals(static_cast< ::java::lang::Object* >(u"#VALUE!"_j))) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    if(npc(value)->equals(static_cast< ::java::lang::Object* >(u"#REF!"_j))) {
        return ::poi::ss::formula::eval::ErrorEval::REF_INVALID();
    }
    if(npc(value)->equals(static_cast< ::java::lang::Object* >(u"#NAME?"_j))) {
        return ::poi::ss::formula::eval::ErrorEval::NAME_INVALID();
    }
    if(npc(value)->equals(static_cast< ::java::lang::Object* >(u"#NUM!"_j))) {
        return ::poi::ss::formula::eval::ErrorEval::NUM_ERROR();
    }
    if(npc(value)->equals(static_cast< ::java::lang::Object* >(u"#N/A"_j))) {
        return ::poi::ss::formula::eval::ErrorEval::NA();
    }
    return nullptr;
}

java::lang::Boolean* poi::ss::formula::functions::Countif::parseBoolean(::java::lang::String* strRep)
{
    clinit();
    if(npc(strRep)->length() < 1) {
        return nullptr;
    }
    switch (npc(strRep)->charAt(int32_t(0))) {
    case u't':
    case u'T':
        if(npc(u"TRUE"_j)->equalsIgnoreCase(strRep)) {
            return ::java::lang::Boolean::TRUE();
        }
        break;
    case u'f':
    case u'F':
        if(npc(u"FALSE"_j)->equalsIgnoreCase(strRep)) {
            return ::java::lang::Boolean::FALSE();
        }
        break;
    }

    return nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Countif::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Countif", 43);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Countif::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::Countif::getClass0()
{
    return class_();
}

