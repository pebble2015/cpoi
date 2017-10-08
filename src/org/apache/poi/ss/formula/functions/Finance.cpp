// Generated from /POI/java/org/apache/poi/ss/formula/functions/Finance.java
#include <org/apache/poi/ss/formula/functions/Finance.hpp>

#include <java/lang/Math.hpp>

poi::ss::formula::functions::Finance::Finance(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Finance::Finance()
    : Finance(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

double poi::ss::formula::functions::Finance::pmt(double r, int32_t nper, double pv, double fv, int32_t type)
{
    clinit();
    auto pmt = -r * (pv * ::java::lang::Math::pow(int32_t(1) + r, nper) + fv) / ((int32_t(1) + r * type) * (::java::lang::Math::pow(int32_t(1) + r, nper) - int32_t(1)));
    return pmt;
}

double poi::ss::formula::functions::Finance::pmt(double r, int32_t nper, double pv, double fv)
{
    clinit();
    return pmt(r, nper, pv, fv, 0);
}

double poi::ss::formula::functions::Finance::pmt(double r, int32_t nper, double pv)
{
    clinit();
    return pmt(r, nper, pv, 0);
}

double poi::ss::formula::functions::Finance::ipmt(double r, int32_t per, int32_t nper, double pv, double fv, int32_t type)
{
    clinit();
    auto ipmt = Finance::fv(r, per - int32_t(1), pmt(r, nper, pv, fv, type), pv, type) * r;
    if(type == 1)
        ipmt /= (int32_t(1) + r);

    return ipmt;
}

double poi::ss::formula::functions::Finance::ipmt(double r, int32_t per, int32_t nper, double pv, double fv)
{
    clinit();
    return ipmt(r, per, nper, pv, fv, 0);
}

double poi::ss::formula::functions::Finance::ipmt(double r, int32_t per, int32_t nper, double pv)
{
    clinit();
    return ipmt(r, per, nper, pv, 0);
}

double poi::ss::formula::functions::Finance::ppmt(double r, int32_t per, int32_t nper, double pv, double fv, int32_t type)
{
    clinit();
    return pmt(r, nper, pv, fv, type) - ipmt(r, per, nper, pv, fv, type);
}

double poi::ss::formula::functions::Finance::ppmt(double r, int32_t per, int32_t nper, double pv, double fv)
{
    clinit();
    return pmt(r, nper, pv, fv) - ipmt(r, per, nper, pv, fv);
}

double poi::ss::formula::functions::Finance::ppmt(double r, int32_t per, int32_t nper, double pv)
{
    clinit();
    return pmt(r, nper, pv) - ipmt(r, per, nper, pv);
}

double poi::ss::formula::functions::Finance::fv(double r, int32_t nper, double pmt, double pv, int32_t type)
{
    clinit();
    auto fv = -(pv * ::java::lang::Math::pow(int32_t(1) + r, nper) + pmt * (int32_t(1) + r * type) * (::java::lang::Math::pow(int32_t(1) + r, nper) - int32_t(1)) / r);
    return fv;
}

double poi::ss::formula::functions::Finance::fv(double r, int32_t nper, double c, double pv)
{
    clinit();
    return fv(r, nper, c, pv, 0);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Finance::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Finance", 43);
    return c;
}

java::lang::Class* poi::ss::formula::functions::Finance::getClass0()
{
    return class_();
}

