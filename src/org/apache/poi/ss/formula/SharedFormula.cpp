// Generated from /POI/java/org/apache/poi/ss/formula/SharedFormula.java
#include <org/apache/poi/ss/formula/SharedFormula.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/SpreadsheetVersion.hpp>
#include <org/apache/poi/ss/formula/ptg/AreaPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/AreaPtgBase.hpp>
#include <org/apache/poi/ss/formula/ptg/OperandPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/formula/ptg/RefPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/RefPtgBase.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace ptg
            {
typedef ::SubArray< ::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
            } // ptg
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

poi::ss::formula::SharedFormula::SharedFormula(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::SharedFormula::SharedFormula(::poi::ss::SpreadsheetVersion* ssVersion) 
    : SharedFormula(*static_cast< ::default_init_tag* >(0))
{
    ctor(ssVersion);
}

void poi::ss::formula::SharedFormula::ctor(::poi::ss::SpreadsheetVersion* ssVersion)
{
    super::ctor();
    _columnWrappingMask = npc(ssVersion)->getLastColumnIndex();
    _rowWrappingMask = npc(ssVersion)->getLastRowIndex();
}

poi::ss::formula::ptg::PtgArray* poi::ss::formula::SharedFormula::convertSharedFormulas(::poi::ss::formula::ptg::PtgArray* ptgs, int32_t formulaRow, int32_t formulaColumn)
{
    auto newPtgStack = new ::poi::ss::formula::ptg::PtgArray(npc(ptgs)->length);
    for (auto k = int32_t(0); k < npc(ptgs)->length; k++) {
        auto ptg = (*ptgs)[k];
        int8_t originalOperandClass = -int32_t(1);
        if(!npc(ptg)->isBaseToken()) {
            originalOperandClass = npc(ptg)->getPtgClass();
        }
        if(dynamic_cast< ::poi::ss::formula::ptg::RefPtgBase* >(ptg) != nullptr) {
            auto refNPtg = java_cast< ::poi::ss::formula::ptg::RefPtgBase* >(ptg);
            ptg = new ::poi::ss::formula::ptg::RefPtg(fixupRelativeRow(formulaRow, npc(refNPtg)->getRow(), npc(refNPtg)->isRowRelative()), fixupRelativeColumn(formulaColumn, npc(refNPtg)->getColumn(), npc(refNPtg)->isColRelative()), npc(refNPtg)->isRowRelative(), npc(refNPtg)->isColRelative());
            npc(ptg)->setClass(originalOperandClass);
        } else if(dynamic_cast< ::poi::ss::formula::ptg::AreaPtgBase* >(ptg) != nullptr) {
            auto areaNPtg = java_cast< ::poi::ss::formula::ptg::AreaPtgBase* >(ptg);
            ptg = new ::poi::ss::formula::ptg::AreaPtg(fixupRelativeRow(formulaRow, npc(areaNPtg)->getFirstRow(), npc(areaNPtg)->isFirstRowRelative()), fixupRelativeRow(formulaRow, npc(areaNPtg)->getLastRow(), npc(areaNPtg)->isLastRowRelative()), fixupRelativeColumn(formulaColumn, npc(areaNPtg)->getFirstColumn(), npc(areaNPtg)->isFirstColRelative()), fixupRelativeColumn(formulaColumn, npc(areaNPtg)->getLastColumn(), npc(areaNPtg)->isLastColRelative()), npc(areaNPtg)->isFirstRowRelative(), npc(areaNPtg)->isLastRowRelative(), npc(areaNPtg)->isFirstColRelative(), npc(areaNPtg)->isLastColRelative());
            npc(ptg)->setClass(originalOperandClass);
        } else if(dynamic_cast< ::poi::ss::formula::ptg::OperandPtg* >(ptg) != nullptr) {
            ptg = npc((java_cast< ::poi::ss::formula::ptg::OperandPtg* >(ptg)))->copy();
        } else {
        }
        newPtgStack->set(k, ptg);
    }
    return newPtgStack;
}

int32_t poi::ss::formula::SharedFormula::fixupRelativeColumn(int32_t currentcolumn, int32_t column, bool relative)
{
    if(relative) {
        return (column + currentcolumn) & _columnWrappingMask;
    }
    return column;
}

int32_t poi::ss::formula::SharedFormula::fixupRelativeRow(int32_t currentrow, int32_t row, bool relative)
{
    if(relative) {
        return (row + currentrow) & _rowWrappingMask;
    }
    return row;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::SharedFormula::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.SharedFormula", 39);
    return c;
}

java::lang::Class* poi::ss::formula::SharedFormula::getClass0()
{
    return class_();
}

