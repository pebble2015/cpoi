// Generated from /POI/java/org/apache/poi/ss/formula/functions/Value.java
#include <org/apache/poi/ss/formula/functions/Value.hpp>

#include <java/lang/Character.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/NumberFormatException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Short.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::functions::Value::Value(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Value::Value()
    : Value(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t poi::ss::formula::functions::Value::MIN_DISTANCE_BETWEEN_THOUSANDS_SEPARATOR;

java::lang::Double*& poi::ss::formula::functions::Value::ZERO()
{
    clinit();
    return ZERO_;
}
java::lang::Double* poi::ss::formula::functions::Value::ZERO_;

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Value::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0)
{
    ::poi::ss::formula::eval::ValueEval* veText;
    try {
        veText = ::poi::ss::formula::eval::OperandResolver::getSingleValue(arg0, srcRowIndex, srcColumnIndex);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    auto strText = ::poi::ss::formula::eval::OperandResolver::coerceValueToString(veText);
    auto result = convertTextToNumber(strText);
    if(result == nullptr) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    return new ::poi::ss::formula::eval::NumberEval(npc(result)->doubleValue());
}

java::lang::Double* poi::ss::formula::functions::Value::convertTextToNumber(::java::lang::String* strText)
{
    clinit();
    auto foundCurrency = false;
    auto foundUnaryPlus = false;
    auto foundUnaryMinus = false;
    auto foundPercentage = false;
    auto len = npc(strText)->length();
    int32_t i;
    for (i = 0; i < len; i++) {
        auto ch = npc(strText)->charAt(i);
        if(::java::lang::Character::isDigit(ch) || ch == u'.') {
            break;
        }
        switch (ch) {
        case u' ':
            continue;
        case u'$':
            if(foundCurrency) {
                return nullptr;
            }
            foundCurrency = true;
            continue;
        case u'+':
            if(foundUnaryMinus || foundUnaryPlus) {
                return nullptr;
            }
            foundUnaryPlus = true;
            continue;
        case u'-':
            if(foundUnaryMinus || foundUnaryPlus) {
                return nullptr;
            }
            foundUnaryMinus = true;
            continue;
        default:
            return nullptr;
        }

    }
    if(i >= len) {
        if(foundCurrency || foundUnaryMinus || foundUnaryPlus) {
            return nullptr;
        }
        return ZERO_;
    }
    auto foundDecimalPoint = false;
    int32_t lastThousandsSeparatorIndex = ::java::lang::Short::MIN_VALUE;
    auto sb = new ::java::lang::StringBuffer(len);
    for (; i < len; i++) {
        auto ch = npc(strText)->charAt(i);
        if(::java::lang::Character::isDigit(ch)) {
            npc(sb)->append(ch);
            continue;
        }
        {
            ::java::lang::String* remainingTextTrimmed;
            int32_t distanceBetweenThousandsSeparators;
            switch (ch) {
            case u' ':
                remainingTextTrimmed = npc(npc(strText)->substring(i))->trim();
                if(npc(remainingTextTrimmed)->equals(static_cast< ::java::lang::Object* >(u"%"_j))) {
                    foundPercentage = true;
                    break;
                }
                if(npc(remainingTextTrimmed)->length() > 0) {
                    return nullptr;
                }
                break;
            case u'.':
                if(foundDecimalPoint) {
                    return nullptr;
                }
                if(i - lastThousandsSeparatorIndex < MIN_DISTANCE_BETWEEN_THOUSANDS_SEPARATOR) {
                    return nullptr;
                }
                foundDecimalPoint = true;
                npc(sb)->append(u'.');
                continue;
            case u',':
                if(foundDecimalPoint) {
                    return nullptr;
                }
                distanceBetweenThousandsSeparators = i - lastThousandsSeparatorIndex;
                if(distanceBetweenThousandsSeparators < MIN_DISTANCE_BETWEEN_THOUSANDS_SEPARATOR) {
                    return nullptr;
                }
                lastThousandsSeparatorIndex = i;
                continue;
            case u'E':
            case u'e':
                if(i - lastThousandsSeparatorIndex < MIN_DISTANCE_BETWEEN_THOUSANDS_SEPARATOR) {
                    return nullptr;
                }
                npc(sb)->append(npc(strText)->substring(i));
                i = len;
                break;
            case u'%':
                foundPercentage = true;
                break;
            default:
                return nullptr;
            }
        }

    }
    if(!foundDecimalPoint) {
        if(i - lastThousandsSeparatorIndex < MIN_DISTANCE_BETWEEN_THOUSANDS_SEPARATOR) {
            return nullptr;
        }
    }
    double d;
    try {
        d = ::java::lang::Double::parseDouble(npc(sb)->toString());
    } catch (::java::lang::NumberFormatException* e) {
        return nullptr;
    }
    auto result = foundUnaryMinus ? -d : d;
    return ::java::lang::Double::valueOf(foundPercentage ? result / 100.0 : result);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Value::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Value", 41);
    return c;
}

void poi::ss::formula::functions::Value::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        ZERO_ = new ::java::lang::Double(0.0);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Value::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::Value::getClass0()
{
    return class_();
}

