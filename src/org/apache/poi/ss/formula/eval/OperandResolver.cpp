// Generated from /POI/java/org/apache/poi/ss/formula/eval/OperandResolver.java
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>

#include <java/lang/Boolean.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/NumberFormatException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/regex/Pattern.hpp>
#include <org/apache/poi/ss/formula/eval/AreaEval.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/BoolEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumericValueEval.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/StringValueEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

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

poi::ss::formula::eval::OperandResolver::OperandResolver(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::eval::OperandResolver::OperandResolver() 
    : OperandResolver(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String*& poi::ss::formula::eval::OperandResolver::Digits()
{
    clinit();
    return Digits_;
}
java::lang::String* poi::ss::formula::eval::OperandResolver::Digits_;

java::lang::String*& poi::ss::formula::eval::OperandResolver::Exp()
{
    clinit();
    return Exp_;
}
java::lang::String* poi::ss::formula::eval::OperandResolver::Exp_;

java::lang::String*& poi::ss::formula::eval::OperandResolver::fpRegex()
{
    clinit();
    return fpRegex_;
}
java::lang::String* poi::ss::formula::eval::OperandResolver::fpRegex_;

void poi::ss::formula::eval::OperandResolver::ctor()
{
    super::ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::eval::OperandResolver::getSingleValue(ValueEval* arg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */
{
    clinit();
    ValueEval* result;
    if(dynamic_cast< RefEval* >(arg) != nullptr) {
        result = chooseSingleElementFromRef(java_cast< RefEval* >(arg));
    } else if(dynamic_cast< AreaEval* >(arg) != nullptr) {
        result = chooseSingleElementFromArea(java_cast< AreaEval* >(arg), srcCellRow, srcCellCol);
    } else {
        result = arg;
    }
    if(dynamic_cast< ErrorEval* >(result) != nullptr) {
        throw new EvaluationException(java_cast< ErrorEval* >(result));
    }
    return result;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::eval::OperandResolver::chooseSingleElementFromArea(AreaEval* ae, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */
{
    clinit();
    auto result = chooseSingleElementFromAreaInternal(ae, srcCellRow, srcCellCol);
    if(dynamic_cast< ErrorEval* >(result) != nullptr) {
        throw new EvaluationException(java_cast< ErrorEval* >(result));
    }
    return result;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::eval::OperandResolver::chooseSingleElementFromAreaInternal(AreaEval* ae, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */
{
    clinit();
    if(npc(ae)->isColumn()) {
        if(npc(ae)->isRow()) {
            return npc(ae)->getRelativeValue(0, 0);
        }
        if(!npc(ae)->containsRow(srcCellRow)) {
            throw EvaluationException::invalidValue();
        }
        return npc(ae)->getAbsoluteValue(srcCellRow, npc(ae)->getFirstColumn());
    }
    if(!npc(ae)->isRow()) {
        if(npc(ae)->containsRow(srcCellRow) && npc(ae)->containsColumn(srcCellCol)) {
            return npc(ae)->getAbsoluteValue(npc(ae)->getFirstRow(), npc(ae)->getFirstColumn());
        }
        throw EvaluationException::invalidValue();
    }
    if(!npc(ae)->containsColumn(srcCellCol)) {
        throw EvaluationException::invalidValue();
    }
    return npc(ae)->getAbsoluteValue(npc(ae)->getFirstRow(), srcCellCol);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::eval::OperandResolver::chooseSingleElementFromRef(RefEval* ref)
{
    clinit();
    return npc(ref)->getInnerValueEval(npc(ref)->getFirstSheetIndex());
}

int32_t poi::ss::formula::eval::OperandResolver::coerceValueToInt(ValueEval* ev) /* throws(EvaluationException) */
{
    clinit();
    if(ev == static_cast< ValueEval* >(BlankEval::instance())) {
        return 0;
    }
    auto d = coerceValueToDouble(ev);
    return static_cast< int32_t >(::java::lang::Math::floor(d));
}

double poi::ss::formula::eval::OperandResolver::coerceValueToDouble(ValueEval* ev) /* throws(EvaluationException) */
{
    clinit();
    if(ev == static_cast< ValueEval* >(BlankEval::instance())) {
        return 0.0;
    }
    if(dynamic_cast< NumericValueEval* >(ev) != nullptr) {
        return npc((java_cast< NumericValueEval* >(ev)))->getNumberValue();
    }
    if(dynamic_cast< StringEval* >(ev) != nullptr) {
        auto dd = parseDouble(npc((java_cast< StringEval* >(ev)))->getStringValue());
        if(dd == nullptr) {
            throw EvaluationException::invalidValue();
        }
        return npc(dd)->doubleValue();
    }
    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unexpected arg eval type ("_j)->append(npc(npc(ev)->getClass())->getName())
        ->append(u")"_j)->toString());
}

java::lang::Double* poi::ss::formula::eval::OperandResolver::parseDouble(::java::lang::String* pText)
{
    clinit();
    if(::java::util::regex::Pattern::matches(fpRegex_, pText))
        try {
            return ::java::lang::Double::valueOf(::java::lang::Double::parseDouble(pText));
        } catch (::java::lang::NumberFormatException* e) {
            return nullptr;
        }
    else {
        return nullptr;
    }
}

java::lang::String* poi::ss::formula::eval::OperandResolver::coerceValueToString(ValueEval* ve)
{
    clinit();
    if(dynamic_cast< StringValueEval* >(ve) != nullptr) {
        auto sve = java_cast< StringValueEval* >(ve);
        return npc(sve)->getStringValue();
    }
    if(ve == static_cast< ValueEval* >(BlankEval::instance())) {
        return u""_j;
    }
    throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Unexpected eval class ("_j)->append(npc(npc(ve)->getClass())->getName())
        ->append(u")"_j)->toString());
}

java::lang::Boolean* poi::ss::formula::eval::OperandResolver::coerceValueToBoolean(ValueEval* ve, bool stringsAreBlanks) /* throws(EvaluationException) */
{
    clinit();
    if(ve == nullptr || ve == static_cast< ValueEval* >(BlankEval::instance())) {
        return nullptr;
    }
    if(dynamic_cast< BoolEval* >(ve) != nullptr) {
        return ::java::lang::Boolean::valueOf(npc((java_cast< BoolEval* >(ve)))->getBooleanValue());
    }
    if(ve == static_cast< ValueEval* >(BlankEval::instance())) {
        return nullptr;
    }
    if(dynamic_cast< StringEval* >(ve) != nullptr) {
        if(stringsAreBlanks) {
            return nullptr;
        }
        auto str = npc((java_cast< StringEval* >(ve)))->getStringValue();
        if(npc(str)->equalsIgnoreCase(u"true"_j)) {
            return ::java::lang::Boolean::TRUE();
        }
        if(npc(str)->equalsIgnoreCase(u"false"_j)) {
            return ::java::lang::Boolean::FALSE();
        }
        throw new EvaluationException(ErrorEval::VALUE_INVALID());
    }
    if(dynamic_cast< NumericValueEval* >(ve) != nullptr) {
        auto ne = java_cast< NumericValueEval* >(ve);
        auto d = npc(ne)->getNumberValue();
        if(::java::lang::Double::isNaN(d)) {
            throw new EvaluationException(ErrorEval::VALUE_INVALID());
        }
        return ::java::lang::Boolean::valueOf(d != 0);
    }
    if(dynamic_cast< ErrorEval* >(ve) != nullptr) {
        throw new EvaluationException(java_cast< ErrorEval* >(ve));
    }
    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unexpected eval ("_j)->append(npc(npc(ve)->getClass())->getName())
        ->append(u")"_j)->toString());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::eval::OperandResolver::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.OperandResolver", 46);
    return c;
}

void poi::ss::formula::eval::OperandResolver::clinit()
{
struct string_init_ {
    string_init_() {
    Digits_ = u"(\\p{Digit}+)"_j;
    Exp_ = ::java::lang::StringBuilder().append(u"[eE][+-]?"_j)->append(Digits_)->toString();
    fpRegex_ = (::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"[\\x00-\\x20]*"_j)->append(u"[+-]?("_j)
        ->append(u"((("_j)->toString())->append(Digits_)
        ->append(u"(\\.)?("_j)
        ->append(Digits_)
        ->append(u"?)("_j)
        ->append(Exp_)
        ->append(u")?)|"_j)
        ->append(u"(\\.("_j)
        ->append(Digits_)
        ->append(u")("_j)
        ->append(Exp_)
        ->append(u")?))))"_j)
        ->append(u"[\\x00-\\x20]*"_j)->toString());
    }
};

    static string_init_ string_init_instance;

    super::clinit();
}

java::lang::Class* poi::ss::formula::eval::OperandResolver::getClass0()
{
    return class_();
}

