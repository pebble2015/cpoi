// Generated from /POI/java/org/apache/poi/ss/formula/functions/MultiOperandNumericFunction.java
#include <org/apache/poi/ss/formula/functions/MultiOperandNumericFunction.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/SpreadsheetVersion.hpp>
#include <org/apache/poi/ss/formula/ThreeDEval.hpp>
#include <org/apache/poi/ss/formula/TwoDEval.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/BoolEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/NumericValueEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
#include <org/apache/poi/ss/formula/eval/StringValueEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/MultiOperandNumericFunction_DoubleList.hpp>
#include <Array.hpp>
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

poi::ss::formula::functions::MultiOperandNumericFunction::MultiOperandNumericFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::MultiOperandNumericFunction::MultiOperandNumericFunction(bool isReferenceBoolCounted, bool isBlankCounted) 
    : MultiOperandNumericFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor(isReferenceBoolCounted,isBlankCounted);
}

void poi::ss::formula::functions::MultiOperandNumericFunction::ctor(bool isReferenceBoolCounted, bool isBlankCounted)
{
    super::ctor();
    _isReferenceBoolCounted = isReferenceBoolCounted;
    _isBlankCounted = isBlankCounted;
}

doubleArray*& poi::ss::formula::functions::MultiOperandNumericFunction::EMPTY_DOUBLE_ARRAY()
{
    clinit();
    return EMPTY_DOUBLE_ARRAY_;
}
doubleArray* poi::ss::formula::functions::MultiOperandNumericFunction::EMPTY_DOUBLE_ARRAY_;

