// Generated from /POI/java/org/apache/poi/ss/formula/functions/LookupUtils.java
#include <org/apache/poi/ss/formula/functions/LookupUtils.hpp>

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
#include <org/apache/poi/ss/formula/TwoDEval.hpp>
#include <org/apache/poi/ss/formula/eval/AreaEval.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/BoolEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/NumericValueEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/Countif.hpp>
#include <org/apache/poi/ss/formula/functions/LookupUtils_BinarySearchIndexes.hpp>
#include <org/apache/poi/ss/formula/functions/LookupUtils_BooleanLookupComparer.hpp>
#include <org/apache/poi/ss/formula/functions/LookupUtils_ColumnVector.hpp>
#include <org/apache/poi/ss/formula/functions/LookupUtils_CompareResult.hpp>
#include <org/apache/poi/ss/formula/functions/LookupUtils_LookupValueComparer.hpp>
#include <org/apache/poi/ss/formula/functions/LookupUtils_NumberLookupComparer.hpp>
#include <org/apache/poi/ss/formula/functions/LookupUtils_RowVector.hpp>
#include <org/apache/poi/ss/formula/functions/LookupUtils_SheetVector.hpp>
#include <org/apache/poi/ss/formula/functions/LookupUtils_StringLookupComparer.hpp>
#include <org/apache/poi/ss/formula/functions/LookupUtils_ValueVector.hpp>

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

