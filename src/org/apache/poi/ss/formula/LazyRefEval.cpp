// Generated from /POI/java/org/apache/poi/ss/formula/LazyRefEval.java
#include <org/apache/poi/ss/formula/LazyRefEval.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/LazyAreaEval.hpp>
#include <org/apache/poi/ss/formula/SheetRange.hpp>
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

org::apache::poi::ss::formula::LazyRefEval::LazyRefEval(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::LazyRefEval::LazyRefEval(int32_t rowIndex, int32_t columnIndex, SheetRangeEvaluator* sre) 
    : LazyRefEval(*static_cast< ::default_init_tag* >(0))
{
    ctor(rowIndex,columnIndex,sre);
}

void org::apache::poi::ss::formula::LazyRefEval::ctor(int32_t rowIndex, int32_t columnIndex, SheetRangeEvaluator* sre)
{
    super::ctor(static_cast< SheetRange* >(sre), rowIndex, columnIndex);
    _evaluator = sre;
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::LazyRefEval::getInnerValueEval(int32_t sheetIndex)
{
    return npc(_evaluator)->getEvalForCell(sheetIndex, getRow(), getColumn());
}

org::apache::poi::ss::formula::eval::AreaEval* org::apache::poi::ss::formula::LazyRefEval::offset(int32_t relFirstRowIx, int32_t relLastRowIx, int32_t relFirstColIx, int32_t relLastColIx)
{
    ::org::apache::poi::ss::formula::ptg::AreaI* area = new ::org::apache::poi::ss::formula::ptg::AreaI_OffsetArea(getRow(), getColumn(), relFirstRowIx, relLastRowIx, relFirstColIx, relLastColIx);
    return new LazyAreaEval(area, _evaluator);
}

bool org::apache::poi::ss::formula::LazyRefEval::isSubTotal()
{
    auto sheetEvaluator = npc(_evaluator)->getSheetEvaluator(getFirstSheetIndex());
    return npc(sheetEvaluator)->isSubTotal(getRow(), getColumn());
}

java::lang::String* org::apache::poi::ss::formula::LazyRefEval::toString()
{
    auto cr = new ::org::apache::poi::ss::util::CellReference(getRow(), getColumn());
    return ::java::lang::StringBuilder().append(npc(getClass())->getName())->append(u"["_j)
        ->append(npc(_evaluator)->getSheetNameRange())
        ->append(u'!')
        ->append(npc(cr)->formatAsString())
        ->append(u"]"_j)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::LazyRefEval::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.LazyRefEval", 37);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::LazyRefEval::getClass0()
{
    return class_();
}

