// Generated from /POI/java/org/apache/poi/ss/formula/functions/Bin2Dec.java
#include <org/apache/poi/ss/formula/functions/Bin2Dec.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/NumberFormatException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/OperationEvaluationContext.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
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

org::apache::poi::ss::formula::functions::Bin2Dec::Bin2Dec(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::Bin2Dec::Bin2Dec()
    : Bin2Dec(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::functions::FreeRefFunction*& org::apache::poi::ss::formula::functions::Bin2Dec::instance()
{
    clinit();
    return instance_;
}
org::apache::poi::ss::formula::functions::FreeRefFunction* org::apache::poi::ss::formula::functions::Bin2Dec::instance_;

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Bin2Dec::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* numberVE)
{
    ::java::lang::String* number;
    if(dynamic_cast< ::org::apache::poi::ss::formula::eval::RefEval* >(numberVE) != nullptr) {
        auto re = java_cast< ::org::apache::poi::ss::formula::eval::RefEval* >(numberVE);
        number = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToString(npc(re)->getInnerValueEval(npc(re)->getFirstSheetIndex()));
    } else {
        number = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToString(numberVE);
    }
    if(npc(number)->length() > 10) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::NUM_ERROR();
    }
    ::java::lang::String* unsigned_;
    bool isPositive;
    if(npc(number)->length() < 10) {
        unsigned_ = number;
        isPositive = true;
    } else {
        unsigned_ = npc(number)->substring(1);
        isPositive = npc(number)->startsWith(u"0"_j);
    }
    ::java::lang::String* value;
    try {
        if(isPositive) {
            auto sum = getDecimalValue(unsigned_);
            value = ::java::lang::String::valueOf(sum);
        } else {
            auto inverted = toggleBits(unsigned_);
            auto sum = getDecimalValue(inverted);
            sum++;
            value = ::java::lang::StringBuilder().append(u"-"_j)->append(sum)->toString();
        }
    } catch (::java::lang::NumberFormatException* e) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::NUM_ERROR();
    }
    return new ::org::apache::poi::ss::formula::eval::NumberEval(static_cast< double >(::java::lang::Long::parseLong(value)));
}

int32_t org::apache::poi::ss::formula::functions::Bin2Dec::getDecimalValue(::java::lang::String* unsigned_)
{
    auto sum = int32_t(0);
    auto numBits = npc(unsigned_)->length();
    auto power = numBits - int32_t(1);
    for (auto i = int32_t(0); i < numBits; i++) {
        auto bit = ::java::lang::Integer::parseInt(npc(unsigned_)->substring(i, i + int32_t(1)));
        auto term = static_cast< int32_t >((bit * ::java::lang::Math::pow(2, power)));
        sum += term;
        power--;
    }
    return sum;
}

java::lang::String* org::apache::poi::ss::formula::functions::Bin2Dec::toggleBits(::java::lang::String* s)
{
    clinit();
    auto i = ::java::lang::Long::parseLong(s, 2);
    auto i2 = i ^ ((int64_t(1LL) << npc(s)->length()) - int32_t(1));
    auto s2 = ::java::lang::Long::toBinaryString(i2);
    while (npc(s2)->length() < npc(s)->length()) 
                s2 = ::java::lang::StringBuilder().append(u'0')->append(s2)->toString();

    return s2;
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Bin2Dec::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, ::org::apache::poi::ss::formula::OperationEvaluationContext* ec)
{
    if(npc(args)->length != 1) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    return evaluate(npc(ec)->getRowIndex(), npc(ec)->getColumnIndex(), (*args)[int32_t(0)]);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::Bin2Dec::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Bin2Dec", 43);
    return c;
}

void org::apache::poi::ss::formula::functions::Bin2Dec::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new Bin2Dec();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Bin2Dec::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* org::apache::poi::ss::formula::functions::Bin2Dec::getClass0()
{
    return class_();
}

