// Generated from /POI/java/org/apache/poi/ss/formula/eval/AreaEvalBase.java
#include <org/apache/poi/ss/formula/eval/AreaEvalBase.hpp>

#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/SheetRange.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/ptg/AreaI.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::eval::AreaEvalBase::AreaEvalBase(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::eval::AreaEvalBase::AreaEvalBase(::poi::ss::formula::SheetRange* sheets, int32_t firstRow, int32_t firstColumn, int32_t lastRow, int32_t lastColumn) 
    : AreaEvalBase(*static_cast< ::default_init_tag* >(0))
{
    ctor(sheets,firstRow,firstColumn,lastRow,lastColumn);
}

poi::ss::formula::eval::AreaEvalBase::AreaEvalBase(int32_t firstRow, int32_t firstColumn, int32_t lastRow, int32_t lastColumn) 
    : AreaEvalBase(*static_cast< ::default_init_tag* >(0))
{
    ctor(firstRow,firstColumn,lastRow,lastColumn);
}

poi::ss::formula::eval::AreaEvalBase::AreaEvalBase(::poi::ss::formula::ptg::AreaI* ptg) 
    : AreaEvalBase(*static_cast< ::default_init_tag* >(0))
{
    ctor(ptg);
}

poi::ss::formula::eval::AreaEvalBase::AreaEvalBase(::poi::ss::formula::ptg::AreaI* ptg, ::poi::ss::formula::SheetRange* sheets) 
    : AreaEvalBase(*static_cast< ::default_init_tag* >(0))
{
    ctor(ptg,sheets);
}

void poi::ss::formula::eval::AreaEvalBase::ctor(::poi::ss::formula::SheetRange* sheets, int32_t firstRow, int32_t firstColumn, int32_t lastRow, int32_t lastColumn)
{
    super::ctor();
    _firstColumn = firstColumn;
    _firstRow = firstRow;
    _lastColumn = lastColumn;
    _lastRow = lastRow;
    _nColumns = _lastColumn - _firstColumn + int32_t(1);
    _nRows = _lastRow - _firstRow + int32_t(1);
    if(sheets != nullptr) {
        _firstSheet = npc(sheets)->getFirstSheetIndex();
        _lastSheet = npc(sheets)->getLastSheetIndex();
    } else {
        _firstSheet = -int32_t(1);
        _lastSheet = -int32_t(1);
    }
}

void poi::ss::formula::eval::AreaEvalBase::ctor(int32_t firstRow, int32_t firstColumn, int32_t lastRow, int32_t lastColumn)
{
    ctor(nullptr, firstRow, firstColumn, lastRow, lastColumn);
}

void poi::ss::formula::eval::AreaEvalBase::ctor(::poi::ss::formula::ptg::AreaI* ptg)
{
    ctor(ptg, nullptr);
}

void poi::ss::formula::eval::AreaEvalBase::ctor(::poi::ss::formula::ptg::AreaI* ptg, ::poi::ss::formula::SheetRange* sheets)
{
    ctor(sheets, npc(ptg)->getFirstRow(), npc(ptg)->getFirstColumn(), npc(ptg)->getLastRow(), npc(ptg)->getLastColumn());
}

int32_t poi::ss::formula::eval::AreaEvalBase::getFirstColumn()
{
    return _firstColumn;
}

int32_t poi::ss::formula::eval::AreaEvalBase::getFirstRow()
{
    return _firstRow;
}

int32_t poi::ss::formula::eval::AreaEvalBase::getLastColumn()
{
    return _lastColumn;
}

int32_t poi::ss::formula::eval::AreaEvalBase::getLastRow()
{
    return _lastRow;
}

int32_t poi::ss::formula::eval::AreaEvalBase::getFirstSheetIndex()
{
    return _firstSheet;
}

int32_t poi::ss::formula::eval::AreaEvalBase::getLastSheetIndex()
{
    return _lastSheet;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::eval::AreaEvalBase::getAbsoluteValue(int32_t row, int32_t col)
{
    auto rowOffsetIx = row - _firstRow;
    auto colOffsetIx = col - _firstColumn;
    if(rowOffsetIx < 0 || rowOffsetIx >= _nRows) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Specified row index ("_j)->append(row)
            ->append(u") is outside the allowed range ("_j)
            ->append(_firstRow)
            ->append(u".."_j)
            ->append(_lastRow)
            ->append(u")"_j)->toString());
    }
    if(colOffsetIx < 0 || colOffsetIx >= _nColumns) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Specified column index ("_j)->append(col)
            ->append(u") is outside the allowed range ("_j)
            ->append(_firstColumn)
            ->append(u".."_j)
            ->append(col)
            ->append(u")"_j)->toString());
    }
    return getRelativeValue(rowOffsetIx, colOffsetIx);
}

bool poi::ss::formula::eval::AreaEvalBase::contains(int32_t row, int32_t col)
{
    return _firstRow <= row && _lastRow >= row && _firstColumn <= col && _lastColumn >= col;
}

bool poi::ss::formula::eval::AreaEvalBase::containsRow(int32_t row)
{
    return _firstRow <= row && _lastRow >= row;
}

bool poi::ss::formula::eval::AreaEvalBase::containsColumn(int32_t col)
{
    return _firstColumn <= col && _lastColumn >= col;
}

bool poi::ss::formula::eval::AreaEvalBase::isColumn()
{
    return _firstColumn == _lastColumn;
}

bool poi::ss::formula::eval::AreaEvalBase::isRow()
{
    return _firstRow == _lastRow;
}

int32_t poi::ss::formula::eval::AreaEvalBase::getHeight()
{
    return _lastRow - _firstRow + int32_t(1);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::eval::AreaEvalBase::getValue(int32_t row, int32_t col)
{
    return getRelativeValue(row, col);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::eval::AreaEvalBase::getValue(int32_t sheetIndex, int32_t row, int32_t col)
{
    return getRelativeValue(sheetIndex, row, col);
}

int32_t poi::ss::formula::eval::AreaEvalBase::getWidth()
{
    return _lastColumn - _firstColumn + int32_t(1);
}

bool poi::ss::formula::eval::AreaEvalBase::isSubTotal(int32_t rowIndex, int32_t columnIndex)
{
    return false;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::eval::AreaEvalBase::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.AreaEvalBase", 43);
    return c;
}

java::lang::Class* poi::ss::formula::eval::AreaEvalBase::getClass0()
{
    return class_();
}

