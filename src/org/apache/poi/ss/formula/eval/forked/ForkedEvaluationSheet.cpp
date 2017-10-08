// Generated from /POI/java/org/apache/poi/ss/formula/eval/forked/ForkedEvaluationSheet.java
#include <org/apache/poi/ss/formula/eval/forked/ForkedEvaluationSheet.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/util/Arrays.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <org/apache/poi/ss/formula/EvaluationCell.hpp>
#include <org/apache/poi/ss/formula/EvaluationSheet.hpp>
#include <org/apache/poi/ss/formula/EvaluationWorkbook.hpp>
#include <org/apache/poi/ss/formula/eval/forked/ForkedEvaluationCell.hpp>
#include <org/apache/poi/ss/formula/eval/forked/ForkedEvaluationSheet_RowColKey.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/usermodel/Row.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
    } // lang
} // java

namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace eval
            {
                namespace forked
                {
typedef ::SubArray< ::poi::ss::formula::eval::forked::ForkedEvaluationSheet_RowColKey, ::java::lang::ObjectArray, ::java::lang::ComparableArray > ForkedEvaluationSheet_RowColKeyArray;
                } // forked
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

poi::ss::formula::eval::forked::ForkedEvaluationSheet::ForkedEvaluationSheet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::eval::forked::ForkedEvaluationSheet::ForkedEvaluationSheet(::poi::ss::formula::EvaluationSheet* masterSheet) 
    : ForkedEvaluationSheet(*static_cast< ::default_init_tag* >(0))
{
    ctor(masterSheet);
}

void poi::ss::formula::eval::forked::ForkedEvaluationSheet::ctor(::poi::ss::formula::EvaluationSheet* masterSheet)
{
    super::ctor();
    _masterSheet = masterSheet;
    _sharedCellsByRowCol = new ::java::util::HashMap();
}

poi::ss::formula::EvaluationCell* poi::ss::formula::eval::forked::ForkedEvaluationSheet::getCell(int32_t rowIndex, int32_t columnIndex)
{
    auto key = new ForkedEvaluationSheet_RowColKey(rowIndex, columnIndex);
    auto result = java_cast< ForkedEvaluationCell* >(npc(_sharedCellsByRowCol)->get(key));
    if(result == nullptr) {
        return npc(_masterSheet)->getCell(rowIndex, columnIndex);
    }
    return result;
}

poi::ss::formula::eval::forked::ForkedEvaluationCell* poi::ss::formula::eval::forked::ForkedEvaluationSheet::getOrCreateUpdatableCell(int32_t rowIndex, int32_t columnIndex)
{
    auto key = new ForkedEvaluationSheet_RowColKey(rowIndex, columnIndex);
    auto result = java_cast< ForkedEvaluationCell* >(npc(_sharedCellsByRowCol)->get(key));
    if(result == nullptr) {
        auto mcell = npc(_masterSheet)->getCell(rowIndex, columnIndex);
        if(mcell == nullptr) {
            auto cr = new ::poi::ss::util::CellReference(rowIndex, columnIndex);
            throw new ::java::lang::UnsupportedOperationException(::java::lang::StringBuilder().append(u"Underlying cell '"_j)->append(npc(cr)->formatAsString())
                ->append(u"' is missing in master sheet."_j)->toString());
        }
        result = new ForkedEvaluationCell(this, mcell);
        npc(_sharedCellsByRowCol)->put(key, result);
    }
    return result;
}

void poi::ss::formula::eval::forked::ForkedEvaluationSheet::copyUpdatedCells(::poi::ss::usermodel::Sheet* sheet)
{
    auto keys = new ForkedEvaluationSheet_RowColKeyArray(npc(_sharedCellsByRowCol)->size());
    npc(npc(_sharedCellsByRowCol)->keySet())->toArray_(static_cast< ::java::lang::ObjectArray* >(keys));
    ::java::util::Arrays::sort(static_cast< ::java::lang::ObjectArray* >(keys));
    for (auto i = int32_t(0); i < npc(keys)->length; i++) {
        auto key = (*keys)[i];
        auto row = npc(sheet)->getRow(npc(key)->getRowIndex());
        if(row == nullptr) {
            row = npc(sheet)->createRow(npc(key)->getRowIndex());
        }
        auto destCell = npc(row)->getCell(npc(key)->getColumnIndex());
        if(destCell == nullptr) {
            destCell = npc(row)->createCell(npc(key)->getColumnIndex());
        }
        auto srcCell = java_cast< ForkedEvaluationCell* >(npc(_sharedCellsByRowCol)->get(key));
        npc(srcCell)->copyValue(destCell);
    }
}

int32_t poi::ss::formula::eval::forked::ForkedEvaluationSheet::getSheetIndex(::poi::ss::formula::EvaluationWorkbook* mewb)
{
    return npc(mewb)->getSheetIndex(_masterSheet);
}

void poi::ss::formula::eval::forked::ForkedEvaluationSheet::clearAllCachedResultValues()
{
    npc(_masterSheet)->clearAllCachedResultValues();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::eval::forked::ForkedEvaluationSheet::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.forked.ForkedEvaluationSheet", 59);
    return c;
}

java::lang::Class* poi::ss::formula::eval::forked::ForkedEvaluationSheet::getClass0()
{
    return class_();
}

