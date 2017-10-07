// Generated from /POI/java/org/apache/poi/ss/formula/functions/FinanceLib.java
#include <org/apache/poi/ss/formula/functions/FinanceLib.hpp>

#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::functions::FinanceLib::FinanceLib(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::FinanceLib::FinanceLib() 
    : FinanceLib(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::ss::formula::functions::FinanceLib::ctor()
{
    super::ctor();
}

double org::apache::poi::ss::formula::functions::FinanceLib::fv(double r, double n, double y, double p, bool t)
{
    clinit();
    double retval = int32_t(0);
    if(r == 0) {
        retval = -int32_t(1) * (p + (n * y));
    } else {
        auto r1 = r + int32_t(1);
        retval = ((int32_t(1) - ::java::lang::Math::pow(r1, n)) * (t ? r1 : static_cast< double >(int32_t(1))) * y) / r - p * ::java::lang::Math::pow(r1, n);
    }
    return retval;
}

double org::apache::poi::ss::formula::functions::FinanceLib::pv(double r, double n, double y, double f, bool t)
{
    clinit();
    double retval = int32_t(0);
    if(r == 0) {
        retval = -int32_t(1) * ((n * y) + f);
    } else {
        auto r1 = r + int32_t(1);
        retval = (((int32_t(1) - ::java::lang::Math::pow(r1, n)) / r) * (t ? r1 : static_cast< double >(int32_t(1))) * y - f) / ::java::lang::Math::pow(r1, n);
    }
    return retval;
}

double org::apache::poi::ss::formula::functions::FinanceLib::npv(double r, ::doubleArray* cfs)
{
    clinit();
    double npv = int32_t(0);
    auto r1 = r + int32_t(1);
    auto trate = r1;
    for (int32_t i = int32_t(0), iSize = npc(cfs)->length; i < iSize; i++) {
        npv += (*cfs)[i] / trate;
        trate *= r1;
    }
    return npv;
}

double org::apache::poi::ss::formula::functions::FinanceLib::pmt(double r, double n, double p, double f, bool t)
{
    clinit();
    double retval = int32_t(0);
    if(r == 0) {
        retval = -int32_t(1) * (f + p) / n;
    } else {
        auto r1 = r + int32_t(1);
        retval = (f + p * ::java::lang::Math::pow(r1, n)) * r / ((t ? r1 : static_cast< double >(int32_t(1))) * (int32_t(1) - ::java::lang::Math::pow(r1, n)));
    }
    return retval;
}

double org::apache::poi::ss::formula::functions::FinanceLib::nper(double r, double y, double p, double f, bool t)
{
    clinit();
    double retval = int32_t(0);
    if(r == 0) {
        retval = -int32_t(1) * (f + p) / y;
    } else {
        auto r1 = r + int32_t(1);
        auto ryr = (t ? r1 : static_cast< double >(int32_t(1))) * y / r;
        auto a1 = ((ryr - f) < 0) ? ::java::lang::Math::log(f - ryr) : ::java::lang::Math::log(ryr - f);
        auto a2 = ((ryr - f) < 0) ? ::java::lang::Math::log(-p - ryr) : ::java::lang::Math::log(p + ryr);
        auto a3 = ::java::lang::Math::log(r1);
        retval = (a1 - a2) / a3;
    }
    return retval;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::FinanceLib::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.FinanceLib", 46);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::functions::FinanceLib::getClass0()
{
    return class_();
}

