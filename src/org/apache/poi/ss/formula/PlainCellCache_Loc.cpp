// Generated from /POI/java/org/apache/poi/ss/formula/PlainCellCache.java
#include <org/apache/poi/ss/formula/PlainCellCache_Loc.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>

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

poi::ss::formula::PlainCellCache_Loc::PlainCellCache_Loc(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::PlainCellCache_Loc::PlainCellCache_Loc(int32_t bookIndex, int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex) 
    : PlainCellCache_Loc(*static_cast< ::default_init_tag* >(0))
{
    ctor(bookIndex,sheetIndex,rowIndex,columnIndex);
}

poi::ss::formula::PlainCellCache_Loc::PlainCellCache_Loc(int64_t bookSheetColumn, int32_t rowIndex) 
    : PlainCellCache_Loc(*static_cast< ::default_init_tag* >(0))
{
    ctor(bookSheetColumn,rowIndex);
}

void poi::ss::formula::PlainCellCache_Loc::ctor(int32_t bookIndex, int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex)
{
    super::ctor();
    _bookSheetColumn = toBookSheetColumn(bookIndex, sheetIndex, columnIndex);
    _rowIndex = rowIndex;
}

int64_t poi::ss::formula::PlainCellCache_Loc::toBookSheetColumn(int32_t bookIndex, int32_t sheetIndex, int32_t columnIndex)
{
    clinit();
    return ((bookIndex & int64_t(65535LL)) << int32_t(48)) + ((sheetIndex & int64_t(65535LL)) << int32_t(32)) + ((columnIndex & int64_t(65535LL)) << int32_t(0));
}

void poi::ss::formula::PlainCellCache_Loc::ctor(int64_t bookSheetColumn, int32_t rowIndex)
{
    super::ctor();
    _bookSheetColumn = bookSheetColumn;
    _rowIndex = rowIndex;
}

int32_t poi::ss::formula::PlainCellCache_Loc::hashCode()
{
    return static_cast< int32_t >((_bookSheetColumn ^ (static_cast<int64_t>(static_cast<uint64_t>(_bookSheetColumn) >> int32_t(32))))) + int32_t(17) * _rowIndex;
}

bool poi::ss::formula::PlainCellCache_Loc::equals(::java::lang::Object* obj)
{
    if(!(dynamic_cast< PlainCellCache_Loc* >(obj) != nullptr)) {
        return false;
    }
    auto other = java_cast< PlainCellCache_Loc* >(obj);
    return _bookSheetColumn == npc(other)->_bookSheetColumn && _rowIndex == npc(other)->_rowIndex;
}

int32_t poi::ss::formula::PlainCellCache_Loc::getRowIndex()
{
    return _rowIndex;
}

int32_t poi::ss::formula::PlainCellCache_Loc::getColumnIndex()
{
    return static_cast< int32_t >((_bookSheetColumn & int32_t(65535)));
}

int32_t poi::ss::formula::PlainCellCache_Loc::getSheetIndex()
{
    return static_cast< int32_t >(((_bookSheetColumn >> int32_t(32)) & int32_t(65535)));
}

int32_t poi::ss::formula::PlainCellCache_Loc::getBookIndex()
{
    return static_cast< int32_t >(((_bookSheetColumn >> int32_t(48)) & int32_t(65535)));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::PlainCellCache_Loc::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.PlainCellCache.Loc", 44);
    return c;
}

java::lang::Class* poi::ss::formula::PlainCellCache_Loc::getClass0()
{
    return class_();
}

