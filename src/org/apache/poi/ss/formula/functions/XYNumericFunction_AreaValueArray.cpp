// Generated from /POI/java/org/apache/poi/ss/formula/functions/XYNumericFunction.java
#include <org/apache/poi/ss/formula/functions/XYNumericFunction_AreaValueArray.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/TwoDEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::functions::XYNumericFunction_AreaValueArray::XYNumericFunction_AreaValueArray(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::XYNumericFunction_AreaValueArray::XYNumericFunction_AreaValueArray(::poi::ss::formula::TwoDEval* ae) 
    : XYNumericFunction_AreaValueArray(*static_cast< ::default_init_tag* >(0))
{
    ctor(ae);
}

void poi::ss::formula::functions::XYNumericFunction_AreaValueArray::ctor(::poi::ss::formula::TwoDEval* ae)
{
    super::ctor(npc(ae)->getWidth() * npc(ae)->getHeight());
    _ae = ae;
    _width = npc(ae)->getWidth();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::XYNumericFunction_AreaValueArray::getItemInternal(int32_t index)
{
    auto rowIx = index / _width;
    auto colIx = index % _width;
    return npc(_ae)->getValue(rowIx, colIx);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::XYNumericFunction_AreaValueArray::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.XYNumericFunction.AreaValueArray", 68);
    return c;
}

java::lang::Class* poi::ss::formula::functions::XYNumericFunction_AreaValueArray::getClass0()
{
    return class_();
}

