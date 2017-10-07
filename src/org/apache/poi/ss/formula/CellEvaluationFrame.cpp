// Generated from /POI/java/org/apache/poi/ss/formula/CellEvaluationFrame.java
#include <org/apache/poi/ss/formula/CellEvaluationFrame.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/util/HashSet.hpp>
#include <java/util/Set.hpp>
#include <org/apache/poi/ss/formula/CellCacheEntry.hpp>
#include <org/apache/poi/ss/formula/FormulaCellCacheEntry.hpp>
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

org::apache::poi::ss::formula::CellEvaluationFrame::CellEvaluationFrame(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::CellEvaluationFrame::CellEvaluationFrame(FormulaCellCacheEntry* cce) 
    : CellEvaluationFrame(*static_cast< ::default_init_tag* >(0))
{
    ctor(cce);
}

void org::apache::poi::ss::formula::CellEvaluationFrame::ctor(FormulaCellCacheEntry* cce)
{
    super::ctor();
    _cce = cce;
    _sensitiveInputCells = new ::java::util::HashSet();
}

org::apache::poi::ss::formula::CellCacheEntry* org::apache::poi::ss::formula::CellEvaluationFrame::getCCE()
{
    return _cce;
}

java::lang::String* org::apache::poi::ss::formula::CellEvaluationFrame::toString()
{
    auto sb = new ::java::lang::StringBuffer(int32_t(64));
    npc(npc(sb)->append(npc(getClass())->getName()))->append(u" ["_j);
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

void org::apache::poi::ss::formula::CellEvaluationFrame::addSensitiveInputCell(CellCacheEntry* inputCell)
{
    npc(_sensitiveInputCells)->add(static_cast< ::java::lang::Object* >(inputCell));
}

org::apache::poi::ss::formula::CellCacheEntryArray* org::apache::poi::ss::formula::CellEvaluationFrame::getSensitiveInputCells()
{
    auto nItems = npc(_sensitiveInputCells)->size();
    if(nItems < 1) {
        return CellCacheEntry::EMPTY_ARRAY();
    }
    auto result = new CellCacheEntryArray(nItems);
    npc(_sensitiveInputCells)->toArray_(static_cast< ::java::lang::ObjectArray* >(result));
    return result;
}

void org::apache::poi::ss::formula::CellEvaluationFrame::addUsedBlankCell(int32_t bookIndex, int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex)
{
    if(_usedBlankCellGroup == nullptr) {
        _usedBlankCellGroup = new FormulaUsedBlankCellSet();
    }
    npc(_usedBlankCellGroup)->addCell(bookIndex, sheetIndex, rowIndex, columnIndex);
}

void org::apache::poi::ss::formula::CellEvaluationFrame::updateFormulaResult(::org::apache::poi::ss::formula::eval::ValueEval* result)
{
    npc(_cce)->updateFormulaResult(result, getSensitiveInputCells(), _usedBlankCellGroup);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::CellEvaluationFrame::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.CellEvaluationFrame", 45);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::CellEvaluationFrame::getClass0()
{
    return class_();
}

