// Generated from /POI/java/org/apache/poi/ss/formula/functions/XYNumericFunction.java
#include <org/apache/poi/ss/formula/functions/XYNumericFunction_RefValueArray.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::functions::XYNumericFunction_RefValueArray::XYNumericFunction_RefValueArray(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::XYNumericFunction_RefValueArray::XYNumericFunction_RefValueArray(::org::apache::poi::ss::formula::eval::RefEval* ref) 
    : XYNumericFunction_RefValueArray(*static_cast< ::default_init_tag* >(0))
{
    ctor(ref);
}

void org::apache::poi::ss::formula::functions::XYNumericFunction_RefValueArray::ctor(::org::apache::poi::ss::formula::eval::RefEval* ref)
{
    super::ctor(npc(ref)->getNumberOfSheets());
    _ref = ref;
    _width = npc(ref)->getNumberOfSheets();
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::XYNumericFunction_RefValueArray::getItemInternal(int32_t index)
{
    auto sIx = (index % _width) + npc(_ref)->getFirstSheetIndex();
    return npc(_ref)->getInnerValueEval(sIx);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::XYNumericFunction_RefValueArray::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.XYNumericFunction.RefValueArray", 67);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::functions::XYNumericFunction_RefValueArray::getClass0()
{
    return class_();
}