int32_t& poi::ss::formula::functions::MultiOperandNumericFunction::DEFAULT_MAX_NUM_OPERANDS()
{
    clinit();
    return DEFAULT_MAX_NUM_OPERANDS_;
}
int32_t poi::ss::formula::functions::MultiOperandNumericFunction::DEFAULT_MAX_NUM_OPERANDS_;

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::MultiOperandNumericFunction::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcCellRow, int32_t srcCellCol)
{
    double d;
    try {
        auto values = getNumberArray_(args);
        d = evaluate(values);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    if(::java::lang::Double::isNaN(d) || ::java::lang::Double::isInfinite(d))
        return ::poi::ss::formula::eval::ErrorEval::NUM_ERROR();

    return new ::poi::ss::formula::eval::NumberEval(d);
}

int32_t poi::ss::formula::functions::MultiOperandNumericFunction::getMaxNumOperands()
{
    return DEFAULT_MAX_NUM_OPERANDS_;
}

doubleArray* poi::ss::formula::functions::MultiOperandNumericFunction::getNumberArray_(::poi::ss::formula::eval::ValueEvalArray* operands) /* throws(EvaluationException) */
{
    if(npc(operands)->length > getMaxNumOperands()) {
        throw ::poi::ss::formula::eval::EvaluationException::invalidValue();
    }
    auto retval = new MultiOperandNumericFunction_DoubleList();
    for (int32_t i = int32_t(0), iSize = npc(operands)->length; i < iSize; i++) {
        collectValues((*operands)[i], retval);
    }
    return npc(retval)->toArray_();
}

bool poi::ss::formula::functions::MultiOperandNumericFunction::isSubtotalCounted()
{
    return true;
}

void poi::ss::formula::functions::MultiOperandNumericFunction::collectValues(::poi::ss::formula::eval::ValueEval* operand, MultiOperandNumericFunction_DoubleList* temp) /* throws(EvaluationException) */
{
    if(dynamic_cast< ::poi::ss::formula::ThreeDEval* >(operand) != nullptr) {
        auto ae = java_cast< ::poi::ss::formula::ThreeDEval* >(operand);
        for (auto sIx = npc(ae)->getFirstSheetIndex(); sIx <= npc(ae)->getLastSheetIndex(); sIx++) {
            auto width = npc(ae)->getWidth();
            auto height = npc(ae)->getHeight();
            for (auto rrIx = int32_t(0); rrIx < height; rrIx++) {
                for (auto rcIx = int32_t(0); rcIx < width; rcIx++) {
                    auto ve = npc(ae)->getValue(sIx, rrIx, rcIx);
                    if(!isSubtotalCounted() && npc(ae)->isSubTotal(rrIx, rcIx))
                        continue;

                    collectValue(ve, true, temp);
                }
            }
        }
        return;
    }
    if(dynamic_cast< ::poi::ss::formula::TwoDEval* >(operand) != nullptr) {
        auto ae = java_cast< ::poi::ss::formula::TwoDEval* >(operand);
        auto width = npc(ae)->getWidth();
        auto height = npc(ae)->getHeight();
        for (auto rrIx = int32_t(0); rrIx < height; rrIx++) {
            for (auto rcIx = int32_t(0); rcIx < width; rcIx++) {
                auto ve = npc(ae)->getValue(rrIx, rcIx);
                if(!isSubtotalCounted() && npc(ae)->isSubTotal(rrIx, rcIx))
                    continue;

                collectValue(ve, true, temp);
            }
        }
        return;
    }
    if(dynamic_cast< ::poi::ss::formula::eval::RefEval* >(operand) != nullptr) {
        auto re = java_cast< ::poi::ss::formula::eval::RefEval* >(operand);
        for (auto sIx = npc(re)->getFirstSheetIndex(); sIx <= npc(re)->getLastSheetIndex(); sIx++) {
            collectValue(npc(re)->getInnerValueEval(sIx), true, temp);
        }
        return;
    }
    collectValue(operand, false, temp);
}

void poi::ss::formula::functions::MultiOperandNumericFunction::collectValue(::poi::ss::formula::eval::ValueEval* ve, bool isViaReference, MultiOperandNumericFunction_DoubleList* temp) /* throws(EvaluationException) */
{
    if(ve == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"ve must not be null"_j);
    }
    if(dynamic_cast< ::poi::ss::formula::eval::BoolEval* >(ve) != nullptr) {
        if(!isViaReference || _isReferenceBoolCounted) {
            auto boolEval = java_cast< ::poi::ss::formula::eval::BoolEval* >(ve);
            npc(temp)->add(npc(boolEval)->getNumberValue());
        }
        return;
    }
    if(dynamic_cast< ::poi::ss::formula::eval::NumericValueEval* >(ve) != nullptr) {
        auto ne = java_cast< ::poi::ss::formula::eval::NumericValueEval* >(ve);
        npc(temp)->add(npc(ne)->getNumberValue());
        return;
    }
    if(dynamic_cast< ::poi::ss::formula::eval::StringValueEval* >(ve) != nullptr) {
        if(isViaReference) {
            return;
        }
        auto s = npc((java_cast< ::poi::ss::formula::eval::StringValueEval* >(ve)))->getStringValue();
        auto d = ::poi::ss::formula::eval::OperandResolver::parseDouble(s);
        if(d == nullptr) {
            throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
        }
        npc(temp)->add(npc(d)->doubleValue());
        return;
    }
    if(dynamic_cast< ::poi::ss::formula::eval::ErrorEval* >(ve) != nullptr) {
        throw new ::poi::ss::formula::eval::EvaluationException(java_cast< ::poi::ss::formula::eval::ErrorEval* >(ve));
    }
    if(ve == static_cast< ::poi::ss::formula::eval::ValueEval* >(::poi::ss::formula::eval::BlankEval::instance())) {
        if(_isBlankCounted) {
            npc(temp)->add(0.0);
        }
        return;
    }
    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Invalid ValueEval type passed for conversion: ("_j)->append(static_cast< ::java::lang::Object* >(npc(ve)->getClass()))
        ->append(u")"_j)->toString());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::MultiOperandNumericFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.MultiOperandNumericFunction", 63);
    return c;
}

void poi::ss::formula::functions::MultiOperandNumericFunction::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        EMPTY_DOUBLE_ARRAY_ = (new ::doubleArray({}));
        DEFAULT_MAX_NUM_OPERANDS_ = npc(::poi::ss::SpreadsheetVersion::EXCEL2007)->getMaxFunctionArgs();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::functions::MultiOperandNumericFunction::getClass0()
{
    return class_();
}

