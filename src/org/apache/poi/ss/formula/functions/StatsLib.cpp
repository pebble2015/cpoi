// Generated from /POI/java/org/apache/poi/ss/formula/functions/StatsLib.java
#include <org/apache/poi/ss/formula/functions/StatsLib.hpp>

#include <java/lang/Double.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/util/Arrays.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::functions::StatsLib::StatsLib(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::StatsLib::StatsLib() 
    : StatsLib(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::ss::formula::functions::StatsLib::ctor()
{
    super::ctor();
}

double org::apache::poi::ss::formula::functions::StatsLib::avedev(::doubleArray* v)
{
    clinit();
    double r = int32_t(0);
    double m = int32_t(0);
    double s = int32_t(0);
    for (int32_t i = int32_t(0), iSize = npc(v)->length; i < iSize; i++) {
        s += (*v)[i];
    }
    m = s / npc(v)->length;
    s = 0;
    for (int32_t i = int32_t(0), iSize = npc(v)->length; i < iSize; i++) {
        s += ::java::lang::Math::abs((*v)[i] - m);
    }
    r = s / npc(v)->length;
    return r;
}

double org::apache::poi::ss::formula::functions::StatsLib::stdev(::doubleArray* v)
{
    clinit();
    auto r = ::java::lang::Double::NaN;
    if(v != nullptr && npc(v)->length > 1) {
        r = ::java::lang::Math::sqrt(devsq(v) / (npc(v)->length - int32_t(1)));
    }
    return r;
}

double org::apache::poi::ss::formula::functions::StatsLib::var(::doubleArray* v)
{
    clinit();
    auto r = ::java::lang::Double::NaN;
    if(v != nullptr && npc(v)->length > 1) {
        r = devsq(v) / (npc(v)->length - int32_t(1));
    }
    return r;
}

double org::apache::poi::ss::formula::functions::StatsLib::varp(::doubleArray* v)
{
    clinit();
    auto r = ::java::lang::Double::NaN;
    if(v != nullptr && npc(v)->length > 1) {
        r = devsq(v) / npc(v)->length;
    }
    return r;
}

double org::apache::poi::ss::formula::functions::StatsLib::median(::doubleArray* v)
{
    clinit();
    auto r = ::java::lang::Double::NaN;
    if(v != nullptr && npc(v)->length >= 1) {
        auto n = npc(v)->length;
        ::java::util::Arrays::sort(v);
        r = (n % int32_t(2) == 0) ? ((*v)[n / int32_t(2)] + (*v)[n / int32_t(2) - int32_t(1)]) / int32_t(2) : (*v)[n / int32_t(2)];
    }
    return r;
}

double org::apache::poi::ss::formula::functions::StatsLib::devsq(::doubleArray* v)
{
    clinit();
    auto r = ::java::lang::Double::NaN;
    if(v != nullptr && npc(v)->length >= 1) {
        double m = int32_t(0);
        double s = int32_t(0);
        auto n = npc(v)->length;
        for (auto i = int32_t(0); i < n; i++) {
            s += (*v)[i];
        }
        m = s / n;
        s = 0;
        for (auto i = int32_t(0); i < n; i++) {
            s += ((*v)[i] - m) * ((*v)[i] - m);
        }
        r = (n == 1) ? static_cast< double >(int32_t(0)) : s;
    }
    return r;
}

double org::apache::poi::ss::formula::functions::StatsLib::kthLargest(::doubleArray* v, int32_t k)
{
    clinit();
    auto r = ::java::lang::Double::NaN;
    auto index = k - int32_t(1);
    if(v != nullptr && npc(v)->length > index && index >= 0) {
        ::java::util::Arrays::sort(v);
        r = (*v)[npc(v)->length - index - int32_t(1)];
    }
    return r;
}

double org::apache::poi::ss::formula::functions::StatsLib::kthSmallest(::doubleArray* v, int32_t k)
{
    clinit();
    auto r = ::java::lang::Double::NaN;
    auto index = k - int32_t(1);
    if(v != nullptr && npc(v)->length > index && index >= 0) {
        ::java::util::Arrays::sort(v);
        r = (*v)[index];
    }
    return r;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::StatsLib::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.StatsLib", 44);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::functions::StatsLib::getClass0()
{
    return class_();
}

