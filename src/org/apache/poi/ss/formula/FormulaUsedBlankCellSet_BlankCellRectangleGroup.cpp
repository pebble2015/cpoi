// Generated from /POI/java/org/apache/poi/ss/formula/FormulaUsedBlankCellSet.java
#include <org/apache/poi/ss/formula/FormulaUsedBlankCellSet_BlankCellRectangleGroup.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::FormulaUsedBlankCellSet_BlankCellRectangleGroup::FormulaUsedBlankCellSet_BlankCellRectangleGroup(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::FormulaUsedBlankCellSet_BlankCellRectangleGroup::FormulaUsedBlankCellSet_BlankCellRectangleGroup(int32_t firstRowIndex, int32_t firstColumnIndex, int32_t lastColumnIndex) 
    : FormulaUsedBlankCellSet_BlankCellRectangleGroup(*static_cast< ::default_init_tag* >(0))
{
    ctor(firstRowIndex,firstColumnIndex,lastColumnIndex);
}

void poi::ss::formula::FormulaUsedBlankCellSet_BlankCellRectangleGroup::ctor(int32_t firstRowIndex, int32_t firstColumnIndex, int32_t lastColumnIndex)
{
    super::ctor();
    _firstRowIndex = firstRowIndex;
    _firstColumnIndex = firstColumnIndex;
    _lastColumnIndex = lastColumnIndex;
    _lastRowIndex = firstRowIndex;
}

bool poi::ss::formula::FormulaUsedBlankCellSet_BlankCellRectangleGroup::containsCell(int32_t rowIndex, int32_t columnIndex)
{
    if(columnIndex < _firstColumnIndex) {
        return false;
    }
    if(columnIndex > _lastColumnIndex) {
        return false;
    }
    if(rowIndex < _firstRowIndex) {
        return false;
    }
    if(rowIndex > _lastRowIndex) {
        return false;
    }
    return true;
}

bool poi::ss::formula::FormulaUsedBlankCellSet_BlankCellRectangleGroup::acceptRow(int32_t rowIndex, int32_t firstColumnIndex, int32_t lastColumnIndex)
{
    if(firstColumnIndex != _firstColumnIndex) {
        return false;
    }
    if(lastColumnIndex != _lastColumnIndex) {
        return false;
    }
    if(rowIndex != _lastRowIndex + int32_t(1)) {
        return false;
    }
    _lastRowIndex = rowIndex;
    return true;
}

java::lang::String* poi::ss::formula::FormulaUsedBlankCellSet_BlankCellRectangleGroup::toString()
{
    auto sb = new ::java::lang::StringBuffer(int32_t(64));
    auto crA = new ::poi::ss::util::CellReference(_firstRowIndex, _firstColumnIndex, false, false);
    auto crB = new ::poi::ss::util::CellReference(_lastRowIndex, _lastColumnIndex, false, false);
    npc(sb)->append(npc(getClass())->getName());
    npc(npc(npc(npc(npc(sb)->append(u" ["_j))->append(npc(crA)->formatAsString()))->append(u':'))->append(npc(crB)->formatAsString()))->append(u"]"_j);
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::FormulaUsedBlankCellSet_BlankCellRectangleGroup::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.FormulaUsedBlankCellSet.BlankCellRectangleGroup", 73);
    return c;
}

java::lang::Class* poi::ss::formula::FormulaUsedBlankCellSet_BlankCellRectangleGroup::getClass0()
{
    return class_();
}

