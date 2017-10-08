// Generated from /POI/java/org/apache/poi/ss/formula/eval/RefEvalBase.java
#include <org/apache/poi/ss/formula/eval/RefEvalBase.hpp>

#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/SheetRange.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::eval::RefEvalBase::RefEvalBase(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::eval::RefEvalBase::RefEvalBase(::poi::ss::formula::SheetRange* sheetRange, int32_t rowIndex, int32_t columnIndex) 
    : RefEvalBase(*static_cast< ::default_init_tag* >(0))
{
    ctor(sheetRange,rowIndex,columnIndex);
}

poi::ss::formula::eval::RefEvalBase::RefEvalBase(int32_t firstSheetIndex, int32_t lastSheetIndex, int32_t rowIndex, int32_t columnIndex) 
    : RefEvalBase(*static_cast< ::default_init_tag* >(0))
{
    ctor(firstSheetIndex,lastSheetIndex,rowIndex,columnIndex);
}

poi::ss::formula::eval::RefEvalBase::RefEvalBase(int32_t onlySheetIndex, int32_t rowIndex, int32_t columnIndex) 
    : RefEvalBase(*static_cast< ::default_init_tag* >(0))
{
    ctor(onlySheetIndex,rowIndex,columnIndex);
}

void poi::ss::formula::eval::RefEvalBase::ctor(::poi::ss::formula::SheetRange* sheetRange, int32_t rowIndex, int32_t columnIndex)
{
    super::ctor();
    if(sheetRange == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"sheetRange must not be null"_j);
    }
    _firstSheetIndex = npc(sheetRange)->getFirstSheetIndex();
    _lastSheetIndex = npc(sheetRange)->getLastSheetIndex();
    _rowIndex = rowIndex;
    _columnIndex = columnIndex;
}

void poi::ss::formula::eval::RefEvalBase::ctor(int32_t firstSheetIndex, int32_t lastSheetIndex, int32_t rowIndex, int32_t columnIndex)
{
    super::ctor();
    _firstSheetIndex = firstSheetIndex;
    _lastSheetIndex = lastSheetIndex;
    _rowIndex = rowIndex;
    _columnIndex = columnIndex;
}

void poi::ss::formula::eval::RefEvalBase::ctor(int32_t onlySheetIndex, int32_t rowIndex, int32_t columnIndex)
{
    ctor(onlySheetIndex, onlySheetIndex, rowIndex, columnIndex);
}

int32_t poi::ss::formula::eval::RefEvalBase::getNumberOfSheets()
{
    return _lastSheetIndex - _firstSheetIndex + int32_t(1);
}

int32_t poi::ss::formula::eval::RefEvalBase::getFirstSheetIndex()
{
    return _firstSheetIndex;
}

int32_t poi::ss::formula::eval::RefEvalBase::getLastSheetIndex()
{
    return _lastSheetIndex;
}

int32_t poi::ss::formula::eval::RefEvalBase::getRow()
{
    return _rowIndex;
}

int32_t poi::ss::formula::eval::RefEvalBase::getColumn()
{
    return _columnIndex;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::eval::RefEvalBase::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.RefEvalBase", 42);
    return c;
}

java::lang::Class* poi::ss::formula::eval::RefEvalBase::getClass0()
{
    return class_();
}

