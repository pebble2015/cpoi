// Generated from /POI/java/org/apache/poi/ss/formula/functions/LookupUtils.java
#include <org/apache/poi/ss/formula/functions/LookupUtils_ColumnVector.hpp>

#include <java/lang/ArrayIndexOutOfBoundsException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/TwoDEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::functions::LookupUtils_ColumnVector::LookupUtils_ColumnVector(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::LookupUtils_ColumnVector::LookupUtils_ColumnVector(::poi::ss::formula::TwoDEval* tableArray_, int32_t columnIndex) 
    : LookupUtils_ColumnVector(*static_cast< ::default_init_tag* >(0))
{
    ctor(tableArray_,columnIndex);
}

void poi::ss::formula::functions::LookupUtils_ColumnVector::ctor(::poi::ss::formula::TwoDEval* tableArray_, int32_t columnIndex)
{
    super::ctor();
    _columnIndex = columnIndex;
    auto lastColIx = npc(tableArray_)->getWidth() - int32_t(1);
    if(columnIndex < 0 || columnIndex > lastColIx) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Specified column index ("_j)->append(columnIndex)
            ->append(u") is outside the allowed range (0.."_j)
            ->append(lastColIx)
            ->append(u")"_j)->toString());
    }
    _tableArray_ = tableArray_;
    _size = npc(_tableArray_)->getHeight();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::LookupUtils_ColumnVector::getItem(int32_t index)
{
    if(index > _size) {
        throw new ::java::lang::ArrayIndexOutOfBoundsException(::java::lang::StringBuilder().append(u"Specified index ("_j)->append(index)
            ->append(u") is outside the allowed range (0.."_j)
            ->append((_size - int32_t(1)))
            ->append(u")"_j)->toString());
    }
    return npc(_tableArray_)->getValue(index, _columnIndex);
}

int32_t poi::ss::formula::functions::LookupUtils_ColumnVector::getSize()
{
    return _size;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::LookupUtils_ColumnVector::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.LookupUtils.ColumnVector", 60);
    return c;
}

java::lang::Class* poi::ss::formula::functions::LookupUtils_ColumnVector::getClass0()
{
    return class_();
}

