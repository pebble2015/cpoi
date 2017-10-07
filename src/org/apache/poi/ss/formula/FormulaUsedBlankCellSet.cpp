// Generated from /POI/java/org/apache/poi/ss/formula/FormulaUsedBlankCellSet.java
#include <org/apache/poi/ss/formula/FormulaUsedBlankCellSet.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/ss/formula/FormulaUsedBlankCellSet_BlankCellSheetGroup.hpp>
#include <org/apache/poi/ss/formula/FormulaUsedBlankCellSet_BookSheetKey.hpp>

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

org::apache::poi::ss::formula::FormulaUsedBlankCellSet::FormulaUsedBlankCellSet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::FormulaUsedBlankCellSet::FormulaUsedBlankCellSet() 
    : FormulaUsedBlankCellSet(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::ss::formula::FormulaUsedBlankCellSet::ctor()
{
    super::ctor();
    _sheetGroupsByBookSheet = new ::java::util::HashMap();
}

void org::apache::poi::ss::formula::FormulaUsedBlankCellSet::addCell(int32_t bookIndex, int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex)
{
    auto sbcg = getSheetGroup(bookIndex, sheetIndex);
    npc(sbcg)->addCell(rowIndex, columnIndex);
}

org::apache::poi::ss::formula::FormulaUsedBlankCellSet_BlankCellSheetGroup* org::apache::poi::ss::formula::FormulaUsedBlankCellSet::getSheetGroup(int32_t bookIndex, int32_t sheetIndex)
{
    auto key = new FormulaUsedBlankCellSet_BookSheetKey(bookIndex, sheetIndex);
    auto result = java_cast< FormulaUsedBlankCellSet_BlankCellSheetGroup* >(npc(_sheetGroupsByBookSheet)->get(key));
    if(result == nullptr) {
        result = new FormulaUsedBlankCellSet_BlankCellSheetGroup();
        npc(_sheetGroupsByBookSheet)->put(key, result);
    }
    return result;
}

bool org::apache::poi::ss::formula::FormulaUsedBlankCellSet::containsCell(FormulaUsedBlankCellSet_BookSheetKey* key, int32_t rowIndex, int32_t columnIndex)
{
    auto bcsg = java_cast< FormulaUsedBlankCellSet_BlankCellSheetGroup* >(npc(_sheetGroupsByBookSheet)->get(key));
    if(bcsg == nullptr) {
        return false;
    }
    return npc(bcsg)->containsCell(rowIndex, columnIndex);
}

bool org::apache::poi::ss::formula::FormulaUsedBlankCellSet::isEmpty()
{
    return npc(_sheetGroupsByBookSheet)->isEmpty();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::FormulaUsedBlankCellSet::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.FormulaUsedBlankCellSet", 49);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::FormulaUsedBlankCellSet::getClass0()
{
    return class_();
}

