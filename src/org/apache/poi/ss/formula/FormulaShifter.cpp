// Generated from /POI/java/org/apache/poi/ss/formula/FormulaShifter.java
#include <org/apache/poi/ss/formula/FormulaShifter.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/SpreadsheetVersion.hpp>
#include <org/apache/poi/ss/formula/FormulaShifter_ShiftMode.hpp>
#include <org/apache/poi/ss/formula/ptg/Area2DPtgBase.hpp>
#include <org/apache/poi/ss/formula/ptg/Area3DPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Area3DPxg.hpp>
#include <org/apache/poi/ss/formula/ptg/AreaErrPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/AreaPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/AreaPtgBase.hpp>
#include <org/apache/poi/ss/formula/ptg/Deleted3DPxg.hpp>
#include <org/apache/poi/ss/formula/ptg/DeletedArea3DPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/DeletedRef3DPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ref3DPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ref3DPxg.hpp>
#include <org/apache/poi/ss/formula/ptg/RefErrorPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/RefPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/RefPtgBase.hpp>
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
                    namespace ptg
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
                    } // ptg
                } // formula
            } // ss
        } // poi
    } // apache
} // org

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

org::apache::poi::ss::formula::FormulaShifter::FormulaShifter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::FormulaShifter::FormulaShifter(int32_t externSheetIndex, ::java::lang::String* sheetName, int32_t firstMovedIndex, int32_t lastMovedIndex, int32_t amountToMove, FormulaShifter_ShiftMode* mode, ::org::apache::poi::ss::SpreadsheetVersion* version) 
    : FormulaShifter(*static_cast< ::default_init_tag* >(0))
{
    ctor(externSheetIndex,sheetName,firstMovedIndex,lastMovedIndex,amountToMove,mode,version);
}

org::apache::poi::ss::formula::FormulaShifter::FormulaShifter(int32_t srcSheetIndex, int32_t dstSheetIndex) 
    : FormulaShifter(*static_cast< ::default_init_tag* >(0))
{
    ctor(srcSheetIndex,dstSheetIndex);
}

void org::apache::poi::ss::formula::FormulaShifter::ctor(int32_t externSheetIndex, ::java::lang::String* sheetName, int32_t firstMovedIndex, int32_t lastMovedIndex, int32_t amountToMove, FormulaShifter_ShiftMode* mode, ::org::apache::poi::ss::SpreadsheetVersion* version)
{
    super::ctor();
    if(amountToMove == 0) {
        throw new ::java::lang::IllegalArgumentException(u"amountToMove must not be zero"_j);
    }
    if(firstMovedIndex > lastMovedIndex) {
        throw new ::java::lang::IllegalArgumentException(u"firstMovedIndex, lastMovedIndex out of order"_j);
    }
    _externSheetIndex = externSheetIndex;
    _sheetName = sheetName;
    _firstMovedIndex = firstMovedIndex;
    _lastMovedIndex = lastMovedIndex;
    _amountToMove = amountToMove;
    _mode = mode;
    _version = version;
    _srcSheetIndex = _dstSheetIndex = -int32_t(1);
}

void org::apache::poi::ss::formula::FormulaShifter::ctor(int32_t srcSheetIndex, int32_t dstSheetIndex)
{
    super::ctor();
    _externSheetIndex = _firstMovedIndex = _lastMovedIndex = _amountToMove = -int32_t(1);
    _sheetName = nullptr;
    _version = nullptr;
    _srcSheetIndex = srcSheetIndex;
    _dstSheetIndex = dstSheetIndex;
    _mode = FormulaShifter_ShiftMode::SheetMove;
}

org::apache::poi::ss::formula::FormulaShifter* org::apache::poi::ss::formula::FormulaShifter::createForRowShift(int32_t externSheetIndex, ::java::lang::String* sheetName, int32_t firstMovedRowIndex, int32_t lastMovedRowIndex, int32_t numberOfRowsToMove, ::org::apache::poi::ss::SpreadsheetVersion* version)
{
    clinit();
    return new FormulaShifter(externSheetIndex, sheetName, firstMovedRowIndex, lastMovedRowIndex, numberOfRowsToMove, FormulaShifter_ShiftMode::RowMove, version);
}

