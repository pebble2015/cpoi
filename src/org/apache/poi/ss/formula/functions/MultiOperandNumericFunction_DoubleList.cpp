// Generated from /POI/java/org/apache/poi/ss/formula/functions/MultiOperandNumericFunction.java
#include <org/apache/poi/ss/formula/functions/MultiOperandNumericFunction_DoubleList.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/ss/formula/functions/MultiOperandNumericFunction.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::functions::MultiOperandNumericFunction_DoubleList::MultiOperandNumericFunction_DoubleList(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::MultiOperandNumericFunction_DoubleList::MultiOperandNumericFunction_DoubleList() 
    : MultiOperandNumericFunction_DoubleList(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::ss::formula::functions::MultiOperandNumericFunction_DoubleList::ctor()
{
    super::ctor();
    _array = new ::doubleArray(int32_t(8));
    _count = 0;
}

doubleArray* org::apache::poi::ss::formula::functions::MultiOperandNumericFunction_DoubleList::toArray_()
{
    if(_count < 1) {
        return MultiOperandNumericFunction::EMPTY_DOUBLE_ARRAY();
    }
    auto result = new ::doubleArray(_count);
    ::java::lang::System::arraycopy(_array, 0, result, 0, _count);
    return result;
}

void org::apache::poi::ss::formula::functions::MultiOperandNumericFunction_DoubleList::ensureCapacity(int32_t reqSize)
{
    if(reqSize > npc(_array)->length) {
        auto newSize = reqSize * int32_t(3) / int32_t(2);
        auto newArr = new ::doubleArray(newSize);
        ::java::lang::System::arraycopy(_array, 0, newArr, 0, _count);
        _array = newArr;
    }
}

void org::apache::poi::ss::formula::functions::MultiOperandNumericFunction_DoubleList::add(double value)
{
    ensureCapacity(_count + int32_t(1));
    (*_array)[_count] = value;
    _count++;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::MultiOperandNumericFunction_DoubleList::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.MultiOperandNumericFunction.DoubleList", 74);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::functions::MultiOperandNumericFunction_DoubleList::getClass0()
{
    return class_();
}

