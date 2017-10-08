// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationCache.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/FormulaCellCache_IEntryOperation.hpp>

struct default_init_tag;

class poi::ss::formula::EvaluationCache_updateAnyBlankReferencingFormulas_1
    : public virtual ::java::lang::Object
    , public virtual FormulaCellCache_IEntryOperation
{

public:
    typedef ::java::lang::Object super;
    void processEntry(FormulaCellCacheEntry* entry) override;

    // Generated
    EvaluationCache_updateAnyBlankReferencingFormulas_1(EvaluationCache *EvaluationCache_this, FormulaUsedBlankCellSet_BookSheetKey* bsk, int32_t rowIndex, int32_t columnIndex);
    static ::java::lang::Class *class_();
    EvaluationCache *EvaluationCache_this;
    FormulaUsedBlankCellSet_BookSheetKey* bsk;
    int32_t rowIndex;
    int32_t columnIndex;

private:
    virtual ::java::lang::Class* getClass0();
    friend class EvaluationCache;
};