org::apache::poi::ss::formula::FormulaShifter* org::apache::poi::ss::formula::FormulaShifter::createForRowCopy(int32_t externSheetIndex, ::java::lang::String* sheetName, int32_t firstMovedRowIndex, int32_t lastMovedRowIndex, int32_t numberOfRowsToMove, ::org::apache::poi::ss::SpreadsheetVersion* version)
{
    clinit();
    return new FormulaShifter(externSheetIndex, sheetName, firstMovedRowIndex, lastMovedRowIndex, numberOfRowsToMove, FormulaShifter_ShiftMode::RowCopy, version);
}

org::apache::poi::ss::formula::FormulaShifter* org::apache::poi::ss::formula::FormulaShifter::createForSheetShift(int32_t srcSheetIndex, int32_t dstSheetIndex)
{
    clinit();
    return new FormulaShifter(srcSheetIndex, dstSheetIndex);
}

java::lang::String* org::apache::poi::ss::formula::FormulaShifter::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(sb)->append(npc(getClass())->getName());
    npc(sb)->append(u" ["_j);
    npc(sb)->append(_firstMovedIndex);
    npc(sb)->append(_lastMovedIndex);
    npc(sb)->append(_amountToMove);
    return npc(sb)->toString();
}

bool org::apache::poi::ss::formula::FormulaShifter::adjustFormula(::org::apache::poi::ss::formula::ptg::PtgArray* ptgs, int32_t currentExternSheetIx)
{
    auto refsWereChanged = false;
    for (auto i = int32_t(0); i < npc(ptgs)->length; i++) {
        auto newPtg = adjustPtg((*ptgs)[i], currentExternSheetIx);
        if(newPtg != nullptr) {
            refsWereChanged = true;
            ptgs->set(i, newPtg);
        }
    }
    return refsWereChanged;
}

org::apache::poi::ss::formula::ptg::Ptg* org::apache::poi::ss::formula::FormulaShifter::adjustPtg(::org::apache::poi::ss::formula::ptg::Ptg* ptg, int32_t currentExternSheetIx)
{
    {
        auto v = _mode;
        if((v == FormulaShifter_ShiftMode::RowMove)) {
            return adjustPtgDueToRowMove(ptg, currentExternSheetIx);
        }
        if((v == FormulaShifter_ShiftMode::RowCopy)) {
            return adjustPtgDueToRowCopy(ptg);
        }
        if((v == FormulaShifter_ShiftMode::SheetMove)) {
            return adjustPtgDueToSheetMove(ptg);
        }
        if((((v != FormulaShifter_ShiftMode::RowMove) && (v != FormulaShifter_ShiftMode::RowCopy) && (v != FormulaShifter_ShiftMode::SheetMove)))) {
            throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Unsupported shift mode: "_j)->append(static_cast< ::java::lang::Object* >(_mode))->toString());
        }
end_switch0:;
    }

}

org::apache::poi::ss::formula::ptg::Ptg* org::apache::poi::ss::formula::FormulaShifter::adjustPtgDueToRowMove(::org::apache::poi::ss::formula::ptg::Ptg* ptg, int32_t currentExternSheetIx)
{
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::RefPtg* >(ptg) != nullptr) {
        if(currentExternSheetIx != _externSheetIndex) {
            return nullptr;
        }
        auto rptg = java_cast< ::org::apache::poi::ss::formula::ptg::RefPtg* >(ptg);
        return rowMoveRefPtg(rptg);
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::Ref3DPtg* >(ptg) != nullptr) {
        auto rptg = java_cast< ::org::apache::poi::ss::formula::ptg::Ref3DPtg* >(ptg);
        if(_externSheetIndex != npc(rptg)->getExternSheetIndex()) {
            return nullptr;
        }
        return rowMoveRefPtg(rptg);
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::Ref3DPxg* >(ptg) != nullptr) {
        auto rpxg = java_cast< ::org::apache::poi::ss::formula::ptg::Ref3DPxg* >(ptg);
        if(npc(rpxg)->getExternalWorkbookNumber() > 0 || !npc(_sheetName)->equals(static_cast< ::java::lang::Object* >(npc(rpxg)->getSheetName()))) {
            return nullptr;
        }
        return rowMoveRefPtg(rpxg);
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::Area2DPtgBase* >(ptg) != nullptr) {
        if(currentExternSheetIx != _externSheetIndex) {
            return ptg;
        }
        return rowMoveAreaPtg(java_cast< ::org::apache::poi::ss::formula::ptg::Area2DPtgBase* >(ptg));
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::Area3DPtg* >(ptg) != nullptr) {
        auto aptg = java_cast< ::org::apache::poi::ss::formula::ptg::Area3DPtg* >(ptg);
        if(_externSheetIndex != npc(aptg)->getExternSheetIndex()) {
            return nullptr;
        }
        return rowMoveAreaPtg(aptg);
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::Area3DPxg* >(ptg) != nullptr) {
        auto apxg = java_cast< ::org::apache::poi::ss::formula::ptg::Area3DPxg* >(ptg);
        if(npc(apxg)->getExternalWorkbookNumber() > 0 || !npc(_sheetName)->equals(static_cast< ::java::lang::Object* >(npc(apxg)->getSheetName()))) {
            return nullptr;
        }
        return rowMoveAreaPtg(apxg);
    }
    return nullptr;
}

