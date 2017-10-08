// Generated from /POI/java/org/apache/poi/ss/formula/functions/BooleanFunction.java
#include <org/apache/poi/ss/formula/functions/BooleanFunction.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/TwoDEval.hpp>
#include <org/apache/poi/ss/formula/eval/BoolEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/MissingArgEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/BooleanFunction_1.hpp>
#include <org/apache/poi/ss/formula/functions/BooleanFunction_2.hpp>
#include <org/apache/poi/ss/formula/functions/BooleanFunction_3.hpp>
#include <org/apache/poi/ss/formula/functions/BooleanFunction_4.hpp>
#include <org/apache/poi/ss/formula/functions/BooleanFunction_5.hpp>
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

poi::ss::formula::functions::BooleanFunction::BooleanFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::BooleanFunction::BooleanFunction()
    : BooleanFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::BooleanFunction::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRow, int32_t srcCol)
{
    if(npc(args)->length < 1) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    bool boolResult;
    try {
        boolResult = calculate(args);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    return ::poi::ss::formula::eval::BoolEval::valueOf(boolResult);
}

bool poi::ss::formula::functions::BooleanFunction::calculate(::poi::ss::formula::eval::ValueEvalArray* args) /* throws(EvaluationException) */
{
    auto result = getInitialResultValue();
    auto atleastOneNonBlank = false;
    for(auto arg : *npc(args)) {
        ::java::lang::Boolean* tempVe;
        if(dynamic_cast< ::poi::ss::formula::TwoDEval* >(arg) != nullptr) {
            auto ae = java_cast< ::poi::ss::formula::TwoDEval* >(arg);
            auto height = npc(ae)->getHeight();
            auto width = npc(ae)->getWidth();
            for (auto rrIx = int32_t(0); rrIx < height; rrIx++) {
                for (auto rcIx = int32_t(0); rcIx < width; rcIx++) {
                    auto ve = npc(ae)->getValue(rrIx, rcIx);
                    tempVe = ::poi::ss::formula::eval::OperandResolver::coerceValueToBoolean(ve, true);
                    if(tempVe != nullptr) {
                        result = partialEvaluate(result, npc(tempVe)->booleanValue());
                        atleastOneNonBlank = true;
                    }
                }
            }
            continue;
        }
        if(dynamic_cast< ::poi::ss::formula::eval::RefEval* >(arg) != nullptr) {
            auto re = java_cast< ::poi::ss::formula::eval::RefEval* >(arg);
            auto const firstSheetIndex = npc(re)->getFirstSheetIndex();
            auto const lastSheetIndex = npc(re)->getLastSheetIndex();
            for (auto sIx = firstSheetIndex; sIx <= lastSheetIndex; sIx++) {
                auto ve = npc(re)->getInnerValueEval(sIx);
                tempVe = ::poi::ss::formula::eval::OperandResolver::coerceValueToBoolean(ve, true);
                if(tempVe != nullptr) {
                    result = partialEvaluate(result, npc(tempVe)->booleanValue());
                    atleastOneNonBlank = true;
                }
            }
            continue;
        }
        if(arg == static_cast< ::poi::ss::formula::eval::ValueEval* >(::poi::ss::formula::eval::MissingArgEval::instance())) {
            tempVe = nullptr;
        } else {
            tempVe = ::poi::ss::formula::eval::OperandResolver::coerceValueToBoolean(arg, false);
        }
        if(tempVe != nullptr) {
            result = partialEvaluate(result, npc(tempVe)->booleanValue());
            atleastOneNonBlank = true;
        }
    }
    if(!atleastOneNonBlank) {
        throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
    }
    return result;
}

poi::ss::formula::functions::Function*& poi::ss::formula::functions::BooleanFunction::AND()
{
    clinit();
    return AND_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::BooleanFunction::AND_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::BooleanFunction::OR()
{
    clinit();
    return OR_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::BooleanFunction::OR_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::BooleanFunction::FALSE()
{
    clinit();
    return FALSE_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::BooleanFunction::FALSE_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::BooleanFunction::TRUE()
{
    clinit();
    return TRUE_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::BooleanFunction::TRUE_;

poi::ss::formula::functions::Function*& poi::ss::formula::functions::BooleanFunction::NOT()
{
    clinit();
    return NOT_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::BooleanFunction::NOT_;

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::BooleanFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.BooleanFunction", 51);
    return c;
}

void poi::ss::formula::functions::BooleanFunction::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        AND_ = new BooleanFunction_1();
        OR_ = new BooleanFunction_2();
        FALSE_ = new BooleanFunction_3();
        TRUE_ = new BooleanFunction_4();
        NOT_ = new BooleanFunction_5();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::functions::BooleanFunction::getClass0()
{
    return class_();
}

