// Generated from /POI/java/org/apache/poi/ss/formula/functions/Sumxmy2.java
#include <org/apache/poi/ss/formula/functions/Sumxmy2.hpp>

#include <org/apache/poi/ss/formula/functions/Sumxmy2_1.hpp>
#include <org/apache/poi/ss/formula/functions/XYNumericFunction_Accumulator.hpp>

poi::ss::formula::functions::Sumxmy2::Sumxmy2(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Sumxmy2::Sumxmy2()
    : Sumxmy2(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::functions::XYNumericFunction_Accumulator*& poi::ss::formula::functions::Sumxmy2::XMinusYSquaredAccumulator()
{
    clinit();
    return XMinusYSquaredAccumulator_;
}
poi::ss::formula::functions::XYNumericFunction_Accumulator* poi::ss::formula::functions::Sumxmy2::XMinusYSquaredAccumulator_;

poi::ss::formula::functions::XYNumericFunction_Accumulator* poi::ss::formula::functions::Sumxmy2::createAccumulator()
{
    return XMinusYSquaredAccumulator_;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Sumxmy2::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Sumxmy2", 43);
    return c;
}

void poi::ss::formula::functions::Sumxmy2::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        XMinusYSquaredAccumulator_ = new Sumxmy2_1();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::functions::Sumxmy2::getClass0()
{
    return class_();
}