org::apache::poi::ss::formula::ptg::Ptg* org::apache::poi::ss::formula::FormulaShifter::adjustPtgDueToRowCopy(::org::apache::poi::ss::formula::ptg::Ptg* ptg)
{
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::RefPtg* >(ptg) != nullptr) {
        auto rptg = java_cast< ::org::apache::poi::ss::formula::ptg::RefPtg* >(ptg);
        return rowCopyRefPtg(rptg);
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::Ref3DPtg* >(ptg) != nullptr) {
        auto rptg = java_cast< ::org::apache::poi::ss::formula::ptg::Ref3DPtg* >(ptg);
        return rowCopyRefPtg(rptg);
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::Ref3DPxg* >(ptg) != nullptr) {
        auto rpxg = java_cast< ::org::apache::poi::ss::formula::ptg::Ref3DPxg* >(ptg);
        return rowCopyRefPtg(rpxg);
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::Area2DPtgBase* >(ptg) != nullptr) {
        return rowCopyAreaPtg(java_cast< ::org::apache::poi::ss::formula::ptg::Area2DPtgBase* >(ptg));
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::Area3DPtg* >(ptg) != nullptr) {
        auto aptg = java_cast< ::org::apache::poi::ss::formula::ptg::Area3DPtg* >(ptg);
        return rowCopyAreaPtg(aptg);
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::Area3DPxg* >(ptg) != nullptr) {
        auto apxg = java_cast< ::org::apache::poi::ss::formula::ptg::Area3DPxg* >(ptg);
        return rowCopyAreaPtg(apxg);
    }
    return nullptr;
}

org::apache::poi::ss::formula::ptg::Ptg* org::apache::poi::ss::formula::FormulaShifter::adjustPtgDueToSheetMove(::org::apache::poi::ss::formula::ptg::Ptg* ptg)
{
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::Ref3DPtg* >(ptg) != nullptr) {
        auto ref = java_cast< ::org::apache::poi::ss::formula::ptg::Ref3DPtg* >(ptg);
        auto oldSheetIndex = npc(ref)->getExternSheetIndex();
        if(oldSheetIndex < _srcSheetIndex && oldSheetIndex < _dstSheetIndex) {
            return nullptr;
        }
        if(oldSheetIndex > _srcSheetIndex && oldSheetIndex > _dstSheetIndex) {
            return nullptr;
        }
        if(oldSheetIndex == _srcSheetIndex) {
            npc(ref)->setExternSheetIndex(_dstSheetIndex);
            return ref;
        }
        if(_dstSheetIndex < _srcSheetIndex) {
            npc(ref)->setExternSheetIndex(oldSheetIndex + int32_t(1));
            return ref;
        }
        if(_dstSheetIndex > _srcSheetIndex) {
            npc(ref)->setExternSheetIndex(oldSheetIndex - int32_t(1));
            return ref;
        }
    }
    return nullptr;
}

org::apache::poi::ss::formula::ptg::Ptg* org::apache::poi::ss::formula::FormulaShifter::rowMoveRefPtg(::org::apache::poi::ss::formula::ptg::RefPtgBase* rptg)
{
    auto refRow = npc(rptg)->getRow();
    if(_firstMovedIndex <= refRow && refRow <= _lastMovedIndex) {
        npc(rptg)->setRow(refRow + _amountToMove);
        return rptg;
    }
    auto destFirstRowIndex = _firstMovedIndex + _amountToMove;
    auto destLastRowIndex = _lastMovedIndex + _amountToMove;
    if(destLastRowIndex < refRow || refRow < destFirstRowIndex) {
        return nullptr;
    }
    if(destFirstRowIndex <= refRow && refRow <= destLastRowIndex) {
        return createDeletedRef(rptg);
    }
    throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Situation not covered: ("_j)->append(_firstMovedIndex)
        ->append(u", "_j)
        ->append(_lastMovedIndex)
        ->append(u", "_j)
        ->append(_amountToMove)
        ->append(u", "_j)
        ->append(refRow)
        ->append(u", "_j)
        ->append(refRow)
        ->append(u")"_j)->toString());
}

