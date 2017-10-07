// Generated from /POI/java/org/apache/poi/ss/formula/FormulaUsedBlankCellSet.java
#include <org/apache/poi/ss/formula/FormulaUsedBlankCellSet_BlankCellSheetGroup.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ss/formula/FormulaUsedBlankCellSet_BlankCellRectangleGroup.hpp>

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

org::apache::poi::ss::formula::FormulaUsedBlankCellSet_BlankCellSheetGroup::FormulaUsedBlankCellSet_BlankCellSheetGroup(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::FormulaUsedBlankCellSet_BlankCellSheetGroup::FormulaUsedBlankCellSet_BlankCellSheetGroup() 
    : FormulaUsedBlankCellSet_BlankCellSheetGroup(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::ss::formula::FormulaUsedBlankCellSet_BlankCellSheetGroup::ctor()
{
    super::ctor();
    _rectangleGroups = new ::java::util::ArrayList();
    _currentRowIndex = -int32_t(1);
}

void org::apache::poi::ss::formula::FormulaUsedBlankCellSet_BlankCellSheetGroup::addCell(int32_t rowIndex, int32_t columnIndex)
{
    if(_currentRowIndex == -int32_t(1)) {
        _currentRowIndex = rowIndex;
        _firstColumnIndex = columnIndex;
        _lastColumnIndex = columnIndex;
    } else {
        if(_currentRowIndex == rowIndex && _lastColumnIndex + int32_t(1) == columnIndex) {
            _lastColumnIndex = columnIndex;
        } else {
            if(_currentRectangleGroup == nullptr) {
                _currentRectangleGroup = new FormulaUsedBlankCellSet_BlankCellRectangleGroup(_currentRowIndex, _firstColumnIndex, _lastColumnIndex);
            } else {
                if(!npc(_currentRectangleGroup)->acceptRow(_currentRowIndex, _firstColumnIndex, _lastColumnIndex)) {
                    npc(_rectangleGroups)->add(static_cast< ::java::lang::Object* >(_currentRectangleGroup));
                    _currentRectangleGroup = new FormulaUsedBlankCellSet_BlankCellRectangleGroup(_currentRowIndex, _firstColumnIndex, _lastColumnIndex);
                }
            }
            _currentRowIndex = rowIndex;
            _firstColumnIndex = columnIndex;
            _lastColumnIndex = columnIndex;
        }
    }
}

bool org::apache::poi::ss::formula::FormulaUsedBlankCellSet_BlankCellSheetGroup::containsCell(int32_t rowIndex, int32_t columnIndex)
{
    for (auto i = npc(_rectangleGroups)->size() - int32_t(1); i >= 0; i--) {
        auto bcrg = java_cast< FormulaUsedBlankCellSet_BlankCellRectangleGroup* >(npc(_rectangleGroups)->get(i));
        if(npc(bcrg)->containsCell(rowIndex, columnIndex)) {
            return true;
        }
    }
    if(_currentRectangleGroup != nullptr && npc(_currentRectangleGroup)->containsCell(rowIndex, columnIndex)) {
        return true;
    }
    if(_currentRowIndex != -int32_t(1) && _currentRowIndex == rowIndex) {
        if(_firstColumnIndex <= columnIndex && columnIndex <= _lastColumnIndex) {
            return true;
        }
    }
    return false;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::FormulaUsedBlankCellSet_BlankCellSheetGroup::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.FormulaUsedBlankCellSet.BlankCellSheetGroup", 69);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::FormulaUsedBlankCellSet_BlankCellSheetGroup::getClass0()
{
    return class_();
}

