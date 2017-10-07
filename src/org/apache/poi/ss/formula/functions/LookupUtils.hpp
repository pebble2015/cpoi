// Generated from /POI/java/org/apache/poi/ss/formula/functions/LookupUtils.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::functions::LookupUtils final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static LookupUtils_ValueVector* createRowVector(::org::apache::poi::ss::formula::TwoDEval* tableArray_, int32_t relativeRowIndex);
    static LookupUtils_ValueVector* createColumnVector(::org::apache::poi::ss::formula::TwoDEval* tableArray_, int32_t relativeColumnIndex);
    static LookupUtils_ValueVector* createVector(::org::apache::poi::ss::formula::TwoDEval* ae);
    static LookupUtils_ValueVector* createVector(::org::apache::poi::ss::formula::eval::RefEval* re);
    static int32_t resolveRowOrColIndexArg(::org::apache::poi::ss::formula::eval::ValueEval* rowColIndexArg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */;
    static ::org::apache::poi::ss::formula::TwoDEval* resolveTableArrayArg(::org::apache::poi::ss::formula::eval::ValueEval* eval) /* throws(EvaluationException) */;
    static bool resolveRangeLookupArg(::org::apache::poi::ss::formula::eval::ValueEval* rangeLookupArg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */;
    static int32_t lookupIndexOfValue(::org::apache::poi::ss::formula::eval::ValueEval* lookupValue, LookupUtils_ValueVector* vector, bool isRangeLookup) /* throws(EvaluationException) */;

private:
    static int32_t lookupIndexOfExactValue(LookupUtils_LookupValueComparer* lookupComparer, LookupUtils_ValueVector* vector);
    static int32_t performBinarySearch(LookupUtils_ValueVector* vector, LookupUtils_LookupValueComparer* lookupComparer);
    static int32_t handleMidValueTypeMismatch(LookupUtils_LookupValueComparer* lookupComparer, LookupUtils_ValueVector* vector, LookupUtils_BinarySearchIndexes* bsi, int32_t midIx);
    static int32_t findLastIndexInRunOfEqualValues(LookupUtils_LookupValueComparer* lookupComparer, LookupUtils_ValueVector* vector, int32_t firstFoundIndex, int32_t maxIx);

public:
    static LookupUtils_LookupValueComparer* createLookupComparer(::org::apache::poi::ss::formula::eval::ValueEval* lookupValue, bool matchExact, bool isMatchFunction);

    // Generated
    LookupUtils();
protected:
    LookupUtils(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class LookupUtils_ValueVector;
    friend class LookupUtils_RowVector;
    friend class LookupUtils_ColumnVector;
    friend class LookupUtils_SheetVector;
    friend class LookupUtils_CompareResult;
    friend class LookupUtils_LookupValueComparer;
    friend class LookupUtils_LookupValueComparerBase;
    friend class LookupUtils_StringLookupComparer;
    friend class LookupUtils_NumberLookupComparer;
    friend class LookupUtils_BooleanLookupComparer;
    friend class LookupUtils_BinarySearchIndexes;
};
