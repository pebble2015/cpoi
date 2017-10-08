// Generated from /POI/java/org/apache/poi/ss/formula/functions/LookupUtils.java
#include <org/apache/poi/ss/formula/functions/LookupUtils_SheetVector.hpp>

#include <java/lang/ArrayIndexOutOfBoundsException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::functions::LookupUtils_SheetVector::LookupUtils_SheetVector(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::LookupUtils_SheetVector::LookupUtils_SheetVector(::poi::ss::formula::eval::RefEval* re) 
    : LookupUtils_SheetVector(*static_cast< ::default_init_tag* >(0))
{
    ctor(re);
}

void poi::ss::formula::functions::LookupUtils_SheetVector::ctor(::poi::ss::formula::eval::RefEval* re)
{
    super::ctor();
    _size = npc(re)->getNumberOfSheets();
    _re = re;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::LookupUtils_SheetVector::getItem(int32_t index)
{
    if(index >= _size) {
        throw new ::java::lang::ArrayIndexOutOfBoundsException(::java::lang::StringBuilder().append(u"Specified index ("_j)->append(index)
            ->append(u") is outside the allowed range (0.."_j)
            ->append((_size - int32_t(1)))
            ->append(u")"_j)->toString());
    }
    auto sheetIndex = npc(_re)->getFirstSheetIndex() + index;
    return npc(_re)->getInnerValueEval(sheetIndex);
}

int32_t poi::ss::formula::functions::LookupUtils_SheetVector::getSize()
{
    return _size;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::LookupUtils_SheetVector::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.LookupUtils.SheetVector", 59);
    return c;
}

java::lang::Class* poi::ss::formula::functions::LookupUtils_SheetVector::getClass0()
{
    return class_();
}

