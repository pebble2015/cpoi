// Generated from /POI/java/org/apache/poi/ss/formula/FormulaUsedBlankCellSet.java
#include <org/apache/poi/ss/formula/FormulaUsedBlankCellSet_BookSheetKey.hpp>

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

poi::ss::formula::FormulaUsedBlankCellSet_BookSheetKey::FormulaUsedBlankCellSet_BookSheetKey(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::FormulaUsedBlankCellSet_BookSheetKey::FormulaUsedBlankCellSet_BookSheetKey(int32_t bookIndex, int32_t sheetIndex) 
    : FormulaUsedBlankCellSet_BookSheetKey(*static_cast< ::default_init_tag* >(0))
{
    ctor(bookIndex,sheetIndex);
}

void poi::ss::formula::FormulaUsedBlankCellSet_BookSheetKey::ctor(int32_t bookIndex, int32_t sheetIndex)
{
    super::ctor();
    _bookIndex = bookIndex;
    _sheetIndex = sheetIndex;
}

int32_t poi::ss::formula::FormulaUsedBlankCellSet_BookSheetKey::hashCode()
{
    return _bookIndex * int32_t(17) + _sheetIndex;
}

bool poi::ss::formula::FormulaUsedBlankCellSet_BookSheetKey::equals(::java::lang::Object* obj)
{
    if(!(dynamic_cast< FormulaUsedBlankCellSet_BookSheetKey* >(obj) != nullptr)) {
        return false;
    }
    auto other = java_cast< FormulaUsedBlankCellSet_BookSheetKey* >(obj);
    return _bookIndex == npc(other)->_bookIndex && _sheetIndex == npc(other)->_sheetIndex;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::FormulaUsedBlankCellSet_BookSheetKey::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.FormulaUsedBlankCellSet.BookSheetKey", 62);
    return c;
}

java::lang::Class* poi::ss::formula::FormulaUsedBlankCellSet_BookSheetKey::getClass0()
{
    return class_();
}

