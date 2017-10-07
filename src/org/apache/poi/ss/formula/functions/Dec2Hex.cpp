// Generated from /POI/java/org/apache/poi/ss/formula/functions/Dec2Hex.java
#include <org/apache/poi/ss/formula/functions/Dec2Hex.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Locale.hpp>
#include <org/apache/poi/ss/formula/OperationEvaluationContext.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::functions::Dec2Hex::Dec2Hex(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::Dec2Hex::Dec2Hex()
    : Dec2Hex(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::functions::FreeRefFunction*& org::apache::poi::ss::formula::functions::Dec2Hex::instance()
{
    clinit();
    return instance_;
}
org::apache::poi::ss::formula::functions::FreeRefFunction* org::apache::poi::ss::formula::functions::Dec2Hex::instance_;

int64_t& org::apache::poi::ss::formula::functions::Dec2Hex::MIN_VALUE()
{
    clinit();
    return MIN_VALUE_;
}
int64_t org::apache::poi::ss::formula::functions::Dec2Hex::MIN_VALUE_;

int64_t& org::apache::poi::ss::formula::functions::Dec2Hex::MAX_VALUE()
{
    clinit();
    return MAX_VALUE_;
}
int64_t org::apache::poi::ss::formula::functions::Dec2Hex::MAX_VALUE_;

constexpr int32_t org::apache::poi::ss::formula::functions::Dec2Hex::DEFAULT_PLACES_VALUE;

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Dec2Hex::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* number, ::org::apache::poi::ss::formula::eval::ValueEval* places)
{
    ::org::apache::poi::ss::formula::eval::ValueEval* veText1;
    try {
        veText1 = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue(number, srcRowIndex, srcColumnIndex);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    auto strText1 = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToString(veText1);
    auto number1 = ::org::apache::poi::ss::formula::eval::OperandResolver::parseDouble(strText1);
    if(number1 == nullptr) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    if(npc(number1)->longValue() < MIN_VALUE_ || npc(number1)->longValue() > MAX_VALUE_) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::NUM_ERROR();
    }
    auto placesNumber = int32_t(0);
    if((npc(number1))->doubleValue() < 0) {
        placesNumber = DEFAULT_PLACES_VALUE;
    } else if(places != nullptr) {
        ::org::apache::poi::ss::formula::eval::ValueEval* placesValueEval;
        try {
            placesValueEval = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue(places, srcRowIndex, srcColumnIndex);
        } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
            return npc(e)->getErrorEval();
        }
        auto placesStr = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToString(placesValueEval);
        auto placesNumberDouble = ::org::apache::poi::ss::formula::eval::OperandResolver::parseDouble(placesStr);
        if(placesNumberDouble == nullptr) {
            return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
        }
        placesNumber = npc(placesNumberDouble)->intValue();
        if(placesNumber < 0) {
            return ::org::apache::poi::ss::formula::eval::ErrorEval::NUM_ERROR();
        }
    }
    ::java::lang::String* hex;
    if(placesNumber != 0) {
        hex = ::java::lang::String::format(::java::util::Locale::ROOT(), ::java::lang::StringBuilder().append(u"%0"_j)->append(placesNumber)
            ->append(u"X"_j)->toString(), new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(npc(number1)->intValue()))}));
    } else {
        hex = ::java::lang::Long::toHexString(npc(number1)->longValue());
    }
    if((npc(number1))->doubleValue() < 0) {
        hex = ::java::lang::StringBuilder().append(u"FF"_j)->append(npc(hex)->substring(2))->toString();
    }
    return new ::org::apache::poi::ss::formula::eval::StringEval(npc(hex)->toUpperCase(::java::util::Locale::ROOT()));
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Dec2Hex::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0)
{
    return this->evaluate(srcRowIndex, srcColumnIndex, arg0, static_cast< ::org::apache::poi::ss::formula::eval::ValueEval* >(nullptr));
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Dec2Hex::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, ::org::apache::poi::ss::formula::OperationEvaluationContext* ec)
{
    if(npc(args)->length == 1) {
        return evaluate(npc(ec)->getRowIndex(), npc(ec)->getColumnIndex(), (*args)[int32_t(0)]);
    }
    if(npc(args)->length == 2) {
        return evaluate(npc(ec)->getRowIndex(), npc(ec)->getColumnIndex(), (*args)[int32_t(0)], (*args)[int32_t(1)]);
    }
    return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::Dec2Hex::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Dec2Hex", 43);
    return c;
}

void org::apache::poi::ss::formula::functions::Dec2Hex::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new Dec2Hex();
        MIN_VALUE_ = ::java::lang::Long::parseLong(u"-549755813888"_j);
        MAX_VALUE_ = ::java::lang::Long::parseLong(u"549755813887"_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Dec2Hex::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* org::apache::poi::ss::formula::functions::Dec2Hex::getClass0()
{
    return class_();
}