org::apache::poi::ss::formula::ptg::Ptg* org::apache::poi::ss::formula::FormulaShifter::rowMoveAreaPtg(::org::apache::poi::ss::formula::ptg::AreaPtgBase* aptg)
{
    auto aFirstRow = npc(aptg)->getFirstRow();
    auto aLastRow = npc(aptg)->getLastRow();
    if(_firstMovedIndex <= aFirstRow && aLastRow <= _lastMovedIndex) {
        npc(aptg)->setFirstRow(aFirstRow + _amountToMove);
        npc(aptg)->setLastRow(aLastRow + _amountToMove);
        return aptg;
    }
    auto destFirstRowIndex = _firstMovedIndex + _amountToMove;
    auto destLastRowIndex = _lastMovedIndex + _amountToMove;
    if(aFirstRow < _firstMovedIndex && _lastMovedIndex < aLastRow) {
        if(destFirstRowIndex < aFirstRow && aFirstRow <= destLastRowIndex) {
            npc(aptg)->setFirstRow(destLastRowIndex + int32_t(1));
            return aptg;
        } else if(destFirstRowIndex <= aLastRow && aLastRow < destLastRowIndex) {
            npc(aptg)->setLastRow(destFirstRowIndex - int32_t(1));
            return aptg;
        }
        return nullptr;
    }
    if(_firstMovedIndex <= aFirstRow && aFirstRow <= _lastMovedIndex) {
        if(_amountToMove < 0) {
            npc(aptg)->setFirstRow(aFirstRow + _amountToMove);
            return aptg;
        }
        if(destFirstRowIndex > aLastRow) {
            return nullptr;
        }
        auto newFirstRowIx = aFirstRow + _amountToMove;
        if(destLastRowIndex < aLastRow) {
            npc(aptg)->setFirstRow(newFirstRowIx);
            return aptg;
        }
        auto areaRemainingTopRowIx = _lastMovedIndex + int32_t(1);
        if(destFirstRowIndex > areaRemainingTopRowIx) {
            newFirstRowIx = areaRemainingTopRowIx;
        }
        npc(aptg)->setFirstRow(newFirstRowIx);
        npc(aptg)->setLastRow(::java::lang::Math::max(aLastRow, destLastRowIndex));
        return aptg;
    }
    if(_firstMovedIndex <= aLastRow && aLastRow <= _lastMovedIndex) {
        if(_amountToMove > 0) {
            npc(aptg)->setLastRow(aLastRow + _amountToMove);
            return aptg;
        }
        if(destLastRowIndex < aFirstRow) {
            return nullptr;
        }
        auto newLastRowIx = aLastRow + _amountToMove;
        if(destFirstRowIndex > aFirstRow) {
            npc(aptg)->setLastRow(newLastRowIx);
            return aptg;
        }
        auto areaRemainingBottomRowIx = _firstMovedIndex - int32_t(1);
        if(destLastRowIndex < areaRemainingBottomRowIx) {
            newLastRowIx = areaRemainingBottomRowIx;
        }
        npc(aptg)->setFirstRow(::java::lang::Math::min(aFirstRow, destFirstRowIndex));
        npc(aptg)->setLastRow(newLastRowIx);
        return aptg;
    }
    if(destLastRowIndex < aFirstRow || aLastRow < destFirstRowIndex) {
        return nullptr;
    }
    if(destFirstRowIndex <= aFirstRow && aLastRow <= destLastRowIndex) {
        return createDeletedRef(aptg);
    }
    if(aFirstRow <= destFirstRowIndex && destLastRowIndex <= aLastRow) {
        return nullptr;
    }
    if(destFirstRowIndex < aFirstRow && aFirstRow <= destLastRowIndex) {
        npc(aptg)->setFirstRow(destLastRowIndex + int32_t(1));
        return aptg;
    }
    if(destFirstRowIndex <= aLastRow && aLastRow < destLastRowIndex) {
        npc(aptg)->setLastRow(destFirstRowIndex - int32_t(1));
        return aptg;
    }
    throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Situation not covered: ("_j)->append(_firstMovedIndex)
        ->append(u", "_j)
        ->append(_lastMovedIndex)
        ->append(u", "_j)
        ->append(_amountToMove)
        ->append(u", "_j)
        ->append(aFirstRow)
        ->append(u", "_j)
        ->append(aLastRow)
        ->append(u")"_j)->toString());
}

