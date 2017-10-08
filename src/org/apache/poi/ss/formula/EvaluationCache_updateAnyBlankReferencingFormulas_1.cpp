// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationCache.java
#include <org/apache/poi/ss/formula/EvaluationCache_updateAnyBlankReferencingFormulas_1.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/EvaluationCache.hpp>
#include <org/apache/poi/ss/formula/FormulaCellCacheEntry.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::EvaluationCache_updateAnyBlankReferencingFormulas_1::EvaluationCache_updateAnyBlankReferencingFormulas_1(EvaluationCache *EvaluationCache_this, FormulaUsedBlankCellSet_BookSheetKey* bsk, int32_t rowIndex, int32_t columnIndex)
    : super(*static_cast< ::default_init_tag* >(0))
    , EvaluationCache_this(EvaluationCache_this)
    , bsk(bsk)
    , rowIndex(rowIndex)
    , columnIndex(columnIndex)
{
    clinit();
    ctor();
}

void poi::ss::formula::EvaluationCache_updateAnyBlankReferencingFormulas_1::processEntry(FormulaCellCacheEntry* entry)
{
    npc(entry)->notifyUpdatedBlankCell(bsk, rowIndex, columnIndex, EvaluationCache_this->_evaluationListener);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::EvaluationCache_updateAnyBlankReferencingFormulas_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::ss::formula::EvaluationCache_updateAnyBlankReferencingFormulas_1::getClass0()
{
    return class_();
}

