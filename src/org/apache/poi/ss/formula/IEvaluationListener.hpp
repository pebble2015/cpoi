// Generated from /POI/java/org/apache/poi/ss/formula/IEvaluationListener.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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
typedef ::SubArray< ::org::apache::poi::ss::formula::IEvaluationListener_ICacheEntry, ::java::lang::ObjectArray > IEvaluationListener_ICacheEntryArray;
                } // formula
            } // ss
        } // poi
    } // apache
} // org

struct org::apache::poi::ss::formula::IEvaluationListener
    : public virtual ::java::lang::Object
{
    virtual void onCacheHit(int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* result) = 0;
    virtual void onReadPlainValue(int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex, IEvaluationListener_ICacheEntry* entry) = 0;
    virtual void onStartEvaluate(EvaluationCell* cell, IEvaluationListener_ICacheEntry* entry) = 0;
    virtual void onEndEvaluate(IEvaluationListener_ICacheEntry* entry, ::org::apache::poi::ss::formula::eval::ValueEval* result) = 0;
    virtual void onClearWholeCache() = 0;
    virtual void onClearCachedValue(IEvaluationListener_ICacheEntry* entry) = 0;
    virtual void sortDependentCachedValues(IEvaluationListener_ICacheEntryArray* formulaCells) = 0;
    virtual void onClearDependentCachedValue(IEvaluationListener_ICacheEntry* formulaCell, int32_t depth) = 0;
    virtual void onChangeFromBlankValue(int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex, EvaluationCell* cell, IEvaluationListener_ICacheEntry* entry) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