org::apache::poi::ss::formula::ptg::Ptg* org::apache::poi::ss::formula::FormulaShifter::rowCopyRefPtg(::org::apache::poi::ss::formula::ptg::RefPtgBase* rptg)
{
    auto const refRow = npc(rptg)->getRow();
    if(npc(rptg)->isRowRelative()) {
        auto const destRowIndex = _firstMovedIndex + _amountToMove;
        if(destRowIndex < 0 || npc(_version)->getLastRowIndex() < destRowIndex)
            return createDeletedRef(rptg);

        npc(rptg)->setRow(refRow + _amountToMove);
        return rptg;
    }
    return nullptr;
}

org::apache::poi::ss::formula::ptg::Ptg* org::apache::poi::ss::formula::FormulaShifter::rowCopyAreaPtg(::org::apache::poi::ss::formula::ptg::AreaPtgBase* aptg)
{
    auto changed = false;
    auto const aFirstRow = npc(aptg)->getFirstRow();
    auto const aLastRow = npc(aptg)->getLastRow();
    if(npc(aptg)->isFirstRowRelative()) {
        auto const destFirstRowIndex = aFirstRow + _amountToMove;
        if(destFirstRowIndex < 0 || npc(_version)->getLastRowIndex() < destFirstRowIndex)
            return createDeletedRef(aptg);

        npc(aptg)->setFirstRow(destFirstRowIndex);
        changed = true;
    }
    if(npc(aptg)->isLastRowRelative()) {
        auto const destLastRowIndex = aLastRow + _amountToMove;
        if(destLastRowIndex < 0 || npc(_version)->getLastRowIndex() < destLastRowIndex)
            return createDeletedRef(aptg);

        npc(aptg)->setLastRow(destLastRowIndex);
        changed = true;
    }
    if(changed) {
        npc(aptg)->sortTopLeftToBottomRight();
    }
    return changed ? static_cast< ::org::apache::poi::ss::formula::ptg::Ptg* >(aptg) : static_cast< ::org::apache::poi::ss::formula::ptg::Ptg* >(nullptr);
}

org::apache::poi::ss::formula::ptg::Ptg* org::apache::poi::ss::formula::FormulaShifter::createDeletedRef(::org::apache::poi::ss::formula::ptg::Ptg* ptg)
{
    clinit();
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::RefPtg* >(ptg) != nullptr) {
        return new ::org::apache::poi::ss::formula::ptg::RefErrorPtg();
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::Ref3DPtg* >(ptg) != nullptr) {
        auto rptg = java_cast< ::org::apache::poi::ss::formula::ptg::Ref3DPtg* >(ptg);
        return new ::org::apache::poi::ss::formula::ptg::DeletedRef3DPtg(npc(rptg)->getExternSheetIndex());
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::AreaPtg* >(ptg) != nullptr) {
        return new ::org::apache::poi::ss::formula::ptg::AreaErrPtg();
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::Area3DPtg* >(ptg) != nullptr) {
        auto area3DPtg = java_cast< ::org::apache::poi::ss::formula::ptg::Area3DPtg* >(ptg);
        return new ::org::apache::poi::ss::formula::ptg::DeletedArea3DPtg(npc(area3DPtg)->getExternSheetIndex());
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::Ref3DPxg* >(ptg) != nullptr) {
        auto pxg = java_cast< ::org::apache::poi::ss::formula::ptg::Ref3DPxg* >(ptg);
        return new ::org::apache::poi::ss::formula::ptg::Deleted3DPxg(npc(pxg)->getExternalWorkbookNumber(), npc(pxg)->getSheetName());
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::Area3DPxg* >(ptg) != nullptr) {
        auto pxg = java_cast< ::org::apache::poi::ss::formula::ptg::Area3DPxg* >(ptg);
        return new ::org::apache::poi::ss::formula::ptg::Deleted3DPxg(npc(pxg)->getExternalWorkbookNumber(), npc(pxg)->getSheetName());
    }
    throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Unexpected ref ptg class ("_j)->append(npc(npc(ptg)->getClass())->getName())
        ->append(u")"_j)->toString());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::FormulaShifter::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.FormulaShifter", 40);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::FormulaShifter::getClass0()
{
    return class_();
}

