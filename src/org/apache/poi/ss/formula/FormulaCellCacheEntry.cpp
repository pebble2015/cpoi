// Generated from /POI/java/org/apache/poi/ss/formula/FormulaCellCacheEntry.java
#include <org/apache/poi/ss/formula/FormulaCellCacheEntry.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Collections.hpp>
#include <java/util/HashSet.hpp>
#include <java/util/Set.hpp>
#include <org/apache/poi/ss/formula/CellCacheEntry.hpp>
#include <org/apache/poi/ss/formula/FormulaUsedBlankCellSet.hpp>
#include <org/apache/poi/ss/formula/IEvaluationListener_ICacheEntry.hpp>
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
typedef ::SubArray< ::org::apache::poi::ss::formula::IEvaluationListener_ICacheEntry, ::java::lang::ObjectArray > IEvaluationListener_ICacheEntryArray;
typedef ::SubArray< ::org::apache::poi::ss::formula::CellCacheEntry, ::java::lang::ObjectArray, IEvaluationListener_ICacheEntryArray > CellCacheEntryArray;
                } // formula
            } // ss
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::FormulaCellCacheEntry::FormulaCellCacheEntry(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::FormulaCellCacheEntry::FormulaCellCacheEntry() 
    : FormulaCellCacheEntry(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::ss::formula::FormulaCellCacheEntry::ctor()
{
    super::ctor();
}

bool org::apache::poi::ss::formula::FormulaCellCacheEntry::isInputSensitive()
{
    if(_sensitiveInputCells != nullptr) {
        if(npc(_sensitiveInputCells)->length > 0) {
            return true;
        }
    }
    return _usedBlankCellGroup == nullptr ? false : !npc(_usedBlankCellGroup)->isEmpty();
}

void org::apache::poi::ss::formula::FormulaCellCacheEntry::setSensitiveInputCells(CellCacheEntryArray* sensitiveInputCells)
{
    if(sensitiveInputCells == nullptr) {
        _sensitiveInputCells = nullptr;
        changeConsumingCells(CellCacheEntry::EMPTY_ARRAY());
    } else {
        _sensitiveInputCells = npc(sensitiveInputCells)->clone();
        changeConsumingCells(_sensitiveInputCells);
    }
}

void org::apache::poi::ss::formula::FormulaCellCacheEntry::clearFormulaEntry()
{
    auto usedCells = _sensitiveInputCells;
    if(usedCells != nullptr) {
        for (auto i = npc(usedCells)->length - int32_t(1); i >= 0; i--) {
            npc((*usedCells)[i])->clearConsumingCell(this);
        }
    }
    _sensitiveInputCells = nullptr;
    clearValue();
}

void org::apache::poi::ss::formula::FormulaCellCacheEntry::changeConsumingCells(CellCacheEntryArray* usedCells)
{
    auto prevUsedCells = _sensitiveInputCells;
    auto nUsed = npc(usedCells)->length;
    for (auto i = int32_t(0); i < nUsed; i++) {
        npc((*usedCells)[i])->addConsumingCell(this);
    }
    if(prevUsedCells == nullptr) {
        return;
    }
    auto nPrevUsed = npc(prevUsedCells)->length;
    if(nPrevUsed < 1) {
        return;
    }
    ::java::util::Set* usedSet;
    if(nUsed < 1) {
        usedSet = ::java::util::Collections::emptySet();
    } else {
        usedSet = new ::java::util::HashSet(nUsed * int32_t(3) / int32_t(2));
        for (auto i = int32_t(0); i < nUsed; i++) {
            npc(usedSet)->add(static_cast< ::java::lang::Object* >((*usedCells)[i]));
        }
    }
    for (auto i = int32_t(0); i < nPrevUsed; i++) {
        auto prevUsed = (*prevUsedCells)[i];
        if(!npc(usedSet)->contains(static_cast< ::java::lang::Object* >(prevUsed))) {
            npc(prevUsed)->clearConsumingCell(this);
        }
    }
}

void org::apache::poi::ss::formula::FormulaCellCacheEntry::updateFormulaResult(::org::apache::poi::ss::formula::eval::ValueEval* result, CellCacheEntryArray* sensitiveInputCells, FormulaUsedBlankCellSet* usedBlankAreas)
{
    updateValue(result);
    setSensitiveInputCells(sensitiveInputCells);
    _usedBlankCellGroup = usedBlankAreas;
}

void org::apache::poi::ss::formula::FormulaCellCacheEntry::notifyUpdatedBlankCell(FormulaUsedBlankCellSet_BookSheetKey* bsk, int32_t rowIndex, int32_t columnIndex, IEvaluationListener* evaluationListener)
{
    if(_usedBlankCellGroup != nullptr) {
        if(npc(_usedBlankCellGroup)->containsCell(bsk, rowIndex, columnIndex)) {
            clearFormulaEntry();
            recurseClearCachedFormulaResults(evaluationListener);
        }
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::FormulaCellCacheEntry::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.FormulaCellCacheEntry", 47);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::FormulaCellCacheEntry::getClass0()
{
    return class_();
}

