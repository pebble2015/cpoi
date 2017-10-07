// Generated from /POI/java/org/apache/poi/ss/formula/functions/Sumx2py2.java
#include <org/apache/poi/ss/formula/functions/Sumx2py2.hpp>

#include <org/apache/poi/ss/formula/functions/Sumx2py2_1.hpp>
#include <org/apache/poi/ss/formula/functions/XYNumericFunction_Accumulator.hpp>

org::apache::poi::ss::formula::functions::Sumx2py2::Sumx2py2(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::Sumx2py2::Sumx2py2()
    : Sumx2py2(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::functions::XYNumericFunction_Accumulator*& org::apache::poi::ss::formula::functions::Sumx2py2::XSquaredPlusYSquaredAccumulator()
{
    clinit();
    return XSquaredPlusYSquaredAccumulator_;
}
org::apache::poi::ss::formula::functions::XYNumericFunction_Accumulator* org::apache::poi::ss::formula::functions::Sumx2py2::XSquaredPlusYSquaredAccumulator_;

org::apache::poi::ss::formula::functions::XYNumericFunction_Accumulator* org::apache::poi::ss::formula::functions::Sumx2py2::createAccumulator()
{
    return XSquaredPlusYSquaredAccumulator_;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::Sumx2py2::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Sumx2py2", 44);
    return c;
}

void org::apache::poi::ss::formula::functions::Sumx2py2::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        XSquaredPlusYSquaredAccumulator_ = new Sumx2py2_1();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::formula::functions::Sumx2py2::getClass0()
{
    return class_();
}

