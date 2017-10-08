// Generated from /POI/java/org/apache/poi/ss/formula/functions/Sumproduct.java
#include <org/apache/poi/ss/formula/functions/Sumproduct.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/ss/formula/TwoDEval.hpp>
#include <org/apache/poi/ss/formula/eval/AreaEval.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/NumericValueEval.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
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
typedef ::SubArray< ::poi::ss::formula::TwoDEval, ::java::lang::ObjectArray, ::poi::ss::formula::eval::ValueEvalArray > TwoDEvalArray;
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

poi::ss::formula::functions::Sumproduct::Sumproduct(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Sumproduct::Sumproduct()
    : Sumproduct(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Sumproduct::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcCellRow, int32_t srcCellCol)
{
    auto maxN = npc(args)->length;
    if(maxN < 1) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    auto firstArg = (*args)[int32_t(0)];
    try {
        if(dynamic_cast< ::poi::ss::formula::eval::NumericValueEval* >(firstArg) != nullptr) {
            return evaluateSingleProduct(args);
        }
        if(dynamic_cast< ::poi::ss::formula::eval::RefEval* >(firstArg) != nullptr) {
            return evaluateSingleProduct(args);
        }
        if(dynamic_cast< ::poi::ss::formula::TwoDEval* >(firstArg) != nullptr) {
            auto ae = java_cast< ::poi::ss::formula::TwoDEval* >(firstArg);
            if(npc(ae)->isRow() && npc(ae)->isColumn()) {
                return evaluateSingleProduct(args);
            }
            return evaluateAreaSumProduct(args);
        }
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Invalid arg type for SUMPRODUCT: ("_j)->append(npc(npc(firstArg)->getClass())->getName())
        ->append(u")"_j)->toString());
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Sumproduct::evaluateSingleProduct(::poi::ss::formula::eval::ValueEvalArray* evalArgs) /* throws(EvaluationException) */
{
    clinit();
    auto maxN = npc(evalArgs)->length;
    auto term = 1.0;
    for (auto n = int32_t(0); n < maxN; n++) {
        auto val = getScalarValue((*evalArgs)[n]);
        term *= val;
    }
    return new ::poi::ss::formula::eval::NumberEval(term);
}

double poi::ss::formula::functions::Sumproduct::getScalarValue(::poi::ss::formula::eval::ValueEval* arg) /* throws(EvaluationException) */
{
    clinit();
    ::poi::ss::formula::eval::ValueEval* eval;
    if(dynamic_cast< ::poi::ss::formula::eval::RefEval* >(arg) != nullptr) {
        auto re = java_cast< ::poi::ss::formula::eval::RefEval* >(arg);
        if(npc(re)->getNumberOfSheets() > 1) {
            throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
        }
        eval = npc(re)->getInnerValueEval(npc(re)->getFirstSheetIndex());
    } else {
        eval = arg;
    }
    if(eval == nullptr) {
        throw new ::java::lang::RuntimeException(u"parameter may not be null"_j);
    }
    if(dynamic_cast< ::poi::ss::formula::eval::AreaEval* >(eval) != nullptr) {
        auto ae = java_cast< ::poi::ss::formula::eval::AreaEval* >(eval);
        if(!npc(ae)->isColumn() || !npc(ae)->isRow()) {
            throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
        }
        eval = npc(ae)->getRelativeValue(0, 0);
    }
    return getProductTerm(eval, true);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Sumproduct::evaluateAreaSumProduct(::poi::ss::formula::eval::ValueEvalArray* evalArgs) /* throws(EvaluationException) */
{
    clinit();
    auto maxN = npc(evalArgs)->length;
    auto args = new ::poi::ss::formula::TwoDEvalArray(maxN);
    try {
        ::java::lang::System::arraycopy(evalArgs, 0, args, 0, maxN);
    } catch (::java::lang::ArrayStoreException* e) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    auto firstArg = (*args)[int32_t(0)];
    auto height = npc(firstArg)->getHeight();
    auto width = npc(firstArg)->getWidth();
    if(!areasAllSameSize(args, height, width)) {
        for (auto i = int32_t(1); i < npc(args)->length; i++) {
            throwFirstError((*args)[i]);
        }
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    double acc = int32_t(0);
    for (auto rrIx = int32_t(0); rrIx < height; rrIx++) {
        for (auto rcIx = int32_t(0); rcIx < width; rcIx++) {
            auto term = 1.0;
            for (auto n = int32_t(0); n < maxN; n++) {
                auto val = getProductTerm(npc((*args)[n])->getValue(rrIx, rcIx), false);
                term *= val;
            }
            acc += term;
        }
    }
    return new ::poi::ss::formula::eval::NumberEval(acc);
}

void poi::ss::formula::functions::Sumproduct::throwFirstError(::poi::ss::formula::TwoDEval* areaEval) /* throws(EvaluationException) */
{
    clinit();
    auto height = npc(areaEval)->getHeight();
    auto width = npc(areaEval)->getWidth();
    for (auto rrIx = int32_t(0); rrIx < height; rrIx++) {
        for (auto rcIx = int32_t(0); rcIx < width; rcIx++) {
            auto ve = npc(areaEval)->getValue(rrIx, rcIx);
            if(dynamic_cast< ::poi::ss::formula::eval::ErrorEval* >(ve) != nullptr) {
                throw new ::poi::ss::formula::eval::EvaluationException(java_cast< ::poi::ss::formula::eval::ErrorEval* >(ve));
            }
        }
    }
}

bool poi::ss::formula::functions::Sumproduct::areasAllSameSize(::poi::ss::formula::TwoDEvalArray* args, int32_t height, int32_t width)
{
    clinit();
    for (auto i = int32_t(0); i < npc(args)->length; i++) {
        auto areaEval = (*args)[i];
        if(npc(areaEval)->getHeight() != height) {
            return false;
        }
        if(npc(areaEval)->getWidth() != width) {
            return false;
        }
    }
    return true;
}

double poi::ss::formula::functions::Sumproduct::getProductTerm(::poi::ss::formula::eval::ValueEval* ve, bool isScalarProduct) /* throws(EvaluationException) */
{
    clinit();
    if(dynamic_cast< ::poi::ss::formula::eval::BlankEval* >(ve) != nullptr || ve == nullptr) {
        if(isScalarProduct) {
            throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
        }
        return 0;
    }
    if(dynamic_cast< ::poi::ss::formula::eval::ErrorEval* >(ve) != nullptr) {
        throw new ::poi::ss::formula::eval::EvaluationException(java_cast< ::poi::ss::formula::eval::ErrorEval* >(ve));
    }
    if(dynamic_cast< ::poi::ss::formula::eval::StringEval* >(ve) != nullptr) {
        if(isScalarProduct) {
            throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
        }
        return 0;
    }
    if(dynamic_cast< ::poi::ss::formula::eval::NumericValueEval* >(ve) != nullptr) {
        auto nve = java_cast< ::poi::ss::formula::eval::NumericValueEval* >(ve);
        return npc(nve)->getNumberValue();
    }
    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unexpected value eval class ("_j)->append(npc(npc(ve)->getClass())->getName())
        ->append(u")"_j)->toString());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Sumproduct::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Sumproduct", 46);
    return c;
}

java::lang::Class* poi::ss::formula::functions::Sumproduct::getClass0()
{
    return class_();
}

