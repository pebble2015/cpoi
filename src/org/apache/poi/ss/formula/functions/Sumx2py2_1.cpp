// Generated from /POI/java/org/apache/poi/ss/formula/functions/Sumx2py2.java
#include <org/apache/poi/ss/formula/functions/Sumx2py2_1.hpp>

poi::ss::formula::functions::Sumx2py2_1::Sumx2py2_1()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

double poi::ss::formula::functions::Sumx2py2_1::accumulate(double x, double y)
{
    return x * x + y * y;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Sumx2py2_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::ss::formula::functions::Sumx2py2_1::getClass0()
{
    return class_();
}

