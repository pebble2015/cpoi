// Generated from /POI/java/org/apache/poi/ss/formula/functions/LookupUtils.java
#include <org/apache/poi/ss/formula/functions/LookupUtils_RowVector.hpp>

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

org::apache::poi::ss::formula::functions::LookupUtils_RowVector::LookupUtils_RowVector(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::LookupUtils_RowVector::LookupUtils_RowVector(::org::apache::poi::ss::formula::TwoDEval* tableArray_, int32_t rowIndex) 
    : LookupUtils_RowVector(*static_cast< ::default_init_tag* >(0))
{
    ctor(tableArray_,rowIndex);
}

void org::apache::poi::ss::formula::functions::LookupUtils_RowVector::ctor(::org::apache::poi::ss::formula::TwoDEval* tableArray_, int32_t rowIndex)
{
    super::ctor();
    _rowIndex = rowIndex;
    auto lastRowIx = npc(tableArray_)->getHeight() - int32_t(1);
    if(rowIndex < 0 || rowIndex > lastRowIx) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Specified row index ("_j)->append(rowIndex)
            ->append(u") is outside the allowed range (0.."_j)
            ->append(lastRowIx)
            ->append(u")"_j)->toString());
    }
    _tableArray_ = tableArray_;
    _size = npc(tableArray_)->getWidth();
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::LookupUtils_RowVector::getItem(int32_t index)
{
    if(index > _size) {
        throw new ::java::lang::ArrayIndexOutOfBoundsException(::java::lang::StringBuilder().append(u"Specified index ("_j)->append(index)
            ->append(u") is outside the allowed range (0.."_j)
            ->append((_size - int32_t(1)))
            ->append(u")"_j)->toString());
    }
    return npc(_tableArray_)->getValue(_rowIndex, index);
}

int32_t org::apache::poi::ss::formula::functions::LookupUtils_RowVector::getSize()
{
    return _size;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::LookupUtils_RowVector::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.LookupUtils.RowVector", 57);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::functions::LookupUtils_RowVector::getClass0()
{
    return class_();
}