poi::ss::formula::functions::LookupUtils::LookupUtils(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::LookupUtils::LookupUtils()
    : LookupUtils(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::functions::LookupUtils_ValueVector* poi::ss::formula::functions::LookupUtils::createRowVector(::poi::ss::formula::TwoDEval* tableArray_, int32_t relativeRowIndex)
{
    clinit();
    return new LookupUtils_RowVector(tableArray_, relativeRowIndex);
}

poi::ss::formula::functions::LookupUtils_ValueVector* poi::ss::formula::functions::LookupUtils::createColumnVector(::poi::ss::formula::TwoDEval* tableArray_, int32_t relativeColumnIndex)
{
    clinit();
    return new LookupUtils_ColumnVector(tableArray_, relativeColumnIndex);
}

poi::ss::formula::functions::LookupUtils_ValueVector* poi::ss::formula::functions::LookupUtils::createVector(::poi::ss::formula::TwoDEval* ae)
{
    clinit();
    if(npc(ae)->isColumn()) {
        return createColumnVector(ae, 0);
    }
    if(npc(ae)->isRow()) {
        return createRowVector(ae, 0);
    }
    return nullptr;
}

poi::ss::formula::functions::LookupUtils_ValueVector* poi::ss::formula::functions::LookupUtils::createVector(::poi::ss::formula::eval::RefEval* re)
{
    clinit();
    return new LookupUtils_SheetVector(re);
}

int32_t poi::ss::formula::functions::LookupUtils::resolveRowOrColIndexArg(::poi::ss::formula::eval::ValueEval* rowColIndexArg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */
{
    clinit();
    if(rowColIndexArg == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"argument must not be null"_j);
    }
    ::poi::ss::formula::eval::ValueEval* veRowColIndexArg;
    try {
        veRowColIndexArg = ::poi::ss::formula::eval::OperandResolver::getSingleValue(rowColIndexArg, srcCellRow, static_cast< int16_t >(srcCellCol));
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        throw ::poi::ss::formula::eval::EvaluationException::invalidRef();
    }
    int32_t oneBasedIndex;
    if(dynamic_cast< ::poi::ss::formula::eval::StringEval* >(veRowColIndexArg) != nullptr) {
        auto se = java_cast< ::poi::ss::formula::eval::StringEval* >(veRowColIndexArg);
        auto strVal = npc(se)->getStringValue();
        auto dVal = ::poi::ss::formula::eval::OperandResolver::parseDouble(strVal);
        if(dVal == nullptr) {
            throw ::poi::ss::formula::eval::EvaluationException::invalidRef();
        }
    }
    oneBasedIndex = ::poi::ss::formula::eval::OperandResolver::coerceValueToInt(veRowColIndexArg);
    if(oneBasedIndex < 1) {
        throw ::poi::ss::formula::eval::EvaluationException::invalidValue();
    }
    return oneBasedIndex - int32_t(1);
}

poi::ss::formula::TwoDEval* poi::ss::formula::functions::LookupUtils::resolveTableArrayArg(::poi::ss::formula::eval::ValueEval* eval) /* throws(EvaluationException) */
{
    clinit();
    if(dynamic_cast< ::poi::ss::formula::TwoDEval* >(eval) != nullptr) {
        return java_cast< ::poi::ss::formula::TwoDEval* >(eval);
    }
    if(dynamic_cast< ::poi::ss::formula::eval::RefEval* >(eval) != nullptr) {
        auto refEval = java_cast< ::poi::ss::formula::eval::RefEval* >(eval);
        return npc(refEval)->offset(0, 0, 0, 0);
    }
    throw ::poi::ss::formula::eval::EvaluationException::invalidValue();
}

bool poi::ss::formula::functions::LookupUtils::resolveRangeLookupArg(::poi::ss::formula::eval::ValueEval* rangeLookupArg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */
{
    clinit();
    auto valEval = ::poi::ss::formula::eval::OperandResolver::getSingleValue(rangeLookupArg, srcCellRow, srcCellCol);
    if(dynamic_cast< ::poi::ss::formula::eval::BlankEval* >(valEval) != nullptr) {
        return false;
    }
    if(dynamic_cast< ::poi::ss::formula::eval::BoolEval* >(valEval) != nullptr) {
        auto boolEval = java_cast< ::poi::ss::formula::eval::BoolEval* >(valEval);
        return npc(boolEval)->getBooleanValue();
    }
    if(dynamic_cast< ::poi::ss::formula::eval::StringEval* >(valEval) != nullptr) {
        auto stringValue = npc((java_cast< ::poi::ss::formula::eval::StringEval* >(valEval)))->getStringValue();
        if(npc(stringValue)->length() < 1) {
            throw ::poi::ss::formula::eval::EvaluationException::invalidValue();
        }
        auto b = Countif::parseBoolean(stringValue);
        if(b != nullptr) {
            return npc(b)->booleanValue();
        }
        throw ::poi::ss::formula::eval::EvaluationException::invalidValue();
    }
    if(dynamic_cast< ::poi::ss::formula::eval::NumericValueEval* >(valEval) != nullptr) {
        auto nve = java_cast< ::poi::ss::formula::eval::NumericValueEval* >(valEval);
        return 0.0 != npc(nve)->getNumberValue();
    }
    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unexpected eval type ("_j)->append(static_cast< ::java::lang::Object* >(valEval))
        ->append(u")"_j)->toString());
}

int32_t poi::ss::formula::functions::LookupUtils::lookupIndexOfValue(::poi::ss::formula::eval::ValueEval* lookupValue, LookupUtils_ValueVector* vector, bool isRangeLookup) /* throws(EvaluationException) */
{
    clinit();
    auto lookupComparer = createLookupComparer(lookupValue, isRangeLookup, false);
    int32_t result;
    if(isRangeLookup) {
        result = performBinarySearch(vector, lookupComparer);
    } else {
        result = lookupIndexOfExactValue(lookupComparer, vector);
    }
    if(result < 0) {
        throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::NA());
    }
    return result;
}

int32_t poi::ss::formula::functions::LookupUtils::lookupIndexOfExactValue(LookupUtils_LookupValueComparer* lookupComparer, LookupUtils_ValueVector* vector)
{
    clinit();
    auto size = npc(vector)->getSize();
    for (auto i = int32_t(0); i < size; i++) {
        if(npc(npc(lookupComparer)->compareTo(npc(vector)->getItem(i)))->isEqual()) {
            return i;
        }
    }
    return -int32_t(1);
}

int32_t poi::ss::formula::functions::LookupUtils::performBinarySearch(LookupUtils_ValueVector* vector, LookupUtils_LookupValueComparer* lookupComparer)
{
    clinit();
    auto bsi = new LookupUtils_BinarySearchIndexes(npc(vector)->getSize());
    while (true) {
        auto midIx = npc(bsi)->getMidIx();
        if(midIx < 0) {
            return npc(bsi)->getLowIx();
        }
        auto cr = npc(lookupComparer)->compareTo(npc(vector)->getItem(midIx));
        if(npc(cr)->isTypeMismatch()) {
            auto newMidIx = handleMidValueTypeMismatch(lookupComparer, vector, bsi, midIx);
            if(newMidIx < 0) {
                continue;
            }
            midIx = newMidIx;
            cr = npc(lookupComparer)->compareTo(npc(vector)->getItem(midIx));
        }
        if(npc(cr)->isEqual()) {
            return findLastIndexInRunOfEqualValues(lookupComparer, vector, midIx, npc(bsi)->getHighIx());
        }
        npc(bsi)->narrowSearch(midIx, npc(cr)->isLessThan());
    }
}

int32_t poi::ss::formula::functions::LookupUtils::handleMidValueTypeMismatch(LookupUtils_LookupValueComparer* lookupComparer, LookupUtils_ValueVector* vector, LookupUtils_BinarySearchIndexes* bsi, int32_t midIx)
{
    clinit();
    auto newMid = midIx;
    auto highIx = npc(bsi)->getHighIx();
    while (true) {
        newMid++;
        if(newMid == highIx) {
            npc(bsi)->narrowSearch(midIx, true);
            return -int32_t(1);
        }
        auto cr = npc(lookupComparer)->compareTo(npc(vector)->getItem(newMid));
        if(npc(cr)->isLessThan() && newMid == highIx - int32_t(1)) {
            npc(bsi)->narrowSearch(midIx, true);
            return -int32_t(1);
        }
        if(npc(cr)->isTypeMismatch()) {
            continue;
        }
        if(npc(cr)->isEqual()) {
            return newMid;
        }
        npc(bsi)->narrowSearch(newMid, npc(cr)->isLessThan());
        return -int32_t(1);
    }
}

int32_t poi::ss::formula::functions::LookupUtils::findLastIndexInRunOfEqualValues(LookupUtils_LookupValueComparer* lookupComparer, LookupUtils_ValueVector* vector, int32_t firstFoundIndex, int32_t maxIx)
{
    clinit();
    for (auto i = firstFoundIndex + int32_t(1); i < maxIx; i++) {
        if(!npc(npc(lookupComparer)->compareTo(npc(vector)->getItem(i)))->isEqual()) {
            return i - int32_t(1);
        }
    }
    return maxIx - int32_t(1);
}

poi::ss::formula::functions::LookupUtils_LookupValueComparer* poi::ss::formula::functions::LookupUtils::createLookupComparer(::poi::ss::formula::eval::ValueEval* lookupValue, bool matchExact, bool isMatchFunction)
{
    clinit();
    if(lookupValue == static_cast< ::poi::ss::formula::eval::ValueEval* >(::poi::ss::formula::eval::BlankEval::instance())) {
        return new LookupUtils_NumberLookupComparer(::poi::ss::formula::eval::NumberEval::ZERO());
    }
    if(dynamic_cast< ::poi::ss::formula::eval::StringEval* >(lookupValue) != nullptr) {
        return new LookupUtils_StringLookupComparer(java_cast< ::poi::ss::formula::eval::StringEval* >(lookupValue), matchExact, isMatchFunction);
    }
    if(dynamic_cast< ::poi::ss::formula::eval::NumberEval* >(lookupValue) != nullptr) {
        return new LookupUtils_NumberLookupComparer(java_cast< ::poi::ss::formula::eval::NumberEval* >(lookupValue));
    }
    if(dynamic_cast< ::poi::ss::formula::eval::BoolEval* >(lookupValue) != nullptr) {
        return new LookupUtils_BooleanLookupComparer(java_cast< ::poi::ss::formula::eval::BoolEval* >(lookupValue));
    }
    throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Bad lookup value type ("_j)->append(npc(npc(lookupValue)->getClass())->getName())
        ->append(u")"_j)->toString());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::LookupUtils::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.LookupUtils", 47);
    return c;
}

java::lang::Class* poi::ss::formula::functions::LookupUtils::getClass0()
{
    return class_();
}

