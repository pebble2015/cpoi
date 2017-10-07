// Generated from /POI/java/org/apache/poi/ss/formula/LazyAreaEval.java
#include <org/apache/poi/ss/formula/LazyAreaEval.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/SheetRangeEvaluator.hpp>
#include <org/apache/poi/ss/formula/SheetRefEvaluator.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/ptg/AreaI_OffsetArea.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::LazyAreaEval::LazyAreaEval(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::LazyAreaEval::LazyAreaEval(::org::apache::poi::ss::formula::ptg::AreaI* ptg, SheetRangeEvaluator* evaluator) 
    : LazyAreaEval(*static_cast< ::default_init_tag* >(0))
{
    ctor(ptg,evaluator);
}

org::apache::poi::ss::formula::LazyAreaEval::LazyAreaEval(int32_t firstRowIndex, int32_t firstColumnIndex, int32_t lastRowIndex, int32_t lastColumnIndex, SheetRangeEvaluator* evaluator) 
    : LazyAreaEval(*static_cast< ::default_init_tag* >(0))
{
    ctor(firstRowIndex,firstColumnIndex,lastRowIndex,lastColumnIndex,evaluator);
}

void org::apache::poi::ss::formula::LazyAreaEval::ctor(::org::apache::poi::ss::formula::ptg::AreaI* ptg, SheetRangeEvaluator* evaluator)
{
    super::ctor(ptg, evaluator);
    _evaluator = evaluator;
}

void org::apache::poi::ss::formula::LazyAreaEval::ctor(int32_t firstRowIndex, int32_t firstColumnIndex, int32_t lastRowIndex, int32_t lastColumnIndex, SheetRangeEvaluator* evaluator)
{
    super::ctor(evaluator, firstRowIndex, firstColumnIndex, lastRowIndex, lastColumnIndex);
    _evaluator = evaluator;
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::LazyAreaEval::getRelativeValue(int32_t relativeRowIndex, int32_t relativeColumnIndex)
{
    return getRelativeValue(getFirstSheetIndex(), relativeRowIndex, relativeColumnIndex);
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::LazyAreaEval::getRelativeValue(int32_t sheetIndex, int32_t relativeRowIndex, int32_t relativeColumnIndex)
{
    auto rowIx = (relativeRowIndex + getFirstRow());
    auto colIx = (relativeColumnIndex + getFirstColumn());
    return npc(_evaluator)->getEvalForCell(sheetIndex, rowIx, colIx);
}

org::apache::poi::ss::formula::eval::AreaEval* org::apache::poi::ss::formula::LazyAreaEval::offset(int32_t relFirstRowIx, int32_t relLastRowIx, int32_t relFirstColIx, int32_t relLastColIx)
{
    ::org::apache::poi::ss::formula::ptg::AreaI* area = new ::org::apache::poi::ss::formula::ptg::AreaI_OffsetArea(getFirstRow(), getFirstColumn(), relFirstRowIx, relLastRowIx, relFirstColIx, relLastColIx);
    return new LazyAreaEval(area, _evaluator);
}

org::apache::poi::ss::formula::LazyAreaEval* org::apache::poi::ss::formula::LazyAreaEval::getRow(int32_t rowIndex)
{
    if(rowIndex >= getHeight()) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid rowIndex "_j)->append(rowIndex)
            ->append(u".  Allowable range is (0.."_j)
            ->append(getHeight())
            ->append(u")."_j)->toString());
    }
    auto absRowIx = getFirstRow() + rowIndex;
    return new LazyAreaEval(absRowIx, getFirstColumn(), absRowIx, getLastColumn(), _evaluator);
}

org::apache::poi::ss::formula::LazyAreaEval* org::apache::poi::ss::formula::LazyAreaEval::getColumn(int32_t columnIndex)
{
    if(columnIndex >= getWidth()) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid columnIndex "_j)->append(columnIndex)
            ->append(u".  Allowable range is (0.."_j)
            ->append(getWidth())
            ->append(u")."_j)->toString());
    }
    auto absColIx = getFirstColumn() + columnIndex;
    return new LazyAreaEval(getFirstRow(), absColIx, getLastRow(), absColIx, _evaluator);
}

java::lang::String* org::apache::poi::ss::formula::LazyAreaEval::toString()
{
    auto crA = new ::org::apache::poi::ss::util::CellReference(getFirstRow(), getFirstColumn());
    auto crB = new ::org::apache::poi::ss::util::CellReference(getLastRow(), getLastColumn());
    return ::java::lang::StringBuilder().append(npc(getClass())->getName())->append(u"["_j)
        ->append(npc(_evaluator)->getSheetNameRange())
        ->append(u'!')
        ->append(npc(crA)->formatAsString())
        ->append(u':')
        ->append(npc(crB)->formatAsString())
        ->append(u"]"_j)->toString();
}

bool org::apache::poi::ss::formula::LazyAreaEval::isSubTotal(int32_t rowIndex, int32_t columnIndex)
{
    auto _sre = npc(_evaluator)->getSheetEvaluator(npc(_evaluator)->getFirstSheetIndex());
    return npc(_sre)->isSubTotal(getFirstRow() + rowIndex, getFirstColumn() + columnIndex);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::LazyAreaEval::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.LazyAreaEval", 38);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::LazyAreaEval::getClass0()
{
    return class_();
}

